<?php
/**
 * @file
 * medstat_quizz.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function medstat_quizz_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function medstat_quizz_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_quiz_answer_type().
 */
function medstat_quizz_default_quiz_answer_type() {
  $items = array();
  $items['default_multichoice'] = entity_import('quiz_answer_type', '{
    "type" : "default_multichoice",
    "label" : "Multiple choice question",
    "handler" : "multichoice",
    "description" : "This provides multiple choice questions for use by the Quiz module.",
    "help" : null,
    "weight" : "0",
    "disabled" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['default_quiz_directions'] = entity_import('quiz_answer_type', '{
    "type" : "default_quiz_directions",
    "label" : "Quiz directions",
    "handler" : "quiz_directions",
    "description" : "Quiz directions allow you to drop in directions anywhere in a quiz. You can also use them to insert a confirmation step at the end of the quiz.",
    "help" : null,
    "weight" : "0",
    "disabled" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['default_quiz_page'] = entity_import('quiz_answer_type', '{
    "type" : "default_quiz_page",
    "label" : "Quiz page",
    "handler" : "quiz_page",
    "description" : "Quiz pages allow you display questions across multiple pages.",
    "help" : null,
    "weight" : "0",
    "disabled" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['default_truefalse'] = entity_import('quiz_answer_type', '{
    "type" : "default_truefalse",
    "label" : "True\\/false question",
    "handler" : "truefalse",
    "description" : "Quiz questions that allow a user to select \\u0022true\\u0022 or \\u0022false\\u0022 as his response to a statement.",
    "help" : null,
    "weight" : "0",
    "disabled" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_quiz_question_type().
 */
function medstat_quizz_default_quiz_question_type() {
  $items = array();
  $items['default_multichoice'] = entity_import('quiz_question_type', '{
    "type" : "default_multichoice",
    "label" : "Multiple choice question",
    "handler" : "multichoice",
    "description" : "This provides multiple choice questions for use by the Quiz module.",
    "help" : null,
    "weight" : "0",
    "disabled" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['default_quiz_directions'] = entity_import('quiz_question_type', '{
    "type" : "default_quiz_directions",
    "label" : "Quiz directions",
    "handler" : "quiz_directions",
    "description" : "Quiz directions allow you to drop in directions anywhere in a quiz. You can also use them to insert a confirmation step at the end of the quiz.",
    "help" : null,
    "weight" : "0",
    "disabled" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['default_quiz_page'] = entity_import('quiz_question_type', '{
    "type" : "default_quiz_page",
    "label" : "Quiz page",
    "handler" : "quiz_page",
    "description" : "Quiz pages allow you display questions across multiple pages.",
    "help" : null,
    "weight" : "0",
    "disabled" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['default_truefalse'] = entity_import('quiz_question_type', '{
    "type" : "default_truefalse",
    "label" : "True\\/false question",
    "handler" : "truefalse",
    "description" : "Quiz questions that allow a user to select \\u0022true\\u0022 or \\u0022false\\u0022 as his response to a statement.",
    "help" : null,
    "weight" : "0",
    "disabled" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_quiz_result_type().
 */
function medstat_quizz_default_quiz_result_type() {
  $items = array();
  $items['md_iq'] = entity_import('quiz_result_type', '{
    "type" : "md_iq",
    "label" : "MD-IQ",
    "description" : "MD: IQ Quiz type",
    "help" : "",
    "weight" : "0",
    "data" : { "configuration" : {
        "quiz_durod" : 0,
        "quiz_auto_revisioning" : 1,
        "quiz_use_passfail" : 0,
        "quiz_has_timer" : 0,
        "build_on_last" : "",
        "quiz_remove_partial_quiz_record" : "604800",
        "quiz_default_close" : "30",
        "quiz_max_result_options" : "5",
        "quiz_pager_start" : "100",
        "quiz_pager_siblings" : "5",
        "quiz_views_question_bank" : "quizz_question_bank",
        "quiz_views_results" : "quizz_results",
        "quiz_views_user_results" : "quizz_user_results"
      }
    },
    "rdf_mapping" : []
  }');
  $items['questionnaire'] = entity_import('quiz_result_type', '{
    "type" : "questionnaire",
    "label" : "Questionnaire",
    "description" : "Article quizzes",
    "help" : "",
    "weight" : "0",
    "data" : { "configuration" : {
        "quiz_durod" : 0,
        "quiz_auto_revisioning" : 1,
        "quiz_use_passfail" : 1,
        "quiz_has_timer" : 0,
        "build_on_last" : "",
        "quiz_remove_partial_quiz_record" : "604800",
        "quiz_default_close" : "30",
        "quiz_max_result_options" : "5",
        "quiz_pager_start" : "100",
        "quiz_pager_siblings" : "5",
        "quiz_views_question_bank" : "quizz_question_bank",
        "quiz_views_results" : "quizz_results",
        "quiz_views_user_results" : "quizz_user_results"
      }
    },
    "rdf_mapping" : []
  }');
  $items['quiz'] = entity_import('quiz_result_type', '{
    "type" : "quiz",
    "label" : "Legacy Quiz",
    "description" : "Legacy required quiz type, please ignore.",
    "help" : "",
    "weight" : "0",
    "data" : { "configuration" : {
        "quiz_durod" : 0,
        "quiz_auto_revisioning" : 1,
        "quiz_use_passfail" : 1,
        "quiz_has_timer" : 0,
        "build_on_last" : "",
        "quiz_remove_partial_quiz_record" : "604800",
        "quiz_default_close" : "30",
        "quiz_max_result_options" : "5",
        "quiz_pager_start" : "100",
        "quiz_pager_siblings" : "5",
        "quiz_views_question_bank" : "quizz_question_bank",
        "quiz_views_results" : "quizz_results",
        "quiz_views_user_results" : "quizz_user_results"
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_quiz_type().
 */
function medstat_quizz_default_quiz_type() {
  $items = array();
  $items['md_iq'] = entity_import('quiz_type', '{
    "type" : "md_iq",
    "label" : "MD-IQ",
    "description" : "MD: IQ Quiz type",
    "help" : "",
    "weight" : "0",
    "data" : { "configuration" : {
        "quiz_durod" : 0,
        "quiz_auto_revisioning" : 1,
        "quiz_use_passfail" : 0,
        "quiz_has_timer" : 0,
        "build_on_last" : "",
        "quiz_remove_partial_quiz_record" : "604800",
        "quiz_default_close" : "30",
        "quiz_max_result_options" : "5",
        "quiz_pager_start" : "100",
        "quiz_pager_siblings" : "5",
        "quiz_views_question_bank" : "quizz_question_bank",
        "quiz_views_results" : "quizz_results",
        "quiz_views_user_results" : "quizz_user_results"
      }
    },
    "rdf_mapping" : []
  }');
  $items['questionnaire'] = entity_import('quiz_type', '{
    "type" : "questionnaire",
    "label" : "Questionnaire",
    "description" : "Article quizzes",
    "help" : "",
    "weight" : "0",
    "data" : { "configuration" : {
        "quiz_durod" : 0,
        "quiz_auto_revisioning" : 1,
        "quiz_use_passfail" : 1,
        "quiz_has_timer" : 0,
        "build_on_last" : "",
        "quiz_remove_partial_quiz_record" : "604800",
        "quiz_default_close" : "30",
        "quiz_max_result_options" : "5",
        "quiz_pager_start" : "100",
        "quiz_pager_siblings" : "5",
        "quiz_views_question_bank" : "quizz_question_bank",
        "quiz_views_results" : "quizz_results",
        "quiz_views_user_results" : "quizz_user_results"
      }
    },
    "rdf_mapping" : []
  }');
  $items['quiz'] = entity_import('quiz_type', '{
    "type" : "quiz",
    "label" : "Legacy Quiz",
    "description" : "Legacy required quiz type, please ignore.",
    "help" : "",
    "weight" : "0",
    "data" : { "configuration" : {
        "quiz_durod" : 0,
        "quiz_auto_revisioning" : 1,
        "quiz_use_passfail" : 1,
        "quiz_has_timer" : 0,
        "build_on_last" : "",
        "quiz_remove_partial_quiz_record" : "604800",
        "quiz_default_close" : "30",
        "quiz_max_result_options" : "5",
        "quiz_pager_start" : "100",
        "quiz_pager_siblings" : "5",
        "quiz_views_question_bank" : "quizz_question_bank",
        "quiz_views_results" : "quizz_results",
        "quiz_views_user_results" : "quizz_user_results"
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}
