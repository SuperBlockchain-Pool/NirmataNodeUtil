// Copyright (c) 2023 Nirmata Network
// Copyright (c) 2014-2018 Zano Project
// Copyright (c) 2014-2018 The Louisdor Project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "genesis_acc.h"


namespace currency
{
#ifndef TESTNET
  const std::string ggenesis_tx_pub_key_str = "6e5bf1ea87f87b7d1498a5ede224e6773c0b88c4d10c8c0cef2e99d7d964888b";
  const crypto::public_key ggenesis_tx_pub_key = epee::string_tools::parse_tpod_from_hex_string<crypto::public_key>(ggenesis_tx_pub_key_str);
  extern const genesis_tx_dictionary_entry ggenesis_dict[4];
  const genesis_tx_dictionary_entry ggenesis_dict[4] = {
  {1200242672130328998ULL,2},
  {4499838990966158402ULL,1},
  {6849267360322019512ULL,0},
  {15920125979368287136ULL,3}
};

#else 
  const std::string ggenesis_tx_pub_key_str    = "24a72ea034643da4794f627ac77c4a78910cfb90a46b97b9431ce5b53d77fc9b";
  const crypto::public_key ggenesis_tx_pub_key = epee::string_tools::parse_tpod_from_hex_string<crypto::public_key>(ggenesis_tx_pub_key_str);
  const genesis_tx_dictionary_entry ggenesis_dict[1] = {
	{9647129085849010922ULL,0}
  };
#endif
  


}



