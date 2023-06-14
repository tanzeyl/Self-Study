<html>
  <head>
    <title>Chessboard</title>
    <style>
      td {
        width: 20px;
        height: 20px;
        border: 2px solid red;
      }

      .black {
        background-color: black;
      }

      .white {
        background-color: white;
      }
    </style>
  </head>
  <body>
    <table>
      <?php
        $value = 0;
        for ($i=0; $i<8; $i++)
        {
          echo "<tr>";
          $value = $i;
          for ($j=0; $j<8; $j++)
          {
            if ($value%2 == 0) echo '<td class="black"></td>';
            else echo '<td class="white"></td>';
            $value++;
          }
          echo "</tr>";
        }
      ?>
    </table>
  </body>
</html>
