package com.example.secrettestapp;

import org.junit.Test;
import static org.junit.Assert.*;

public class ExampleUnitTest {
    @Test
    public void apiKeyIsInjected() {
        String apiKey = BuildConfig.API_KEY;
        assertNotEquals("default-key", apiKey, "API key should be injected from environment");
    }
}
