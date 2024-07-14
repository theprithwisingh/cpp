var hello = [
    ["prithwi", 23, "engineer","male","b.tech"],
    ["vishal", 24, "science","male", "b.sc"],
    ["prince", 25, "entrprenuer","male","mba"],
    ["vikas", 26, "profeSSor","male", "iit"],
    ["DIPIKA", 27, "SDM","female", "ias"],
    ["sanju", 28, "UPP","male", "POLICE"],
    ["kundan", 29, "DM","male", "ias"]
  ];

   console.log("<table border = '2px'>");              //table frame
  for (x = 0; x < 7; x++) {
    console.log("<tr>");      //table row
    for (y = 0; y < 5; y++) {
      console.log("<td>" + hello[x][y] + "<td>");   //table data entry
    }

    console.log("</tr>");    // end table row
  }
  console.log("</table>"); 