#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *FieldVector2D::class$ = NULL;
          jmethodID *FieldVector2D::mids$ = NULL;
          bool FieldVector2D::live$ = false;

          jclass FieldVector2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/FieldVector2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_72479ee08453ef97] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_133d042863f38dc1] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_8fc19fb4c3aa3506] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_c1e25539da4155bf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_fbcda3e5524e5f6f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_eee0c82b0b9e16e9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_d0c8a91ec3365370] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_2990470a681a6fd7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_a4747dc5dc0590ce] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_7af5cf37751d129a] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_7902b72a1201d31a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_ea3c5af3ab3de50d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_4d719dcd77fca638] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_8ec100a083bf25bf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_d5117a1d5b837ceb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_add_516439063b85838d] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_7c97c078e4f5b294] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_1a764c7720bceac7] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_b941a06cef684e5a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_02cb7ac1cca2de5a] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_7a7342fcb0451653] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_angle_aa8d6081bcf1b465] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_730f1b42d89fdf28] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_ad3bc5282fcc27ea] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_crossProduct_aa8d6081bcf1b465] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_crossProduct_f7f56afb1ca3e540] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_99a534c1d1eea8b3] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_e55037f57b16b7ae] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_aa8d6081bcf1b465] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_730f1b42d89fdf28] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_ad3bc5282fcc27ea] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_99a534c1d1eea8b3] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_e55037f57b16b7ae] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_aa8d6081bcf1b465] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_ad3bc5282fcc27ea] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_730f1b42d89fdf28] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_99a534c1d1eea8b3] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_e55037f57b16b7ae] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_aa8d6081bcf1b465] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_730f1b42d89fdf28] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_ad3bc5282fcc27ea] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_99a534c1d1eea8b3] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_e55037f57b16b7ae] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_aa8d6081bcf1b465] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_730f1b42d89fdf28] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_ad3bc5282fcc27ea] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_99a534c1d1eea8b3] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_e55037f57b16b7ae] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getMinusI_99de8f9cf7d34cdc] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getMinusJ_99de8f9cf7d34cdc] = env->getStaticMethodID(cls, "getMinusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNaN_99de8f9cf7d34cdc] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNegativeInfinity_99de8f9cf7d34cdc] = env->getStaticMethodID(cls, "getNegativeInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNorm_eba8e72a22c984ac] = env->getMethodID(cls, "getNorm", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNorm1_eba8e72a22c984ac] = env->getMethodID(cls, "getNorm1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormInf_eba8e72a22c984ac] = env->getMethodID(cls, "getNormInf", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormSq_eba8e72a22c984ac] = env->getMethodID(cls, "getNormSq", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getPlusI_99de8f9cf7d34cdc] = env->getStaticMethodID(cls, "getPlusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getPlusJ_99de8f9cf7d34cdc] = env->getStaticMethodID(cls, "getPlusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getPositiveInfinity_99de8f9cf7d34cdc] = env->getStaticMethodID(cls, "getPositiveInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getX_eba8e72a22c984ac] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getY_eba8e72a22c984ac] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZero_99de8f9cf7d34cdc] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_a55106adcf9f2022] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_normalize_a55106adcf9f2022] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_orientation_3082ff2f8e3c4a8a] = env->getStaticMethodID(cls, "orientation", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_scalarMultiply_a91b9a6749fb5a00] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_scalarMultiply_8f5040fbd8415e13] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_516439063b85838d] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_7c97c078e4f5b294] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_1a764c7720bceac7] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_02cb7ac1cca2de5a] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_b941a06cef684e5a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_7a7342fcb0451653] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_toArray_226a0b2040b1d2e1] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_7b429db583278c20] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");
              mids$[mid_toVector2D_73f627838730c264] = env->getMethodID(cls, "toVector2D", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldVector2D::FieldVector2D(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_72479ee08453ef97, a0.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_133d042863f38dc1, a0, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fc19fb4c3aa3506, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c1e25539da4155bf, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fbcda3e5524e5f6f, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eee0c82b0b9e16e9, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0c8a91ec3365370, a0, a1.this$, a2, a3.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2990470a681a6fd7, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a4747dc5dc0590ce, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3, jdouble a4, const FieldVector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7af5cf37751d129a, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7902b72a1201d31a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ea3c5af3ab3de50d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3, jdouble a4, const FieldVector2D & a5, jdouble a6, const FieldVector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d719dcd77fca638, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector2D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldVector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ec100a083bf25bf, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5117a1d5b837ceb, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector2D FieldVector2D::add(const FieldVector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_516439063b85838d], a0.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_7c97c078e4f5b294], a0.this$));
          }

          FieldVector2D FieldVector2D::add(jdouble a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_1a764c7720bceac7], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_b941a06cef684e5a], a0.this$, a1.this$));
          }

          FieldVector2D FieldVector2D::add(jdouble a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_02cb7ac1cca2de5a], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_7a7342fcb0451653], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_aa8d6081bcf1b465], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_730f1b42d89fdf28], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_ad3bc5282fcc27ea], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::crossProduct(const FieldVector2D & a0, const FieldVector2D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_crossProduct_aa8d6081bcf1b465], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::crossProduct(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_crossProduct_f7f56afb1ca3e540], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_99a534c1d1eea8b3], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_e55037f57b16b7ae], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_aa8d6081bcf1b465], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_730f1b42d89fdf28], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_ad3bc5282fcc27ea], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_99a534c1d1eea8b3], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_e55037f57b16b7ae], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_aa8d6081bcf1b465], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_ad3bc5282fcc27ea], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_730f1b42d89fdf28], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_99a534c1d1eea8b3], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_e55037f57b16b7ae], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_aa8d6081bcf1b465], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_730f1b42d89fdf28], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_ad3bc5282fcc27ea], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_99a534c1d1eea8b3], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_e55037f57b16b7ae], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_aa8d6081bcf1b465], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_730f1b42d89fdf28], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_ad3bc5282fcc27ea], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::dotProduct(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_99a534c1d1eea8b3], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::dotProduct(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_e55037f57b16b7ae], a0.this$));
          }

          jboolean FieldVector2D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
          }

          FieldVector2D FieldVector2D::getMinusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_99de8f9cf7d34cdc], a0.this$));
          }

          FieldVector2D FieldVector2D::getMinusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getMinusJ_99de8f9cf7d34cdc], a0.this$));
          }

          FieldVector2D FieldVector2D::getNaN(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getNaN_99de8f9cf7d34cdc], a0.this$));
          }

          FieldVector2D FieldVector2D::getNegativeInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getNegativeInfinity_99de8f9cf7d34cdc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNorm() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNorm1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm1_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNormInf() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormInf_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNormSq() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormSq_eba8e72a22c984ac]));
          }

          FieldVector2D FieldVector2D::getPlusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPlusI_99de8f9cf7d34cdc], a0.this$));
          }

          FieldVector2D FieldVector2D::getPlusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPlusJ_99de8f9cf7d34cdc], a0.this$));
          }

          FieldVector2D FieldVector2D::getPositiveInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPositiveInfinity_99de8f9cf7d34cdc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getX() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getY() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getY_eba8e72a22c984ac]));
          }

          FieldVector2D FieldVector2D::getZero(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getZero_99de8f9cf7d34cdc], a0.this$));
          }

          jint FieldVector2D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
          }

          jboolean FieldVector2D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
          }

          jboolean FieldVector2D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
          }

          FieldVector2D FieldVector2D::negate() const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_negate_a55106adcf9f2022]));
          }

          FieldVector2D FieldVector2D::normalize() const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_normalize_a55106adcf9f2022]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::orientation(const FieldVector2D & a0, const FieldVector2D & a1, const FieldVector2D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_orientation_3082ff2f8e3c4a8a], a0.this$, a1.this$, a2.this$));
          }

          FieldVector2D FieldVector2D::scalarMultiply(jdouble a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_a91b9a6749fb5a00], a0));
          }

          FieldVector2D FieldVector2D::scalarMultiply(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_8f5040fbd8415e13], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(const FieldVector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_516439063b85838d], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_7c97c078e4f5b294], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(jdouble a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_1a764c7720bceac7], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(jdouble a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_02cb7ac1cca2de5a], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_b941a06cef684e5a], a0.this$, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_7a7342fcb0451653], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldVector2D::toArray() const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_226a0b2040b1d2e1]));
          }

          ::java::lang::String FieldVector2D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
          }

          ::java::lang::String FieldVector2D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_7b429db583278c20], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D FieldVector2D::toVector2D() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toVector2D_73f627838730c264]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          static PyObject *t_FieldVector2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_of_(t_FieldVector2D *self, PyObject *args);
          static int t_FieldVector2D_init_(t_FieldVector2D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldVector2D_add(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_crossProduct(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance1(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distanceInf(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distanceSq(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_dotProduct(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_equals(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_getMinusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getMinusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNaN(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNegativeInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNorm(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNorm1(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNormInf(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNormSq(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getPlusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getPlusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getPositiveInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getX(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getY(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getZero(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_hashCode(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_isInfinite(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_isNaN(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_negate(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_normalize(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_orientation(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_scalarMultiply(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_subtract(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_toArray(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_toString(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_toVector2D(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_get__infinite(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__naN(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__norm(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__norm1(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__normInf(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__normSq(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__x(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__y(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__parameters_(t_FieldVector2D *self, void *data);
          static PyGetSetDef t_FieldVector2D__fields_[] = {
            DECLARE_GET_FIELD(t_FieldVector2D, infinite),
            DECLARE_GET_FIELD(t_FieldVector2D, naN),
            DECLARE_GET_FIELD(t_FieldVector2D, norm),
            DECLARE_GET_FIELD(t_FieldVector2D, norm1),
            DECLARE_GET_FIELD(t_FieldVector2D, normInf),
            DECLARE_GET_FIELD(t_FieldVector2D, normSq),
            DECLARE_GET_FIELD(t_FieldVector2D, x),
            DECLARE_GET_FIELD(t_FieldVector2D, y),
            DECLARE_GET_FIELD(t_FieldVector2D, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldVector2D__methods_[] = {
            DECLARE_METHOD(t_FieldVector2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, add, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance1, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distanceInf, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distanceSq, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, dotProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, getMinusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getMinusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNaN, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNegativeInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getPlusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getPlusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getPositiveInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getX, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getY, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getZero, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, negate, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, normalize, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, orientation, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, scalarMultiply, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, toVector2D, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldVector2D)[] = {
            { Py_tp_methods, t_FieldVector2D__methods_ },
            { Py_tp_init, (void *) t_FieldVector2D_init_ },
            { Py_tp_getset, t_FieldVector2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldVector2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldVector2D, t_FieldVector2D, FieldVector2D);
          PyObject *t_FieldVector2D::wrap_Object(const FieldVector2D& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector2D::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector2D *self = (t_FieldVector2D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldVector2D::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector2D::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector2D *self = (t_FieldVector2D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldVector2D::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldVector2D), &PY_TYPE_DEF(FieldVector2D), module, "FieldVector2D", 0);
          }

          void t_FieldVector2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "class_", make_descriptor(FieldVector2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "wrapfn_", make_descriptor(t_FieldVector2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldVector2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldVector2D::initializeClass, 1)))
              return NULL;
            return t_FieldVector2D::wrap_Object(FieldVector2D(((t_FieldVector2D *) arg)->object.this$));
          }
          static PyObject *t_FieldVector2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldVector2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldVector2D_of_(t_FieldVector2D *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldVector2D_init_(t_FieldVector2D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_, &a4, &a5, &p5, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a5((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                FieldVector2D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_, &a4, &a5, &p5, t_FieldVector2D::parameters_, &a6, &a7, &p7, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                FieldVector2D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector2D::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a5((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a7((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldVector2D_add(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_angle(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_crossProduct(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance1(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance1_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceInf(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceSq(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_dotProduct(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_equals(t_FieldVector2D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldVector2D_getMinusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getMinusI(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getMinusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getMinusJ(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNaN(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getNaN(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNaN", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNegativeInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getNegativeInfinity(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNegativeInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNorm(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNorm1(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNormInf(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormInf());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNormSq(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormSq());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getPlusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPlusI(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getPlusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPlusJ(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getPositiveInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPositiveInfinity(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPositiveInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getX(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getX());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getY(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getY());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getZero(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getZero(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getZero", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_hashCode(t_FieldVector2D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldVector2D_isInfinite(t_FieldVector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector2D_isNaN(t_FieldVector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector2D_negate(t_FieldVector2D *self)
          {
            FieldVector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector2D_normalize(t_FieldVector2D *self)
          {
            FieldVector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.normalize());
            return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector2D_orientation(PyTypeObject *type, PyObject *args)
          {
            FieldVector2D a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldVector2D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, t_FieldVector2D::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::orientation(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "orientation", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_scalarMultiply(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_subtract(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_toArray(t_FieldVector2D *self)
          {
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          static PyObject *t_FieldVector2D_toString(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }
              break;
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldVector2D_toVector2D(t_FieldVector2D *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.toVector2D());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }
          static PyObject *t_FieldVector2D_get__parameters_(t_FieldVector2D *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldVector2D_get__infinite(t_FieldVector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector2D_get__naN(t_FieldVector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector2D_get__norm(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__norm1(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__normInf(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormInf());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__normSq(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormSq());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__x(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getX());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__y(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getY());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/SaastamoinenModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/SaastamoinenModel.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *SaastamoinenModel::class$ = NULL;
          jmethodID *SaastamoinenModel::mids$ = NULL;
          bool SaastamoinenModel::live$ = false;
          jdouble SaastamoinenModel::DEFAULT_LOW_ELEVATION_THRESHOLD = (jdouble) 0;
          ::java::lang::String *SaastamoinenModel::DELTA_R_FILE_NAME = NULL;

          jclass SaastamoinenModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/SaastamoinenModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_init$_67f6ec33b4d0bffd] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;)V");
              mids$[mid_init$_08597647738b99f8] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getLowElevationThreshold_dff5885c2c873297] = env->getMethodID(cls, "getLowElevationThreshold", "()D");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_7e2e0f949f78c931] = env->getStaticMethodID(cls, "getStandardModel", "()Lorg/orekit/models/earth/troposphere/SaastamoinenModel;");
              mids$[mid_pathDelay_ff7a895eb6f0af2e] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_fe3b5c46874ab115] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_setLowElevationThreshold_17db3a65980d3441] = env->getMethodID(cls, "setLowElevationThreshold", "(D)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_LOW_ELEVATION_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_LOW_ELEVATION_THRESHOLD");
              DELTA_R_FILE_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DELTA_R_FILE_NAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_67f6ec33b4d0bffd, a0, a1, a2, a3.this$)) {}

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3, const ::org::orekit::data::DataProvidersManager & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08597647738b99f8, a0, a1, a2, a3.this$, a4.this$)) {}

          jdouble SaastamoinenModel::getLowElevationThreshold() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowElevationThreshold_dff5885c2c873297]);
          }

          ::java::util::List SaastamoinenModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          SaastamoinenModel SaastamoinenModel::getStandardModel()
          {
            jclass cls = env->getClass(initializeClass);
            return SaastamoinenModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_7e2e0f949f78c931]));
          }

          ::org::hipparchus::CalculusFieldElement SaastamoinenModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_ff7a895eb6f0af2e], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble SaastamoinenModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_fe3b5c46874ab115], a0, a1.this$, a2.this$, a3.this$);
          }

          void SaastamoinenModel::setLowElevationThreshold(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLowElevationThreshold_17db3a65980d3441], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_SaastamoinenModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SaastamoinenModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SaastamoinenModel_init_(t_SaastamoinenModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SaastamoinenModel_getLowElevationThreshold(t_SaastamoinenModel *self);
          static PyObject *t_SaastamoinenModel_getParametersDrivers(t_SaastamoinenModel *self);
          static PyObject *t_SaastamoinenModel_getStandardModel(PyTypeObject *type);
          static PyObject *t_SaastamoinenModel_pathDelay(t_SaastamoinenModel *self, PyObject *args);
          static PyObject *t_SaastamoinenModel_setLowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg);
          static PyObject *t_SaastamoinenModel_get__lowElevationThreshold(t_SaastamoinenModel *self, void *data);
          static int t_SaastamoinenModel_set__lowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg, void *data);
          static PyObject *t_SaastamoinenModel_get__parametersDrivers(t_SaastamoinenModel *self, void *data);
          static PyObject *t_SaastamoinenModel_get__standardModel(t_SaastamoinenModel *self, void *data);
          static PyGetSetDef t_SaastamoinenModel__fields_[] = {
            DECLARE_GETSET_FIELD(t_SaastamoinenModel, lowElevationThreshold),
            DECLARE_GET_FIELD(t_SaastamoinenModel, parametersDrivers),
            DECLARE_GET_FIELD(t_SaastamoinenModel, standardModel),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SaastamoinenModel__methods_[] = {
            DECLARE_METHOD(t_SaastamoinenModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SaastamoinenModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SaastamoinenModel, getLowElevationThreshold, METH_NOARGS),
            DECLARE_METHOD(t_SaastamoinenModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_SaastamoinenModel, getStandardModel, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_SaastamoinenModel, pathDelay, METH_VARARGS),
            DECLARE_METHOD(t_SaastamoinenModel, setLowElevationThreshold, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SaastamoinenModel)[] = {
            { Py_tp_methods, t_SaastamoinenModel__methods_ },
            { Py_tp_init, (void *) t_SaastamoinenModel_init_ },
            { Py_tp_getset, t_SaastamoinenModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SaastamoinenModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SaastamoinenModel, t_SaastamoinenModel, SaastamoinenModel);

          void t_SaastamoinenModel::install(PyObject *module)
          {
            installType(&PY_TYPE(SaastamoinenModel), &PY_TYPE_DEF(SaastamoinenModel), module, "SaastamoinenModel", 0);
          }

          void t_SaastamoinenModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "class_", make_descriptor(SaastamoinenModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "wrapfn_", make_descriptor(t_SaastamoinenModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(SaastamoinenModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "DEFAULT_LOW_ELEVATION_THRESHOLD", make_descriptor(SaastamoinenModel::DEFAULT_LOW_ELEVATION_THRESHOLD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "DELTA_R_FILE_NAME", make_descriptor(j2p(*SaastamoinenModel::DELTA_R_FILE_NAME)));
          }

          static PyObject *t_SaastamoinenModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SaastamoinenModel::initializeClass, 1)))
              return NULL;
            return t_SaastamoinenModel::wrap_Object(SaastamoinenModel(((t_SaastamoinenModel *) arg)->object.this$));
          }
          static PyObject *t_SaastamoinenModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SaastamoinenModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SaastamoinenModel_init_(t_SaastamoinenModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                SaastamoinenModel object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SaastamoinenModel(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                ::java::lang::String a3((jobject) NULL);
                SaastamoinenModel object((jobject) NULL);

                if (!parseArgs(args, "DDDs", &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = SaastamoinenModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                ::java::lang::String a3((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a4((jobject) NULL);
                SaastamoinenModel object((jobject) NULL);

                if (!parseArgs(args, "DDDsk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SaastamoinenModel(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SaastamoinenModel_getLowElevationThreshold(t_SaastamoinenModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowElevationThreshold());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SaastamoinenModel_getParametersDrivers(t_SaastamoinenModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_SaastamoinenModel_getStandardModel(PyTypeObject *type)
          {
            SaastamoinenModel result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::models::earth::troposphere::SaastamoinenModel::getStandardModel());
            return t_SaastamoinenModel::wrap_Object(result);
          }

          static PyObject *t_SaastamoinenModel_pathDelay(t_SaastamoinenModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_SaastamoinenModel_setLowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setLowElevationThreshold(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLowElevationThreshold", arg);
            return NULL;
          }

          static PyObject *t_SaastamoinenModel_get__lowElevationThreshold(t_SaastamoinenModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowElevationThreshold());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SaastamoinenModel_set__lowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setLowElevationThreshold(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "lowElevationThreshold", arg);
            return -1;
          }

          static PyObject *t_SaastamoinenModel_get__parametersDrivers(t_SaastamoinenModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SaastamoinenModel_get__standardModel(t_SaastamoinenModel *self, void *data)
          {
            SaastamoinenModel value((jobject) NULL);
            OBJ_CALL(value = self->object.getStandardModel());
            return t_SaastamoinenModel::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *AccelerationModel::class$ = NULL;
        jmethodID *AccelerationModel::mids$ = NULL;
        bool AccelerationModel::live$ = false;

        jclass AccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/AccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_8bdf60d5551eceaf] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_0b7191d207b9680f] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement AccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_8bdf60d5551eceaf], a0.this$, a1.this$));
        }

        jdouble AccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_0b7191d207b9680f], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {
        static PyObject *t_AccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AccelerationModel_init(t_AccelerationModel *self, PyObject *args);
        static PyObject *t_AccelerationModel_signedAmplitude(t_AccelerationModel *self, PyObject *args);

        static PyMethodDef t_AccelerationModel__methods_[] = {
          DECLARE_METHOD(t_AccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_AccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AccelerationModel)[] = {
          { Py_tp_methods, t_AccelerationModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AccelerationModel)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
          NULL
        };

        DEFINE_TYPE(AccelerationModel, t_AccelerationModel, AccelerationModel);

        void t_AccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AccelerationModel), &PY_TYPE_DEF(AccelerationModel), module, "AccelerationModel", 0);
        }

        void t_AccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "class_", make_descriptor(AccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "wrapfn_", make_descriptor(t_AccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AccelerationModel::initializeClass, 1)))
            return NULL;
          return t_AccelerationModel::wrap_Object(AccelerationModel(((t_AccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_AccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AccelerationModel_init(t_AccelerationModel *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AccelerationModel_signedAmplitude(t_AccelerationModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "signedAmplitude", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FramesFactory.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FramesFactory::class$ = NULL;
      jmethodID *FramesFactory::mids$ = NULL;
      bool FramesFactory::live$ = false;
      ::java::lang::String *FramesFactory::BULLETINA_FILENAME = NULL;
      ::java::lang::String *FramesFactory::BULLETINB_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::BULLETINB_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::CSV_FILENAME = NULL;
      ::java::lang::String *FramesFactory::EOPC04_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::EOPC04_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::XML_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::XML_2000_FILENAME = NULL;

      jclass FramesFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FramesFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addDefaultEOP1980HistoryLoaders_0be9bb25c5e386d0] = env->getStaticMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_0be9bb25c5e386d0] = env->getStaticMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addEOPHistoryLoader_0f554c95baa6eac9] = env->getStaticMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_buildUncachedITRF_d6e2d1c3671a12eb] = env->getStaticMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/frames/EOPHistory;Lorg/orekit/time/UTCScale;)Lorg/orekit/frames/Frame;");
          mids$[mid_clearEOPHistoryLoaders_0fa09c18fee449d5] = env->getStaticMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_findEOP_2ac0748dcab95ef1] = env->getStaticMethodID(cls, "findEOP", "(Lorg/orekit/frames/Frame;)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getCIRF_0567c110431f823b] = env->getStaticMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_5337b4e40b3fd7b7] = env->getStaticMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_f7b9f8d7c24d861d] = env->getStaticMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_18c303577f427d2c] = env->getStaticMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_a045cc44324e9b37] = env->getStaticMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrames_ac56fa33f5ed59f4] = env->getStaticMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGCRF_b86f9f61d97a7244] = env->getStaticMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_af0cfaf732e2f76f] = env->getStaticMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_0567c110431f823b] = env->getStaticMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_b86f9f61d97a7244] = env->getStaticMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_0567c110431f823b] = env->getStaticMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_ebe8ec05e13e16d0] = env->getStaticMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_0567c110431f823b] = env->getStaticMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_ab9f051c99cfdab5] = env->getStaticMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_af0cfaf732e2f76f] = env->getStaticMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getNonInterpolatingTransform_2508937098750551] = env->getStaticMethodID(cls, "getNonInterpolatingTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getNonInterpolatingTransform_a17e30870e142ded] = env->getStaticMethodID(cls, "getNonInterpolatingTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getPZ9011_0567c110431f823b] = env->getStaticMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_5337b4e40b3fd7b7] = env->getStaticMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_ab9f051c99cfdab5] = env->getStaticMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_0567c110431f823b] = env->getStaticMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_af0cfaf732e2f76f] = env->getStaticMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_0567c110431f823b] = env->getStaticMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_5337b4e40b3fd7b7] = env->getStaticMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_setEOPContinuityThreshold_17db3a65980d3441] = env->getStaticMethodID(cls, "setEOPContinuityThreshold", "(D)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BULLETINA_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINA_FILENAME", "Ljava/lang/String;"));
          BULLETINB_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINB_1980_FILENAME", "Ljava/lang/String;"));
          BULLETINB_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINB_2000_FILENAME", "Ljava/lang/String;"));
          CSV_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "CSV_FILENAME", "Ljava/lang/String;"));
          EOPC04_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EOPC04_1980_FILENAME", "Ljava/lang/String;"));
          EOPC04_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EOPC04_2000_FILENAME", "Ljava/lang/String;"));
          RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME", "Ljava/lang/String;"));
          RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME", "Ljava/lang/String;"));
          XML_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "XML_1980_FILENAME", "Ljava/lang/String;"));
          XML_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "XML_2000_FILENAME", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FramesFactory::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultEOP1980HistoryLoaders_0be9bb25c5e386d0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void FramesFactory::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultEOP2000HistoryLoaders_0be9bb25c5e386d0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void FramesFactory::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addEOPHistoryLoader_0f554c95baa6eac9], a0.this$, a1.this$);
      }

      ::org::orekit::frames::Frame FramesFactory::buildUncachedITRF(const ::org::orekit::frames::EOPHistory & a0, const ::org::orekit::time::UTCScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_buildUncachedITRF_d6e2d1c3671a12eb], a0.this$, a1.this$));
      }

      void FramesFactory::clearEOPHistoryLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearEOPHistoryLoaders_0fa09c18fee449d5]);
      }

      ::org::orekit::frames::EOPHistory FramesFactory::findEOP(const ::org::orekit::frames::Frame & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::EOPHistory(env->callStaticObjectMethod(cls, mids$[mid_findEOP_2ac0748dcab95ef1], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getCIRF_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getEME2000()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getEME2000_5337b4e40b3fd7b7]));
      }

      ::org::orekit::frames::EOPHistory FramesFactory::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::EOPHistory(env->callStaticObjectMethod(cls, mids$[mid_getEOPHistory_f7b9f8d7c24d861d], a0.this$, a1));
      }

      ::org::orekit::frames::Frame FramesFactory::getEcliptic(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getEcliptic_18c303577f427d2c], a0.this$));
      }

      ::org::orekit::frames::Frame FramesFactory::getFrame(const ::org::orekit::frames::Predefined & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getFrame_a045cc44324e9b37], a0.this$));
      }

      ::org::orekit::frames::LazyLoadedFrames FramesFactory::getFrames()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::LazyLoadedFrames(env->callStaticObjectMethod(cls, mids$[mid_getFrames_ac56fa33f5ed59f4]));
      }

      ::org::orekit::frames::Frame FramesFactory::getGCRF()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getGCRF_b86f9f61d97a7244]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getGTOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getGTOD_af0cfaf732e2f76f], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getGTOD_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::Frame FramesFactory::getICRF()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getICRF_b86f9f61d97a7244]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getITRF_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF FramesFactory::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::VersionedITRF(env->callStaticObjectMethod(cls, mids$[mid_getITRF_ebe8ec05e13e16d0], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getITRFEquinox_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getMOD(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getMOD_ab9f051c99cfdab5], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getMOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getMOD_af0cfaf732e2f76f], a0));
      }

      ::org::orekit::frames::Transform FramesFactory::getNonInterpolatingTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_getNonInterpolatingTransform_2508937098750551], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::FieldTransform FramesFactory::getNonInterpolatingTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_getNonInterpolatingTransform_a17e30870e142ded], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getPZ9011_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTEME()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTEME_5337b4e40b3fd7b7]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTIRF(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTIRF_ab9f051c99cfdab5], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTIRF_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTOD_af0cfaf732e2f76f], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTOD_0567c110431f823b], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getVeis1950()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getVeis1950_5337b4e40b3fd7b7]));
      }

      void FramesFactory::setEOPContinuityThreshold(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setEOPContinuityThreshold_17db3a65980d3441], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_FramesFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_addDefaultEOP1980HistoryLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_addDefaultEOP2000HistoryLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_addEOPHistoryLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_buildUncachedITRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_clearEOPHistoryLoaders(PyTypeObject *type);
      static PyObject *t_FramesFactory_findEOP(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getCIRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getEME2000(PyTypeObject *type);
      static PyObject *t_FramesFactory_getEOPHistory(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getEcliptic(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getFrame(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getFrames(PyTypeObject *type);
      static PyObject *t_FramesFactory_getGCRF(PyTypeObject *type);
      static PyObject *t_FramesFactory_getGTOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getICRF(PyTypeObject *type);
      static PyObject *t_FramesFactory_getITRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getITRFEquinox(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getMOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getNonInterpolatingTransform(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getPZ9011(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getTEME(PyTypeObject *type);
      static PyObject *t_FramesFactory_getTIRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getTOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getVeis1950(PyTypeObject *type);
      static PyObject *t_FramesFactory_setEOPContinuityThreshold(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_get__eME2000(t_FramesFactory *self, void *data);
      static int t_FramesFactory_set__eOPContinuityThreshold(t_FramesFactory *self, PyObject *arg, void *data);
      static PyObject *t_FramesFactory_get__frames(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__gCRF(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__iCRF(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__tEME(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__veis1950(t_FramesFactory *self, void *data);
      static PyGetSetDef t_FramesFactory__fields_[] = {
        DECLARE_GET_FIELD(t_FramesFactory, eME2000),
        DECLARE_SET_FIELD(t_FramesFactory, eOPContinuityThreshold),
        DECLARE_GET_FIELD(t_FramesFactory, frames),
        DECLARE_GET_FIELD(t_FramesFactory, gCRF),
        DECLARE_GET_FIELD(t_FramesFactory, iCRF),
        DECLARE_GET_FIELD(t_FramesFactory, tEME),
        DECLARE_GET_FIELD(t_FramesFactory, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FramesFactory__methods_[] = {
        DECLARE_METHOD(t_FramesFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addDefaultEOP1980HistoryLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addDefaultEOP2000HistoryLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addEOPHistoryLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, buildUncachedITRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, clearEOPHistoryLoaders, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, findEOP, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getCIRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEME2000, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEOPHistory, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEcliptic, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getFrame, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getFrames, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getGCRF, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getGTOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getICRF, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getITRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getITRFEquinox, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getMOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getNonInterpolatingTransform, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getPZ9011, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTEME, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTIRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getVeis1950, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, setEOPContinuityThreshold, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FramesFactory)[] = {
        { Py_tp_methods, t_FramesFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FramesFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FramesFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FramesFactory, t_FramesFactory, FramesFactory);

      void t_FramesFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(FramesFactory), &PY_TYPE_DEF(FramesFactory), module, "FramesFactory", 0);
      }

      void t_FramesFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "class_", make_descriptor(FramesFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "wrapfn_", make_descriptor(t_FramesFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "boxfn_", make_descriptor(boxObject));
        env->getClass(FramesFactory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINA_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINA_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINB_1980_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINB_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINB_2000_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINB_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "CSV_FILENAME", make_descriptor(j2p(*FramesFactory::CSV_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "EOPC04_1980_FILENAME", make_descriptor(j2p(*FramesFactory::EOPC04_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "EOPC04_2000_FILENAME", make_descriptor(j2p(*FramesFactory::EOPC04_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME", make_descriptor(j2p(*FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME", make_descriptor(j2p(*FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "XML_1980_FILENAME", make_descriptor(j2p(*FramesFactory::XML_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "XML_2000_FILENAME", make_descriptor(j2p(*FramesFactory::XML_2000_FILENAME)));
      }

      static PyObject *t_FramesFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FramesFactory::initializeClass, 1)))
          return NULL;
        return t_FramesFactory::wrap_Object(FramesFactory(((t_FramesFactory *) arg)->object.this$));
      }
      static PyObject *t_FramesFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FramesFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FramesFactory_addDefaultEOP1980HistoryLoaders(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_addDefaultEOP2000HistoryLoaders(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_addEOPHistoryLoader(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::EopHistoryLoader a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::EopHistoryLoader::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addEOPHistoryLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addEOPHistoryLoader", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_buildUncachedITRF(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::UTCScale a1((jobject) NULL);
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::time::UTCScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::buildUncachedITRF(a0, a1));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "buildUncachedITRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_clearEOPHistoryLoaders(PyTypeObject *type)
      {
        OBJ_CALL(::org::orekit::frames::FramesFactory::clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_FramesFactory_findEOP(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::findEOP(a0));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "findEOP", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getCIRF(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getCIRF(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCIRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getEME2000(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getEOPHistory(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEOPHistory(a0, a1));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getEcliptic(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEcliptic(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getEcliptic", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getFrame(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Predefined a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::frames::Predefined::initializeClass, &a0, &p0, ::org::orekit::frames::t_Predefined::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getFrame(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFrame", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getFrames(PyTypeObject *type)
      {
        ::org::orekit::frames::LazyLoadedFrames result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getGCRF(PyTypeObject *type)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getGTOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getGTOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getICRF(PyTypeObject *type)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getITRF(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::frames::VersionedITRF result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::frames::t_ITRFVersion::parameters_, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRF(a0, a1, a2));
              return ::org::orekit::frames::t_VersionedITRF::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getITRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getITRFEquinox(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRFEquinox(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getITRFEquinox", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getMOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getMOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getNonInterpolatingTransform(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getNonInterpolatingTransform(a0, a1, a2));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getNonInterpolatingTransform(a0, a1, a2));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getNonInterpolatingTransform", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getPZ9011(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getPZ9011(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPZ9011", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getTEME(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getTIRF(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTIRF(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTIRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getTIRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getTOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getTOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getVeis1950(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_setEOPContinuityThreshold(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::setEOPContinuityThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setEOPContinuityThreshold", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_get__eME2000(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static int t_FramesFactory_set__eOPContinuityThreshold(t_FramesFactory *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setEOPContinuityThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "eOPContinuityThreshold", arg);
        return -1;
      }

      static PyObject *t_FramesFactory_get__frames(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::LazyLoadedFrames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__gCRF(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__iCRF(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__tEME(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__veis1950(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTSolarRadiationPressure.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTSolarRadiationPressure::class$ = NULL;
            jmethodID *DSSTSolarRadiationPressure::mids$ = NULL;
            bool DSSTSolarRadiationPressure::live$ = false;

            jclass DSSTSolarRadiationPressure::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTSolarRadiationPressure");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_67bf70f4c00ef897] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;D)V");
                mids$[mid_init$_4ea24182ae12d009] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                mids$[mid_init$_31d9b2733d5b0c58] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/forces/radiation/RadiationSensitive;D)V");
                mids$[mid_init$_2bd38fab3137bf0b] = env->getMethodID(cls, "<init>", "(DDDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
                mids$[mid_getEquatorialRadius_dff5885c2c873297] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                mids$[mid_getSpacecraft_df6c7f3bc1979ce3] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/radiation/RadiationSensitive;");
                mids$[mid_getLLimits_04690aaa2b6db52c] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getLLimits_7442885516ff2293] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDriversWithoutMu_2afa36052df4765d] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::orekit::forces::radiation::RadiationSensitive & a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_67bf70f4c00ef897, a0.this$, a1.this$, a2.this$, a3)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, jdouble a4) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_4ea24182ae12d009, a0, a1, a2.this$, a3.this$, a4)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3, const ::org::orekit::forces::radiation::RadiationSensitive & a4, jdouble a5) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_31d9b2733d5b0c58, a0, a1, a2.this$, a3.this$, a4.this$, a5)) {}

            DSSTSolarRadiationPressure::DSSTSolarRadiationPressure(jdouble a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::bodies::OneAxisEllipsoid & a5, jdouble a6) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_2bd38fab3137bf0b, a0, a1, a2, a3, a4.this$, a5.this$, a6)) {}

            jdouble DSSTSolarRadiationPressure::getEquatorialRadius() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_dff5885c2c873297]);
            }

            ::org::orekit::forces::radiation::RadiationSensitive DSSTSolarRadiationPressure::getSpacecraft() const
            {
              return ::org::orekit::forces::radiation::RadiationSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_df6c7f3bc1979ce3]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_DSSTSolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTSolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTSolarRadiationPressure_init_(t_DSSTSolarRadiationPressure *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTSolarRadiationPressure_getEquatorialRadius(t_DSSTSolarRadiationPressure *self);
            static PyObject *t_DSSTSolarRadiationPressure_getSpacecraft(t_DSSTSolarRadiationPressure *self);
            static PyObject *t_DSSTSolarRadiationPressure_get__equatorialRadius(t_DSSTSolarRadiationPressure *self, void *data);
            static PyObject *t_DSSTSolarRadiationPressure_get__spacecraft(t_DSSTSolarRadiationPressure *self, void *data);
            static PyGetSetDef t_DSSTSolarRadiationPressure__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTSolarRadiationPressure, equatorialRadius),
              DECLARE_GET_FIELD(t_DSSTSolarRadiationPressure, spacecraft),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTSolarRadiationPressure__methods_[] = {
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, getEquatorialRadius, METH_NOARGS),
              DECLARE_METHOD(t_DSSTSolarRadiationPressure, getSpacecraft, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTSolarRadiationPressure)[] = {
              { Py_tp_methods, t_DSSTSolarRadiationPressure__methods_ },
              { Py_tp_init, (void *) t_DSSTSolarRadiationPressure_init_ },
              { Py_tp_getset, t_DSSTSolarRadiationPressure__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTSolarRadiationPressure)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(DSSTSolarRadiationPressure, t_DSSTSolarRadiationPressure, DSSTSolarRadiationPressure);

            void t_DSSTSolarRadiationPressure::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTSolarRadiationPressure), &PY_TYPE_DEF(DSSTSolarRadiationPressure), module, "DSSTSolarRadiationPressure", 0);
            }

            void t_DSSTSolarRadiationPressure::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "class_", make_descriptor(DSSTSolarRadiationPressure::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "wrapfn_", make_descriptor(t_DSSTSolarRadiationPressure::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTSolarRadiationPressure), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTSolarRadiationPressure_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTSolarRadiationPressure::initializeClass, 1)))
                return NULL;
              return t_DSSTSolarRadiationPressure::wrap_Object(DSSTSolarRadiationPressure(((t_DSSTSolarRadiationPressure *) arg)->object.this$));
            }
            static PyObject *t_DSSTSolarRadiationPressure_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTSolarRadiationPressure::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTSolarRadiationPressure_init_(t_DSSTSolarRadiationPressure *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
                  ::org::orekit::forces::radiation::RadiationSensitive a2((jobject) NULL);
                  jdouble a3;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "kkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
                  jdouble a4;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
                  ::org::orekit::forces::radiation::RadiationSensitive a4((jobject) NULL);
                  jdouble a5;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDkkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
                  ::org::orekit::bodies::OneAxisEllipsoid a5((jobject) NULL);
                  jdouble a6;
                  DSSTSolarRadiationPressure object((jobject) NULL);

                  if (!parseArgs(args, "DDDDkkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = DSSTSolarRadiationPressure(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTSolarRadiationPressure_getEquatorialRadius(t_DSSTSolarRadiationPressure *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEquatorialRadius());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTSolarRadiationPressure_getSpacecraft(t_DSSTSolarRadiationPressure *self)
            {
              ::org::orekit::forces::radiation::RadiationSensitive result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraft());
              return ::org::orekit::forces::radiation::t_RadiationSensitive::wrap_Object(result);
            }

            static PyObject *t_DSSTSolarRadiationPressure_get__equatorialRadius(t_DSSTSolarRadiationPressure *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEquatorialRadius());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTSolarRadiationPressure_get__spacecraft(t_DSSTSolarRadiationPressure *self, void *data)
            {
              ::org::orekit::forces::radiation::RadiationSensitive value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraft());
              return ::org::orekit::forces::radiation::t_RadiationSensitive::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EopHistoryLoader::class$ = NULL;
      jmethodID *EopHistoryLoader::mids$ = NULL;
      bool EopHistoryLoader::live$ = false;

      jclass EopHistoryLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EopHistoryLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_fillHistory_fcb7f5d6983b9f18] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void EopHistoryLoader::fillHistory(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::java::util::SortedSet & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_fillHistory_fcb7f5d6983b9f18], a0.this$, a1.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_EopHistoryLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EopHistoryLoader_fillHistory(t_EopHistoryLoader *self, PyObject *args);

      static PyMethodDef t_EopHistoryLoader__methods_[] = {
        DECLARE_METHOD(t_EopHistoryLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EopHistoryLoader, fillHistory, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EopHistoryLoader)[] = {
        { Py_tp_methods, t_EopHistoryLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EopHistoryLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EopHistoryLoader, t_EopHistoryLoader, EopHistoryLoader);

      void t_EopHistoryLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(EopHistoryLoader), &PY_TYPE_DEF(EopHistoryLoader), module, "EopHistoryLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "Parser", make_descriptor(&PY_TYPE_DEF(EopHistoryLoader$Parser)));
      }

      void t_EopHistoryLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "class_", make_descriptor(EopHistoryLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "wrapfn_", make_descriptor(t_EopHistoryLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EopHistoryLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EopHistoryLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EopHistoryLoader::initializeClass, 1)))
          return NULL;
        return t_EopHistoryLoader::wrap_Object(EopHistoryLoader(((t_EopHistoryLoader *) arg)->object.this$));
      }
      static PyObject *t_EopHistoryLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EopHistoryLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EopHistoryLoader_fillHistory(t_EopHistoryLoader *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::SortedSet a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::java::util::SortedSet::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::java::util::t_SortedSet::parameters_))
        {
          OBJ_CALL(self->object.fillHistory(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "fillHistory", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeState.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeState::class$ = NULL;
              jmethodID *AttitudeState::mids$ = NULL;
              bool AttitudeState::live$ = false;

              jclass AttitudeState::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeState");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ceeb8f33d6af116b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getAttitudeType_f08064c40442c84b] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getAvailableDerivatives_3d53ef1ca7ad5f8c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getElements_60c7040667a7dc5c] = env->getMethodID(cls, "getElements", "()[D");
                  mids$[mid_getRateElementsType_f2358484d07d6202] = env->getMethodID(cls, "getRateElementsType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_toAngular_ea520df32133da66] = env->getMethodID(cls, "toAngular", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeState::AttitudeState(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< ::java::lang::String > & a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ceeb8f33d6af116b, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeState::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_f08064c40442c84b]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AttitudeState::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_3d53ef1ca7ad5f8c]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeState::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
              }

              JArray< jdouble > AttitudeState::getElements() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_60c7040667a7dc5c]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeState::getRateElementsType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateElementsType_f2358484d07d6202]));
              }

              ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeState::toAngular(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngular_ea520df32133da66], a0.this$));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AttitudeState_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeState_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeState_init_(t_AttitudeState *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeState_getAttitudeType(t_AttitudeState *self);
              static PyObject *t_AttitudeState_getAvailableDerivatives(t_AttitudeState *self);
              static PyObject *t_AttitudeState_getDate(t_AttitudeState *self);
              static PyObject *t_AttitudeState_getElements(t_AttitudeState *self);
              static PyObject *t_AttitudeState_getRateElementsType(t_AttitudeState *self);
              static PyObject *t_AttitudeState_toAngular(t_AttitudeState *self, PyObject *arg);
              static PyObject *t_AttitudeState_get__attitudeType(t_AttitudeState *self, void *data);
              static PyObject *t_AttitudeState_get__availableDerivatives(t_AttitudeState *self, void *data);
              static PyObject *t_AttitudeState_get__date(t_AttitudeState *self, void *data);
              static PyObject *t_AttitudeState_get__elements(t_AttitudeState *self, void *data);
              static PyObject *t_AttitudeState_get__rateElementsType(t_AttitudeState *self, void *data);
              static PyGetSetDef t_AttitudeState__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeState, attitudeType),
                DECLARE_GET_FIELD(t_AttitudeState, availableDerivatives),
                DECLARE_GET_FIELD(t_AttitudeState, date),
                DECLARE_GET_FIELD(t_AttitudeState, elements),
                DECLARE_GET_FIELD(t_AttitudeState, rateElementsType),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeState__methods_[] = {
                DECLARE_METHOD(t_AttitudeState, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeState, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeState, getAttitudeType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, getDate, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, getElements, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, getRateElementsType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, toAngular, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeState)[] = {
                { Py_tp_methods, t_AttitudeState__methods_ },
                { Py_tp_init, (void *) t_AttitudeState_init_ },
                { Py_tp_getset, t_AttitudeState__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeState)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeState, t_AttitudeState, AttitudeState);

              void t_AttitudeState::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeState), &PY_TYPE_DEF(AttitudeState), module, "AttitudeState", 0);
              }

              void t_AttitudeState::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeState), "class_", make_descriptor(AttitudeState::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeState), "wrapfn_", make_descriptor(t_AttitudeState::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeState), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeState_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeState::initializeClass, 1)))
                  return NULL;
                return t_AttitudeState::wrap_Object(AttitudeState(((t_AttitudeState *) arg)->object.this$));
              }
              static PyObject *t_AttitudeState_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeState::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeState_init_(t_AttitudeState *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< ::java::lang::String > a3((jobject) NULL);
                jint a4;
                AttitudeState object((jobject) NULL);

                if (!parseArgs(args, "KKk[sI", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::parameters_, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::parameters_, &a2, &a3, &a4))
                {
                  INT_CALL(object = AttitudeState(a0, a1, a2, a3, a4));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeState_getAttitudeType(t_AttitudeState *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeState_getAvailableDerivatives(t_AttitudeState *self)
              {
                ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_AttitudeState_getDate(t_AttitudeState *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeState_getElements(t_AttitudeState *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getElements());
                return result.wrap();
              }

              static PyObject *t_AttitudeState_getRateElementsType(t_AttitudeState *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getRateElementsType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeState_toAngular(t_AttitudeState *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(result = self->object.toAngular(a0));
                  return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toAngular", arg);
                return NULL;
              }

              static PyObject *t_AttitudeState_get__attitudeType(t_AttitudeState *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(value);
              }

              static PyObject *t_AttitudeState_get__availableDerivatives(t_AttitudeState *self, void *data)
              {
                ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_AttitudeState_get__date(t_AttitudeState *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AttitudeState_get__elements(t_AttitudeState *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getElements());
                return value.wrap();
              }

              static PyObject *t_AttitudeState_get__rateElementsType(t_AttitudeState *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getRateElementsType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/interval/BinomialProportion.h"
#include "org/hipparchus/stat/interval/ConfidenceInterval.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {

        ::java::lang::Class *BinomialProportion::class$ = NULL;
        jmethodID *BinomialProportion::mids$ = NULL;
        bool BinomialProportion::live$ = false;

        jclass BinomialProportion::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/interval/BinomialProportion");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAgrestiCoullInterval_902c51174b71d8d4] = env->getStaticMethodID(cls, "getAgrestiCoullInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getClopperPearsonInterval_902c51174b71d8d4] = env->getStaticMethodID(cls, "getClopperPearsonInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getNormalApproximationInterval_902c51174b71d8d4] = env->getStaticMethodID(cls, "getNormalApproximationInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getWilsonScoreInterval_902c51174b71d8d4] = env->getStaticMethodID(cls, "getWilsonScoreInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getAgrestiCoullInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getAgrestiCoullInterval_902c51174b71d8d4], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getClopperPearsonInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getClopperPearsonInterval_902c51174b71d8d4], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getNormalApproximationInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getNormalApproximationInterval_902c51174b71d8d4], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getWilsonScoreInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getWilsonScoreInterval_902c51174b71d8d4], a0, a1, a2));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {
        static PyObject *t_BinomialProportion_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialProportion_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialProportion_getAgrestiCoullInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_BinomialProportion_getClopperPearsonInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_BinomialProportion_getNormalApproximationInterval(PyTypeObject *type, PyObject *args);
        static PyObject *t_BinomialProportion_getWilsonScoreInterval(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_BinomialProportion__methods_[] = {
          DECLARE_METHOD(t_BinomialProportion, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getAgrestiCoullInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getClopperPearsonInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getNormalApproximationInterval, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BinomialProportion, getWilsonScoreInterval, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialProportion)[] = {
          { Py_tp_methods, t_BinomialProportion__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialProportion)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BinomialProportion, t_BinomialProportion, BinomialProportion);

        void t_BinomialProportion::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialProportion), &PY_TYPE_DEF(BinomialProportion), module, "BinomialProportion", 0);
        }

        void t_BinomialProportion::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialProportion), "class_", make_descriptor(BinomialProportion::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialProportion), "wrapfn_", make_descriptor(t_BinomialProportion::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialProportion), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialProportion_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialProportion::initializeClass, 1)))
            return NULL;
          return t_BinomialProportion::wrap_Object(BinomialProportion(((t_BinomialProportion *) arg)->object.this$));
        }
        static PyObject *t_BinomialProportion_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialProportion::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BinomialProportion_getAgrestiCoullInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getAgrestiCoullInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getAgrestiCoullInterval", args);
          return NULL;
        }

        static PyObject *t_BinomialProportion_getClopperPearsonInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getClopperPearsonInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getClopperPearsonInterval", args);
          return NULL;
        }

        static PyObject *t_BinomialProportion_getNormalApproximationInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getNormalApproximationInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getNormalApproximationInterval", args);
          return NULL;
        }

        static PyObject *t_BinomialProportion_getWilsonScoreInterval(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          ::org::hipparchus::stat::interval::ConfidenceInterval result((jobject) NULL);

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::interval::BinomialProportion::getWilsonScoreInterval(a0, a1, a2));
            return ::org::hipparchus::stat::interval::t_ConfidenceInterval::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getWilsonScoreInterval", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/BoxAndSolarArraySpacecraft.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/Panel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *BoxAndSolarArraySpacecraft::class$ = NULL;
      jmethodID *BoxAndSolarArraySpacecraft::mids$ = NULL;
      bool BoxAndSolarArraySpacecraft::live$ = false;

      jclass BoxAndSolarArraySpacecraft::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/BoxAndSolarArraySpacecraft");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_init$_f619ddf12a25c4b6] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDD)V");
          mids$[mid_buildBox_e4269e7e0f3ced71] = env->getStaticMethodID(cls, "buildBox", "(DDDDDDD)Ljava/util/List;");
          mids$[mid_buildPanels_2c7040e42cd3a9fb] = env->getStaticMethodID(cls, "buildPanels", "(DDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDD)Ljava/util/List;");
          mids$[mid_dragAcceleration_6cbf0b5d7046f26b] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_dragAcceleration_fc130a15f669db38] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getDragParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");
          mids$[mid_getPanels_2afa36052df4765d] = env->getMethodID(cls, "getPanels", "()Ljava/util/List;");
          mids$[mid_getRadiationParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
          mids$[mid_radiationPressureAcceleration_c01594a6748cab78] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_radiationPressureAcceleration_70d4c57af2df1a86] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BoxAndSolarArraySpacecraft::BoxAndSolarArraySpacecraft(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}

      BoxAndSolarArraySpacecraft::BoxAndSolarArraySpacecraft(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f619ddf12a25c4b6, a0, a1, a2, a3.this$, a4, a5.this$, a6, a7, a8, a9)) {}

      ::java::util::List BoxAndSolarArraySpacecraft::buildBox(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildBox_e4269e7e0f3ced71], a0, a1, a2, a3, a4, a5, a6));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::buildPanels(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildPanels_2c7040e42cd3a9fb], a0, a1, a2, a3.this$, a4, a5.this$, a6, a7, a8, a9));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BoxAndSolarArraySpacecraft::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_6cbf0b5d7046f26b], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BoxAndSolarArraySpacecraft::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_fc130a15f669db38], a0.this$, a1, a2.this$, a3.this$));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getDragParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_2afa36052df4765d]));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getPanels() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPanels_2afa36052df4765d]));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getRadiationParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_2afa36052df4765d]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BoxAndSolarArraySpacecraft::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_c01594a6748cab78], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BoxAndSolarArraySpacecraft::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_70d4c57af2df1a86], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      static PyObject *t_BoxAndSolarArraySpacecraft_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoxAndSolarArraySpacecraft_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BoxAndSolarArraySpacecraft_init_(t_BoxAndSolarArraySpacecraft *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BoxAndSolarArraySpacecraft_buildBox(PyTypeObject *type, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_buildPanels(PyTypeObject *type, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_dragAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_getDragParametersDrivers(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_getPanels(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_getRadiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_radiationPressureAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__dragParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__panels(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__radiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyGetSetDef t_BoxAndSolarArraySpacecraft__fields_[] = {
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, dragParametersDrivers),
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, panels),
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, radiationParametersDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoxAndSolarArraySpacecraft__methods_[] = {
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, buildBox, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, buildPanels, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, dragAcceleration, METH_VARARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getDragParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getPanels, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getRadiationParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, radiationPressureAcceleration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoxAndSolarArraySpacecraft)[] = {
        { Py_tp_methods, t_BoxAndSolarArraySpacecraft__methods_ },
        { Py_tp_init, (void *) t_BoxAndSolarArraySpacecraft_init_ },
        { Py_tp_getset, t_BoxAndSolarArraySpacecraft__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoxAndSolarArraySpacecraft)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BoxAndSolarArraySpacecraft, t_BoxAndSolarArraySpacecraft, BoxAndSolarArraySpacecraft);

      void t_BoxAndSolarArraySpacecraft::install(PyObject *module)
      {
        installType(&PY_TYPE(BoxAndSolarArraySpacecraft), &PY_TYPE_DEF(BoxAndSolarArraySpacecraft), module, "BoxAndSolarArraySpacecraft", 0);
      }

      void t_BoxAndSolarArraySpacecraft::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "class_", make_descriptor(BoxAndSolarArraySpacecraft::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "wrapfn_", make_descriptor(t_BoxAndSolarArraySpacecraft::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoxAndSolarArraySpacecraft::initializeClass, 1)))
          return NULL;
        return t_BoxAndSolarArraySpacecraft::wrap_Object(BoxAndSolarArraySpacecraft(((t_BoxAndSolarArraySpacecraft *) arg)->object.this$));
      }
      static PyObject *t_BoxAndSolarArraySpacecraft_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoxAndSolarArraySpacecraft::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BoxAndSolarArraySpacecraft_init_(t_BoxAndSolarArraySpacecraft *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            BoxAndSolarArraySpacecraft object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = BoxAndSolarArraySpacecraft(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
            jdouble a4;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            BoxAndSolarArraySpacecraft object((jobject) NULL);

            if (!parseArgs(args, "DDDkDkDDDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
            {
              INT_CALL(object = BoxAndSolarArraySpacecraft(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_buildBox(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "DDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          OBJ_CALL(result = ::org::orekit::forces::BoxAndSolarArraySpacecraft::buildBox(a0, a1, a2, a3, a4, a5, a6));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
        }

        PyErr_SetArgsError(type, "buildBox", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_buildPanels(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
        jdouble a4;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "DDDkDkDDDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
        {
          OBJ_CALL(result = ::org::orekit::forces::BoxAndSolarArraySpacecraft::buildPanels(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
        }

        PyErr_SetArgsError(type, "buildPanels", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_dragAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kDk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "dragAcceleration", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getDragParametersDrivers(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getDragParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getPanels(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPanels());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getRadiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getRadiationParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_radiationPressureAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__dragParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getDragParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__panels(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPanels());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__radiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getRadiationParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AngularAzEl::class$ = NULL;
        jmethodID *AngularAzEl::mids$ = NULL;
        bool AngularAzEl::live$ = false;
        ::java::lang::String *AngularAzEl::MEASUREMENT_TYPE = NULL;

        jclass AngularAzEl::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AngularAzEl");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6d8110a9cba4c78c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getObservedLineOfSight_e91e859b879f3586] = env->getMethodID(cls, "getObservedLineOfSight", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularAzEl::AngularAzEl(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_6d8110a9cba4c78c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularAzEl::getObservedLineOfSight(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getObservedLineOfSight_e91e859b879f3586], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_AngularAzEl_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularAzEl_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularAzEl_of_(t_AngularAzEl *self, PyObject *args);
        static int t_AngularAzEl_init_(t_AngularAzEl *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularAzEl_getObservedLineOfSight(t_AngularAzEl *self, PyObject *arg);
        static PyObject *t_AngularAzEl_get__parameters_(t_AngularAzEl *self, void *data);
        static PyGetSetDef t_AngularAzEl__fields_[] = {
          DECLARE_GET_FIELD(t_AngularAzEl, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularAzEl__methods_[] = {
          DECLARE_METHOD(t_AngularAzEl, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularAzEl, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularAzEl, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularAzEl, getObservedLineOfSight, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularAzEl)[] = {
          { Py_tp_methods, t_AngularAzEl__methods_ },
          { Py_tp_init, (void *) t_AngularAzEl_init_ },
          { Py_tp_getset, t_AngularAzEl__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularAzEl)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(AngularAzEl, t_AngularAzEl, AngularAzEl);
        PyObject *t_AngularAzEl::wrap_Object(const AngularAzEl& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularAzEl::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularAzEl *self = (t_AngularAzEl *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularAzEl::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularAzEl::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularAzEl *self = (t_AngularAzEl *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularAzEl::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularAzEl), &PY_TYPE_DEF(AngularAzEl), module, "AngularAzEl", 0);
        }

        void t_AngularAzEl::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "class_", make_descriptor(AngularAzEl::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "wrapfn_", make_descriptor(t_AngularAzEl::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "boxfn_", make_descriptor(boxObject));
          env->getClass(AngularAzEl::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "MEASUREMENT_TYPE", make_descriptor(j2p(*AngularAzEl::MEASUREMENT_TYPE)));
        }

        static PyObject *t_AngularAzEl_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularAzEl::initializeClass, 1)))
            return NULL;
          return t_AngularAzEl::wrap_Object(AngularAzEl(((t_AngularAzEl *) arg)->object.this$));
        }
        static PyObject *t_AngularAzEl_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularAzEl::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularAzEl_of_(t_AngularAzEl *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularAzEl_init_(t_AngularAzEl *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< jdouble > a3((jobject) NULL);
          JArray< jdouble > a4((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
          AngularAzEl object((jobject) NULL);

          if (!parseArgs(args, "kk[D[D[Dk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = AngularAzEl(a0, a1, a2, a3, a4, a5));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularAzEl);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularAzEl_getObservedLineOfSight(t_AngularAzEl *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getObservedLineOfSight(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getObservedLineOfSight", arg);
          return NULL;
        }
        static PyObject *t_AngularAzEl_get__parameters_(t_AngularAzEl *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadataWriter::class$ = NULL;
            jmethodID *CdmMetadataWriter::mids$ = NULL;
            bool CdmMetadataWriter::live$ = false;

            jclass CdmMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3dfd8fa1537edea9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;)V");
                mids$[mid_writeContent_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMetadataWriter::CdmMetadataWriter(const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a0) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_3dfd8fa1537edea9, a0.this$)) {}
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_CdmMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMetadataWriter_init_(t_CdmMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CdmMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_CdmMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadataWriter)[] = {
              { Py_tp_methods, t_CdmMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_CdmMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CdmMetadataWriter, t_CdmMetadataWriter, CdmMetadataWriter);

            void t_CdmMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadataWriter), &PY_TYPE_DEF(CdmMetadataWriter), module, "CdmMetadataWriter", 0);
            }

            void t_CdmMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataWriter), "class_", make_descriptor(CdmMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataWriter), "wrapfn_", make_descriptor(t_CdmMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_CdmMetadataWriter::wrap_Object(CdmMetadataWriter(((t_CdmMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMetadataWriter_init_(t_CdmMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a0((jobject) NULL);
              CdmMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, &a0))
              {
                INT_CALL(object = CdmMetadataWriter(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmWriter::class$ = NULL;
              jmethodID *AcmWriter::mids$ = NULL;
              bool AcmWriter::live$ = false;
              jdouble AcmWriter::CCSDS_ACM_VERS = (jdouble) 0;
              jint AcmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass AcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_80145525a2ecc4f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_writeSegmentContent_a4679b5cde76d825] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_ACM_VERS = env->getStaticDoubleField(cls, "CCSDS_ACM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmWriter::AcmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_80145525a2ecc4f8, a0.this$, a1.this$)) {}
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmWriter_of_(t_AcmWriter *self, PyObject *args);
              static int t_AcmWriter_init_(t_AcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmWriter_get__parameters_(t_AcmWriter *self, void *data);
              static PyGetSetDef t_AcmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_AcmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmWriter__methods_[] = {
                DECLARE_METHOD(t_AcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmWriter)[] = {
                { Py_tp_methods, t_AcmWriter__methods_ },
                { Py_tp_init, (void *) t_AcmWriter_init_ },
                { Py_tp_getset, t_AcmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(AcmWriter, t_AcmWriter, AcmWriter);
              PyObject *t_AcmWriter::wrap_Object(const AcmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AcmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmWriter *self = (t_AcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_AcmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AcmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmWriter *self = (t_AcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_AcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmWriter), &PY_TYPE_DEF(AcmWriter), module, "AcmWriter", 0);
              }

              void t_AcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "class_", make_descriptor(AcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "wrapfn_", make_descriptor(t_AcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "CCSDS_ACM_VERS", make_descriptor(AcmWriter::CCSDS_ACM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "KVN_PADDING_WIDTH", make_descriptor(AcmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_AcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmWriter::initializeClass, 1)))
                  return NULL;
                return t_AcmWriter::wrap_Object(AcmWriter(((t_AcmWriter *) arg)->object.this$));
              }
              static PyObject *t_AcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmWriter_of_(t_AcmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AcmWriter_init_(t_AcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                AcmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
                {
                  INT_CALL(object = AcmWriter(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(Acm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_AcmWriter_get__parameters_(t_AcmWriter *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/DateDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldParameterDrivenDateIntervalDetector::class$ = NULL;
        jmethodID *FieldParameterDrivenDateIntervalDetector::mids$ = NULL;
        bool FieldParameterDrivenDateIntervalDetector::live$ = false;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::DURATION_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::START_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::STOP_SUFFIX = NULL;

        jclass FieldParameterDrivenDateIntervalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aed558bc796a4379] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_7b7ab69c28b41c60] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDurationDriver_a25ed222178aa59f] = env->getMethodID(cls, "getDurationDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getMedianDriver_3fcb2f6aa57e183e] = env->getMethodID(cls, "getMedianDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStartDriver_3fcb2f6aa57e183e] = env->getMethodID(cls, "getStartDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStopDriver_3fcb2f6aa57e183e] = env->getMethodID(cls, "getStopDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_create_29a8fc1df67f1fa7] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DURATION_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DURATION_SUFFIX", "Ljava/lang/String;"));
            MEDIAN_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MEDIAN_SUFFIX", "Ljava/lang/String;"));
            START_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "START_SUFFIX", "Ljava/lang/String;"));
            STOP_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "STOP_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldParameterDrivenDateIntervalDetector::FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_aed558bc796a4379, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldParameterDrivenDateIntervalDetector::FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_7b7ab69c28b41c60, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldParameterDrivenDateIntervalDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::orekit::utils::ParameterDriver FieldParameterDrivenDateIntervalDetector::getDurationDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getDurationDriver_a25ed222178aa59f]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getMedianDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getMedianDriver_3fcb2f6aa57e183e]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getStartDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStartDriver_3fcb2f6aa57e183e]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getStopDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStopDriver_3fcb2f6aa57e183e]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_of_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args);
        static int t_FieldParameterDrivenDateIntervalDetector_init_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_g(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getDurationDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getMedianDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStartDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStopDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__durationDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__medianDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__startDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__stopDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__parameters_(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyGetSetDef t_FieldParameterDrivenDateIntervalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, durationDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, medianDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, startDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, stopDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldParameterDrivenDateIntervalDetector__methods_[] = {
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getDurationDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getMedianDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getStartDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getStopDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldParameterDrivenDateIntervalDetector)[] = {
          { Py_tp_methods, t_FieldParameterDrivenDateIntervalDetector__methods_ },
          { Py_tp_init, (void *) t_FieldParameterDrivenDateIntervalDetector_init_ },
          { Py_tp_getset, t_FieldParameterDrivenDateIntervalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldParameterDrivenDateIntervalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldParameterDrivenDateIntervalDetector, t_FieldParameterDrivenDateIntervalDetector, FieldParameterDrivenDateIntervalDetector);
        PyObject *t_FieldParameterDrivenDateIntervalDetector::wrap_Object(const FieldParameterDrivenDateIntervalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldParameterDrivenDateIntervalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldParameterDrivenDateIntervalDetector *self = (t_FieldParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldParameterDrivenDateIntervalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldParameterDrivenDateIntervalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldParameterDrivenDateIntervalDetector *self = (t_FieldParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldParameterDrivenDateIntervalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldParameterDrivenDateIntervalDetector), &PY_TYPE_DEF(FieldParameterDrivenDateIntervalDetector), module, "FieldParameterDrivenDateIntervalDetector", 0);
        }

        void t_FieldParameterDrivenDateIntervalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "class_", make_descriptor(FieldParameterDrivenDateIntervalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "wrapfn_", make_descriptor(t_FieldParameterDrivenDateIntervalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldParameterDrivenDateIntervalDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "DURATION_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::DURATION_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "MEDIAN_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "START_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::START_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "STOP_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::STOP_SUFFIX)));
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldParameterDrivenDateIntervalDetector::initializeClass, 1)))
            return NULL;
          return t_FieldParameterDrivenDateIntervalDetector::wrap_Object(FieldParameterDrivenDateIntervalDetector(((t_FieldParameterDrivenDateIntervalDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldParameterDrivenDateIntervalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_of_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldParameterDrivenDateIntervalDetector_init_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              FieldParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "Kskk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldParameterDrivenDateIntervalDetector(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              FieldParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "KskD", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldParameterDrivenDateIntervalDetector(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_g(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldParameterDrivenDateIntervalDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getDurationDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getMedianDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStartDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStopDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__parameters_(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__durationDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__medianDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__startDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__stopDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/PythonOdmParser.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *PythonOdmParser::class$ = NULL;
            jmethodID *PythonOdmParser::mids$ = NULL;
            bool PythonOdmParser::live$ = false;

            jclass PythonOdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/PythonOdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_3204eef28de879bb] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getFileFormat_66298c6188053be6] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getHeader_3423aca890fca0cd] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                mids$[mid_getMuSet_dff5885c2c873297] = env->getMethodID(cls, "getMuSet", "()D");
                mids$[mid_inData_b108b35ef48e27bd] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_b108b35ef48e27bd] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_b108b35ef48e27bd] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_b108b35ef48e27bd] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");
                mids$[mid_setMuCreated_17db3a65980d3441] = env->getMethodID(cls, "setMuCreated", "(D)V");
                mids$[mid_setMuParsed_17db3a65980d3441] = env->getMethodID(cls, "setMuParsed", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonOdmParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            ::org::orekit::files::ccsds::utils::FileFormat PythonOdmParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_66298c6188053be6]));
            }

            jdouble PythonOdmParser::getMuSet() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuSet_dff5885c2c873297]);
            }

            jlong PythonOdmParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonOdmParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
            }

            void PythonOdmParser::setMuCreated(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMuCreated_17db3a65980d3441], a0);
            }

            void PythonOdmParser::setMuParsed(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMuParsed_17db3a65980d3441], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            static PyObject *t_PythonOdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonOdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonOdmParser_of_(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_finalize(t_PythonOdmParser *self);
            static PyObject *t_PythonOdmParser_getFileFormat(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_getMuSet(t_PythonOdmParser *self);
            static PyObject *t_PythonOdmParser_pythonExtension(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_setMuCreated(t_PythonOdmParser *self, PyObject *arg);
            static PyObject *t_PythonOdmParser_setMuParsed(t_PythonOdmParser *self, PyObject *arg);
            static jobject JNICALL t_PythonOdmParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonOdmParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonOdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonOdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonOdmParser_get__self(t_PythonOdmParser *self, void *data);
            static PyObject *t_PythonOdmParser_get__fileFormat(t_PythonOdmParser *self, void *data);
            static int t_PythonOdmParser_set__muCreated(t_PythonOdmParser *self, PyObject *arg, void *data);
            static int t_PythonOdmParser_set__muParsed(t_PythonOdmParser *self, PyObject *arg, void *data);
            static PyObject *t_PythonOdmParser_get__muSet(t_PythonOdmParser *self, void *data);
            static PyObject *t_PythonOdmParser_get__parameters_(t_PythonOdmParser *self, void *data);
            static PyGetSetDef t_PythonOdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonOdmParser, fileFormat),
              DECLARE_SET_FIELD(t_PythonOdmParser, muCreated),
              DECLARE_SET_FIELD(t_PythonOdmParser, muParsed),
              DECLARE_GET_FIELD(t_PythonOdmParser, muSet),
              DECLARE_GET_FIELD(t_PythonOdmParser, self),
              DECLARE_GET_FIELD(t_PythonOdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonOdmParser__methods_[] = {
              DECLARE_METHOD(t_PythonOdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonOdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonOdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonOdmParser, getFileFormat, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, getMuSet, METH_NOARGS),
              DECLARE_METHOD(t_PythonOdmParser, pythonExtension, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, setMuCreated, METH_O),
              DECLARE_METHOD(t_PythonOdmParser, setMuParsed, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonOdmParser)[] = {
              { Py_tp_methods, t_PythonOdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonOdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonOdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
              NULL
            };

            DEFINE_TYPE(PythonOdmParser, t_PythonOdmParser, PythonOdmParser);
            PyObject *t_PythonOdmParser::wrap_Object(const PythonOdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonOdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonOdmParser *self = (t_PythonOdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonOdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonOdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonOdmParser *self = (t_PythonOdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonOdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonOdmParser), &PY_TYPE_DEF(PythonOdmParser), module, "PythonOdmParser", 1);
            }

            void t_PythonOdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "class_", make_descriptor(PythonOdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "wrapfn_", make_descriptor(t_PythonOdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonOdmParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonOdmParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonOdmParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonOdmParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonOdmParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;", (void *) t_PythonOdmParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonOdmParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonOdmParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonOdmParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonOdmParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonOdmParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonOdmParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonOdmParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonOdmParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonOdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonOdmParser::initializeClass, 1)))
                return NULL;
              return t_PythonOdmParser::wrap_Object(PythonOdmParser(((t_PythonOdmParser *) arg)->object.this$));
            }
            static PyObject *t_PythonOdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonOdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonOdmParser_of_(t_PythonOdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonOdmParser_finalize(t_PythonOdmParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonOdmParser_getFileFormat(t_PythonOdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFileFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(PythonOdmParser), (PyObject *) self, "getFileFormat", args, 2);
            }

            static PyObject *t_PythonOdmParser_getMuSet(t_PythonOdmParser *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuSet());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_PythonOdmParser_pythonExtension(t_PythonOdmParser *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  jlong result;
                  OBJ_CALL(result = self->object.pythonExtension());
                  return PyLong_FromLongLong((PY_LONG_LONG) result);
                }
                break;
               case 1:
                {
                  jlong a0;

                  if (!parseArgs(args, "J", &a0))
                  {
                    OBJ_CALL(self->object.pythonExtension(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
              return NULL;
            }

            static PyObject *t_PythonOdmParser_setMuCreated(t_PythonOdmParser *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMuCreated(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMuCreated", arg);
              return NULL;
            }

            static PyObject *t_PythonOdmParser_setMuParsed(t_PythonOdmParser *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMuParsed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMuParsed", arg);
              return NULL;
            }

            static jobject JNICALL t_PythonOdmParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::NdmConstituent value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &value))
              {
                throwTypeError("build", result);
                Py_DECREF(result);
              }
              else
              {
                jobj = jenv->NewLocalRef(value.this$);
                Py_DECREF(result);
                return jobj;
              }

              return (jobject) NULL;
            }

            static jboolean JNICALL t_PythonOdmParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jobject JNICALL t_PythonOdmParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, &value))
              {
                throwTypeError("getHeader", result);
                Py_DECREF(result);
              }
              else
              {
                jobj = jenv->NewLocalRef(value.this$);
                Py_DECREF(result);
                return jobj;
              }

              return (jobject) NULL;
            }

            static jboolean JNICALL t_PythonOdmParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonOdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonOdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonOdmParser_get__self(t_PythonOdmParser *self, void *data)
            {
              jlong ptr;
              OBJ_CALL(ptr = self->object.pythonExtension());
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                Py_INCREF(obj);
                return obj;
              }
              else
                Py_RETURN_NONE;
            }
            static PyObject *t_PythonOdmParser_get__parameters_(t_PythonOdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_PythonOdmParser_get__fileFormat(t_PythonOdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static int t_PythonOdmParser_set__muCreated(t_PythonOdmParser *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMuCreated(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "muCreated", arg);
              return -1;
            }

            static int t_PythonOdmParser_set__muParsed(t_PythonOdmParser *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMuParsed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "muParsed", arg);
              return -1;
            }

            static PyObject *t_PythonOdmParser_get__muSet(t_PythonOdmParser *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuSet());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/JacobiPolynomials.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *JacobiPolynomials::class$ = NULL;
            jmethodID *JacobiPolynomials::mids$ = NULL;
            bool JacobiPolynomials::live$ = false;

            jclass JacobiPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/JacobiPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getValue_cf82d8d5ac031606] = env->getStaticMethodID(cls, "getValue", "(IIILorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
                mids$[mid_getValue_14288ac64491d96d] = env->getStaticMethodID(cls, "getValue", "(IIILorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
                mids$[mid_getValueAndDerivative_cb608be377c869c0] = env->getStaticMethodID(cls, "getValueAndDerivative", "(IIID)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::analysis::differentiation::FieldGradient JacobiPolynomials::getValue(jint a0, jint a1, jint a2, const ::org::hipparchus::analysis::differentiation::FieldGradient & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_getValue_cf82d8d5ac031606], a0, a1, a2, a3.this$));
            }

            ::org::hipparchus::analysis::differentiation::Gradient JacobiPolynomials::getValue(jint a0, jint a1, jint a2, const ::org::hipparchus::analysis::differentiation::Gradient & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::analysis::differentiation::Gradient(env->callStaticObjectMethod(cls, mids$[mid_getValue_14288ac64491d96d], a0, a1, a2, a3.this$));
            }

            JArray< jdouble > JacobiPolynomials::getValueAndDerivative(jint a0, jint a1, jint a2, jdouble a3)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_getValueAndDerivative_cb608be377c869c0], a0, a1, a2, a3));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_JacobiPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JacobiPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JacobiPolynomials_getValue(PyTypeObject *type, PyObject *args);
            static PyObject *t_JacobiPolynomials_getValueAndDerivative(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_JacobiPolynomials__methods_[] = {
              DECLARE_METHOD(t_JacobiPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, getValue, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_JacobiPolynomials, getValueAndDerivative, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(JacobiPolynomials)[] = {
              { Py_tp_methods, t_JacobiPolynomials__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(JacobiPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(JacobiPolynomials, t_JacobiPolynomials, JacobiPolynomials);

            void t_JacobiPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(JacobiPolynomials), &PY_TYPE_DEF(JacobiPolynomials), module, "JacobiPolynomials", 0);
            }

            void t_JacobiPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "class_", make_descriptor(JacobiPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "wrapfn_", make_descriptor(t_JacobiPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_JacobiPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, JacobiPolynomials::initializeClass, 1)))
                return NULL;
              return t_JacobiPolynomials::wrap_Object(JacobiPolynomials(((t_JacobiPolynomials *) arg)->object.this$));
            }
            static PyObject *t_JacobiPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, JacobiPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_JacobiPolynomials_getValue(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  ::org::hipparchus::analysis::differentiation::FieldGradient a3((jobject) NULL);
                  PyTypeObject **p3;
                  ::org::hipparchus::analysis::differentiation::FieldGradient result((jobject) NULL);

                  if (!parseArgs(args, "IIIK", ::org::hipparchus::analysis::differentiation::FieldGradient::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::analysis::differentiation::t_FieldGradient::parameters_))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValue(a0, a1, a2, a3));
                    return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(result);
                  }
                }
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  ::org::hipparchus::analysis::differentiation::Gradient a3((jobject) NULL);
                  ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

                  if (!parseArgs(args, "IIIk", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValue(a0, a1, a2, a3));
                    return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "getValue", args);
              return NULL;
            }

            static PyObject *t_JacobiPolynomials_getValueAndDerivative(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble a3;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "IIID", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::JacobiPolynomials::getValueAndDerivative(a0, a1, a2, a3));
                return result.wrap();
              }

              PyErr_SetArgsError(type, "getValueAndDerivative", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/MagneticFieldDetector.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/MagneticFieldDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *MagneticFieldDetector::class$ = NULL;
        jmethodID *MagneticFieldDetector::mids$ = NULL;
        bool MagneticFieldDetector::live$ = false;

        jclass MagneticFieldDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/MagneticFieldDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0f2b960fda308707] = env->getMethodID(cls, "<init>", "(DLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_bfc5e09252b02996] = env->getMethodID(cls, "<init>", "(DLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;Z)V");
            mids$[mid_init$_3150a28820b8fe06] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;Z)V");
            mids$[mid_init$_2535aa10ce2c998e] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;ZLorg/orekit/data/DataContext;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_5bcfd052dc70cb39] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/MagneticFieldDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0f2b960fda308707, a0, a1.this$, a2.this$)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jboolean a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_bfc5e09252b02996, a0, a1.this$, a2.this$, a3)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4, jboolean a5) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3150a28820b8fe06, a0, a1, a2, a3.this$, a4.this$, a5)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4, jboolean a5, const ::org::orekit::data::DataContext & a6) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2535aa10ce2c998e, a0, a1, a2, a3.this$, a4.this$, a5, a6.this$)) {}

        jdouble MagneticFieldDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        void MagneticFieldDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_MagneticFieldDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MagneticFieldDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MagneticFieldDetector_of_(t_MagneticFieldDetector *self, PyObject *args);
        static int t_MagneticFieldDetector_init_(t_MagneticFieldDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MagneticFieldDetector_g(t_MagneticFieldDetector *self, PyObject *args);
        static PyObject *t_MagneticFieldDetector_init(t_MagneticFieldDetector *self, PyObject *args);
        static PyObject *t_MagneticFieldDetector_get__parameters_(t_MagneticFieldDetector *self, void *data);
        static PyGetSetDef t_MagneticFieldDetector__fields_[] = {
          DECLARE_GET_FIELD(t_MagneticFieldDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MagneticFieldDetector__methods_[] = {
          DECLARE_METHOD(t_MagneticFieldDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MagneticFieldDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MagneticFieldDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_MagneticFieldDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_MagneticFieldDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MagneticFieldDetector)[] = {
          { Py_tp_methods, t_MagneticFieldDetector__methods_ },
          { Py_tp_init, (void *) t_MagneticFieldDetector_init_ },
          { Py_tp_getset, t_MagneticFieldDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MagneticFieldDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(MagneticFieldDetector, t_MagneticFieldDetector, MagneticFieldDetector);
        PyObject *t_MagneticFieldDetector::wrap_Object(const MagneticFieldDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MagneticFieldDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MagneticFieldDetector *self = (t_MagneticFieldDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MagneticFieldDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MagneticFieldDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MagneticFieldDetector *self = (t_MagneticFieldDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MagneticFieldDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(MagneticFieldDetector), &PY_TYPE_DEF(MagneticFieldDetector), module, "MagneticFieldDetector", 0);
        }

        void t_MagneticFieldDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MagneticFieldDetector), "class_", make_descriptor(MagneticFieldDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MagneticFieldDetector), "wrapfn_", make_descriptor(t_MagneticFieldDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MagneticFieldDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MagneticFieldDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MagneticFieldDetector::initializeClass, 1)))
            return NULL;
          return t_MagneticFieldDetector::wrap_Object(MagneticFieldDetector(((t_MagneticFieldDetector *) arg)->object.this$));
        }
        static PyObject *t_MagneticFieldDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MagneticFieldDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MagneticFieldDetector_of_(t_MagneticFieldDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MagneticFieldDetector_init_(t_MagneticFieldDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DKk", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a2))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jboolean a3;
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DKkZ", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a2, &a3))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
                break;
              }
            }
            goto err;
           case 6:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::bodies::OneAxisEllipsoid a4((jobject) NULL);
              jboolean a5;
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DDDKkZ", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a4, &a5))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2, a3, a4, a5));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
                break;
              }
            }
            goto err;
           case 7:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::bodies::OneAxisEllipsoid a4((jobject) NULL);
              jboolean a5;
              ::org::orekit::data::DataContext a6((jobject) NULL);
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DDDKkZk", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a4, &a5, &a6))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MagneticFieldDetector_g(t_MagneticFieldDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MagneticFieldDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_MagneticFieldDetector_init(t_MagneticFieldDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(MagneticFieldDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_MagneticFieldDetector_get__parameters_(t_MagneticFieldDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ContinuedFraction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ContinuedFraction::class$ = NULL;
      jmethodID *ContinuedFraction::mids$ = NULL;
      bool ContinuedFraction::live$ = false;

      jclass ContinuedFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ContinuedFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_dcbc7ce2902fa136] = env->getMethodID(cls, "evaluate", "(D)D");
          mids$[mid_evaluate_86ffecc08a63eff0] = env->getMethodID(cls, "evaluate", "(DD)D");
          mids$[mid_evaluate_948617e69b66e15d] = env->getMethodID(cls, "evaluate", "(DI)D");
          mids$[mid_evaluate_aa604e695a59526c] = env->getMethodID(cls, "evaluate", "(DDI)D");
          mids$[mid_getA_60d7624725a52590] = env->getMethodID(cls, "getA", "(ID)D");
          mids$[mid_getB_60d7624725a52590] = env->getMethodID(cls, "getB", "(ID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ContinuedFraction::evaluate(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_dcbc7ce2902fa136], a0);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_86ffecc08a63eff0], a0, a1);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_948617e69b66e15d], a0, a1);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jdouble a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_aa604e695a59526c], a0, a1, a2);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_ContinuedFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ContinuedFraction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ContinuedFraction_evaluate(t_ContinuedFraction *self, PyObject *args);

      static PyMethodDef t_ContinuedFraction__methods_[] = {
        DECLARE_METHOD(t_ContinuedFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ContinuedFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ContinuedFraction, evaluate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ContinuedFraction)[] = {
        { Py_tp_methods, t_ContinuedFraction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ContinuedFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ContinuedFraction, t_ContinuedFraction, ContinuedFraction);

      void t_ContinuedFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(ContinuedFraction), &PY_TYPE_DEF(ContinuedFraction), module, "ContinuedFraction", 0);
      }

      void t_ContinuedFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "class_", make_descriptor(ContinuedFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "wrapfn_", make_descriptor(t_ContinuedFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ContinuedFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ContinuedFraction::initializeClass, 1)))
          return NULL;
        return t_ContinuedFraction::wrap_Object(ContinuedFraction(((t_ContinuedFraction *) arg)->object.this$));
      }
      static PyObject *t_ContinuedFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ContinuedFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ContinuedFraction_evaluate(t_ContinuedFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/NelderMeadSimplex.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *NelderMeadSimplex::class$ = NULL;
            jmethodID *NelderMeadSimplex::mids$ = NULL;
            bool NelderMeadSimplex::live$ = false;

            jclass NelderMeadSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/NelderMeadSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_init$_a0befc7f3dc19e41] = env->getMethodID(cls, "<init>", "([[D)V");
                mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_init$_bbd94d386660acaa] = env->getMethodID(cls, "<init>", "([DDDDD)V");
                mids$[mid_init$_6e30b20e45c3cf51] = env->getMethodID(cls, "<init>", "([[DDDDD)V");
                mids$[mid_init$_383392bb694f45fb] = env->getMethodID(cls, "<init>", "(IDDDD)V");
                mids$[mid_init$_ae09a068540f250e] = env->getMethodID(cls, "<init>", "(IDDDDD)V");
                mids$[mid_iterate_eb88542b81649386] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NelderMeadSimplex::NelderMeadSimplex(const JArray< jdouble > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_a0befc7f3dc19e41, a0.this$)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< jdouble > & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_bbd94d386660acaa, a0.this$, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(const JArray< JArray< jdouble > > & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_6e30b20e45c3cf51, a0.this$, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_383392bb694f45fb, a0, a1, a2, a3, a4)) {}

            NelderMeadSimplex::NelderMeadSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_ae09a068540f250e, a0, a1, a2, a3, a4, a5)) {}

            void NelderMeadSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_eb88542b81649386], a0.this$, a1.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_NelderMeadSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NelderMeadSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static int t_NelderMeadSimplex_init_(t_NelderMeadSimplex *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NelderMeadSimplex_iterate(t_NelderMeadSimplex *self, PyObject *args);

            static PyMethodDef t_NelderMeadSimplex__methods_[] = {
              DECLARE_METHOD(t_NelderMeadSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NelderMeadSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NelderMeadSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NelderMeadSimplex)[] = {
              { Py_tp_methods, t_NelderMeadSimplex__methods_ },
              { Py_tp_init, (void *) t_NelderMeadSimplex_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NelderMeadSimplex)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex),
              NULL
            };

            DEFINE_TYPE(NelderMeadSimplex, t_NelderMeadSimplex, NelderMeadSimplex);

            void t_NelderMeadSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(NelderMeadSimplex), &PY_TYPE_DEF(NelderMeadSimplex), module, "NelderMeadSimplex", 0);
            }

            void t_NelderMeadSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "class_", make_descriptor(NelderMeadSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "wrapfn_", make_descriptor(t_NelderMeadSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NelderMeadSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NelderMeadSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NelderMeadSimplex::initializeClass, 1)))
                return NULL;
              return t_NelderMeadSimplex::wrap_Object(NelderMeadSimplex(((t_NelderMeadSimplex *) arg)->object.this$));
            }
            static PyObject *t_NelderMeadSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NelderMeadSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_NelderMeadSimplex_init_(t_NelderMeadSimplex *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[D", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jint a0;
                  jdouble a1;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "ID", &a0, &a1))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  jdouble a5;
                  NelderMeadSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = NelderMeadSimplex(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    break;
                  }
                }
               default:
               err:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_NelderMeadSimplex_iterate(t_NelderMeadSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(NelderMeadSimplex), (PyObject *) self, "iterate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Arrays.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/util/Spliterator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/util/stream/DoubleStream.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Arrays::class$ = NULL;
    jmethodID *Arrays::mids$ = NULL;
    bool Arrays::live$ = false;

    jclass Arrays::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Arrays");

        mids$ = new jmethodID[max_mid];
        mids$[mid_asList_91eee740d34e4dd1] = env->getStaticMethodID(cls, "asList", "([Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_binarySearch_c4ad8ddc2dcf759a] = env->getStaticMethodID(cls, "binarySearch", "([BB)I");
        mids$[mid_binarySearch_98510c04818c1ad3] = env->getStaticMethodID(cls, "binarySearch", "([CC)I");
        mids$[mid_binarySearch_a3030c572afb3940] = env->getStaticMethodID(cls, "binarySearch", "([DD)I");
        mids$[mid_binarySearch_832e72875e588366] = env->getStaticMethodID(cls, "binarySearch", "([FF)I");
        mids$[mid_binarySearch_6441a212c84d742e] = env->getStaticMethodID(cls, "binarySearch", "([II)I");
        mids$[mid_binarySearch_abe451b22b543e7c] = env->getStaticMethodID(cls, "binarySearch", "([JJ)I");
        mids$[mid_binarySearch_f457d130da7a122c] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;)I");
        mids$[mid_binarySearch_efdce0b654eae838] = env->getStaticMethodID(cls, "binarySearch", "([SS)I");
        mids$[mid_binarySearch_ba581c3446cdedde] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_binarySearch_2e4468b42ad2e92a] = env->getStaticMethodID(cls, "binarySearch", "([BIIB)I");
        mids$[mid_binarySearch_2396840d93921fdd] = env->getStaticMethodID(cls, "binarySearch", "([CIIC)I");
        mids$[mid_binarySearch_17d258da50eea9b2] = env->getStaticMethodID(cls, "binarySearch", "([DIID)I");
        mids$[mid_binarySearch_137690042f74d9a2] = env->getStaticMethodID(cls, "binarySearch", "([FIIF)I");
        mids$[mid_binarySearch_563531b00cef4ad4] = env->getStaticMethodID(cls, "binarySearch", "([IIII)I");
        mids$[mid_binarySearch_05740ccb89aaba05] = env->getStaticMethodID(cls, "binarySearch", "([JIIJ)I");
        mids$[mid_binarySearch_c968ba85508f01e0] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;)I");
        mids$[mid_binarySearch_bd74c9cf169df43c] = env->getStaticMethodID(cls, "binarySearch", "([SIIS)I");
        mids$[mid_binarySearch_542f7aaab06af11f] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_compare_84b6632266939e78] = env->getStaticMethodID(cls, "compare", "([B[B)I");
        mids$[mid_compare_82457a1c4f0555d2] = env->getStaticMethodID(cls, "compare", "([C[C)I");
        mids$[mid_compare_2cc84667d6dc200c] = env->getStaticMethodID(cls, "compare", "([D[D)I");
        mids$[mid_compare_75b959e694160751] = env->getStaticMethodID(cls, "compare", "([F[F)I");
        mids$[mid_compare_779c476bcabb05f3] = env->getStaticMethodID(cls, "compare", "([I[I)I");
        mids$[mid_compare_0c254c236f25ce58] = env->getStaticMethodID(cls, "compare", "([J[J)I");
        mids$[mid_compare_f87cbcbb8ab0d58e] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Comparable;[Ljava/lang/Comparable;)I");
        mids$[mid_compare_aca9966913a62036] = env->getStaticMethodID(cls, "compare", "([S[S)I");
        mids$[mid_compare_c104705e7c2f87b2] = env->getStaticMethodID(cls, "compare", "([Z[Z)I");
        mids$[mid_compare_215af65854501324] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_compare_ef4525b3ea6ec3d8] = env->getStaticMethodID(cls, "compare", "([BII[BII)I");
        mids$[mid_compare_f02426823f73eb48] = env->getStaticMethodID(cls, "compare", "([CII[CII)I");
        mids$[mid_compare_a408badae3b04309] = env->getStaticMethodID(cls, "compare", "([DII[DII)I");
        mids$[mid_compare_08f9f20529d1d5ac] = env->getStaticMethodID(cls, "compare", "([FII[FII)I");
        mids$[mid_compare_de23402141452276] = env->getStaticMethodID(cls, "compare", "([III[III)I");
        mids$[mid_compare_b963884fe5f1069c] = env->getStaticMethodID(cls, "compare", "([JII[JII)I");
        mids$[mid_compare_3bfbd38eb8da4619] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Comparable;II[Ljava/lang/Comparable;II)I");
        mids$[mid_compare_5c5d7010fbe9c730] = env->getStaticMethodID(cls, "compare", "([SII[SII)I");
        mids$[mid_compare_8e89888c7c0a5baa] = env->getStaticMethodID(cls, "compare", "([ZII[ZII)I");
        mids$[mid_compare_3a4ca88e0a87af08] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I");
        mids$[mid_compareUnsigned_84b6632266939e78] = env->getStaticMethodID(cls, "compareUnsigned", "([B[B)I");
        mids$[mid_compareUnsigned_779c476bcabb05f3] = env->getStaticMethodID(cls, "compareUnsigned", "([I[I)I");
        mids$[mid_compareUnsigned_0c254c236f25ce58] = env->getStaticMethodID(cls, "compareUnsigned", "([J[J)I");
        mids$[mid_compareUnsigned_aca9966913a62036] = env->getStaticMethodID(cls, "compareUnsigned", "([S[S)I");
        mids$[mid_compareUnsigned_ef4525b3ea6ec3d8] = env->getStaticMethodID(cls, "compareUnsigned", "([BII[BII)I");
        mids$[mid_compareUnsigned_de23402141452276] = env->getStaticMethodID(cls, "compareUnsigned", "([III[III)I");
        mids$[mid_compareUnsigned_b963884fe5f1069c] = env->getStaticMethodID(cls, "compareUnsigned", "([JII[JII)I");
        mids$[mid_compareUnsigned_5c5d7010fbe9c730] = env->getStaticMethodID(cls, "compareUnsigned", "([SII[SII)I");
        mids$[mid_copyOf_ae4a40e983f6ebb6] = env->getStaticMethodID(cls, "copyOf", "([BI)[B");
        mids$[mid_copyOf_d7b726003e19f9ca] = env->getStaticMethodID(cls, "copyOf", "([CI)[C");
        mids$[mid_copyOf_118f9c80345bfb12] = env->getStaticMethodID(cls, "copyOf", "([DI)[D");
        mids$[mid_copyOf_8123fa12aba6a708] = env->getStaticMethodID(cls, "copyOf", "([FI)[F");
        mids$[mid_copyOf_2bc69b21fdbebdf7] = env->getStaticMethodID(cls, "copyOf", "([II)[I");
        mids$[mid_copyOf_65be87c101e2ee40] = env->getStaticMethodID(cls, "copyOf", "([JI)[J");
        mids$[mid_copyOf_857aa64d6a0ab11c] = env->getStaticMethodID(cls, "copyOf", "([Ljava/lang/Object;I)[Ljava/lang/Object;");
        mids$[mid_copyOf_e4f2e0c31eafa84d] = env->getStaticMethodID(cls, "copyOf", "([SI)[S");
        mids$[mid_copyOf_bec3f319a180df09] = env->getStaticMethodID(cls, "copyOf", "([ZI)[Z");
        mids$[mid_copyOf_a9740fbf7d8c8b90] = env->getStaticMethodID(cls, "copyOf", "([Ljava/lang/Object;ILjava/lang/Class;)[Ljava/lang/Object;");
        mids$[mid_copyOfRange_3d965b793c043aaa] = env->getStaticMethodID(cls, "copyOfRange", "([BII)[B");
        mids$[mid_copyOfRange_6515cdf560562876] = env->getStaticMethodID(cls, "copyOfRange", "([CII)[C");
        mids$[mid_copyOfRange_41a59b6c86e2e047] = env->getStaticMethodID(cls, "copyOfRange", "([DII)[D");
        mids$[mid_copyOfRange_4b5b54a45e627a13] = env->getStaticMethodID(cls, "copyOfRange", "([FII)[F");
        mids$[mid_copyOfRange_338a7ae562dffaf7] = env->getStaticMethodID(cls, "copyOfRange", "([III)[I");
        mids$[mid_copyOfRange_6bbf894c3edb4072] = env->getStaticMethodID(cls, "copyOfRange", "([JII)[J");
        mids$[mid_copyOfRange_20bbba8a445cccda] = env->getStaticMethodID(cls, "copyOfRange", "([Ljava/lang/Object;II)[Ljava/lang/Object;");
        mids$[mid_copyOfRange_23276f508b9e7e9c] = env->getStaticMethodID(cls, "copyOfRange", "([SII)[S");
        mids$[mid_copyOfRange_af0fef9ce70a921e] = env->getStaticMethodID(cls, "copyOfRange", "([ZII)[Z");
        mids$[mid_copyOfRange_1182d1e139cbdf30] = env->getStaticMethodID(cls, "copyOfRange", "([Ljava/lang/Object;IILjava/lang/Class;)[Ljava/lang/Object;");
        mids$[mid_deepEquals_f3993dcfc1c3b1fa] = env->getStaticMethodID(cls, "deepEquals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z");
        mids$[mid_deepHashCode_121fcd48be00be7e] = env->getStaticMethodID(cls, "deepHashCode", "([Ljava/lang/Object;)I");
        mids$[mid_deepToString_cfb7bfc1e966aa1c] = env->getStaticMethodID(cls, "deepToString", "([Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_equals_026a317eb6da308c] = env->getStaticMethodID(cls, "equals", "([B[B)Z");
        mids$[mid_equals_cd7cb537d89cc9c3] = env->getStaticMethodID(cls, "equals", "([C[C)Z");
        mids$[mid_equals_b013f01484dd6b19] = env->getStaticMethodID(cls, "equals", "([D[D)Z");
        mids$[mid_equals_b2dc548396b699a5] = env->getStaticMethodID(cls, "equals", "([F[F)Z");
        mids$[mid_equals_f8ca155cbadf2a73] = env->getStaticMethodID(cls, "equals", "([I[I)Z");
        mids$[mid_equals_739455d93f7b2089] = env->getStaticMethodID(cls, "equals", "([J[J)Z");
        mids$[mid_equals_f3993dcfc1c3b1fa] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z");
        mids$[mid_equals_266b3ca27c6bb5ac] = env->getStaticMethodID(cls, "equals", "([S[S)Z");
        mids$[mid_equals_88c8aa477582c988] = env->getStaticMethodID(cls, "equals", "([Z[Z)Z");
        mids$[mid_equals_eaed5533f702830d] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)Z");
        mids$[mid_equals_6b0ee56638bbd69c] = env->getStaticMethodID(cls, "equals", "([BII[BII)Z");
        mids$[mid_equals_f005d57004f4a562] = env->getStaticMethodID(cls, "equals", "([CII[CII)Z");
        mids$[mid_equals_846d53e78e91f01f] = env->getStaticMethodID(cls, "equals", "([DII[DII)Z");
        mids$[mid_equals_b72fa4513f2ea00e] = env->getStaticMethodID(cls, "equals", "([FII[FII)Z");
        mids$[mid_equals_1a33d3a232b2cebf] = env->getStaticMethodID(cls, "equals", "([III[III)Z");
        mids$[mid_equals_af2688909c03ed67] = env->getStaticMethodID(cls, "equals", "([JII[JII)Z");
        mids$[mid_equals_73a7ccae51d97096] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;II[Ljava/lang/Object;II)Z");
        mids$[mid_equals_b5d08924f509fce8] = env->getStaticMethodID(cls, "equals", "([SII[SII)Z");
        mids$[mid_equals_e166215211f00b71] = env->getStaticMethodID(cls, "equals", "([ZII[ZII)Z");
        mids$[mid_equals_ea4c2f8e6a4abf6d] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)Z");
        mids$[mid_fill_bc8476272e680cc5] = env->getStaticMethodID(cls, "fill", "([BB)V");
        mids$[mid_fill_d8adf6972bc02daf] = env->getStaticMethodID(cls, "fill", "([CC)V");
        mids$[mid_fill_bc1ff02eb3693128] = env->getStaticMethodID(cls, "fill", "([DD)V");
        mids$[mid_fill_21da24c38033d9e2] = env->getStaticMethodID(cls, "fill", "([FF)V");
        mids$[mid_fill_231c00a4687cef2d] = env->getStaticMethodID(cls, "fill", "([ZZ)V");
        mids$[mid_fill_079c7069c062d067] = env->getStaticMethodID(cls, "fill", "([II)V");
        mids$[mid_fill_000c1db688cda882] = env->getStaticMethodID(cls, "fill", "([Ljava/lang/Object;Ljava/lang/Object;)V");
        mids$[mid_fill_92f1f874b4a9a29e] = env->getStaticMethodID(cls, "fill", "([JJ)V");
        mids$[mid_fill_32b9eb60b6b9d068] = env->getStaticMethodID(cls, "fill", "([SS)V");
        mids$[mid_fill_817b7b7e5c027170] = env->getStaticMethodID(cls, "fill", "([CIIC)V");
        mids$[mid_fill_13d627b4ceed0170] = env->getStaticMethodID(cls, "fill", "([ZIIZ)V");
        mids$[mid_fill_98615a86bce41df2] = env->getStaticMethodID(cls, "fill", "([BIIB)V");
        mids$[mid_fill_356cbfa06d750831] = env->getStaticMethodID(cls, "fill", "([DIID)V");
        mids$[mid_fill_975818087f58b4c7] = env->getStaticMethodID(cls, "fill", "([FIIF)V");
        mids$[mid_fill_646e795ecf2750c6] = env->getStaticMethodID(cls, "fill", "([IIII)V");
        mids$[mid_fill_a62dba4a0613efd9] = env->getStaticMethodID(cls, "fill", "([Ljava/lang/Object;IILjava/lang/Object;)V");
        mids$[mid_fill_9e36d83bf1c4b0d5] = env->getStaticMethodID(cls, "fill", "([JIIJ)V");
        mids$[mid_fill_c62fc3ce0ae16133] = env->getStaticMethodID(cls, "fill", "([SIIS)V");
        mids$[mid_hashCode_5702323b606d072b] = env->getStaticMethodID(cls, "hashCode", "([B)I");
        mids$[mid_hashCode_881698425abcbe49] = env->getStaticMethodID(cls, "hashCode", "([C)I");
        mids$[mid_hashCode_e00f7ba4becc2a21] = env->getStaticMethodID(cls, "hashCode", "([D)I");
        mids$[mid_hashCode_2a346f51a25907b9] = env->getStaticMethodID(cls, "hashCode", "([F)I");
        mids$[mid_hashCode_5741cb0fe93805c9] = env->getStaticMethodID(cls, "hashCode", "([I)I");
        mids$[mid_hashCode_a5e549ea20188e94] = env->getStaticMethodID(cls, "hashCode", "([J)I");
        mids$[mid_hashCode_121fcd48be00be7e] = env->getStaticMethodID(cls, "hashCode", "([Ljava/lang/Object;)I");
        mids$[mid_hashCode_0c3a944e3c2cc22f] = env->getStaticMethodID(cls, "hashCode", "([S)I");
        mids$[mid_hashCode_a6356d5b22d74928] = env->getStaticMethodID(cls, "hashCode", "([Z)I");
        mids$[mid_mismatch_84b6632266939e78] = env->getStaticMethodID(cls, "mismatch", "([B[B)I");
        mids$[mid_mismatch_82457a1c4f0555d2] = env->getStaticMethodID(cls, "mismatch", "([C[C)I");
        mids$[mid_mismatch_2cc84667d6dc200c] = env->getStaticMethodID(cls, "mismatch", "([D[D)I");
        mids$[mid_mismatch_75b959e694160751] = env->getStaticMethodID(cls, "mismatch", "([F[F)I");
        mids$[mid_mismatch_779c476bcabb05f3] = env->getStaticMethodID(cls, "mismatch", "([I[I)I");
        mids$[mid_mismatch_0c254c236f25ce58] = env->getStaticMethodID(cls, "mismatch", "([J[J)I");
        mids$[mid_mismatch_60bcbc81ff0efd8b] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;[Ljava/lang/Object;)I");
        mids$[mid_mismatch_aca9966913a62036] = env->getStaticMethodID(cls, "mismatch", "([S[S)I");
        mids$[mid_mismatch_c104705e7c2f87b2] = env->getStaticMethodID(cls, "mismatch", "([Z[Z)I");
        mids$[mid_mismatch_215af65854501324] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_mismatch_ef4525b3ea6ec3d8] = env->getStaticMethodID(cls, "mismatch", "([BII[BII)I");
        mids$[mid_mismatch_f02426823f73eb48] = env->getStaticMethodID(cls, "mismatch", "([CII[CII)I");
        mids$[mid_mismatch_a408badae3b04309] = env->getStaticMethodID(cls, "mismatch", "([DII[DII)I");
        mids$[mid_mismatch_08f9f20529d1d5ac] = env->getStaticMethodID(cls, "mismatch", "([FII[FII)I");
        mids$[mid_mismatch_de23402141452276] = env->getStaticMethodID(cls, "mismatch", "([III[III)I");
        mids$[mid_mismatch_b963884fe5f1069c] = env->getStaticMethodID(cls, "mismatch", "([JII[JII)I");
        mids$[mid_mismatch_b9c6adc3d73702b5] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;II[Ljava/lang/Object;II)I");
        mids$[mid_mismatch_5c5d7010fbe9c730] = env->getStaticMethodID(cls, "mismatch", "([SII[SII)I");
        mids$[mid_mismatch_8e89888c7c0a5baa] = env->getStaticMethodID(cls, "mismatch", "([ZII[ZII)I");
        mids$[mid_mismatch_3a4ca88e0a87af08] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I");
        mids$[mid_parallelSort_20012b3010a39c05] = env->getStaticMethodID(cls, "parallelSort", "([B)V");
        mids$[mid_parallelSort_3534e8e092c162a5] = env->getStaticMethodID(cls, "parallelSort", "([C)V");
        mids$[mid_parallelSort_fa9d415d19f69361] = env->getStaticMethodID(cls, "parallelSort", "([D)V");
        mids$[mid_parallelSort_21ede3e7b6965218] = env->getStaticMethodID(cls, "parallelSort", "([F)V");
        mids$[mid_parallelSort_d147d7ce001e2d45] = env->getStaticMethodID(cls, "parallelSort", "([I)V");
        mids$[mid_parallelSort_c57942992c8467a1] = env->getStaticMethodID(cls, "parallelSort", "([J)V");
        mids$[mid_parallelSort_8b9e3b25fc2e7c74] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Comparable;)V");
        mids$[mid_parallelSort_3655c5425504ab58] = env->getStaticMethodID(cls, "parallelSort", "([S)V");
        mids$[mid_parallelSort_9ab86e5cbbe7c5e6] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Object;Ljava/util/Comparator;)V");
        mids$[mid_parallelSort_d7af9aedcdd3845b] = env->getStaticMethodID(cls, "parallelSort", "([BII)V");
        mids$[mid_parallelSort_44aecef33af91018] = env->getStaticMethodID(cls, "parallelSort", "([CII)V");
        mids$[mid_parallelSort_12aca76acb10f1af] = env->getStaticMethodID(cls, "parallelSort", "([DII)V");
        mids$[mid_parallelSort_dc2b53a3ac44e435] = env->getStaticMethodID(cls, "parallelSort", "([FII)V");
        mids$[mid_parallelSort_503826ec0042272d] = env->getStaticMethodID(cls, "parallelSort", "([III)V");
        mids$[mid_parallelSort_7ca547243f3503b4] = env->getStaticMethodID(cls, "parallelSort", "([JII)V");
        mids$[mid_parallelSort_5338de95c731398e] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Comparable;II)V");
        mids$[mid_parallelSort_3556e58eaf65c475] = env->getStaticMethodID(cls, "parallelSort", "([SII)V");
        mids$[mid_parallelSort_b2df4aef966a2aa2] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Object;IILjava/util/Comparator;)V");
        mids$[mid_sort_20012b3010a39c05] = env->getStaticMethodID(cls, "sort", "([B)V");
        mids$[mid_sort_3534e8e092c162a5] = env->getStaticMethodID(cls, "sort", "([C)V");
        mids$[mid_sort_fa9d415d19f69361] = env->getStaticMethodID(cls, "sort", "([D)V");
        mids$[mid_sort_21ede3e7b6965218] = env->getStaticMethodID(cls, "sort", "([F)V");
        mids$[mid_sort_d147d7ce001e2d45] = env->getStaticMethodID(cls, "sort", "([I)V");
        mids$[mid_sort_c57942992c8467a1] = env->getStaticMethodID(cls, "sort", "([J)V");
        mids$[mid_sort_c87c65058a9c47e3] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;)V");
        mids$[mid_sort_3655c5425504ab58] = env->getStaticMethodID(cls, "sort", "([S)V");
        mids$[mid_sort_9ab86e5cbbe7c5e6] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;Ljava/util/Comparator;)V");
        mids$[mid_sort_d7af9aedcdd3845b] = env->getStaticMethodID(cls, "sort", "([BII)V");
        mids$[mid_sort_44aecef33af91018] = env->getStaticMethodID(cls, "sort", "([CII)V");
        mids$[mid_sort_12aca76acb10f1af] = env->getStaticMethodID(cls, "sort", "([DII)V");
        mids$[mid_sort_dc2b53a3ac44e435] = env->getStaticMethodID(cls, "sort", "([FII)V");
        mids$[mid_sort_503826ec0042272d] = env->getStaticMethodID(cls, "sort", "([III)V");
        mids$[mid_sort_7ca547243f3503b4] = env->getStaticMethodID(cls, "sort", "([JII)V");
        mids$[mid_sort_1fdb20abe48928a1] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;II)V");
        mids$[mid_sort_3556e58eaf65c475] = env->getStaticMethodID(cls, "sort", "([SII)V");
        mids$[mid_sort_b2df4aef966a2aa2] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;IILjava/util/Comparator;)V");
        mids$[mid_spliterator_952aa15bfacf0020] = env->getStaticMethodID(cls, "spliterator", "([D)Ljava/util/Spliterator$OfDouble;");
        mids$[mid_spliterator_03a0a7d428b35f86] = env->getStaticMethodID(cls, "spliterator", "([I)Ljava/util/Spliterator$OfInt;");
        mids$[mid_spliterator_e5b642f4c4abcba5] = env->getStaticMethodID(cls, "spliterator", "([J)Ljava/util/Spliterator$OfLong;");
        mids$[mid_spliterator_e2472520832b7cfe] = env->getStaticMethodID(cls, "spliterator", "([Ljava/lang/Object;)Ljava/util/Spliterator;");
        mids$[mid_spliterator_0eacd606c2470ccc] = env->getStaticMethodID(cls, "spliterator", "([DII)Ljava/util/Spliterator$OfDouble;");
        mids$[mid_spliterator_e728be19940ebea9] = env->getStaticMethodID(cls, "spliterator", "([III)Ljava/util/Spliterator$OfInt;");
        mids$[mid_spliterator_81028deba53cbac7] = env->getStaticMethodID(cls, "spliterator", "([JII)Ljava/util/Spliterator$OfLong;");
        mids$[mid_spliterator_6a1dff014c98f1b1] = env->getStaticMethodID(cls, "spliterator", "([Ljava/lang/Object;II)Ljava/util/Spliterator;");
        mids$[mid_stream_9158f17504e0009c] = env->getStaticMethodID(cls, "stream", "([D)Ljava/util/stream/DoubleStream;");
        mids$[mid_stream_fcdf5e804d048ff5] = env->getStaticMethodID(cls, "stream", "([Ljava/lang/Object;)Ljava/util/stream/Stream;");
        mids$[mid_stream_3da482bb0f3852bc] = env->getStaticMethodID(cls, "stream", "([DII)Ljava/util/stream/DoubleStream;");
        mids$[mid_stream_ca8bd8c58bc13a4f] = env->getStaticMethodID(cls, "stream", "([Ljava/lang/Object;II)Ljava/util/stream/Stream;");
        mids$[mid_toString_3c918391581f53ea] = env->getStaticMethodID(cls, "toString", "([B)Ljava/lang/String;");
        mids$[mid_toString_1ecedce87d38e8f2] = env->getStaticMethodID(cls, "toString", "([C)Ljava/lang/String;");
        mids$[mid_toString_26f9cd70e2dc05e5] = env->getStaticMethodID(cls, "toString", "([D)Ljava/lang/String;");
        mids$[mid_toString_00834e5ebcc13233] = env->getStaticMethodID(cls, "toString", "([F)Ljava/lang/String;");
        mids$[mid_toString_73683ad393ccda19] = env->getStaticMethodID(cls, "toString", "([I)Ljava/lang/String;");
        mids$[mid_toString_058218907940d62f] = env->getStaticMethodID(cls, "toString", "([J)Ljava/lang/String;");
        mids$[mid_toString_cfb7bfc1e966aa1c] = env->getStaticMethodID(cls, "toString", "([Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_toString_c88f17bca25df529] = env->getStaticMethodID(cls, "toString", "([S)Ljava/lang/String;");
        mids$[mid_toString_75b68f16093227a4] = env->getStaticMethodID(cls, "toString", "([Z)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::List Arrays::asList(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_asList_91eee740d34e4dd1], a0.this$));
    }

    jint Arrays::binarySearch(const JArray< jbyte > & a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_c4ad8ddc2dcf759a], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jchar > & a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_98510c04818c1ad3], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jdouble > & a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_a3030c572afb3940], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jfloat > & a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_832e72875e588366], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_6441a212c84d742e], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jlong > & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_abe451b22b543e7c], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_f457d130da7a122c], a0.this$, a1.this$);
    }

    jint Arrays::binarySearch(const JArray< jshort > & a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_efdce0b654eae838], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_ba581c3446cdedde], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::binarySearch(const JArray< jbyte > & a0, jint a1, jint a2, jbyte a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_2e4468b42ad2e92a], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jchar > & a0, jint a1, jint a2, jchar a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_2396840d93921fdd], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_17d258da50eea9b2], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jfloat > & a0, jint a1, jint a2, jfloat a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_137690042f74d9a2], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jint > & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_563531b00cef4ad4], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jlong > & a0, jint a1, jint a2, jlong a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_05740ccb89aaba05], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_c968ba85508f01e0], a0.this$, a1, a2, a3.this$);
    }

    jint Arrays::binarySearch(const JArray< jshort > & a0, jint a1, jint a2, jshort a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_bd74c9cf169df43c], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3, const ::java::util::Comparator & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_542f7aaab06af11f], a0.this$, a1, a2, a3.this$, a4.this$);
    }

    jint Arrays::compare(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_84b6632266939e78], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_82457a1c4f0555d2], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_2cc84667d6dc200c], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_75b959e694160751], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_779c476bcabb05f3], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_0c254c236f25ce58], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< ::java::lang::Comparable > & a0, const JArray< ::java::lang::Comparable > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_f87cbcbb8ab0d58e], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_aca9966913a62036], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_c104705e7c2f87b2], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_215af65854501324], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::compare(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_ef4525b3ea6ec3d8], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_f02426823f73eb48], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_a408badae3b04309], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_08f9f20529d1d5ac], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_de23402141452276], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_b963884fe5f1069c], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< ::java::lang::Comparable > & a0, jint a1, jint a2, const JArray< ::java::lang::Comparable > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_3bfbd38eb8da4619], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_5c5d7010fbe9c730], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_8e89888c7c0a5baa], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_3a4ca88e0a87af08], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_84b6632266939e78], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_779c476bcabb05f3], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_0c254c236f25ce58], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_aca9966913a62036], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_ef4525b3ea6ec3d8], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_de23402141452276], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_b963884fe5f1069c], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_5c5d7010fbe9c730], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    JArray< jbyte > Arrays::copyOf(const JArray< jbyte > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jbyte >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_ae4a40e983f6ebb6], a0.this$, a1));
    }

    JArray< jchar > Arrays::copyOf(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_d7b726003e19f9ca], a0.this$, a1));
    }

    JArray< jdouble > Arrays::copyOf(const JArray< jdouble > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_118f9c80345bfb12], a0.this$, a1));
    }

    JArray< jfloat > Arrays::copyOf(const JArray< jfloat > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jfloat >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_8123fa12aba6a708], a0.this$, a1));
    }

    JArray< jint > Arrays::copyOf(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_2bc69b21fdbebdf7], a0.this$, a1));
    }

    JArray< jlong > Arrays::copyOf(const JArray< jlong > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jlong >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_65be87c101e2ee40], a0.this$, a1));
    }

    JArray< ::java::lang::Object > Arrays::copyOf(const JArray< ::java::lang::Object > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_857aa64d6a0ab11c], a0.this$, a1));
    }

    JArray< jshort > Arrays::copyOf(const JArray< jshort > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jshort >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_e4f2e0c31eafa84d], a0.this$, a1));
    }

    JArray< jboolean > Arrays::copyOf(const JArray< jboolean > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jboolean >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_bec3f319a180df09], a0.this$, a1));
    }

    JArray< ::java::lang::Object > Arrays::copyOf(const JArray< ::java::lang::Object > & a0, jint a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_a9740fbf7d8c8b90], a0.this$, a1, a2.this$));
    }

    JArray< jbyte > Arrays::copyOfRange(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jbyte >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_3d965b793c043aaa], a0.this$, a1, a2));
    }

    JArray< jchar > Arrays::copyOfRange(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_6515cdf560562876], a0.this$, a1, a2));
    }

    JArray< jdouble > Arrays::copyOfRange(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_41a59b6c86e2e047], a0.this$, a1, a2));
    }

    JArray< jfloat > Arrays::copyOfRange(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jfloat >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_4b5b54a45e627a13], a0.this$, a1, a2));
    }

    JArray< jint > Arrays::copyOfRange(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_338a7ae562dffaf7], a0.this$, a1, a2));
    }

    JArray< jlong > Arrays::copyOfRange(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jlong >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_6bbf894c3edb4072], a0.this$, a1, a2));
    }

    JArray< ::java::lang::Object > Arrays::copyOfRange(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_20bbba8a445cccda], a0.this$, a1, a2));
    }

    JArray< jshort > Arrays::copyOfRange(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jshort >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_23276f508b9e7e9c], a0.this$, a1, a2));
    }

    JArray< jboolean > Arrays::copyOfRange(const JArray< jboolean > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jboolean >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_af0fef9ce70a921e], a0.this$, a1, a2));
    }

    JArray< ::java::lang::Object > Arrays::copyOfRange(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Class & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_1182d1e139cbdf30], a0.this$, a1, a2, a3.this$));
    }

    jboolean Arrays::deepEquals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_deepEquals_f3993dcfc1c3b1fa], a0.this$, a1.this$);
    }

    jint Arrays::deepHashCode(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_deepHashCode_121fcd48be00be7e], a0.this$);
    }

    ::java::lang::String Arrays::deepToString(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_deepToString_cfb7bfc1e966aa1c], a0.this$));
    }

    jboolean Arrays::equals(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_026a317eb6da308c], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_cd7cb537d89cc9c3], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_b013f01484dd6b19], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_b2dc548396b699a5], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_f8ca155cbadf2a73], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_739455d93f7b2089], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_f3993dcfc1c3b1fa], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_266b3ca27c6bb5ac], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_88c8aa477582c988], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_eaed5533f702830d], a0.this$, a1.this$, a2.this$);
    }

    jboolean Arrays::equals(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_6b0ee56638bbd69c], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_f005d57004f4a562], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_846d53e78e91f01f], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_b72fa4513f2ea00e], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_1a33d3a232b2cebf], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_af2688909c03ed67], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_73a7ccae51d97096], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_b5d08924f509fce8], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_e166215211f00b71], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_ea4c2f8e6a4abf6d], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    void Arrays::fill(const JArray< jbyte > & a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_bc8476272e680cc5], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jchar > & a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_d8adf6972bc02daf], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jdouble > & a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_bc1ff02eb3693128], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jfloat > & a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_21da24c38033d9e2], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jboolean > & a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_231c00a4687cef2d], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_079c7069c062d067], a0.this$, a1);
    }

    void Arrays::fill(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_000c1db688cda882], a0.this$, a1.this$);
    }

    void Arrays::fill(const JArray< jlong > & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_92f1f874b4a9a29e], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jshort > & a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_32b9eb60b6b9d068], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jchar > & a0, jint a1, jint a2, jchar a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_817b7b7e5c027170], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jboolean > & a0, jint a1, jint a2, jboolean a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_13d627b4ceed0170], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jbyte > & a0, jint a1, jint a2, jbyte a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_98615a86bce41df2], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_356cbfa06d750831], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jfloat > & a0, jint a1, jint a2, jfloat a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_975818087f58b4c7], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jint > & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_646e795ecf2750c6], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_a62dba4a0613efd9], a0.this$, a1, a2, a3.this$);
    }

    void Arrays::fill(const JArray< jlong > & a0, jint a1, jint a2, jlong a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_9e36d83bf1c4b0d5], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jshort > & a0, jint a1, jint a2, jshort a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_c62fc3ce0ae16133], a0.this$, a1, a2, a3);
    }

    jint Arrays::hashCode(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_5702323b606d072b], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_881698425abcbe49], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_e00f7ba4becc2a21], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_2a346f51a25907b9], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_5741cb0fe93805c9], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_a5e549ea20188e94], a0.this$);
    }

    jint Arrays::hashCode(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_121fcd48be00be7e], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_0c3a944e3c2cc22f], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jboolean > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_a6356d5b22d74928], a0.this$);
    }

    jint Arrays::mismatch(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_84b6632266939e78], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_82457a1c4f0555d2], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_2cc84667d6dc200c], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_75b959e694160751], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_779c476bcabb05f3], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_0c254c236f25ce58], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_60bcbc81ff0efd8b], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_aca9966913a62036], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_c104705e7c2f87b2], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_215af65854501324], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::mismatch(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_ef4525b3ea6ec3d8], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_f02426823f73eb48], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_a408badae3b04309], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_08f9f20529d1d5ac], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_de23402141452276], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_b963884fe5f1069c], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_b9c6adc3d73702b5], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_5c5d7010fbe9c730], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_8e89888c7c0a5baa], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_3a4ca88e0a87af08], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    void Arrays::parallelSort(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_20012b3010a39c05], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_3534e8e092c162a5], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_fa9d415d19f69361], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_21ede3e7b6965218], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_d147d7ce001e2d45], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_c57942992c8467a1], a0.this$);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Comparable > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_8b9e3b25fc2e7c74], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_3655c5425504ab58], a0.this$);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Object > & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_9ab86e5cbbe7c5e6], a0.this$, a1.this$);
    }

    void Arrays::parallelSort(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_d7af9aedcdd3845b], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_44aecef33af91018], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_12aca76acb10f1af], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_dc2b53a3ac44e435], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_503826ec0042272d], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_7ca547243f3503b4], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Comparable > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_5338de95c731398e], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_3556e58eaf65c475], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::util::Comparator & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_b2df4aef966a2aa2], a0.this$, a1, a2, a3.this$);
    }

    void Arrays::sort(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_20012b3010a39c05], a0.this$);
    }

    void Arrays::sort(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_3534e8e092c162a5], a0.this$);
    }

    void Arrays::sort(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_fa9d415d19f69361], a0.this$);
    }

    void Arrays::sort(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_21ede3e7b6965218], a0.this$);
    }

    void Arrays::sort(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_d147d7ce001e2d45], a0.this$);
    }

    void Arrays::sort(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_c57942992c8467a1], a0.this$);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_c87c65058a9c47e3], a0.this$);
    }

    void Arrays::sort(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_3655c5425504ab58], a0.this$);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_9ab86e5cbbe7c5e6], a0.this$, a1.this$);
    }

    void Arrays::sort(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_d7af9aedcdd3845b], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_44aecef33af91018], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_12aca76acb10f1af], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_dc2b53a3ac44e435], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_503826ec0042272d], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_7ca547243f3503b4], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_1fdb20abe48928a1], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_3556e58eaf65c475], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::util::Comparator & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_b2df4aef966a2aa2], a0.this$, a1, a2, a3.this$);
    }

    ::java::util::Spliterator$OfDouble Arrays::spliterator(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfDouble(env->callStaticObjectMethod(cls, mids$[mid_spliterator_952aa15bfacf0020], a0.this$));
    }

    ::java::util::Spliterator$OfInt Arrays::spliterator(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfInt(env->callStaticObjectMethod(cls, mids$[mid_spliterator_03a0a7d428b35f86], a0.this$));
    }

    ::java::util::Spliterator$OfLong Arrays::spliterator(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfLong(env->callStaticObjectMethod(cls, mids$[mid_spliterator_e5b642f4c4abcba5], a0.this$));
    }

    ::java::util::Spliterator Arrays::spliterator(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator(env->callStaticObjectMethod(cls, mids$[mid_spliterator_e2472520832b7cfe], a0.this$));
    }

    ::java::util::Spliterator$OfDouble Arrays::spliterator(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfDouble(env->callStaticObjectMethod(cls, mids$[mid_spliterator_0eacd606c2470ccc], a0.this$, a1, a2));
    }

    ::java::util::Spliterator$OfInt Arrays::spliterator(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfInt(env->callStaticObjectMethod(cls, mids$[mid_spliterator_e728be19940ebea9], a0.this$, a1, a2));
    }

    ::java::util::Spliterator$OfLong Arrays::spliterator(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfLong(env->callStaticObjectMethod(cls, mids$[mid_spliterator_81028deba53cbac7], a0.this$, a1, a2));
    }

    ::java::util::Spliterator Arrays::spliterator(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator(env->callStaticObjectMethod(cls, mids$[mid_spliterator_6a1dff014c98f1b1], a0.this$, a1, a2));
    }

    ::java::util::stream::DoubleStream Arrays::stream(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_stream_9158f17504e0009c], a0.this$));
    }

    ::java::util::stream::Stream Arrays::stream(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_stream_fcdf5e804d048ff5], a0.this$));
    }

    ::java::util::stream::DoubleStream Arrays::stream(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_stream_3da482bb0f3852bc], a0.this$, a1, a2));
    }

    ::java::util::stream::Stream Arrays::stream(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_stream_ca8bd8c58bc13a4f], a0.this$, a1, a2));
    }

    ::java::lang::String Arrays::toString(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_3c918391581f53ea], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_1ecedce87d38e8f2], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_26f9cd70e2dc05e5], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_00834e5ebcc13233], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_73683ad393ccda19], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_058218907940d62f], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_cfb7bfc1e966aa1c], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_c88f17bca25df529], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jboolean > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_75b68f16093227a4], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Arrays_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_asList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_binarySearch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_copyOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_copyOfRange(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_deepEquals(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_deepHashCode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_deepToString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_equals(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_fill(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_hashCode(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_mismatch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_parallelSort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_sort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_spliterator(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_stream(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_toString(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Arrays__methods_[] = {
      DECLARE_METHOD(t_Arrays, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, asList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, binarySearch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, copyOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, copyOfRange, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepEquals, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepHashCode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepToString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, equals, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, fill, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, hashCode, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, mismatch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, parallelSort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, sort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, spliterator, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, stream, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, toString, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Arrays)[] = {
      { Py_tp_methods, t_Arrays__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Arrays)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Arrays, t_Arrays, Arrays);

    void t_Arrays::install(PyObject *module)
    {
      installType(&PY_TYPE(Arrays), &PY_TYPE_DEF(Arrays), module, "Arrays", 0);
    }

    void t_Arrays::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "class_", make_descriptor(Arrays::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "wrapfn_", make_descriptor(t_Arrays::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Arrays_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Arrays::initializeClass, 1)))
        return NULL;
      return t_Arrays::wrap_Object(Arrays(((t_Arrays *) arg)->object.this$));
    }
    static PyObject *t_Arrays_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Arrays::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Arrays_asList(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::asList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "asList", arg);
      return NULL;
    }

    static PyObject *t_Arrays_binarySearch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          jbyte a1;
          jint result;

          if (!parseArgs(args, "[BB", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jchar a1;
          jint result;

          if (!parseArgs(args, "[CC", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          jint result;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jfloat a1;
          jint result;

          if (!parseArgs(args, "[FF", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jlong a1;
          jint result;

          if (!parseArgs(args, "[JJ", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jshort a1;
          jint result;

          if (!parseArgs(args, "[SS", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[ooK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jbyte a3;
          jint result;

          if (!parseArgs(args, "[BIIB", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jchar a3;
          jint result;

          if (!parseArgs(args, "[CIIC", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;
          jint result;

          if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          jfloat a3;
          jint result;

          if (!parseArgs(args, "[FIIF", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint result;

          if (!parseArgs(args, "[IIII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[oIIo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          jlong a3;
          jint result;

          if (!parseArgs(args, "[JIIJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          jshort a3;
          jint result;

          if (!parseArgs(args, "[SIIS", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 5:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);
          ::java::util::Comparator a4((jobject) NULL);
          PyTypeObject **p4;
          jint result;

          if (!parseArgs(args, "[oIIoK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3, a4));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "binarySearch", args);
      return NULL;
    }

    static PyObject *t_Arrays_compare(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::java::lang::Comparable > a1((jobject) NULL);
          PyTypeObject **p1;
          jint result;

          if (!parseArgs(args, "[K[K", ::java::lang::Comparable::initializeClass, ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &p1, ::java::lang::t_Comparable::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::java::lang::Comparable > a3((jobject) NULL);
          PyTypeObject **p3;
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[KII[KII", ::java::lang::Comparable::initializeClass, ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &a2, &a3, &p3, ::java::lang::t_Comparable::parameters_, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jint result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5, a6));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Arrays_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Arrays_copyOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "[BI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          JArray< jfloat > result((jobject) NULL);

          if (!parseArgs(args, "[FI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          JArray< jint > result((jobject) NULL);

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          JArray< jlong > result((jobject) NULL);

          if (!parseArgs(args, "[JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          JArray< jshort > result((jobject) NULL);

          if (!parseArgs(args, "[SI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          JArray< jboolean > result((jobject) NULL);

          if (!parseArgs(args, "[ZI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          ::java::lang::Class a2((jobject) NULL);
          PyTypeObject **p2;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oIK", ::java::lang::Class::initializeClass, &a0, &a1, &a2, &p2, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1, a2));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError(type, "copyOf", args);
      return NULL;
    }

    static PyObject *t_Arrays_copyOfRange(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > result((jobject) NULL);

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > result((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > result((jobject) NULL);

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > result((jobject) NULL);

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > result((jobject) NULL);

          if (!parseArgs(args, "[ZII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Class a3((jobject) NULL);
          PyTypeObject **p3;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oIIK", ::java::lang::Class::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2, a3));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError(type, "copyOfRange", args);
      return NULL;
    }

    static PyObject *t_Arrays_deepEquals(PyTypeObject *type, PyObject *args)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      JArray< ::java::lang::Object > a1((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "[o[o", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepEquals(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "deepEquals", args);
      return NULL;
    }

    static PyObject *t_Arrays_deepHashCode(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepHashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "deepHashCode", arg);
      return NULL;
    }

    static PyObject *t_Arrays_deepToString(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepToString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "deepToString", arg);
      return NULL;
    }

    static PyObject *t_Arrays_equals(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[o[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[oII[oII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jboolean result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5, a6));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(type, "equals", args, 2);
    }

    static PyObject *t_Arrays_fill(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jboolean > a0((jobject) NULL);
          jboolean a1;

          if (!parseArgs(args, "[ZZ", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          jbyte a1;

          if (!parseArgs(args, "[BB", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jchar a1;

          if (!parseArgs(args, "[CC", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jfloat a1;

          if (!parseArgs(args, "[FF", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jlong a1;

          if (!parseArgs(args, "[JJ", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "[oo", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jshort a1;

          if (!parseArgs(args, "[SS", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jbyte a3;

          if (!parseArgs(args, "[BIIB", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          jfloat a3;

          if (!parseArgs(args, "[FIIF", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;

          if (!parseArgs(args, "[IIII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          jlong a3;

          if (!parseArgs(args, "[JIIJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          jshort a3;

          if (!parseArgs(args, "[SIIS", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          jboolean a3;

          if (!parseArgs(args, "[ZIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jchar a3;

          if (!parseArgs(args, "[CIIC", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);

          if (!parseArgs(args, "[oIIo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "fill", args);
      return NULL;
    }

    static PyObject *t_Arrays_hashCode(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(type, "hashCode", args, 2);
    }

    static PyObject *t_Arrays_mismatch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[o[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[oII[oII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jint result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5, a6));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "mismatch", args);
      return NULL;
    }

    static PyObject *t_Arrays_parallelSort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "[K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;

          if (!parseArgs(args, "[KII", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Comparator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "parallelSort", args);
      return NULL;
    }

    static PyObject *t_Arrays_sort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Comparator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "sort", args);
      return NULL;
    }

    static PyObject *t_Arrays_spliterator(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::util::Spliterator$OfDouble result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          ::java::util::Spliterator$OfInt result((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfInt::wrap_Object(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          ::java::util::Spliterator$OfLong result((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfLong::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Spliterator result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfDouble result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfInt result((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfInt::wrap_Object(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfLong result((jobject) NULL);

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfLong::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "spliterator", args);
      return NULL;
    }

    static PyObject *t_Arrays_stream(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0, a1, a2));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0, a1, a2));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "stream", args);
      return NULL;
    }

    static PyObject *t_Arrays_toString(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[Z", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
      }

      return callSuper(type, "toString", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/SpinStabilized.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *SpinStabilized::class$ = NULL;
      jmethodID *SpinStabilized::mids$ = NULL;
      bool SpinStabilized::live$ = false;

      jclass SpinStabilized::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/SpinStabilized");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4344affd4de78726] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getUnderlyingAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpinStabilized::SpinStabilized(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4344affd4de78726, a0.this$, a1.this$, a2.this$, a3)) {}

      ::org::orekit::attitudes::Attitude SpinStabilized::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude SpinStabilized::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider SpinStabilized::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_a904f3d015a354a0]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SpinStabilized_getAttitude(t_SpinStabilized *self, PyObject *args);
      static PyObject *t_SpinStabilized_getUnderlyingAttitudeProvider(t_SpinStabilized *self);
      static PyObject *t_SpinStabilized_get__underlyingAttitudeProvider(t_SpinStabilized *self, void *data);
      static PyGetSetDef t_SpinStabilized__fields_[] = {
        DECLARE_GET_FIELD(t_SpinStabilized, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SpinStabilized__methods_[] = {
        DECLARE_METHOD(t_SpinStabilized, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpinStabilized, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpinStabilized, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_SpinStabilized, getUnderlyingAttitudeProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SpinStabilized)[] = {
        { Py_tp_methods, t_SpinStabilized__methods_ },
        { Py_tp_init, (void *) t_SpinStabilized_init_ },
        { Py_tp_getset, t_SpinStabilized__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SpinStabilized)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SpinStabilized, t_SpinStabilized, SpinStabilized);

      void t_SpinStabilized::install(PyObject *module)
      {
        installType(&PY_TYPE(SpinStabilized), &PY_TYPE_DEF(SpinStabilized), module, "SpinStabilized", 0);
      }

      void t_SpinStabilized::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "class_", make_descriptor(SpinStabilized::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "wrapfn_", make_descriptor(t_SpinStabilized::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SpinStabilized::initializeClass, 1)))
          return NULL;
        return t_SpinStabilized::wrap_Object(SpinStabilized(((t_SpinStabilized *) arg)->object.this$));
      }
      static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SpinStabilized::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        jdouble a3;
        SpinStabilized object((jobject) NULL);

        if (!parseArgs(args, "kkkD", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = SpinStabilized(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SpinStabilized_getAttitude(t_SpinStabilized *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_SpinStabilized_getUnderlyingAttitudeProvider(t_SpinStabilized *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_SpinStabilized_get__underlyingAttitudeProvider(t_SpinStabilized *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *MessageParser::class$ = NULL;
            jmethodID *MessageParser::mids$ = NULL;
            bool MessageParser::live$ = false;

            jclass MessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/MessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_4d26fd885228c716] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_getFileFormat_66298c6188053be6] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_11b109bd155ca898] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_455adfd4ae4ab630] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_60c6e06c33a7585b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::Object MessageParser::build() const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_build_4d26fd885228c716]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat MessageParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_66298c6188053be6]));
            }

            ::java::lang::String MessageParser::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_11b109bd155ca898]));
            }

            ::java::util::Map MessageParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465]));
            }

            ::java::lang::Object MessageParser::parseMessage(const ::org::orekit::data::DataSource & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseMessage_455adfd4ae4ab630], a0.this$));
            }

            void MessageParser::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_process_60c6e06c33a7585b], a0.this$);
            }

            void MessageParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_e250621f009e45db], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_MessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageParser_of_(t_MessageParser *self, PyObject *args);
            static PyObject *t_MessageParser_build(t_MessageParser *self);
            static PyObject *t_MessageParser_getFileFormat(t_MessageParser *self);
            static PyObject *t_MessageParser_getFormatVersionKey(t_MessageParser *self);
            static PyObject *t_MessageParser_getSpecialXmlElementsBuilders(t_MessageParser *self);
            static PyObject *t_MessageParser_parseMessage(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_process(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_reset(t_MessageParser *self, PyObject *arg);
            static PyObject *t_MessageParser_get__fileFormat(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__formatVersionKey(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__specialXmlElementsBuilders(t_MessageParser *self, void *data);
            static PyObject *t_MessageParser_get__parameters_(t_MessageParser *self, void *data);
            static PyGetSetDef t_MessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_MessageParser, fileFormat),
              DECLARE_GET_FIELD(t_MessageParser, formatVersionKey),
              DECLARE_GET_FIELD(t_MessageParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_MessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MessageParser__methods_[] = {
              DECLARE_METHOD(t_MessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_MessageParser, build, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getFileFormat, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, getSpecialXmlElementsBuilders, METH_NOARGS),
              DECLARE_METHOD(t_MessageParser, parseMessage, METH_O),
              DECLARE_METHOD(t_MessageParser, process, METH_O),
              DECLARE_METHOD(t_MessageParser, reset, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageParser)[] = {
              { Py_tp_methods, t_MessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageParser, t_MessageParser, MessageParser);
            PyObject *t_MessageParser::wrap_Object(const MessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageParser *self = (t_MessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageParser *self = (t_MessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageParser), &PY_TYPE_DEF(MessageParser), module, "MessageParser", 0);
            }

            void t_MessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "class_", make_descriptor(MessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "wrapfn_", make_descriptor(t_MessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageParser::initializeClass, 1)))
                return NULL;
              return t_MessageParser::wrap_Object(MessageParser(((t_MessageParser *) arg)->object.this$));
            }
            static PyObject *t_MessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MessageParser_of_(t_MessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MessageParser_build(t_MessageParser *self)
            {
              ::java::lang::Object result((jobject) NULL);
              OBJ_CALL(result = self->object.build());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
            }

            static PyObject *t_MessageParser_getFileFormat(t_MessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_MessageParser_getFormatVersionKey(t_MessageParser *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_MessageParser_getSpecialXmlElementsBuilders(t_MessageParser *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            static PyObject *t_MessageParser_parseMessage(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.parseMessage(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parseMessage", arg);
              return NULL;
            }

            static PyObject *t_MessageParser_process(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(self->object.process(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "process", arg);
              return NULL;
            }

            static PyObject *t_MessageParser_reset(t_MessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "reset", arg);
              return NULL;
            }
            static PyObject *t_MessageParser_get__parameters_(t_MessageParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MessageParser_get__fileFormat(t_MessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_MessageParser_get__formatVersionKey(t_MessageParser *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_MessageParser_get__specialXmlElementsBuilders(t_MessageParser *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalMatricesHarvester.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalMatricesHarvester::class$ = NULL;
        jmethodID *AbstractAnalyticalMatricesHarvester::mids$ = NULL;
        bool AbstractAnalyticalMatricesHarvester::live$ = false;

        jclass AbstractAnalyticalMatricesHarvester::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalMatricesHarvester");

            mids$ = new jmethodID[max_mid];
            mids$[mid_freezeColumnsNames_0fa09c18fee449d5] = env->getMethodID(cls, "freezeColumnsNames", "()V");
            mids$[mid_getAdditionalState_cb44069ef445f941] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
            mids$[mid_getGradientConverter_1bd2b3ae52af5114] = env->getMethodID(cls, "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;");
            mids$[mid_getJacobiansColumnsNames_2afa36052df4765d] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getParametersJacobian_9483b2ac438718ce] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getStateTransitionMatrix_9483b2ac438718ce] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_setReferenceState_0ee5c56004643a2e] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractAnalyticalMatricesHarvester::freezeColumnsNames() const
        {
          env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_0fa09c18fee449d5]);
        }

        JArray< jdouble > AbstractAnalyticalMatricesHarvester::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_cb44069ef445f941], a0.this$));
        }

        ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter AbstractAnalyticalMatricesHarvester::getGradientConverter() const
        {
          return ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter(env->callObjectMethod(this$, mids$[mid_getGradientConverter_1bd2b3ae52af5114]));
        }

        ::java::util::List AbstractAnalyticalMatricesHarvester::getJacobiansColumnsNames() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_2afa36052df4765d]));
        }

        ::java::lang::String AbstractAnalyticalMatricesHarvester::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        ::org::orekit::orbits::OrbitType AbstractAnalyticalMatricesHarvester::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
        }

        ::org::hipparchus::linear::RealMatrix AbstractAnalyticalMatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_9483b2ac438718ce], a0.this$));
        }

        ::org::orekit::orbits::PositionAngleType AbstractAnalyticalMatricesHarvester::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
        }

        ::org::hipparchus::linear::RealMatrix AbstractAnalyticalMatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_9483b2ac438718ce], a0.this$));
        }

        void AbstractAnalyticalMatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setReferenceState_0ee5c56004643a2e], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        static PyObject *t_AbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_freezeColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getAdditionalState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getGradientConverter(t_AbstractAnalyticalMatricesHarvester *self);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getJacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getName(t_AbstractAnalyticalMatricesHarvester *self);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getOrbitType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getParametersJacobian(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getPositionAngleType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getStateTransitionMatrix(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_setReferenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__gradientConverter(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__jacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__name(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__orbitType(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__positionAngleType(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static int t_AbstractAnalyticalMatricesHarvester_set__referenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractAnalyticalMatricesHarvester__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, gradientConverter),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, jacobiansColumnsNames),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, name),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, orbitType),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, positionAngleType),
          DECLARE_SET_FIELD(t_AbstractAnalyticalMatricesHarvester, referenceState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalMatricesHarvester__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, freezeColumnsNames, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getAdditionalState, METH_O),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getGradientConverter, METH_NOARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getJacobiansColumnsNames, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getName, METH_NOARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getOrbitType, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getParametersJacobian, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getPositionAngleType, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getStateTransitionMatrix, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, setReferenceState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalMatricesHarvester)[] = {
          { Py_tp_methods, t_AbstractAnalyticalMatricesHarvester__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalMatricesHarvester__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalMatricesHarvester)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractMatricesHarvester),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalMatricesHarvester, t_AbstractAnalyticalMatricesHarvester, AbstractAnalyticalMatricesHarvester);

        void t_AbstractAnalyticalMatricesHarvester::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalMatricesHarvester), &PY_TYPE_DEF(AbstractAnalyticalMatricesHarvester), module, "AbstractAnalyticalMatricesHarvester", 0);
        }

        void t_AbstractAnalyticalMatricesHarvester::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalMatricesHarvester), "class_", make_descriptor(AbstractAnalyticalMatricesHarvester::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalMatricesHarvester), "wrapfn_", make_descriptor(t_AbstractAnalyticalMatricesHarvester::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalMatricesHarvester::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalMatricesHarvester::wrap_Object(AbstractAnalyticalMatricesHarvester(((t_AbstractAnalyticalMatricesHarvester *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalMatricesHarvester::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_freezeColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.freezeColumnsNames());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "freezeColumnsNames", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getAdditionalState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAdditionalState(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
          return NULL;
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getGradientConverter(t_AbstractAnalyticalMatricesHarvester *self)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradientConverter());
          return ::org::orekit::propagation::analytical::t_AbstractAnalyticalGradientConverter::wrap_Object(result);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getJacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getJacobiansColumnsNames());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getJacobiansColumnsNames", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getName(t_AbstractAnalyticalMatricesHarvester *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getOrbitType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getOrbitType", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getParametersJacobian(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getParametersJacobian(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getParametersJacobian", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getPositionAngleType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getPositionAngleType", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getStateTransitionMatrix(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getStateTransitionMatrix", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_setReferenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setReferenceState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "setReferenceState", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__gradientConverter(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradientConverter());
          return ::org::orekit::propagation::analytical::t_AbstractAnalyticalGradientConverter::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__jacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getJacobiansColumnsNames());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__name(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__orbitType(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__positionAngleType(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static int t_AbstractAnalyticalMatricesHarvester_set__referenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setReferenceState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/OpenMapRealMatrix.h"
#include "org/hipparchus/linear/OpenMapRealMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/SparseRealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *OpenMapRealMatrix::class$ = NULL;
      jmethodID *OpenMapRealMatrix::mids$ = NULL;
      bool OpenMapRealMatrix::live$ = false;

      jclass OpenMapRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/OpenMapRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_add_e7eba3049ff21162] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_addToEntry_1506189166690b5e] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_4f9e1a9121aa289f] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_createMatrix_7dc015665115207a] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getEntry_dbbe5f05149dbf73] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_multiply_e7eba3049ff21162] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_multiply_e9b72403ad502221] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_1506189166690b5e] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_e9b72403ad502221] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setEntry_1506189166690b5e] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_subtract_e7eba3049ff21162] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_subtract_231cd0c4aff11413] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_transposeMultiply_e9b72403ad502221] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenMapRealMatrix::OpenMapRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

      OpenMapRealMatrix OpenMapRealMatrix::add(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_add_e7eba3049ff21162], a0.this$));
      }

      void OpenMapRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_1506189166690b5e], a0, a1, a2);
      }

      OpenMapRealMatrix OpenMapRealMatrix::copy() const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_copy_4f9e1a9121aa289f]));
      }

      OpenMapRealMatrix OpenMapRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_7dc015665115207a], a0, a1));
      }

      jint OpenMapRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      jdouble OpenMapRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_dbbe5f05149dbf73], a0, a1);
      }

      jint OpenMapRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      OpenMapRealMatrix OpenMapRealMatrix::multiply(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e7eba3049ff21162], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e9b72403ad502221], a0.this$));
      }

      void OpenMapRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_1506189166690b5e], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_e9b72403ad502221], a0.this$));
      }

      void OpenMapRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_1506189166690b5e], a0, a1, a2);
      }

      OpenMapRealMatrix OpenMapRealMatrix::subtract(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_e7eba3049ff21162], a0.this$));
      }

      OpenMapRealMatrix OpenMapRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_231cd0c4aff11413], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_e9b72403ad502221], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_OpenMapRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenMapRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OpenMapRealMatrix_init_(t_OpenMapRealMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenMapRealMatrix_add(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_addToEntry(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_copy(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_createMatrix(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_getColumnDimension(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_getEntry(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_getRowDimension(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_multiply(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_multiplyEntry(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_multiplyTransposed(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_setEntry(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_subtract(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_transposeMultiply(t_OpenMapRealMatrix *self, PyObject *args);
      static PyObject *t_OpenMapRealMatrix_get__columnDimension(t_OpenMapRealMatrix *self, void *data);
      static PyObject *t_OpenMapRealMatrix_get__rowDimension(t_OpenMapRealMatrix *self, void *data);
      static PyGetSetDef t_OpenMapRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_OpenMapRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_OpenMapRealMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenMapRealMatrix__methods_[] = {
        DECLARE_METHOD(t_OpenMapRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenMapRealMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_OpenMapRealMatrix, transposeMultiply, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenMapRealMatrix)[] = {
        { Py_tp_methods, t_OpenMapRealMatrix__methods_ },
        { Py_tp_init, (void *) t_OpenMapRealMatrix_init_ },
        { Py_tp_getset, t_OpenMapRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenMapRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(OpenMapRealMatrix, t_OpenMapRealMatrix, OpenMapRealMatrix);

      void t_OpenMapRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenMapRealMatrix), &PY_TYPE_DEF(OpenMapRealMatrix), module, "OpenMapRealMatrix", 0);
      }

      void t_OpenMapRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealMatrix), "class_", make_descriptor(OpenMapRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealMatrix), "wrapfn_", make_descriptor(t_OpenMapRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenMapRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenMapRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenMapRealMatrix::initializeClass, 1)))
          return NULL;
        return t_OpenMapRealMatrix::wrap_Object(OpenMapRealMatrix(((t_OpenMapRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_OpenMapRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenMapRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OpenMapRealMatrix_init_(t_OpenMapRealMatrix *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        OpenMapRealMatrix object((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          INT_CALL(object = OpenMapRealMatrix(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OpenMapRealMatrix_add(t_OpenMapRealMatrix *self, PyObject *args)
      {
        OpenMapRealMatrix a0((jobject) NULL);
        OpenMapRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", OpenMapRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_OpenMapRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_addToEntry(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_copy(t_OpenMapRealMatrix *self, PyObject *args)
      {
        OpenMapRealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return t_OpenMapRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_createMatrix(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        OpenMapRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return t_OpenMapRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_getColumnDimension(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_getEntry(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_getRowDimension(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_multiply(t_OpenMapRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealMatrix a0((jobject) NULL);
            OpenMapRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_OpenMapRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_multiplyEntry(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_multiplyTransposed(t_OpenMapRealMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_setEntry(t_OpenMapRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_subtract(t_OpenMapRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            OpenMapRealMatrix a0((jobject) NULL);
            OpenMapRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", OpenMapRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_OpenMapRealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            OpenMapRealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_OpenMapRealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_transposeMultiply(t_OpenMapRealMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OpenMapRealMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_OpenMapRealMatrix_get__columnDimension(t_OpenMapRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_OpenMapRealMatrix_get__rowDimension(t_OpenMapRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldAdaptableInterval::class$ = NULL;
        jmethodID *FieldAdaptableInterval::mids$ = NULL;
        bool FieldAdaptableInterval::live$ = false;

        jclass FieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_486b6766706296b3] = env->getMethodID(cls, "currentInterval", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldAdaptableInterval::currentInterval(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_486b6766706296b3], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args);
        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_FieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_FieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdaptableInterval)[] = {
          { Py_tp_methods, t_FieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdaptableInterval, t_FieldAdaptableInterval, FieldAdaptableInterval);
        PyObject *t_FieldAdaptableInterval::wrap_Object(const FieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdaptableInterval), &PY_TYPE_DEF(FieldAdaptableInterval), module, "FieldAdaptableInterval", 0);
        }

        void t_FieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "class_", make_descriptor(FieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "wrapfn_", make_descriptor(t_FieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_FieldAdaptableInterval::wrap_Object(FieldAdaptableInterval(((t_FieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/GraggBulirschStoerIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *GraggBulirschStoerIntegratorBuilder::class$ = NULL;
        jmethodID *GraggBulirschStoerIntegratorBuilder::mids$ = NULL;
        bool GraggBulirschStoerIntegratorBuilder::live$ = false;

        jclass GraggBulirschStoerIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/GraggBulirschStoerIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GraggBulirschStoerIntegratorBuilder::GraggBulirschStoerIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator GraggBulirschStoerIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_65049cf04139ef04], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GraggBulirschStoerIntegratorBuilder_init_(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_buildIntegrator(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_GraggBulirschStoerIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_GraggBulirschStoerIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GraggBulirschStoerIntegratorBuilder)[] = {
          { Py_tp_methods, t_GraggBulirschStoerIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_GraggBulirschStoerIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GraggBulirschStoerIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GraggBulirschStoerIntegratorBuilder, t_GraggBulirschStoerIntegratorBuilder, GraggBulirschStoerIntegratorBuilder);

        void t_GraggBulirschStoerIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GraggBulirschStoerIntegratorBuilder), &PY_TYPE_DEF(GraggBulirschStoerIntegratorBuilder), module, "GraggBulirschStoerIntegratorBuilder", 0);
        }

        void t_GraggBulirschStoerIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegratorBuilder), "class_", make_descriptor(GraggBulirschStoerIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegratorBuilder), "wrapfn_", make_descriptor(t_GraggBulirschStoerIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GraggBulirschStoerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GraggBulirschStoerIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_GraggBulirschStoerIntegratorBuilder::wrap_Object(GraggBulirschStoerIntegratorBuilder(((t_GraggBulirschStoerIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GraggBulirschStoerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GraggBulirschStoerIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GraggBulirschStoerIntegratorBuilder_init_(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          GraggBulirschStoerIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = GraggBulirschStoerIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GraggBulirschStoerIntegratorBuilder_buildIntegrator(t_GraggBulirschStoerIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SingleFrequencyHatchFilter::class$ = NULL;
          jmethodID *SingleFrequencyHatchFilter::mids$ = NULL;
          bool SingleFrequencyHatchFilter::live$ = false;

          jclass SingleFrequencyHatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d015ddafa5420cad] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/MeasurementType;DDID)V");
              mids$[mid_filterData_274c8bdbc6f49717] = env->getMethodID(cls, "filterData", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleFrequencyHatchFilter::SingleFrequencyHatchFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::gnss::MeasurementType & a2, jdouble a3, jdouble a4, jint a5, jdouble a6) : ::org::orekit::estimation::measurements::filtering::HatchFilter(env->newObject(initializeClass, &mids$, mid_init$_d015ddafa5420cad, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::files::rinex::observation::ObservationData SingleFrequencyHatchFilter::filterData(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_filterData_274c8bdbc6f49717], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {
          static PyObject *t_SingleFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleFrequencyHatchFilter_init_(t_SingleFrequencyHatchFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleFrequencyHatchFilter_filterData(t_SingleFrequencyHatchFilter *self, PyObject *args);

          static PyMethodDef t_SingleFrequencyHatchFilter__methods_[] = {
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, filterData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleFrequencyHatchFilter)[] = {
            { Py_tp_methods, t_SingleFrequencyHatchFilter__methods_ },
            { Py_tp_init, (void *) t_SingleFrequencyHatchFilter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleFrequencyHatchFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::filtering::HatchFilter),
            NULL
          };

          DEFINE_TYPE(SingleFrequencyHatchFilter, t_SingleFrequencyHatchFilter, SingleFrequencyHatchFilter);

          void t_SingleFrequencyHatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleFrequencyHatchFilter), &PY_TYPE_DEF(SingleFrequencyHatchFilter), module, "SingleFrequencyHatchFilter", 0);
          }

          void t_SingleFrequencyHatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "class_", make_descriptor(SingleFrequencyHatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "wrapfn_", make_descriptor(t_SingleFrequencyHatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleFrequencyHatchFilter::initializeClass, 1)))
              return NULL;
            return t_SingleFrequencyHatchFilter::wrap_Object(SingleFrequencyHatchFilter(((t_SingleFrequencyHatchFilter *) arg)->object.this$));
          }
          static PyObject *t_SingleFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleFrequencyHatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleFrequencyHatchFilter_init_(t_SingleFrequencyHatchFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::gnss::MeasurementType a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jint a5;
            jdouble a6;
            SingleFrequencyHatchFilter object((jobject) NULL);

            if (!parseArgs(args, "kkKDDID", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::MeasurementType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_MeasurementType::parameters_, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = SingleFrequencyHatchFilter(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SingleFrequencyHatchFilter_filterData(t_SingleFrequencyHatchFilter *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.filterData(a0, a1));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "filterData", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *MessageType::class$ = NULL;
          jmethodID *MessageType::mids$ = NULL;
          bool MessageType::live$ = false;

          jclass MessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/MessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parse_3fb49f3b7c53ed23] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::gnss::metric::messages::ParsedMessage MessageType::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jint a1) const
          {
            return ::org::orekit::gnss::metric::messages::ParsedMessage(env->callObjectMethod(this$, mids$[mid_parse_3fb49f3b7c53ed23], a0.this$, a1));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_MessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageType_parse(t_MessageType *self, PyObject *args);

          static PyMethodDef t_MessageType__methods_[] = {
            DECLARE_METHOD(t_MessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageType, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessageType)[] = {
            { Py_tp_methods, t_MessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessageType, t_MessageType, MessageType);

          void t_MessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(MessageType), &PY_TYPE_DEF(MessageType), module, "MessageType", 0);
          }

          void t_MessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "class_", make_descriptor(MessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "wrapfn_", make_descriptor(t_MessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessageType::initializeClass, 1)))
              return NULL;
            return t_MessageType::wrap_Object(MessageType(((t_MessageType *) arg)->object.this$));
          }
          static PyObject *t_MessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MessageType_parse(t_MessageType *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jint a1;
            ::org::orekit::gnss::metric::messages::ParsedMessage result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::orekit::gnss::metric::messages::t_ParsedMessage::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/ConjugateGradient.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ConjugateGradient::class$ = NULL;
      jmethodID *ConjugateGradient::mids$ = NULL;
      bool ConjugateGradient::live$ = false;
      ::java::lang::String *ConjugateGradient::OPERATOR = NULL;
      ::java::lang::String *ConjugateGradient::VECTOR = NULL;

      jclass ConjugateGradient::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ConjugateGradient");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e5c35461fd0d963d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;DZ)V");
          mids$[mid_init$_d84bd519b18260a3] = env->getMethodID(cls, "<init>", "(IDZ)V");
          mids$[mid_shouldCheck_b108b35ef48e27bd] = env->getMethodID(cls, "shouldCheck", "()Z");
          mids$[mid_solveInPlace_b66895678db09891] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          OPERATOR = new ::java::lang::String(env->getStaticObjectField(cls, "OPERATOR", "Ljava/lang/String;"));
          VECTOR = new ::java::lang::String(env->getStaticObjectField(cls, "VECTOR", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConjugateGradient::ConjugateGradient(const ::org::hipparchus::util::IterationManager & a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_e5c35461fd0d963d, a0.this$, a1, a2)) {}

      ConjugateGradient::ConjugateGradient(jint a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_d84bd519b18260a3, a0, a1, a2)) {}

      jboolean ConjugateGradient::shouldCheck() const
      {
        return env->callBooleanMethod(this$, mids$[mid_shouldCheck_b108b35ef48e27bd]);
      }

      ::org::hipparchus::linear::RealVector ConjugateGradient::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_b66895678db09891], a0.this$, a1.this$, a2.this$, a3.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_ConjugateGradient_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConjugateGradient_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ConjugateGradient_init_(t_ConjugateGradient *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConjugateGradient_shouldCheck(t_ConjugateGradient *self);
      static PyObject *t_ConjugateGradient_solveInPlace(t_ConjugateGradient *self, PyObject *args);

      static PyMethodDef t_ConjugateGradient__methods_[] = {
        DECLARE_METHOD(t_ConjugateGradient, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConjugateGradient, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConjugateGradient, shouldCheck, METH_NOARGS),
        DECLARE_METHOD(t_ConjugateGradient, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConjugateGradient)[] = {
        { Py_tp_methods, t_ConjugateGradient__methods_ },
        { Py_tp_init, (void *) t_ConjugateGradient_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConjugateGradient)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::PreconditionedIterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(ConjugateGradient, t_ConjugateGradient, ConjugateGradient);

      void t_ConjugateGradient::install(PyObject *module)
      {
        installType(&PY_TYPE(ConjugateGradient), &PY_TYPE_DEF(ConjugateGradient), module, "ConjugateGradient", 0);
      }

      void t_ConjugateGradient::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "class_", make_descriptor(ConjugateGradient::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "wrapfn_", make_descriptor(t_ConjugateGradient::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "boxfn_", make_descriptor(boxObject));
        env->getClass(ConjugateGradient::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "OPERATOR", make_descriptor(j2p(*ConjugateGradient::OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "VECTOR", make_descriptor(j2p(*ConjugateGradient::VECTOR)));
      }

      static PyObject *t_ConjugateGradient_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConjugateGradient::initializeClass, 1)))
          return NULL;
        return t_ConjugateGradient::wrap_Object(ConjugateGradient(((t_ConjugateGradient *) arg)->object.this$));
      }
      static PyObject *t_ConjugateGradient_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConjugateGradient::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ConjugateGradient_init_(t_ConjugateGradient *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            ConjugateGradient object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::util::IterationManager::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ConjugateGradient(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            jboolean a2;
            ConjugateGradient object((jobject) NULL);

            if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = ConjugateGradient(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ConjugateGradient_shouldCheck(t_ConjugateGradient *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.shouldCheck());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ConjugateGradient_solveInPlace(t_ConjugateGradient *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
        ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ::org::hipparchus::linear::RealVector a3((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ConjugateGradient), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenTesseralLinear.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenTesseralLinear::class$ = NULL;
              jmethodID *FieldHansenTesseralLinear::mids$ = NULL;
              bool FieldHansenTesseralLinear::live$ = false;

              jclass FieldHansenTesseralLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenTesseralLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_3af1617e460bca89] = env->getMethodID(cls, "<init>", "(IIIIILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_82fa7e789a6ae1f6] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_e2b464e41c9ba627] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_e2b464e41c9ba627] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenTesseralLinear::FieldHansenTesseralLinear(jint a0, jint a1, jint a2, jint a3, jint a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3af1617e460bca89, a0, a1, a2, a3, a4, a5.this$)) {}

              void FieldHansenTesseralLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_82fa7e789a6ae1f6], a0.this$, a1.this$, a2.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenTesseralLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_e2b464e41c9ba627], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenTesseralLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_e2b464e41c9ba627], a0, a1.this$));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_FieldHansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenTesseralLinear_of_(t_FieldHansenTesseralLinear *self, PyObject *args);
              static int t_FieldHansenTesseralLinear_init_(t_FieldHansenTesseralLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenTesseralLinear_computeInitValues(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_getDerivative(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_getValue(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_get__parameters_(t_FieldHansenTesseralLinear *self, void *data);
              static PyGetSetDef t_FieldHansenTesseralLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenTesseralLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenTesseralLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenTesseralLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenTesseralLinear)[] = {
                { Py_tp_methods, t_FieldHansenTesseralLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenTesseralLinear_init_ },
                { Py_tp_getset, t_FieldHansenTesseralLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenTesseralLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenTesseralLinear, t_FieldHansenTesseralLinear, FieldHansenTesseralLinear);
              PyObject *t_FieldHansenTesseralLinear::wrap_Object(const FieldHansenTesseralLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenTesseralLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenTesseralLinear *self = (t_FieldHansenTesseralLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenTesseralLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenTesseralLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenTesseralLinear *self = (t_FieldHansenTesseralLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenTesseralLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenTesseralLinear), &PY_TYPE_DEF(FieldHansenTesseralLinear), module, "FieldHansenTesseralLinear", 0);
              }

              void t_FieldHansenTesseralLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "class_", make_descriptor(FieldHansenTesseralLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "wrapfn_", make_descriptor(t_FieldHansenTesseralLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenTesseralLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenTesseralLinear::wrap_Object(FieldHansenTesseralLinear(((t_FieldHansenTesseralLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenTesseralLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenTesseralLinear_of_(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenTesseralLinear_init_(t_FieldHansenTesseralLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                ::org::hipparchus::Field a5((jobject) NULL);
                PyTypeObject **p5;
                FieldHansenTesseralLinear object((jobject) NULL);

                if (!parseArgs(args, "IIIIIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenTesseralLinear(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenTesseralLinear_computeInitValues(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_FieldHansenTesseralLinear_getDerivative(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenTesseralLinear_getValue(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenTesseralLinear_get__parameters_(t_FieldHansenTesseralLinear *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
