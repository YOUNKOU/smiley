void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Define the color you want to change the black pixels to
    RGBTRIPLE newColor;
    newColor.rgbtRed = 255;    // Set the red value
    newColor.rgbtGreen = 0;    // Set the green value
    newColor.rgbtBlue = 0;     // Set the blue value

    // Iterate over each pixel in the image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Check if the pixel is black
            if (image[i][j].rgbtRed == 0 && image[i][j].rgbtGreen == 0 && image[i][j].rgbtBlue == 0)
            {
                // Change the color of the pixel to the new color
                image[i][j] = newColor;
            }
        }
    }
}
