<?php
/**
 * @file
 * medstat_quizz.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function medstat_quizz_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access quiz'.
  $permissions['access quiz'] = array(
    'name' => 'access quiz',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'administer quiz configuration'.
  $permissions['administer quiz configuration'] = array(
    'name' => 'administer quiz configuration',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'administer quiz default settings'.
  $permissions['administer quiz default settings'] = array(
    'name' => 'administer quiz default settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'medstat_quizz',
  );

  // Exported permission: 'administer quiz question types'.
  $permissions['administer quiz question types'] = array(
    'name' => 'administer quiz question types',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz_question',
  );

  // Exported permission: 'administer quiz questions'.
  $permissions['administer quiz questions'] = array(
    'name' => 'administer quiz questions',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz_question',
  );

  // Exported permission: 'create default_multichoice question'.
  $permissions['create default_multichoice question'] = array(
    'name' => 'create default_multichoice question',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz_question',
  );

  // Exported permission: 'create default_truefalse question'.
  $permissions['create default_truefalse question'] = array(
    'name' => 'create default_truefalse question',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz_question',
  );

  // Exported permission: 'create quiz content'.
  $permissions['create quiz content'] = array(
    'name' => 'create quiz content',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'delete any default_multichoice question'.
  $permissions['delete any default_multichoice question'] = array(
    'name' => 'delete any default_multichoice question',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz_question',
  );

  // Exported permission: 'delete any default_truefalse question'.
  $permissions['delete any default_truefalse question'] = array(
    'name' => 'delete any default_truefalse question',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz_question',
  );

  // Exported permission: 'delete any quiz results'.
  $permissions['delete any quiz results'] = array(
    'name' => 'delete any quiz results',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'delete own default_multichoice question'.
  $permissions['delete own default_multichoice question'] = array(
    'name' => 'delete own default_multichoice question',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz_question',
  );

  // Exported permission: 'delete own default_truefalse question'.
  $permissions['delete own default_truefalse question'] = array(
    'name' => 'delete own default_truefalse question',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz_question',
  );

  // Exported permission: 'delete results for own quiz'.
  $permissions['delete results for own quiz'] = array(
    'name' => 'delete results for own quiz',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'edit any default_multichoice question'.
  $permissions['edit any default_multichoice question'] = array(
    'name' => 'edit any default_multichoice question',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz_question',
  );

  // Exported permission: 'edit any default_truefalse question'.
  $permissions['edit any default_truefalse question'] = array(
    'name' => 'edit any default_truefalse question',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz_question',
  );

  // Exported permission: 'edit any quiz content'.
  $permissions['edit any quiz content'] = array(
    'name' => 'edit any quiz content',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'edit own default_multichoice question'.
  $permissions['edit own default_multichoice question'] = array(
    'name' => 'edit own default_multichoice question',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz_question',
  );

  // Exported permission: 'edit own default_truefalse question'.
  $permissions['edit own default_truefalse question'] = array(
    'name' => 'edit own default_truefalse question',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz_question',
  );

  // Exported permission: 'edit question titles'.
  $permissions['edit question titles'] = array(
    'name' => 'edit question titles',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'manual quiz revisioning'.
  $permissions['manual quiz revisioning'] = array(
    'name' => 'manual quiz revisioning',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'score any quiz'.
  $permissions['score any quiz'] = array(
    'name' => 'score any quiz',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'score own quiz'.
  $permissions['score own quiz'] = array(
    'name' => 'score own quiz',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'score taken quiz answer'.
  $permissions['score taken quiz answer'] = array(
    'name' => 'score taken quiz answer',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'show format selection for quiz_entity'.
  $permissions['show format selection for quiz_entity'] = array(
    'name' => 'show format selection for quiz_entity',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for quiz_question_entity'.
  $permissions['show format selection for quiz_question_entity'] = array(
    'name' => 'show format selection for quiz_question_entity',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for quiz_result'.
  $permissions['show format selection for quiz_result'] = array(
    'name' => 'show format selection for quiz_result',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for quiz_result_answer'.
  $permissions['show format selection for quiz_result_answer'] = array(
    'name' => 'show format selection for quiz_result_answer',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'view any questions'.
  $permissions['view any questions'] = array(
    'name' => 'view any questions',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'quizz_question',
  );

  // Exported permission: 'view any quiz question correct response'.
  $permissions['view any quiz question correct response'] = array(
    'name' => 'view any quiz question correct response',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'view any quiz results'.
  $permissions['view any quiz results'] = array(
    'name' => 'view any quiz results',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'view own quiz results'.
  $permissions['view own quiz results'] = array(
    'name' => 'view own quiz results',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'view quiz question outside of a quiz'.
  $permissions['view quiz question outside of a quiz'] = array(
    'name' => 'view quiz question outside of a quiz',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'quizz',
  );

  // Exported permission: 'view results for own quiz'.
  $permissions['view results for own quiz'] = array(
    'name' => 'view results for own quiz',
    'roles' => array(
      'MD-IQ editor' => 'MD-IQ editor',
      'administrator' => 'administrator',
    ),
    'module' => 'quizz',
  );

  return $permissions;
}
