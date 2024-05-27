<span style="color:green"><h1>"Program for computing Zeller's Congruence in C", my first gitHub upload.</h1></span>

This is an interesting algorithm that uses module theory and congruences to compute on what day of the week will a certain date (DD,MM,YYYY) coincide.


<span style="color:red"><h2>Zeller's Congruence</h2></span>

<p>h = (q + ⌊(13(m + 1)) / 5⌋ + K + ⌊K / 4⌋ + ⌊J / 4⌋ - 2J) mod 7</p>

Where:

- <b>h</b> is the day of the week (0 = Saturday, 1 = Sunday, ..., 6 = Friday)
- <b>q</b> is the day of the month
- <b>m</b> is the month (January and February are counted as months 13 and 14 of the previous year) This I will explain later on
- <b>K</b> is the year of the century (<code>year % 100</code>)
- <b>J</b> is the zero-based century ( <code>(year / 100)</code>)

**Why are January and February counted as months 13 and 14 of the previous year?**
- For an easier year transition as the transition between years (from December to January) would require additional logic to handle the change in the year part of the formula.
