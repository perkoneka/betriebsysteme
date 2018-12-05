#include "catch.hpp"


#include "helper.hpp"
#include "myfs.h"
#include "dMap.h"
#include "blockdevice.h"

TEST_CASE( "Set/unset/find Blocks", "[dMap]" ) {

	dMap dmap = new dMap();


	 SECTION("get 2 Blocks") {
			 dmap.setUsed(1);

			 int * result  = new int [3];
			 dmap.getFreeBlocks(4,&result);
			 REQUIRE( result[0]== 0 );
			 REQUIRE( result[1]== 2 );
			 REQUIRE( result[2]== 3 );

			 delete[] result;
		 }




	 SECTION("get 3 Blocks with 1 block al") {
		 dmap.setUsed(1);

		 int * result  = new int [3];
		 dmap.getFreeBlocks(4,&result);
		 REQUIRE( result[0]== 0 );
		 REQUIRE( result[1]== 2 );
		 REQUIRE( result[2]== 3 );

		 delete[] result;
	 }






}












