#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Define the color you want to use for non-black pixels
    RGBTRIPLE color;
    color.rgbtRed = 255;    // Set red component to maximum
    color.rgbtGreen = 0;    // Set green component to minimum
    color.rgbtBlue = 0;     // Set blue component to minimum

    // Iterate over each pixel in the image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Check if the pixel is black
            if (image[i][j].rgbtRed == 0 && image[i][j].rgbtGreen == 0 && image[i][j].rgbtBlue == 0)
            {
                // Change the color of the pixel to your chosen color
                image[i][j] = color;
            }
        }
    }
}
