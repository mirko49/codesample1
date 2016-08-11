<?php

/**
 * @file
 * Hooks provided by Medstat Context.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Set a context property.
 *
 * @param mixed $value
 *   The property value to set on the context object. If this is the first hook
 *   implementation invoked, $value will be the default set in the
 *   MedstatContext class. Each hook implementation inherits the value after it
 *   has been potentially altered by previous implementations. The last
 *   implementation has the final say as to the value of the context property.
 *
 * @see medstat_context_context()
 * @see MedstatContext
 */
function hook_medstat_context_set_PROPERTY(&$value) {
  // Don't clobber the value if it's already set.
  if (!isset($value)) {
    $value = 'Example value.';
  }
}

/**
 * @} End of "addtogroup hooks".
 */
