SELECT ROUND(S.LAT_N, 4)
FROM STATION AS S
WHERE(SELECT COUNT(Lat_N) 
          FROM STATION 
          WHERE Lat_N < S.LAT_N ) = (SELECT COUNT(Lat_N)
                                         FROM STATION
                                         WHERE Lat_N > S.LAT_N
                                    );