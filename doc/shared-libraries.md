Shared Libraries
================

## sagbitconsensus

The purpose of this library is to make the verification functionality that is critical to Sagbit's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `sagbitconsensus.h` located in  `src/script/sagbitconsensus.h`.

#### Version

`sagbitconsensus_version` returns an `unsigned int` with the the API version *(currently at an experimental `0`)*.

#### Script Validation

`sagbitconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `sagbitconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `sagbitconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `sagbitconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/sagbit/bips/blob/master/bip-0016.mediawiki)) subscripts
- `sagbitconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/sagbit/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `sagbitconsensus_ERR_OK` - No errors with input parameters *(see the return value of `sagbitconsensus_verify_script` for the verification status)*
- `sagbitconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `sagbitconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `sagbitconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NSagbit](https://github.com/NicolasDorier/NSagbit/blob/master/NSagbit/Script.cs#L814) (.NET Bindings)
- [node-libsagbitconsensus](https://github.com/bitpay/node-libsagbitconsensus) (Node.js Bindings)
- [java-libsagbitconsensus](https://github.com/dexX7/java-libsagbitconsensus) (Java Bindings)
- [sagbitconsensus-php](https://github.com/Bit-Wasp/sagbitconsensus-php) (PHP Bindings)
