// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SAGBIT_QT_SAGBITADDRESSVALIDATOR_H
#define SAGBIT_QT_SAGBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class SagbitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SagbitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Sagbit address widget validator, checks for a valid sagbit address.
 */
class SagbitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SagbitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // SAGBIT_QT_SAGBITADDRESSVALIDATOR_H
