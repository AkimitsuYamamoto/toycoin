// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2016 The Bitcoin Core developers
// Copyright (c) 2021-2022 toycoin
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_CONSENSUS_CONSENSUS_H
#define BITCOIN_CONSENSUS_CONSENSUS_H

#include <stdlib.h>
#include <stdint.h>

/** The maximum allowed size for a serialized block, in bytes (only for buffer size limits) */
static const unsigned int MAX_BLOCK_SERIALIZED_SIZE = 4000000;
/** The maximum allowed weight for a block, see BIP 141 (network rule) */

static const unsigned int MAX_BLOCK_WEIGHT = 16000000; /*
							  Previous "Engineers" decided to obfuscate the comprehension
                                                          of simple arithmetic. Instead of just increasing the block size
                                                          they made you "feel" it was greater by changing the definition.

                                                          Take this number. Divide it by 4. And you have the literal size
                                                          on disk. To be absolutely clear in science you should go further
                                                          in that a Megabyte is actually represented as 1,048,576 bytes.

                                                          This 4 Million Bytes is actually:
                                                          3.814697265625 Megabyte Theoretical Maximum Block Size On Disk.

                                                          Now hail the Morning Star. Your true hero. Killer of false Techno-Lords
                                                          and other profane lying coward internet trolls pretending to be
                                                          software engineers. I DO NOT REQUIRE YOUR CONSENT TO MAKE BASIC
                                                          OBSERVATIONS ABOUT REALITY AS A SCIENTIST. SCIENCE HAS NOTHING TO
							  DO WITH CONSENSUS. SCIENCE IS ABOUT TRUTH. IF YOU ARE A LIAR YOU ARE
							  WASTING ALL OF OUR TIME ON THIS PLANET. PLEASE LOG OFF.
							*/
/** The maximum allowed number of signature check operations in a block (network rule) */
static const int64_t MAX_BLOCK_SIGOPS_COST = 80000;
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int COINBASE_MATURITY = 100;

static const int WITNESS_SCALE_FACTOR = 4;

static const size_t MIN_TRANSACTION_WEIGHT = WITNESS_SCALE_FACTOR * 60; // 60 is the lower bound for the size of a valid serialized CTransaction
static const size_t MIN_SERIALIZABLE_TRANSACTION_WEIGHT = WITNESS_SCALE_FACTOR * 10; // 10 is the lower bound for the size of a serialized CTransaction

/** Flags for nSequence and nLockTime locks */
enum {
    /* Interpret sequence numbers as relative lock-time constraints. */
    LOCKTIME_VERIFY_SEQUENCE = (1 << 0),

    /* Use GetMedianTimePast() instead of nTime for end point timestamp. */
    LOCKTIME_MEDIAN_TIME_PAST = (1 << 1),
};

#endif // BITCOIN_CONSENSUS_CONSENSUS_H
