#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AttitudeEntryKey::class$ = NULL;
              jmethodID *AttitudeEntryKey::mids$ = NULL;
              bool AttitudeEntryKey::live$ = false;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_1 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_1_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_2 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_2_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_3 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGLE_3_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGVEL_X = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGVEL_Y = NULL;
              AttitudeEntryKey *AttitudeEntryKey::ANGVEL_Z = NULL;
              AttitudeEntryKey *AttitudeEntryKey::EPOCH = NULL;
              AttitudeEntryKey *AttitudeEntryKey::MOMENTUM_ALPHA = NULL;
              AttitudeEntryKey *AttitudeEntryKey::MOMENTUM_DELTA = NULL;
              AttitudeEntryKey *AttitudeEntryKey::NUTATION = NULL;
              AttitudeEntryKey *AttitudeEntryKey::NUTATION_PER = NULL;
              AttitudeEntryKey *AttitudeEntryKey::NUTATION_PHASE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::NUTATION_VEL = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q1 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q1_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q2 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q2_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q3 = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Q3_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::QC = NULL;
              AttitudeEntryKey *AttitudeEntryKey::QC_DOT = NULL;
              AttitudeEntryKey *AttitudeEntryKey::SPIN_ALPHA = NULL;
              AttitudeEntryKey *AttitudeEntryKey::SPIN_ANGLE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::SPIN_ANGLE_VEL = NULL;
              AttitudeEntryKey *AttitudeEntryKey::SPIN_DELTA = NULL;
              AttitudeEntryKey *AttitudeEntryKey::X_ANGLE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::X_RATE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Y_ANGLE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Y_RATE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Z_ANGLE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::Z_RATE = NULL;
              AttitudeEntryKey *AttitudeEntryKey::angVel = NULL;
              AttitudeEntryKey *AttitudeEntryKey::eulerAngle = NULL;
              AttitudeEntryKey *AttitudeEntryKey::eulerAngleAngVel = NULL;
              AttitudeEntryKey *AttitudeEntryKey::eulerAngleDerivative = NULL;
              AttitudeEntryKey *AttitudeEntryKey::eulerAngleRate = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternion = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionAngVel = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionDerivative = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionDot = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionEphemeris = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionEulerRate = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionRate = NULL;
              AttitudeEntryKey *AttitudeEntryKey::quaternionState = NULL;
              AttitudeEntryKey *AttitudeEntryKey::rotationAngles = NULL;
              AttitudeEntryKey *AttitudeEntryKey::rotationRates = NULL;
              AttitudeEntryKey *AttitudeEntryKey::spin = NULL;
              AttitudeEntryKey *AttitudeEntryKey::spinNutation = NULL;
              AttitudeEntryKey *AttitudeEntryKey::spinNutationMom = NULL;

              jclass AttitudeEntryKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_20d56872ce77efdf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;");
                  mids$[mid_values_270f0a9e5644cd9d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGLE_1 = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_1", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_1_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_2 = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_2", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_2_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_3 = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_3", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGLE_3_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGLE_3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGVEL_X = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGVEL_X", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGVEL_Y = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGVEL_Y", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  ANGVEL_Z = new AttitudeEntryKey(env->getStaticObjectField(cls, "ANGVEL_Z", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  EPOCH = new AttitudeEntryKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  MOMENTUM_ALPHA = new AttitudeEntryKey(env->getStaticObjectField(cls, "MOMENTUM_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  MOMENTUM_DELTA = new AttitudeEntryKey(env->getStaticObjectField(cls, "MOMENTUM_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  NUTATION = new AttitudeEntryKey(env->getStaticObjectField(cls, "NUTATION", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  NUTATION_PER = new AttitudeEntryKey(env->getStaticObjectField(cls, "NUTATION_PER", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  NUTATION_PHASE = new AttitudeEntryKey(env->getStaticObjectField(cls, "NUTATION_PHASE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  NUTATION_VEL = new AttitudeEntryKey(env->getStaticObjectField(cls, "NUTATION_VEL", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q1 = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q1", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q1_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q2 = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q2", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q2_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q3 = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q3", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Q3_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "Q3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  QC = new AttitudeEntryKey(env->getStaticObjectField(cls, "QC", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  QC_DOT = new AttitudeEntryKey(env->getStaticObjectField(cls, "QC_DOT", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  SPIN_ALPHA = new AttitudeEntryKey(env->getStaticObjectField(cls, "SPIN_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  SPIN_ANGLE = new AttitudeEntryKey(env->getStaticObjectField(cls, "SPIN_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  SPIN_ANGLE_VEL = new AttitudeEntryKey(env->getStaticObjectField(cls, "SPIN_ANGLE_VEL", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  SPIN_DELTA = new AttitudeEntryKey(env->getStaticObjectField(cls, "SPIN_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  X_ANGLE = new AttitudeEntryKey(env->getStaticObjectField(cls, "X_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  X_RATE = new AttitudeEntryKey(env->getStaticObjectField(cls, "X_RATE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Y_ANGLE = new AttitudeEntryKey(env->getStaticObjectField(cls, "Y_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Y_RATE = new AttitudeEntryKey(env->getStaticObjectField(cls, "Y_RATE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Z_ANGLE = new AttitudeEntryKey(env->getStaticObjectField(cls, "Z_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  Z_RATE = new AttitudeEntryKey(env->getStaticObjectField(cls, "Z_RATE", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  angVel = new AttitudeEntryKey(env->getStaticObjectField(cls, "angVel", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  eulerAngle = new AttitudeEntryKey(env->getStaticObjectField(cls, "eulerAngle", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  eulerAngleAngVel = new AttitudeEntryKey(env->getStaticObjectField(cls, "eulerAngleAngVel", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  eulerAngleDerivative = new AttitudeEntryKey(env->getStaticObjectField(cls, "eulerAngleDerivative", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  eulerAngleRate = new AttitudeEntryKey(env->getStaticObjectField(cls, "eulerAngleRate", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternion = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternion", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionAngVel = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionAngVel", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionDerivative = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionDerivative", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionDot = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionDot", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionEphemeris = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionEphemeris", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionEulerRate = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionEulerRate", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionRate = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionRate", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  quaternionState = new AttitudeEntryKey(env->getStaticObjectField(cls, "quaternionState", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  rotationAngles = new AttitudeEntryKey(env->getStaticObjectField(cls, "rotationAngles", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  rotationRates = new AttitudeEntryKey(env->getStaticObjectField(cls, "rotationRates", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  spin = new AttitudeEntryKey(env->getStaticObjectField(cls, "spin", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  spinNutation = new AttitudeEntryKey(env->getStaticObjectField(cls, "spinNutation", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  spinNutationMom = new AttitudeEntryKey(env->getStaticObjectField(cls, "spinNutationMom", "Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeEntryKey AttitudeEntryKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeEntryKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_20d56872ce77efdf], a0.this$));
              }

              JArray< AttitudeEntryKey > AttitudeEntryKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeEntryKey >(env->callStaticObjectMethod(cls, mids$[mid_values_270f0a9e5644cd9d]));
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
            namespace aem {
              static PyObject *t_AttitudeEntryKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeEntryKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeEntryKey_of_(t_AttitudeEntryKey *self, PyObject *args);
              static PyObject *t_AttitudeEntryKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeEntryKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeEntryKey_get__parameters_(t_AttitudeEntryKey *self, void *data);
              static PyGetSetDef t_AttitudeEntryKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeEntryKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeEntryKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeEntryKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeEntryKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeEntryKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeEntryKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeEntryKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeEntryKey)[] = {
                { Py_tp_methods, t_AttitudeEntryKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeEntryKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeEntryKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeEntryKey, t_AttitudeEntryKey, AttitudeEntryKey);
              PyObject *t_AttitudeEntryKey::wrap_Object(const AttitudeEntryKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeEntryKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeEntryKey *self = (t_AttitudeEntryKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeEntryKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeEntryKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeEntryKey *self = (t_AttitudeEntryKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeEntryKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeEntryKey), &PY_TYPE_DEF(AttitudeEntryKey), module, "AttitudeEntryKey", 0);
              }

              void t_AttitudeEntryKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "class_", make_descriptor(AttitudeEntryKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "wrapfn_", make_descriptor(t_AttitudeEntryKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeEntryKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_1", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_1_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_2", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_2_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_3", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGLE_3_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGLE_3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGVEL_X", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGVEL_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGVEL_Y", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGVEL_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "ANGVEL_Z", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::ANGVEL_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "EPOCH", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "MOMENTUM_ALPHA", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::MOMENTUM_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "MOMENTUM_DELTA", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::MOMENTUM_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "NUTATION", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::NUTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "NUTATION_PER", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::NUTATION_PER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "NUTATION_PHASE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::NUTATION_PHASE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "NUTATION_VEL", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::NUTATION_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q1", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q1_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q2", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q2_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q3", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Q3_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Q3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "QC", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::QC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "QC_DOT", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::QC_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "SPIN_ALPHA", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::SPIN_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "SPIN_ANGLE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::SPIN_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "SPIN_ANGLE_VEL", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::SPIN_ANGLE_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "SPIN_DELTA", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::SPIN_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "X_ANGLE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::X_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "X_RATE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::X_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Y_ANGLE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Y_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Y_RATE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Y_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Z_ANGLE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Z_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "Z_RATE", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::Z_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "angVel", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::angVel)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "eulerAngle", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::eulerAngle)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "eulerAngleAngVel", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::eulerAngleAngVel)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "eulerAngleDerivative", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::eulerAngleDerivative)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "eulerAngleRate", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::eulerAngleRate)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternion", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternion)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionAngVel", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionAngVel)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionDerivative", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionDerivative)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionDot", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionDot)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionEphemeris", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionEphemeris)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionEulerRate", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionEulerRate)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionRate", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionRate)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "quaternionState", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::quaternionState)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "rotationAngles", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::rotationAngles)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "rotationRates", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::rotationRates)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "spin", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::spin)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "spinNutation", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::spinNutation)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEntryKey), "spinNutationMom", make_descriptor(t_AttitudeEntryKey::wrap_Object(*AttitudeEntryKey::spinNutationMom)));
              }

              static PyObject *t_AttitudeEntryKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeEntryKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeEntryKey::wrap_Object(AttitudeEntryKey(((t_AttitudeEntryKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeEntryKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeEntryKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeEntryKey_of_(t_AttitudeEntryKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeEntryKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeEntryKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AttitudeEntryKey::valueOf(a0));
                  return t_AttitudeEntryKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeEntryKey_values(PyTypeObject *type)
              {
                JArray< AttitudeEntryKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::aem::AttitudeEntryKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeEntryKey::wrap_jobject);
              }
              static PyObject *t_AttitudeEntryKey_get__parameters_(t_AttitudeEntryKey *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *AbstractConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *AbstractConstantThrustPropulsionModel::mids$ = NULL;
          bool AbstractConstantThrustPropulsionModel::live$ = false;

          jclass AbstractConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cf2d903473e9fd3b] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_init$_61fb1c1298b85822] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getDirection_f88961cca75a2c0a] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getDirection_3df461fe15362b2b] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getFlowRate_557b8123390d8d0c] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_86c4a0582e0747ce] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_e3919ad898361abd] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_1bbf81d80c47ecdd] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_b0b988f941da47d8] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getFlowRate_810dcb8f9f5d191a] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getFlowRate_4ad317f7598a10a9] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getIsp_557b8123390d8d0c] = env->getMethodID(cls, "getIsp", "()D");
              mids$[mid_getIsp_b0b988f941da47d8] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getThrustMagnitude_557b8123390d8d0c] = env->getMethodID(cls, "getThrustMagnitude", "()D");
              mids$[mid_getThrustMagnitude_b0b988f941da47d8] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getThrustVector_f88961cca75a2c0a] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b4c4f24efa81746b] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_73a8498c189497cd] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_3fff8c49d4e2dc6b] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_3df461fe15362b2b] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b61fb59a041240c6] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_61944e27a39e8290] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getInitialFlowRate_557b8123390d8d0c] = env->getMethodID(cls, "getInitialFlowRate", "()D");
              mids$[mid_getInitialThrustVector_f88961cca75a2c0a] = env->getMethodID(cls, "getInitialThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractConstantThrustPropulsionModel::AbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cf2d903473e9fd3b, a0, a1, a2.this$, a3.this$)) {}

          AbstractConstantThrustPropulsionModel::AbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_61fb1c1298b85822, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::forces::maneuvers::Control3DVectorCostType AbstractConstantThrustPropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getDirection(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_3df461fe15362b2b], a0.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_557b8123390d8d0c]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_86c4a0582e0747ce], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement AbstractConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_e3919ad898361abd], a0.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_1bbf81d80c47ecdd], a0.this$);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b0b988f941da47d8], a0.this$);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_810dcb8f9f5d191a], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_4ad317f7598a10a9], a0.this$, a1.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getIsp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_557b8123390d8d0c]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_b0b988f941da47d8], a0.this$);
          }

          ::java::lang::String AbstractConstantThrustPropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          jdouble AbstractConstantThrustPropulsionModel::getThrustMagnitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_557b8123390d8d0c]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_b0b988f941da47d8], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_b4c4f24efa81746b], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D AbstractConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_73a8498c189497cd], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_3fff8c49d4e2dc6b], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_3df461fe15362b2b], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_b61fb59a041240c6], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_61944e27a39e8290], a0.this$, a1.this$));
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
    namespace forces {
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_AbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractConstantThrustPropulsionModel_init_(t_AbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getControl3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getDirection(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getFlowRate(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getIsp(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getName(t_AbstractConstantThrustPropulsionModel *self);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustVector(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__control3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__direction(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__flowRate(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__isp(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__name(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustVector(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_AbstractConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, direction),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, isp),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, name),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, thrustMagnitude),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getDirection, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getIsp, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getThrustMagnitude, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_AbstractConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_AbstractConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_AbstractConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractConstantThrustPropulsionModel, t_AbstractConstantThrustPropulsionModel, AbstractConstantThrustPropulsionModel);

          void t_AbstractConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractConstantThrustPropulsionModel), &PY_TYPE_DEF(AbstractConstantThrustPropulsionModel), module, "AbstractConstantThrustPropulsionModel", 0);
          }

          void t_AbstractConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "class_", make_descriptor(AbstractConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_AbstractConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_AbstractConstantThrustPropulsionModel::wrap_Object(AbstractConstantThrustPropulsionModel(((t_AbstractConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_AbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractConstantThrustPropulsionModel_init_(t_AbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                AbstractConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = AbstractConstantThrustPropulsionModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                AbstractConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
                {
                  INT_CALL(object = AbstractConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_AbstractConstantThrustPropulsionModel_getControl3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getDirection(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDirection());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getDirection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDirection", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getFlowRate(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlowRate());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getIsp(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getIsp());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getIsp(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getIsp", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getName(t_AbstractConstantThrustPropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustMagnitude());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustVector(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustVector());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__control3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__direction(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__flowRate(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__isp(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getIsp());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__name(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getThrustMagnitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustVector(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventState$EventOccurrence.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventState$EventOccurrence::class$ = NULL;
        jmethodID *EventState$EventOccurrence::mids$ = NULL;
        bool EventState$EventOccurrence::live$ = false;

        jclass EventState$EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventState$EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAction_2ecf57a2edb373ef] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_15e85d5301b90ef8] = env->getMethodID(cls, "getNewState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStopDate_7a97f7e149e79afb] = env->getMethodID(cls, "getStopDate", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action EventState$EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_2ecf57a2edb373ef]));
        }

        ::org::orekit::propagation::SpacecraftState EventState$EventOccurrence::getNewState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getNewState_15e85d5301b90ef8]));
        }

        ::org::orekit::time::AbsoluteDate EventState$EventOccurrence::getStopDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopDate_7a97f7e149e79afb]));
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
        static PyObject *t_EventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState$EventOccurrence_of_(t_EventState$EventOccurrence *self, PyObject *args);
        static PyObject *t_EventState$EventOccurrence_getAction(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_getNewState(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_getStopDate(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_get__action(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__newState(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__stopDate(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__parameters_(t_EventState$EventOccurrence *self, void *data);
        static PyGetSetDef t_EventState$EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, action),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, newState),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, stopDate),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState$EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_EventState$EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState$EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState$EventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getStopDate, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState$EventOccurrence)[] = {
          { Py_tp_methods, t_EventState$EventOccurrence__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventState$EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState$EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState$EventOccurrence, t_EventState$EventOccurrence, EventState$EventOccurrence);
        PyObject *t_EventState$EventOccurrence::wrap_Object(const EventState$EventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState$EventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState$EventOccurrence *self = (t_EventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventState$EventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState$EventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState$EventOccurrence *self = (t_EventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventState$EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState$EventOccurrence), &PY_TYPE_DEF(EventState$EventOccurrence), module, "EventState$EventOccurrence", 0);
        }

        void t_EventState$EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "class_", make_descriptor(EventState$EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "wrapfn_", make_descriptor(t_EventState$EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventState$EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_EventState$EventOccurrence::wrap_Object(EventState$EventOccurrence(((t_EventState$EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_EventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventState$EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventState$EventOccurrence_of_(t_EventState$EventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EventState$EventOccurrence_getAction(t_EventState$EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_EventState$EventOccurrence_getNewState(t_EventState$EventOccurrence *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_EventState$EventOccurrence_getStopDate(t_EventState$EventOccurrence *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EventState$EventOccurrence_get__parameters_(t_EventState$EventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventState$EventOccurrence_get__action(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_EventState$EventOccurrence_get__newState(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_EventState$EventOccurrence_get__stopDate(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphereBaseMessage.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereBaseMessage::class$ = NULL;
          jmethodID *IonosphereBaseMessage::mids$ = NULL;
          bool IonosphereBaseMessage::live$ = false;

          jclass IonosphereBaseMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereBaseMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e1b2f7b885c85083] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getTransmitTime_7a97f7e149e79afb] = env->getMethodID(cls, "getTransmitTime", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_setTransmitTime_20affcbd28542333] = env->getMethodID(cls, "setTransmitTime", "(Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereBaseMessage::IonosphereBaseMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_e1b2f7b885c85083, a0.this$, a1, a2.this$)) {}

          ::org::orekit::time::AbsoluteDate IonosphereBaseMessage::getTransmitTime() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTransmitTime_7a97f7e149e79afb]));
          }

          void IonosphereBaseMessage::setTransmitTime(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmitTime_20affcbd28542333], a0.this$);
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
      namespace rinex {
        namespace navigation {
          static PyObject *t_IonosphereBaseMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereBaseMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereBaseMessage_init_(t_IonosphereBaseMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereBaseMessage_getTransmitTime(t_IonosphereBaseMessage *self);
          static PyObject *t_IonosphereBaseMessage_setTransmitTime(t_IonosphereBaseMessage *self, PyObject *arg);
          static PyObject *t_IonosphereBaseMessage_get__transmitTime(t_IonosphereBaseMessage *self, void *data);
          static int t_IonosphereBaseMessage_set__transmitTime(t_IonosphereBaseMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereBaseMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_IonosphereBaseMessage, transmitTime),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereBaseMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereBaseMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBaseMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBaseMessage, getTransmitTime, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereBaseMessage, setTransmitTime, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereBaseMessage)[] = {
            { Py_tp_methods, t_IonosphereBaseMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereBaseMessage_init_ },
            { Py_tp_getset, t_IonosphereBaseMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereBaseMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereBaseMessage, t_IonosphereBaseMessage, IonosphereBaseMessage);

          void t_IonosphereBaseMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereBaseMessage), &PY_TYPE_DEF(IonosphereBaseMessage), module, "IonosphereBaseMessage", 0);
          }

          void t_IonosphereBaseMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "class_", make_descriptor(IonosphereBaseMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "wrapfn_", make_descriptor(t_IonosphereBaseMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereBaseMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereBaseMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereBaseMessage::wrap_Object(IonosphereBaseMessage(((t_IonosphereBaseMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereBaseMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereBaseMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereBaseMessage_init_(t_IonosphereBaseMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereBaseMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereBaseMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereBaseMessage_getTransmitTime(t_IonosphereBaseMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTransmitTime());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_IonosphereBaseMessage_setTransmitTime(t_IonosphereBaseMessage *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTransmitTime(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransmitTime", arg);
            return NULL;
          }

          static PyObject *t_IonosphereBaseMessage_get__transmitTime(t_IonosphereBaseMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTransmitTime());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_IonosphereBaseMessage_set__transmitTime(t_IonosphereBaseMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTransmitTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "transmitTime", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Segment.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Segment::class$ = NULL;
          jmethodID *Segment::mids$ = NULL;
          bool Segment::live$ = false;

          jclass Segment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Segment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3f2bfdea7068fab2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Line;)V");
              mids$[mid_getEnd_f88961cca75a2c0a] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getLine_50dd992767fffc25] = env->getMethodID(cls, "getLine", "()Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_getStart_f88961cca75a2c0a] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Line & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3f2bfdea7068fab2, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Segment::getEnd() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEnd_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Line Segment::getLine() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_getLine_50dd992767fffc25]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Segment::getStart() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getStart_f88961cca75a2c0a]));
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
        namespace threed {
          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Segment_getEnd(t_Segment *self);
          static PyObject *t_Segment_getLine(t_Segment *self);
          static PyObject *t_Segment_getStart(t_Segment *self);
          static PyObject *t_Segment_get__end(t_Segment *self, void *data);
          static PyObject *t_Segment_get__line(t_Segment *self, void *data);
          static PyObject *t_Segment_get__start(t_Segment *self, void *data);
          static PyGetSetDef t_Segment__fields_[] = {
            DECLARE_GET_FIELD(t_Segment, end),
            DECLARE_GET_FIELD(t_Segment, line),
            DECLARE_GET_FIELD(t_Segment, start),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Segment__methods_[] = {
            DECLARE_METHOD(t_Segment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getLine, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getStart, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Segment)[] = {
            { Py_tp_methods, t_Segment__methods_ },
            { Py_tp_init, (void *) t_Segment_init_ },
            { Py_tp_getset, t_Segment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Segment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Segment, t_Segment, Segment);

          void t_Segment::install(PyObject *module)
          {
            installType(&PY_TYPE(Segment), &PY_TYPE_DEF(Segment), module, "Segment", 0);
          }

          void t_Segment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "class_", make_descriptor(Segment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "wrapfn_", make_descriptor(t_Segment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Segment::initializeClass, 1)))
              return NULL;
            return t_Segment::wrap_Object(Segment(((t_Segment *) arg)->object.this$));
          }
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Segment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Line a2((jobject) NULL);
            Segment object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Segment(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Segment_getEnd(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Segment_getLine(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Line result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(result);
          }

          static PyObject *t_Segment_getStart(t_Segment *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Segment_get__end(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Segment_get__line(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Line value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine());
            return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(value);
          }

          static PyObject *t_Segment_get__start(t_Segment *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "java/lang/String.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PolygonalFieldOfView$DefiningConeType::class$ = NULL;
        jmethodID *PolygonalFieldOfView$DefiningConeType::mids$ = NULL;
        bool PolygonalFieldOfView$DefiningConeType::live$ = false;
        PolygonalFieldOfView$DefiningConeType *PolygonalFieldOfView$DefiningConeType::INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE = NULL;
        PolygonalFieldOfView$DefiningConeType *PolygonalFieldOfView$DefiningConeType::OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES = NULL;

        jclass PolygonalFieldOfView$DefiningConeType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_8a790818bb8fee21] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;");
            mids$[mid_values_34294ba1c4846ba2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;");
            mids$[mid_verticesRadius_156ae9d72f1c8533] = env->getMethodID(cls, "verticesRadius", "(DI)D");
            mids$[mid_createVertex_198b54b5df3ab767] = env->getMethodID(cls, "createVertex", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DI)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE = new PolygonalFieldOfView$DefiningConeType(env->getStaticObjectField(cls, "INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE", "Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;"));
            OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES = new PolygonalFieldOfView$DefiningConeType(env->getStaticObjectField(cls, "OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES", "Lorg/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolygonalFieldOfView$DefiningConeType PolygonalFieldOfView$DefiningConeType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return PolygonalFieldOfView$DefiningConeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8a790818bb8fee21], a0.this$));
        }

        JArray< PolygonalFieldOfView$DefiningConeType > PolygonalFieldOfView$DefiningConeType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< PolygonalFieldOfView$DefiningConeType >(env->callStaticObjectMethod(cls, mids$[mid_values_34294ba1c4846ba2]));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_of_(t_PolygonalFieldOfView$DefiningConeType *self, PyObject *args);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_values(PyTypeObject *type);
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_get__parameters_(t_PolygonalFieldOfView$DefiningConeType *self, void *data);
        static PyGetSetDef t_PolygonalFieldOfView$DefiningConeType__fields_[] = {
          DECLARE_GET_FIELD(t_PolygonalFieldOfView$DefiningConeType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolygonalFieldOfView$DefiningConeType__methods_[] = {
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, of_, METH_VARARGS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolygonalFieldOfView$DefiningConeType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolygonalFieldOfView$DefiningConeType)[] = {
          { Py_tp_methods, t_PolygonalFieldOfView$DefiningConeType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PolygonalFieldOfView$DefiningConeType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolygonalFieldOfView$DefiningConeType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(PolygonalFieldOfView$DefiningConeType, t_PolygonalFieldOfView$DefiningConeType, PolygonalFieldOfView$DefiningConeType);
        PyObject *t_PolygonalFieldOfView$DefiningConeType::wrap_Object(const PolygonalFieldOfView$DefiningConeType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PolygonalFieldOfView$DefiningConeType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PolygonalFieldOfView$DefiningConeType *self = (t_PolygonalFieldOfView$DefiningConeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PolygonalFieldOfView$DefiningConeType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PolygonalFieldOfView$DefiningConeType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PolygonalFieldOfView$DefiningConeType *self = (t_PolygonalFieldOfView$DefiningConeType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PolygonalFieldOfView$DefiningConeType::install(PyObject *module)
        {
          installType(&PY_TYPE(PolygonalFieldOfView$DefiningConeType), &PY_TYPE_DEF(PolygonalFieldOfView$DefiningConeType), module, "PolygonalFieldOfView$DefiningConeType", 0);
        }

        void t_PolygonalFieldOfView$DefiningConeType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "class_", make_descriptor(PolygonalFieldOfView$DefiningConeType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "wrapfn_", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "boxfn_", make_descriptor(boxObject));
          env->getClass(PolygonalFieldOfView$DefiningConeType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_Object(*PolygonalFieldOfView$DefiningConeType::INSIDE_CONE_TOUCHING_POLYGON_AT_EDGES_MIDDLE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolygonalFieldOfView$DefiningConeType), "OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES", make_descriptor(t_PolygonalFieldOfView$DefiningConeType::wrap_Object(*PolygonalFieldOfView$DefiningConeType::OUTSIDE_CONE_TOUCHING_POLYGON_AT_VERTICES)));
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolygonalFieldOfView$DefiningConeType::initializeClass, 1)))
            return NULL;
          return t_PolygonalFieldOfView$DefiningConeType::wrap_Object(PolygonalFieldOfView$DefiningConeType(((t_PolygonalFieldOfView$DefiningConeType *) arg)->object.this$));
        }
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolygonalFieldOfView$DefiningConeType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_of_(t_PolygonalFieldOfView$DefiningConeType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          PolygonalFieldOfView$DefiningConeType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::valueOf(a0));
            return t_PolygonalFieldOfView$DefiningConeType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_PolygonalFieldOfView$DefiningConeType_values(PyTypeObject *type)
        {
          JArray< PolygonalFieldOfView$DefiningConeType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::geometry::fov::PolygonalFieldOfView$DefiningConeType::values());
          return JArray<jobject>(result.this$).wrap(t_PolygonalFieldOfView$DefiningConeType::wrap_jobject);
        }
        static PyObject *t_PolygonalFieldOfView$DefiningConeType_get__parameters_(t_PolygonalFieldOfView$DefiningConeType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AdapterDetector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AdapterDetector::class$ = NULL;
        jmethodID *AdapterDetector::mids$ = NULL;
        bool AdapterDetector::live$ = false;

        jclass AdapterDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AdapterDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2e2dfaf38ed50d1d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_0701b00b25822fff] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getHandler_9cfb09a569a3f330] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_b5b0f3e235bdd705] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdapterDetector::AdapterDetector(const ::org::orekit::propagation::events::EventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2e2dfaf38ed50d1d, a0.this$)) {}

        jdouble AdapterDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector AdapterDetector::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_0701b00b25822fff]));
        }

        ::org::orekit::propagation::events::handlers::EventHandler AdapterDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_9cfb09a569a3f330]));
        }

        ::org::orekit::propagation::events::AdaptableInterval AdapterDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_b5b0f3e235bdd705]));
        }

        jint AdapterDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_412668abc8d889e9]);
        }

        jdouble AdapterDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_557b8123390d8d0c]);
        }

        void AdapterDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
        static PyObject *t_AdapterDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterDetector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdapterDetector_init_(t_AdapterDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdapterDetector_g(t_AdapterDetector *self, PyObject *arg);
        static PyObject *t_AdapterDetector_getDetector(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getHandler(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getMaxCheckInterval(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getMaxIterationCount(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getThreshold(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_init(t_AdapterDetector *self, PyObject *args);
        static PyObject *t_AdapterDetector_get__detector(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__handler(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__maxCheckInterval(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__maxIterationCount(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__threshold(t_AdapterDetector *self, void *data);
        static PyGetSetDef t_AdapterDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AdapterDetector, detector),
          DECLARE_GET_FIELD(t_AdapterDetector, handler),
          DECLARE_GET_FIELD(t_AdapterDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AdapterDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AdapterDetector, threshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdapterDetector__methods_[] = {
          DECLARE_METHOD(t_AdapterDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterDetector, g, METH_O),
          DECLARE_METHOD(t_AdapterDetector, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterDetector)[] = {
          { Py_tp_methods, t_AdapterDetector__methods_ },
          { Py_tp_init, (void *) t_AdapterDetector_init_ },
          { Py_tp_getset, t_AdapterDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdapterDetector, t_AdapterDetector, AdapterDetector);

        void t_AdapterDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterDetector), &PY_TYPE_DEF(AdapterDetector), module, "AdapterDetector", 0);
        }

        void t_AdapterDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "class_", make_descriptor(AdapterDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "wrapfn_", make_descriptor(t_AdapterDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterDetector::initializeClass, 1)))
            return NULL;
          return t_AdapterDetector::wrap_Object(AdapterDetector(((t_AdapterDetector *) arg)->object.this$));
        }
        static PyObject *t_AdapterDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdapterDetector_init_(t_AdapterDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          AdapterDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = AdapterDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdapterDetector_g(t_AdapterDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AdapterDetector_getDetector(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getHandler(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getMaxCheckInterval(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getMaxIterationCount(t_AdapterDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AdapterDetector_getThreshold(t_AdapterDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdapterDetector_init(t_AdapterDetector *self, PyObject *args)
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

        static PyObject *t_AdapterDetector_get__detector(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__handler(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__maxCheckInterval(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__maxIterationCount(t_AdapterDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AdapterDetector_get__threshold(t_AdapterDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummaryValues.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StatisticalSummaryValues::class$ = NULL;
        jmethodID *StatisticalSummaryValues::mids$ = NULL;
        bool StatisticalSummaryValues::live$ = false;

        jclass StatisticalSummaryValues::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StatisticalSummaryValues");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6eeee7b0aa7863ba] = env->getMethodID(cls, "<init>", "(DDJDDD)V");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getMax_557b8123390d8d0c] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_557b8123390d8d0c] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_557b8123390d8d0c] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_557b8123390d8d0c] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_557b8123390d8d0c] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getVariance_557b8123390d8d0c] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StatisticalSummaryValues::StatisticalSummaryValues(jdouble a0, jdouble a1, jlong a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6eeee7b0aa7863ba, a0, a1, a2, a3, a4, a5)) {}

        jboolean StatisticalSummaryValues::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        jdouble StatisticalSummaryValues::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_557b8123390d8d0c]);
        }

        jdouble StatisticalSummaryValues::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_557b8123390d8d0c]);
        }

        jdouble StatisticalSummaryValues::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_557b8123390d8d0c]);
        }

        jlong StatisticalSummaryValues::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
        }

        jdouble StatisticalSummaryValues::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_557b8123390d8d0c]);
        }

        jdouble StatisticalSummaryValues::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_557b8123390d8d0c]);
        }

        jdouble StatisticalSummaryValues::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_557b8123390d8d0c]);
        }

        jint StatisticalSummaryValues::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        ::java::lang::String StatisticalSummaryValues::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      namespace descriptive {
        static PyObject *t_StatisticalSummaryValues_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalSummaryValues_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StatisticalSummaryValues_init_(t_StatisticalSummaryValues *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StatisticalSummaryValues_equals(t_StatisticalSummaryValues *self, PyObject *args);
        static PyObject *t_StatisticalSummaryValues_getMax(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getMean(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getMin(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getN(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getStandardDeviation(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getSum(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_getVariance(t_StatisticalSummaryValues *self);
        static PyObject *t_StatisticalSummaryValues_hashCode(t_StatisticalSummaryValues *self, PyObject *args);
        static PyObject *t_StatisticalSummaryValues_toString(t_StatisticalSummaryValues *self, PyObject *args);
        static PyObject *t_StatisticalSummaryValues_get__max(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__mean(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__min(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__n(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__standardDeviation(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__sum(t_StatisticalSummaryValues *self, void *data);
        static PyObject *t_StatisticalSummaryValues_get__variance(t_StatisticalSummaryValues *self, void *data);
        static PyGetSetDef t_StatisticalSummaryValues__fields_[] = {
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, max),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, mean),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, min),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, n),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, standardDeviation),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, sum),
          DECLARE_GET_FIELD(t_StatisticalSummaryValues, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StatisticalSummaryValues__methods_[] = {
          DECLARE_METHOD(t_StatisticalSummaryValues, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummaryValues, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummaryValues, equals, METH_VARARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getN, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_StatisticalSummaryValues, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StatisticalSummaryValues)[] = {
          { Py_tp_methods, t_StatisticalSummaryValues__methods_ },
          { Py_tp_init, (void *) t_StatisticalSummaryValues_init_ },
          { Py_tp_getset, t_StatisticalSummaryValues__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StatisticalSummaryValues)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StatisticalSummaryValues, t_StatisticalSummaryValues, StatisticalSummaryValues);

        void t_StatisticalSummaryValues::install(PyObject *module)
        {
          installType(&PY_TYPE(StatisticalSummaryValues), &PY_TYPE_DEF(StatisticalSummaryValues), module, "StatisticalSummaryValues", 0);
        }

        void t_StatisticalSummaryValues::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummaryValues), "class_", make_descriptor(StatisticalSummaryValues::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummaryValues), "wrapfn_", make_descriptor(t_StatisticalSummaryValues::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummaryValues), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StatisticalSummaryValues_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StatisticalSummaryValues::initializeClass, 1)))
            return NULL;
          return t_StatisticalSummaryValues::wrap_Object(StatisticalSummaryValues(((t_StatisticalSummaryValues *) arg)->object.this$));
        }
        static PyObject *t_StatisticalSummaryValues_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StatisticalSummaryValues::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StatisticalSummaryValues_init_(t_StatisticalSummaryValues *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jlong a2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          StatisticalSummaryValues object((jobject) NULL);

          if (!parseArgs(args, "DDJDDD", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = StatisticalSummaryValues(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StatisticalSummaryValues_equals(t_StatisticalSummaryValues *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(StatisticalSummaryValues), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_StatisticalSummaryValues_getMax(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getMean(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getMin(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getN(t_StatisticalSummaryValues *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StatisticalSummaryValues_getStandardDeviation(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getSum(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_getVariance(t_StatisticalSummaryValues *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummaryValues_hashCode(t_StatisticalSummaryValues *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(StatisticalSummaryValues), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_StatisticalSummaryValues_toString(t_StatisticalSummaryValues *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(StatisticalSummaryValues), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_StatisticalSummaryValues_get__max(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__mean(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__min(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__n(t_StatisticalSummaryValues *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__standardDeviation(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__sum(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummaryValues_get__variance(t_StatisticalSummaryValues *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSPhaseModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockOneWayGNSSPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockOneWayGNSSPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockOneWayGNSSPhaseModifier::RelativisticJ2ClockOneWayGNSSPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void RelativisticJ2ClockOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
        namespace modifiers {
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockOneWayGNSSPhaseModifier_init_(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier, t_RelativisticJ2ClockOneWayGNSSPhaseModifier, RelativisticJ2ClockOneWayGNSSPhaseModifier);

          void t_RelativisticJ2ClockOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockOneWayGNSSPhaseModifier), module, "RelativisticJ2ClockOneWayGNSSPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockOneWayGNSSPhaseModifier::wrap_Object(RelativisticJ2ClockOneWayGNSSPhaseModifier(((t_RelativisticJ2ClockOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockOneWayGNSSPhaseModifier_init_(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockOneWayGNSSPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/String.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundStation::class$ = NULL;
        jmethodID *GroundStation::mids$ = NULL;
        bool GroundStation::live$ = false;
        ::java::lang::String *GroundStation::DRIFT_SUFFIX = NULL;
        ::java::lang::String *GroundStation::INTERMEDIATE_SUFFIX = NULL;
        ::java::lang::String *GroundStation::OFFSET_SUFFIX = NULL;

        jclass GroundStation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundStation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a649bdeaffd47ec2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_60459a6516c52e90] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;Lorg/orekit/frames/EOPHistory;[Lorg/orekit/models/earth/displacement/StationDisplacement;)V");
            mids$[mid_getBaseFrame_2bb3e750d93d59cc] = env->getMethodID(cls, "getBaseFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_getClockDriftDriver_4194657b5e280ddc] = env->getMethodID(cls, "getClockDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getClockOffsetDriver_4194657b5e280ddc] = env->getMethodID(cls, "getClockOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getDisplacements_1d5cad14381c93b4] = env->getMethodID(cls, "getDisplacements", "()[Lorg/orekit/models/earth/displacement/StationDisplacement;");
            mids$[mid_getEastOffsetDriver_4194657b5e280ddc] = env->getMethodID(cls, "getEastOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getEstimatedEarthFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getEstimatedEarthFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEstimatedUT1_22bf001d2b53d119] = env->getMethodID(cls, "getEstimatedUT1", "()Lorg/orekit/time/UT1Scale;");
            mids$[mid_getNorthOffsetDriver_4194657b5e280ddc] = env->getMethodID(cls, "getNorthOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getOffsetGeodeticPoint_999793d0df1eca2f] = env->getMethodID(cls, "getOffsetGeodeticPoint", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_getOffsetToInertial_0f4fe59b7c3f7001] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/frames/Transform;");
            mids$[mid_getOffsetToInertial_8dcac9b165b89489] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getOffsetToInertial_8cad1e5bac6f50a9] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getPolarDriftXDriver_4194657b5e280ddc] = env->getMethodID(cls, "getPolarDriftXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarDriftYDriver_4194657b5e280ddc] = env->getMethodID(cls, "getPolarDriftYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetXDriver_4194657b5e280ddc] = env->getMethodID(cls, "getPolarOffsetXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetYDriver_4194657b5e280ddc] = env->getMethodID(cls, "getPolarOffsetYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianDriftDriver_4194657b5e280ddc] = env->getMethodID(cls, "getPrimeMeridianDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianOffsetDriver_4194657b5e280ddc] = env->getMethodID(cls, "getPrimeMeridianOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getZenithOffsetDriver_4194657b5e280ddc] = env->getMethodID(cls, "getZenithOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DRIFT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DRIFT_SUFFIX", "Ljava/lang/String;"));
            INTERMEDIATE_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "INTERMEDIATE_SUFFIX", "Ljava/lang/String;"));
            OFFSET_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "OFFSET_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundStation::GroundStation(const ::org::orekit::frames::TopocentricFrame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a649bdeaffd47ec2, a0.this$)) {}

        GroundStation::GroundStation(const ::org::orekit::frames::TopocentricFrame & a0, const ::org::orekit::frames::EOPHistory & a1, const JArray< ::org::orekit::models::earth::displacement::StationDisplacement > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_60459a6516c52e90, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::frames::TopocentricFrame GroundStation::getBaseFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getBaseFrame_2bb3e750d93d59cc]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getClockDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockDriftDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getClockOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockOffsetDriver_4194657b5e280ddc]));
        }

        JArray< ::org::orekit::models::earth::displacement::StationDisplacement > GroundStation::getDisplacements() const
        {
          return JArray< ::org::orekit::models::earth::displacement::StationDisplacement >(env->callObjectMethod(this$, mids$[mid_getDisplacements_1d5cad14381c93b4]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getEastOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getEastOffsetDriver_4194657b5e280ddc]));
        }

        ::org::orekit::frames::Frame GroundStation::getEstimatedEarthFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEstimatedEarthFrame_6c9bc0a928c56d4e]));
        }

        ::org::orekit::time::UT1Scale GroundStation::getEstimatedUT1() const
        {
          return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getEstimatedUT1_22bf001d2b53d119]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getNorthOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getNorthOffsetDriver_4194657b5e280ddc]));
        }

        ::org::orekit::bodies::GeodeticPoint GroundStation::getOffsetGeodeticPoint(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getOffsetGeodeticPoint_999793d0df1eca2f], a0.this$));
        }

        ::org::orekit::frames::Transform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_0f4fe59b7c3f7001], a0.this$, a1.this$, a2));
        }

        ::org::orekit::frames::FieldTransform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, const ::java::util::Map & a3) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_8dcac9b165b89489], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::orekit::frames::FieldTransform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, jint a2, const ::java::util::Map & a3) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_8cad1e5bac6f50a9], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarDriftXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftXDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarDriftYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftYDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarOffsetXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetXDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarOffsetYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetYDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPrimeMeridianDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianDriftDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPrimeMeridianOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianOffsetDriver_4194657b5e280ddc]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getZenithOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getZenithOffsetDriver_4194657b5e280ddc]));
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
        static PyObject *t_GroundStation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundStation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundStation_init_(t_GroundStation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundStation_getBaseFrame(t_GroundStation *self);
        static PyObject *t_GroundStation_getClockDriftDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getClockOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getDisplacements(t_GroundStation *self);
        static PyObject *t_GroundStation_getEastOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getEstimatedEarthFrame(t_GroundStation *self);
        static PyObject *t_GroundStation_getEstimatedUT1(t_GroundStation *self);
        static PyObject *t_GroundStation_getNorthOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getOffsetGeodeticPoint(t_GroundStation *self, PyObject *arg);
        static PyObject *t_GroundStation_getOffsetToInertial(t_GroundStation *self, PyObject *args);
        static PyObject *t_GroundStation_getPolarDriftXDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarDriftYDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarOffsetXDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarOffsetYDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPrimeMeridianDriftDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPrimeMeridianOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getZenithOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_get__baseFrame(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__clockDriftDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__clockOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__displacements(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__eastOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__estimatedEarthFrame(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__estimatedUT1(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__northOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarDriftXDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarDriftYDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarOffsetXDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarOffsetYDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__primeMeridianDriftDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__primeMeridianOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__zenithOffsetDriver(t_GroundStation *self, void *data);
        static PyGetSetDef t_GroundStation__fields_[] = {
          DECLARE_GET_FIELD(t_GroundStation, baseFrame),
          DECLARE_GET_FIELD(t_GroundStation, clockDriftDriver),
          DECLARE_GET_FIELD(t_GroundStation, clockOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, displacements),
          DECLARE_GET_FIELD(t_GroundStation, eastOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, estimatedEarthFrame),
          DECLARE_GET_FIELD(t_GroundStation, estimatedUT1),
          DECLARE_GET_FIELD(t_GroundStation, northOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarDriftXDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarDriftYDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarOffsetXDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarOffsetYDriver),
          DECLARE_GET_FIELD(t_GroundStation, primeMeridianDriftDriver),
          DECLARE_GET_FIELD(t_GroundStation, primeMeridianOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, zenithOffsetDriver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundStation__methods_[] = {
          DECLARE_METHOD(t_GroundStation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundStation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundStation, getBaseFrame, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getClockDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getClockOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getDisplacements, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEastOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEstimatedEarthFrame, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEstimatedUT1, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getNorthOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getOffsetGeodeticPoint, METH_O),
          DECLARE_METHOD(t_GroundStation, getOffsetToInertial, METH_VARARGS),
          DECLARE_METHOD(t_GroundStation, getPolarDriftXDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarDriftYDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarOffsetXDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarOffsetYDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPrimeMeridianDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPrimeMeridianOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getZenithOffsetDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundStation)[] = {
          { Py_tp_methods, t_GroundStation__methods_ },
          { Py_tp_init, (void *) t_GroundStation_init_ },
          { Py_tp_getset, t_GroundStation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundStation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GroundStation, t_GroundStation, GroundStation);

        void t_GroundStation::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundStation), &PY_TYPE_DEF(GroundStation), module, "GroundStation", 0);
        }

        void t_GroundStation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "class_", make_descriptor(GroundStation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "wrapfn_", make_descriptor(t_GroundStation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "boxfn_", make_descriptor(boxObject));
          env->getClass(GroundStation::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "DRIFT_SUFFIX", make_descriptor(j2p(*GroundStation::DRIFT_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "INTERMEDIATE_SUFFIX", make_descriptor(j2p(*GroundStation::INTERMEDIATE_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "OFFSET_SUFFIX", make_descriptor(j2p(*GroundStation::OFFSET_SUFFIX)));
        }

        static PyObject *t_GroundStation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundStation::initializeClass, 1)))
            return NULL;
          return t_GroundStation::wrap_Object(GroundStation(((t_GroundStation *) arg)->object.this$));
        }
        static PyObject *t_GroundStation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundStation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundStation_init_(t_GroundStation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              GroundStation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = GroundStation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ::org::orekit::frames::EOPHistory a1((jobject) NULL);
              JArray< ::org::orekit::models::earth::displacement::StationDisplacement > a2((jobject) NULL);
              GroundStation object((jobject) NULL);

              if (!parseArgs(args, "kk[k", ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::models::earth::displacement::StationDisplacement::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = GroundStation(a0, a1, a2));
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

        static PyObject *t_GroundStation_getBaseFrame(t_GroundStation *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getClockDriftDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getClockOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getDisplacements(t_GroundStation *self)
        {
          JArray< ::org::orekit::models::earth::displacement::StationDisplacement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplacements());
          return JArray<jobject>(result.this$).wrap(::org::orekit::models::earth::displacement::t_StationDisplacement::wrap_jobject);
        }

        static PyObject *t_GroundStation_getEastOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getEastOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getEstimatedEarthFrame(t_GroundStation *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedEarthFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getEstimatedUT1(t_GroundStation *self)
        {
          ::org::orekit::time::UT1Scale result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getNorthOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getNorthOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getOffsetGeodeticPoint(t_GroundStation *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getOffsetGeodeticPoint(a0));
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOffsetGeodeticPoint", arg);
          return NULL;
        }

        static PyObject *t_GroundStation_getOffsetToInertial(t_GroundStation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::frames::Transform result((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2));
                return ::org::orekit::frames::t_Transform::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jint a2;
              ::java::util::Map a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "kkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2, a3));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::java::util::Map a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "kKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2, a3));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getOffsetToInertial", args);
          return NULL;
        }

        static PyObject *t_GroundStation_getPolarDriftXDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarDriftYDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarOffsetXDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarOffsetYDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPrimeMeridianDriftDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPrimeMeridianOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getZenithOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getZenithOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_get__baseFrame(t_GroundStation *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__clockDriftDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__clockOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__displacements(t_GroundStation *self, void *data)
        {
          JArray< ::org::orekit::models::earth::displacement::StationDisplacement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getDisplacements());
          return JArray<jobject>(value.this$).wrap(::org::orekit::models::earth::displacement::t_StationDisplacement::wrap_jobject);
        }

        static PyObject *t_GroundStation_get__eastOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getEastOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__estimatedEarthFrame(t_GroundStation *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedEarthFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__estimatedUT1(t_GroundStation *self, void *data)
        {
          ::org::orekit::time::UT1Scale value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__northOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getNorthOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarDriftXDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarDriftYDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarOffsetXDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarOffsetYDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__primeMeridianDriftDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__primeMeridianOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__zenithOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getZenithOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldCombinedDerivatives::class$ = NULL;
        jmethodID *FieldCombinedDerivatives::mids$ = NULL;
        bool FieldCombinedDerivatives::live$ = false;

        jclass FieldCombinedDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldCombinedDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c0fd42a693364fa] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getAdditionalDerivatives_41762fd4377ff26e] = env->getMethodID(cls, "getAdditionalDerivatives", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMainStateDerivativesIncrements_41762fd4377ff26e] = env->getMethodID(cls, "getMainStateDerivativesIncrements", "()[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldCombinedDerivatives::FieldCombinedDerivatives(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c0fd42a693364fa, a0.this$, a1.this$)) {}

        JArray< ::org::hipparchus::CalculusFieldElement > FieldCombinedDerivatives::getAdditionalDerivatives() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivatives_41762fd4377ff26e]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldCombinedDerivatives::getMainStateDerivativesIncrements() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMainStateDerivativesIncrements_41762fd4377ff26e]));
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
      namespace integration {
        static PyObject *t_FieldCombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldCombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldCombinedDerivatives_of_(t_FieldCombinedDerivatives *self, PyObject *args);
        static int t_FieldCombinedDerivatives_init_(t_FieldCombinedDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldCombinedDerivatives_getAdditionalDerivatives(t_FieldCombinedDerivatives *self);
        static PyObject *t_FieldCombinedDerivatives_getMainStateDerivativesIncrements(t_FieldCombinedDerivatives *self);
        static PyObject *t_FieldCombinedDerivatives_get__additionalDerivatives(t_FieldCombinedDerivatives *self, void *data);
        static PyObject *t_FieldCombinedDerivatives_get__mainStateDerivativesIncrements(t_FieldCombinedDerivatives *self, void *data);
        static PyObject *t_FieldCombinedDerivatives_get__parameters_(t_FieldCombinedDerivatives *self, void *data);
        static PyGetSetDef t_FieldCombinedDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, additionalDerivatives),
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, mainStateDerivativesIncrements),
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldCombinedDerivatives__methods_[] = {
          DECLARE_METHOD(t_FieldCombinedDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, getAdditionalDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, getMainStateDerivativesIncrements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldCombinedDerivatives)[] = {
          { Py_tp_methods, t_FieldCombinedDerivatives__methods_ },
          { Py_tp_init, (void *) t_FieldCombinedDerivatives_init_ },
          { Py_tp_getset, t_FieldCombinedDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldCombinedDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldCombinedDerivatives, t_FieldCombinedDerivatives, FieldCombinedDerivatives);
        PyObject *t_FieldCombinedDerivatives::wrap_Object(const FieldCombinedDerivatives& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldCombinedDerivatives::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldCombinedDerivatives *self = (t_FieldCombinedDerivatives *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldCombinedDerivatives::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldCombinedDerivatives::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldCombinedDerivatives *self = (t_FieldCombinedDerivatives *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldCombinedDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldCombinedDerivatives), &PY_TYPE_DEF(FieldCombinedDerivatives), module, "FieldCombinedDerivatives", 0);
        }

        void t_FieldCombinedDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "class_", make_descriptor(FieldCombinedDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "wrapfn_", make_descriptor(t_FieldCombinedDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldCombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldCombinedDerivatives::initializeClass, 1)))
            return NULL;
          return t_FieldCombinedDerivatives::wrap_Object(FieldCombinedDerivatives(((t_FieldCombinedDerivatives *) arg)->object.this$));
        }
        static PyObject *t_FieldCombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldCombinedDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldCombinedDerivatives_of_(t_FieldCombinedDerivatives *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldCombinedDerivatives_init_(t_FieldCombinedDerivatives *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldCombinedDerivatives object((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldCombinedDerivatives(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldCombinedDerivatives_getAdditionalDerivatives(t_FieldCombinedDerivatives *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivatives());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldCombinedDerivatives_getMainStateDerivativesIncrements(t_FieldCombinedDerivatives *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMainStateDerivativesIncrements());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
        static PyObject *t_FieldCombinedDerivatives_get__parameters_(t_FieldCombinedDerivatives *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldCombinedDerivatives_get__additionalDerivatives(t_FieldCombinedDerivatives *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivatives());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldCombinedDerivatives_get__mainStateDerivativesIncrements(t_FieldCombinedDerivatives *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMainStateDerivativesIncrements());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractAmbiguityModifier::class$ = NULL;
          jmethodID *AbstractAmbiguityModifier::mids$ = NULL;
          bool AbstractAmbiguityModifier::live$ = false;

          jclass AbstractAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
              mids$[mid_doModify_0054a497255e8220] = env->getMethodID(cls, "doModify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_doModifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "doModifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractAmbiguityModifier::AbstractAmbiguityModifier(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}
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
        namespace modifiers {
          static PyObject *t_AbstractAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractAmbiguityModifier_init_(t_AbstractAmbiguityModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractAmbiguityModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractAmbiguityModifier)[] = {
            { Py_tp_methods, t_AbstractAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractAmbiguityModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractAmbiguityModifier, t_AbstractAmbiguityModifier, AbstractAmbiguityModifier);

          void t_AbstractAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractAmbiguityModifier), &PY_TYPE_DEF(AbstractAmbiguityModifier), module, "AbstractAmbiguityModifier", 0);
          }

          void t_AbstractAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "class_", make_descriptor(AbstractAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "wrapfn_", make_descriptor(t_AbstractAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractAmbiguityModifier::wrap_Object(AbstractAmbiguityModifier(((t_AbstractAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractAmbiguityModifier_init_(t_AbstractAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            AbstractAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = AbstractAmbiguityModifier(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiElliptic.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarD.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarN.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarS.h"
#include "java/lang/Class.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarC.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiElliptic::class$ = NULL;
          jmethodID *JacobiElliptic::mids$ = NULL;
          bool JacobiElliptic::live$ = false;

          jclass JacobiElliptic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiElliptic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_arccd_7e960cd6eee376d8] = env->getMethodID(cls, "arccd", "(D)D");
              mids$[mid_arccn_7e960cd6eee376d8] = env->getMethodID(cls, "arccn", "(D)D");
              mids$[mid_arccs_7e960cd6eee376d8] = env->getMethodID(cls, "arccs", "(D)D");
              mids$[mid_arcdc_7e960cd6eee376d8] = env->getMethodID(cls, "arcdc", "(D)D");
              mids$[mid_arcdn_7e960cd6eee376d8] = env->getMethodID(cls, "arcdn", "(D)D");
              mids$[mid_arcds_7e960cd6eee376d8] = env->getMethodID(cls, "arcds", "(D)D");
              mids$[mid_arcnc_7e960cd6eee376d8] = env->getMethodID(cls, "arcnc", "(D)D");
              mids$[mid_arcnd_7e960cd6eee376d8] = env->getMethodID(cls, "arcnd", "(D)D");
              mids$[mid_arcns_7e960cd6eee376d8] = env->getMethodID(cls, "arcns", "(D)D");
              mids$[mid_arcsc_7e960cd6eee376d8] = env->getMethodID(cls, "arcsc", "(D)D");
              mids$[mid_arcsd_7e960cd6eee376d8] = env->getMethodID(cls, "arcsd", "(D)D");
              mids$[mid_arcsn_7e960cd6eee376d8] = env->getMethodID(cls, "arcsn", "(D)D");
              mids$[mid_getM_557b8123390d8d0c] = env->getMethodID(cls, "getM", "()D");
              mids$[mid_valuesC_e345c4dd0533650e] = env->getMethodID(cls, "valuesC", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarC;");
              mids$[mid_valuesD_408502db7d0db10a] = env->getMethodID(cls, "valuesD", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarD;");
              mids$[mid_valuesN_329a9c1ed260f19a] = env->getMethodID(cls, "valuesN", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarN;");
              mids$[mid_valuesS_1972a62e923c15d4] = env->getMethodID(cls, "valuesS", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarS;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble JacobiElliptic::arccd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccd_7e960cd6eee376d8], a0);
          }

          jdouble JacobiElliptic::arccn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccn_7e960cd6eee376d8], a0);
          }

          jdouble JacobiElliptic::arccs(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccs_7e960cd6eee376d8], a0);
          }

          jdouble JacobiElliptic::arcdc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcdc_7e960cd6eee376d8], a0);
          }

          jdouble JacobiElliptic::arcdn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcdn_7e960cd6eee376d8], a0);
          }

          jdouble JacobiElliptic::arcds(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcds_7e960cd6eee376d8], a0);
          }

          jdouble JacobiElliptic::arcnc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcnc_7e960cd6eee376d8], a0);
          }

          jdouble JacobiElliptic::arcnd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcnd_7e960cd6eee376d8], a0);
          }

          jdouble JacobiElliptic::arcns(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcns_7e960cd6eee376d8], a0);
          }

          jdouble JacobiElliptic::arcsc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsc_7e960cd6eee376d8], a0);
          }

          jdouble JacobiElliptic::arcsd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsd_7e960cd6eee376d8], a0);
          }

          jdouble JacobiElliptic::arcsn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsn_7e960cd6eee376d8], a0);
          }

          jdouble JacobiElliptic::getM() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM_557b8123390d8d0c]);
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarC JacobiElliptic::valuesC(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_e345c4dd0533650e], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarD JacobiElliptic::valuesD(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_408502db7d0db10a], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarN JacobiElliptic::valuesN(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_329a9c1ed260f19a], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarS JacobiElliptic::valuesS(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_1972a62e923c15d4], a0));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_JacobiElliptic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiElliptic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiElliptic_arccd(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arccn(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arccs(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcdc(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcdn(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcds(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcnc(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcnd(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcns(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcsc(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcsd(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcsn(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_getM(t_JacobiElliptic *self);
          static PyObject *t_JacobiElliptic_valuesC(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_valuesD(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_valuesN(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_valuesS(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_get__m(t_JacobiElliptic *self, void *data);
          static PyGetSetDef t_JacobiElliptic__fields_[] = {
            DECLARE_GET_FIELD(t_JacobiElliptic, m),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JacobiElliptic__methods_[] = {
            DECLARE_METHOD(t_JacobiElliptic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiElliptic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiElliptic, arccd, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arccn, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arccs, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcdc, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcdn, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcds, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcnc, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcnd, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcns, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcsc, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcsd, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcsn, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, getM, METH_NOARGS),
            DECLARE_METHOD(t_JacobiElliptic, valuesC, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, valuesD, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, valuesN, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, valuesS, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiElliptic)[] = {
            { Py_tp_methods, t_JacobiElliptic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_JacobiElliptic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiElliptic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiElliptic, t_JacobiElliptic, JacobiElliptic);

          void t_JacobiElliptic::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiElliptic), &PY_TYPE_DEF(JacobiElliptic), module, "JacobiElliptic", 0);
          }

          void t_JacobiElliptic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiElliptic), "class_", make_descriptor(JacobiElliptic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiElliptic), "wrapfn_", make_descriptor(t_JacobiElliptic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiElliptic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiElliptic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiElliptic::initializeClass, 1)))
              return NULL;
            return t_JacobiElliptic::wrap_Object(JacobiElliptic(((t_JacobiElliptic *) arg)->object.this$));
          }
          static PyObject *t_JacobiElliptic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiElliptic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JacobiElliptic_arccd(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arccd(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arccd", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arccn(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arccn(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arccn", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arccs(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arccs(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arccs", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcdc(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcdc(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcdc", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcdn(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcdn(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcdn", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcds(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcds(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcds", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcnc(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcnc(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcnc", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcnd(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcnd(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcnd", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcns(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcns(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcns", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcsc(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcsc(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcsc", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcsd(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcsd(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcsd", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcsn(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcsn(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcsn", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_getM(t_JacobiElliptic *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getM());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_JacobiElliptic_valuesC(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarC result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesC(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarC::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesC", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_valuesD(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarD result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesD(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarD::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesD", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_valuesN(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarN result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesN(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarN::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesN", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_valuesS(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarS result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesS(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarS::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesS", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_get__m(t_JacobiElliptic *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getM());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPFitter.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/EOPFittedModel.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPFitter::class$ = NULL;
      jmethodID *EOPFitter::mids$ = NULL;
      bool EOPFitter::live$ = false;

      jclass EOPFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e586bdb7bb59c8ba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;)V");
          mids$[mid_fit_acbe010d10a5ce79] = env->getMethodID(cls, "fit", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/frames/EOPFittedModel;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPFitter::EOPFitter(const ::org::orekit::frames::SingleParameterFitter & a0, const ::org::orekit::frames::SingleParameterFitter & a1, const ::org::orekit::frames::SingleParameterFitter & a2, const ::org::orekit::frames::SingleParameterFitter & a3, const ::org::orekit::frames::SingleParameterFitter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e586bdb7bb59c8ba, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::frames::EOPFittedModel EOPFitter::fit(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::frames::EOPFittedModel(env->callObjectMethod(this$, mids$[mid_fit_acbe010d10a5ce79], a0.this$));
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
      static PyObject *t_EOPFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPFitter_init_(t_EOPFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPFitter_fit(t_EOPFitter *self, PyObject *arg);

      static PyMethodDef t_EOPFitter__methods_[] = {
        DECLARE_METHOD(t_EOPFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFitter, fit, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPFitter)[] = {
        { Py_tp_methods, t_EOPFitter__methods_ },
        { Py_tp_init, (void *) t_EOPFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPFitter, t_EOPFitter, EOPFitter);

      void t_EOPFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPFitter), &PY_TYPE_DEF(EOPFitter), module, "EOPFitter", 0);
      }

      void t_EOPFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "class_", make_descriptor(EOPFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "wrapfn_", make_descriptor(t_EOPFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPFitter::initializeClass, 1)))
          return NULL;
        return t_EOPFitter::wrap_Object(EOPFitter(((t_EOPFitter *) arg)->object.this$));
      }
      static PyObject *t_EOPFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPFitter_init_(t_EOPFitter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::SingleParameterFitter a0((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a1((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a2((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a3((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a4((jobject) NULL);
        EOPFitter object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = EOPFitter(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPFitter_fit(t_EOPFitter *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::frames::EOPFittedModel result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.fit(a0));
          return ::org::orekit::frames::t_EOPFittedModel::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "fit", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1042Data::class$ = NULL;
              jmethodID *Rtcm1042Data::mids$ = NULL;
              bool Rtcm1042Data::live$ = false;

              jclass Rtcm1042Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getBeidouNavigationMessage_006e221904e033c6] = env->getMethodID(cls, "getBeidouNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;");
                  mids$[mid_getBeidouNavigationMessage_0da0f002b5100811] = env->getMethodID(cls, "getBeidouNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;");
                  mids$[mid_getBeidouToc_557b8123390d8d0c] = env->getMethodID(cls, "getBeidouToc", "()D");
                  mids$[mid_getSvHealth_557b8123390d8d0c] = env->getMethodID(cls, "getSvHealth", "()D");
                  mids$[mid_setBeidouNavigationMessage_b3ed48b5bc32689f] = env->getMethodID(cls, "setBeidouNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;)V");
                  mids$[mid_setBeidouToc_10f281d777284cea] = env->getMethodID(cls, "setBeidouToc", "(D)V");
                  mids$[mid_setSvHealth_10f281d777284cea] = env->getMethodID(cls, "setSvHealth", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1042Data::Rtcm1042Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage Rtcm1042Data::getBeidouNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getBeidouNavigationMessage_006e221904e033c6]));
              }

              ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage Rtcm1042Data::getBeidouNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getBeidouNavigationMessage_0da0f002b5100811], a0.this$));
              }

              jdouble Rtcm1042Data::getBeidouToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBeidouToc_557b8123390d8d0c]);
              }

              jdouble Rtcm1042Data::getSvHealth() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSvHealth_557b8123390d8d0c]);
              }

              void Rtcm1042Data::setBeidouNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeidouNavigationMessage_b3ed48b5bc32689f], a0.this$);
              }

              void Rtcm1042Data::setBeidouToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeidouToc_10f281d777284cea], a0);
              }

              void Rtcm1042Data::setSvHealth(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSvHealth_10f281d777284cea], a0);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1042Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1042Data_init_(t_Rtcm1042Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1042Data_getBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *args);
              static PyObject *t_Rtcm1042Data_getBeidouToc(t_Rtcm1042Data *self);
              static PyObject *t_Rtcm1042Data_getSvHealth(t_Rtcm1042Data *self);
              static PyObject *t_Rtcm1042Data_setBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_setBeidouToc(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_setSvHealth(t_Rtcm1042Data *self, PyObject *arg);
              static PyObject *t_Rtcm1042Data_get__beidouNavigationMessage(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__beidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1042Data_get__beidouToc(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__beidouToc(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1042Data_get__svHealth(t_Rtcm1042Data *self, void *data);
              static int t_Rtcm1042Data_set__svHealth(t_Rtcm1042Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1042Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, beidouNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, beidouToc),
                DECLARE_GETSET_FIELD(t_Rtcm1042Data, svHealth),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1042Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1042Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042Data, getBeidouNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1042Data, getBeidouToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1042Data, getSvHealth, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1042Data, setBeidouNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1042Data, setBeidouToc, METH_O),
                DECLARE_METHOD(t_Rtcm1042Data, setSvHealth, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1042Data)[] = {
                { Py_tp_methods, t_Rtcm1042Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1042Data_init_ },
                { Py_tp_getset, t_Rtcm1042Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1042Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1042Data, t_Rtcm1042Data, Rtcm1042Data);

              void t_Rtcm1042Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1042Data), &PY_TYPE_DEF(Rtcm1042Data), module, "Rtcm1042Data", 0);
              }

              void t_Rtcm1042Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "class_", make_descriptor(Rtcm1042Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "wrapfn_", make_descriptor(t_Rtcm1042Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1042Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1042Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1042Data::wrap_Object(Rtcm1042Data(((t_Rtcm1042Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1042Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1042Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1042Data_init_(t_Rtcm1042Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1042Data object((jobject) NULL);

                INT_CALL(object = Rtcm1042Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1042Data_getBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getBeidouNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getBeidouNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getBeidouNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_getBeidouToc(t_Rtcm1042Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBeidouToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1042Data_getSvHealth(t_Rtcm1042Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSvHealth());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1042Data_setBeidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setBeidouNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeidouNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_setBeidouToc(t_Rtcm1042Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBeidouToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeidouToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_setSvHealth(t_Rtcm1042Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSvHealth(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1042Data_get__beidouNavigationMessage(t_Rtcm1042Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getBeidouNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_BeidouLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1042Data_set__beidouNavigationMessage(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setBeidouNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beidouNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1042Data_get__beidouToc(t_Rtcm1042Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBeidouToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1042Data_set__beidouToc(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBeidouToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beidouToc", arg);
                return -1;
              }

              static PyObject *t_Rtcm1042Data_get__svHealth(t_Rtcm1042Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSvHealth());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1042Data_set__svHealth(t_Rtcm1042Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSvHealth(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
                return -1;
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
#include "org/hipparchus/linear/OpenMapRealMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/SparseRealMatrix.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/OpenMapRealMatrix.h"
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
          mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_add_8476a57dc45d9597] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_addToEntry_754312f3734d6e2f] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_e95fec3f7133efdf] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_createMatrix_61139315e9486837] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getEntry_21b81d54c06b64b0] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_multiply_8476a57dc45d9597] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_multiply_340b47d21842d02c] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyEntry_754312f3734d6e2f] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_340b47d21842d02c] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setEntry_754312f3734d6e2f] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_subtract_8476a57dc45d9597] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/OpenMapRealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_subtract_940a268a713300c5] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/OpenMapRealMatrix;");
          mids$[mid_transposeMultiply_340b47d21842d02c] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenMapRealMatrix::OpenMapRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

      OpenMapRealMatrix OpenMapRealMatrix::add(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_add_8476a57dc45d9597], a0.this$));
      }

      void OpenMapRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_754312f3734d6e2f], a0, a1, a2);
      }

      OpenMapRealMatrix OpenMapRealMatrix::copy() const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_copy_e95fec3f7133efdf]));
      }

      OpenMapRealMatrix OpenMapRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_61139315e9486837], a0, a1));
      }

      jint OpenMapRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      jdouble OpenMapRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_21b81d54c06b64b0], a0, a1);
      }

      jint OpenMapRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      OpenMapRealMatrix OpenMapRealMatrix::multiply(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_8476a57dc45d9597], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::multiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_340b47d21842d02c], a0.this$));
      }

      void OpenMapRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_754312f3734d6e2f], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_340b47d21842d02c], a0.this$));
      }

      void OpenMapRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_754312f3734d6e2f], a0, a1, a2);
      }

      OpenMapRealMatrix OpenMapRealMatrix::subtract(const OpenMapRealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_8476a57dc45d9597], a0.this$));
      }

      OpenMapRealMatrix OpenMapRealMatrix::subtract(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return OpenMapRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_940a268a713300c5], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix OpenMapRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_340b47d21842d02c], a0.this$));
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
#include "org/hipparchus/analysis/FunctionUtils.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FunctionUtils::class$ = NULL;
      jmethodID *FunctionUtils::mids$ = NULL;
      bool FunctionUtils::live$ = false;

      jclass FunctionUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FunctionUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_7fa3f7fd3ae81707] = env->getStaticMethodID(cls, "add", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_add_aa258a25e5aa8480] = env->getStaticMethodID(cls, "add", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_collector_f1cef6b9a4ab60ff] = env->getStaticMethodID(cls, "collector", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_collector_8d82531d92573cbf] = env->getStaticMethodID(cls, "collector", "(Lorg/hipparchus/analysis/BivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;D)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_combine_485b9d450102a3d6] = env->getStaticMethodID(cls, "combine", "(Lorg/hipparchus/analysis/BivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_compose_7fa3f7fd3ae81707] = env->getStaticMethodID(cls, "compose", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_compose_aa258a25e5aa8480] = env->getStaticMethodID(cls, "compose", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_derivative_6067394c788ff7c4] = env->getStaticMethodID(cls, "derivative", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;[I)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_derivative_d32286ed7ab8e1ed] = env->getStaticMethodID(cls, "derivative", "(Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;I)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_fix1stArgument_6433026d4a74b2a4] = env->getStaticMethodID(cls, "fix1stArgument", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_fix2ndArgument_6433026d4a74b2a4] = env->getStaticMethodID(cls, "fix2ndArgument", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_multiply_7fa3f7fd3ae81707] = env->getStaticMethodID(cls, "multiply", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_multiply_aa258a25e5aa8480] = env->getStaticMethodID(cls, "multiply", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_sample_3682f29a267a9c14] = env->getStaticMethodID(cls, "sample", "(Lorg/hipparchus/analysis/UnivariateFunction;DDI)[D");
          mids$[mid_toDifferentiable_bcc65662dd57fbae] = env->getStaticMethodID(cls, "toDifferentiable", "(Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_toDifferentiable_fca30ac7ebcab533] = env->getStaticMethodID(cls, "toDifferentiable", "(Lorg/hipparchus/analysis/MultivariateFunction;Lorg/hipparchus/analysis/MultivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::add(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_add_7fa3f7fd3ae81707], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::add(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_add_aa258a25e5aa8480], a0.this$));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::collector(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_collector_f1cef6b9a4ab60ff], a0.this$, a1));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::collector(const ::org::hipparchus::analysis::BivariateFunction & a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_collector_8d82531d92573cbf], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::combine(const ::org::hipparchus::analysis::BivariateFunction & a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, const ::org::hipparchus::analysis::UnivariateFunction & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_combine_485b9d450102a3d6], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::compose(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_compose_7fa3f7fd3ae81707], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::compose(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_compose_aa258a25e5aa8480], a0.this$));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::derivative(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_derivative_6067394c788ff7c4], a0.this$, a1.this$));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::derivative(const ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_derivative_d32286ed7ab8e1ed], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::fix1stArgument(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_fix1stArgument_6433026d4a74b2a4], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::fix2ndArgument(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_fix2ndArgument_6433026d4a74b2a4], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::multiply(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_multiply_7fa3f7fd3ae81707], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::multiply(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_multiply_aa258a25e5aa8480], a0.this$));
      }

      JArray< jdouble > FunctionUtils::sample(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_sample_3682f29a267a9c14], a0.this$, a1, a2, a3));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::toDifferentiable(const ::org::hipparchus::analysis::UnivariateFunction & a0, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_toDifferentiable_bcc65662dd57fbae], a0.this$, a1.this$));
      }

      ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction FunctionUtils::toDifferentiable(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::org::hipparchus::analysis::MultivariateVectorFunction & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_toDifferentiable_fca30ac7ebcab533], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_FunctionUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FunctionUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FunctionUtils_add(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_collector(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_combine(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_compose(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_derivative(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_fix1stArgument(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_fix2ndArgument(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_multiply(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_sample(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_toDifferentiable(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_FunctionUtils__methods_[] = {
        DECLARE_METHOD(t_FunctionUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, add, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, collector, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, combine, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, compose, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, derivative, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, fix1stArgument, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, fix2ndArgument, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, multiply, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, sample, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, toDifferentiable, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FunctionUtils)[] = {
        { Py_tp_methods, t_FunctionUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FunctionUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FunctionUtils, t_FunctionUtils, FunctionUtils);

      void t_FunctionUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(FunctionUtils), &PY_TYPE_DEF(FunctionUtils), module, "FunctionUtils", 0);
      }

      void t_FunctionUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionUtils), "class_", make_descriptor(FunctionUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionUtils), "wrapfn_", make_descriptor(t_FunctionUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FunctionUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FunctionUtils::initializeClass, 1)))
          return NULL;
        return t_FunctionUtils::wrap_Object(FunctionUtils(((t_FunctionUtils *) arg)->object.this$));
      }
      static PyObject *t_FunctionUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FunctionUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FunctionUtils_add(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::add(a0));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::add(a0));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "add", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_collector(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::collector(a0, a1));
              return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::collector(a0, a1, a2));
              return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "collector", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_combine(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
        ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
        ::org::hipparchus::analysis::UnivariateFunction a2((jobject) NULL);
        ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::analysis::BivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::combine(a0, a1, a2));
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "combine", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_compose(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::compose(a0));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::compose(a0));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "compose", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_derivative(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "k[I", ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::derivative(a0, a1));
              return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::derivative(a0, a1));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "derivative", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_fix1stArgument(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
        jdouble a1;
        ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::fix1stArgument(a0, a1));
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fix1stArgument", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_fix2ndArgument(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
        jdouble a1;
        ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::fix2ndArgument(a0, a1));
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fix2ndArgument", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_multiply(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::multiply(a0));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::multiply(a0));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "multiply", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_sample(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jint a3;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::sample(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "sample", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_toDifferentiable(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a1((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "k[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::toDifferentiable(a0, a1));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            ::org::hipparchus::analysis::MultivariateVectorFunction a1((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::toDifferentiable(a0, a1));
              return ::org::hipparchus::analysis::differentiation::t_MultivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "toDifferentiable", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/PythonAbstractBuilder.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *PythonAbstractBuilder::class$ = NULL;
          jmethodID *PythonAbstractBuilder::mids$ = NULL;
          bool PythonAbstractBuilder::live$ = false;

          jclass PythonAbstractBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/PythonAbstractBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d534fa6767f45c74] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)V");
              mids$[mid_create_cbd54da82dabf79c] = env->getMethodID(cls, "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractBuilder::PythonAbstractBuilder(const ::org::orekit::utils::IERSConventions & a0, jdouble a1, jdouble a2, const ::org::orekit::data::DataContext & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a5) : ::org::orekit::files::ccsds::ndm::AbstractBuilder(env->newObject(initializeClass, &mids$, mid_init$_d534fa6767f45c74, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$)) {}

          void PythonAbstractBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonAbstractBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAbstractBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          static PyObject *t_PythonAbstractBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractBuilder_of_(t_PythonAbstractBuilder *self, PyObject *args);
          static int t_PythonAbstractBuilder_init_(t_PythonAbstractBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractBuilder_finalize(t_PythonAbstractBuilder *self);
          static PyObject *t_PythonAbstractBuilder_pythonExtension(t_PythonAbstractBuilder *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractBuilder_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jdouble a2, jobject a3, jobject a4, jobject a5);
          static void JNICALL t_PythonAbstractBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractBuilder_get__self(t_PythonAbstractBuilder *self, void *data);
          static PyObject *t_PythonAbstractBuilder_get__parameters_(t_PythonAbstractBuilder *self, void *data);
          static PyGetSetDef t_PythonAbstractBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractBuilder, self),
            DECLARE_GET_FIELD(t_PythonAbstractBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractBuilder)[] = {
            { Py_tp_methods, t_PythonAbstractBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractBuilder_init_ },
            { Py_tp_getset, t_PythonAbstractBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::AbstractBuilder),
            NULL
          };

          DEFINE_TYPE(PythonAbstractBuilder, t_PythonAbstractBuilder, PythonAbstractBuilder);
          PyObject *t_PythonAbstractBuilder::wrap_Object(const PythonAbstractBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractBuilder *self = (t_PythonAbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractBuilder *self = (t_PythonAbstractBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractBuilder), &PY_TYPE_DEF(PythonAbstractBuilder), module, "PythonAbstractBuilder", 1);
          }

          void t_PythonAbstractBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "class_", make_descriptor(PythonAbstractBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "wrapfn_", make_descriptor(t_PythonAbstractBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "create", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)Lorg/orekit/files/ccsds/ndm/AbstractBuilder;", (void *) t_PythonAbstractBuilder_create0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractBuilder_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractBuilder::wrap_Object(PythonAbstractBuilder(((t_PythonAbstractBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractBuilder_of_(t_PythonAbstractBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractBuilder_init_(t_PythonAbstractBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a5((jobject) NULL);
            PythonAbstractBuilder object((jobject) NULL);

            if (!parseArgs(args, "KDDkkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PythonAbstractBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractBuilder_finalize(t_PythonAbstractBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractBuilder_pythonExtension(t_PythonAbstractBuilder *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractBuilder_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jdouble a2, jobject a3, jobject a4, jobject a5)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::files::ccsds::ndm::AbstractBuilder value((jobject) NULL);
            PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
            PyObject *o3 = ::org::orekit::data::t_DataContext::wrap_Object(::org::orekit::data::DataContext(a3));
            PyObject *o4 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a4));
            PyObject *o5 = ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnitsConverter::wrap_Object(::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter(a5));
            PyObject *result = PyObject_CallMethod(obj, "create", "OddOOO", o0, (double) a1, (double) a2, o3, o4, o5);
            Py_DECREF(o0);
            Py_DECREF(o3);
            Py_DECREF(o4);
            Py_DECREF(o5);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::AbstractBuilder::initializeClass, &value))
            {
              throwTypeError("create", result);
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

          static void JNICALL t_PythonAbstractBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractBuilder::mids$[PythonAbstractBuilder::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractBuilder_get__self(t_PythonAbstractBuilder *self, void *data)
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
          static PyObject *t_PythonAbstractBuilder_get__parameters_(t_PythonAbstractBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexODEState.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEState::class$ = NULL;
      jmethodID *ComplexODEState::mids$ = NULL;
      bool ComplexODEState::live$ = false;

      jclass ComplexODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_70035d1497a08f80] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_init$_5f31e4187dbf944a] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_getCompleteState_cdf70bdb2a575f18] = env->getMethodID(cls, "getCompleteState", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getCompleteStateDimension_412668abc8d889e9] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_cdf70bdb2a575f18] = env->getMethodID(cls, "getPrimaryState", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getPrimaryStateDimension_412668abc8d889e9] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_3c568c3957abbd69] = env->getMethodID(cls, "getSecondaryState", "(I)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getSecondaryStateDimension_0092017e99012694] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");
          mids$[mid_copy_f474555abcccd3a6] = env->getMethodID(cls, "copy", "([[Lorg/hipparchus/complex/Complex;)[[Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEState::ComplexODEState(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_70035d1497a08f80, a0, a1.this$)) {}

      ComplexODEState::ComplexODEState(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f31e4187dbf944a, a0, a1.this$, a2.this$)) {}

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getCompleteState() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getCompleteState_cdf70bdb2a575f18]));
      }

      jint ComplexODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_412668abc8d889e9]);
      }

      jint ComplexODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_412668abc8d889e9]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getPrimaryState() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_cdf70bdb2a575f18]));
      }

      jint ComplexODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_412668abc8d889e9]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getSecondaryState(jint a0) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_3c568c3957abbd69], a0));
      }

      jint ComplexODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_0092017e99012694], a0);
      }

      jdouble ComplexODEState::getTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTime_557b8123390d8d0c]);
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
      static PyObject *t_ComplexODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEState_init_(t_ComplexODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEState_getCompleteState(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getCompleteStateDimension(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getNumberOfSecondaryStates(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getPrimaryState(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getPrimaryStateDimension(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getSecondaryState(t_ComplexODEState *self, PyObject *arg);
      static PyObject *t_ComplexODEState_getSecondaryStateDimension(t_ComplexODEState *self, PyObject *arg);
      static PyObject *t_ComplexODEState_getTime(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_get__completeState(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__completeStateDimension(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__numberOfSecondaryStates(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__primaryState(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__primaryStateDimension(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__time(t_ComplexODEState *self, void *data);
      static PyGetSetDef t_ComplexODEState__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexODEState, completeState),
        DECLARE_GET_FIELD(t_ComplexODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_ComplexODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_ComplexODEState, primaryState),
        DECLARE_GET_FIELD(t_ComplexODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_ComplexODEState, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexODEState__methods_[] = {
        DECLARE_METHOD(t_ComplexODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_ComplexODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_ComplexODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEState)[] = {
        { Py_tp_methods, t_ComplexODEState__methods_ },
        { Py_tp_init, (void *) t_ComplexODEState_init_ },
        { Py_tp_getset, t_ComplexODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexODEState, t_ComplexODEState, ComplexODEState);

      void t_ComplexODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEState), &PY_TYPE_DEF(ComplexODEState), module, "ComplexODEState", 0);
      }

      void t_ComplexODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "class_", make_descriptor(ComplexODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "wrapfn_", make_descriptor(t_ComplexODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEState::initializeClass, 1)))
          return NULL;
        return t_ComplexODEState::wrap_Object(ComplexODEState(((t_ComplexODEState *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEState_init_(t_ComplexODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            ComplexODEState object((jobject) NULL);

            if (!parseArgs(args, "D[k", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ComplexODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a2((jobject) NULL);
            ComplexODEState object((jobject) NULL);

            if (!parseArgs(args, "D[k[[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexODEState(a0, a1, a2));
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

      static PyObject *t_ComplexODEState_getCompleteState(t_ComplexODEState *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_getCompleteStateDimension(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getNumberOfSecondaryStates(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getPrimaryState(t_ComplexODEState *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_getPrimaryStateDimension(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getSecondaryState(t_ComplexODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEState_getSecondaryStateDimension(t_ComplexODEState *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryStateDimension(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryStateDimension", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEState_getTime(t_ComplexODEState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ComplexODEState_get__completeState(t_ComplexODEState *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_get__completeStateDimension(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__numberOfSecondaryStates(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__primaryState(t_ComplexODEState *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_get__primaryStateDimension(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__time(t_ComplexODEState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/ClockCorrectionsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *ClockCorrectionsProvider::class$ = NULL;
          jmethodID *ClockCorrectionsProvider::mids$ = NULL;
          bool ClockCorrectionsProvider::live$ = false;
          ::java::lang::String *ClockCorrectionsProvider::CLOCK_CORRECTIONS = NULL;

          jclass ClockCorrectionsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/ClockCorrectionsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5cef906e9aa1346a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSClockElements;)V");
              mids$[mid_getAdditionalState_2a145999b8c9a41d] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CLOCK_CORRECTIONS = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_CORRECTIONS", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ClockCorrectionsProvider::ClockCorrectionsProvider(const ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5cef906e9aa1346a, a0.this$)) {}

          JArray< jdouble > ClockCorrectionsProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_2a145999b8c9a41d], a0.this$));
          }

          ::java::lang::String ClockCorrectionsProvider::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
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
      namespace analytical {
        namespace gnss {
          static PyObject *t_ClockCorrectionsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ClockCorrectionsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ClockCorrectionsProvider_init_(t_ClockCorrectionsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ClockCorrectionsProvider_getAdditionalState(t_ClockCorrectionsProvider *self, PyObject *arg);
          static PyObject *t_ClockCorrectionsProvider_getName(t_ClockCorrectionsProvider *self);
          static PyObject *t_ClockCorrectionsProvider_get__name(t_ClockCorrectionsProvider *self, void *data);
          static PyGetSetDef t_ClockCorrectionsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_ClockCorrectionsProvider, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ClockCorrectionsProvider__methods_[] = {
            DECLARE_METHOD(t_ClockCorrectionsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ClockCorrectionsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ClockCorrectionsProvider, getAdditionalState, METH_O),
            DECLARE_METHOD(t_ClockCorrectionsProvider, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ClockCorrectionsProvider)[] = {
            { Py_tp_methods, t_ClockCorrectionsProvider__methods_ },
            { Py_tp_init, (void *) t_ClockCorrectionsProvider_init_ },
            { Py_tp_getset, t_ClockCorrectionsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ClockCorrectionsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ClockCorrectionsProvider, t_ClockCorrectionsProvider, ClockCorrectionsProvider);

          void t_ClockCorrectionsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ClockCorrectionsProvider), &PY_TYPE_DEF(ClockCorrectionsProvider), module, "ClockCorrectionsProvider", 0);
          }

          void t_ClockCorrectionsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "class_", make_descriptor(ClockCorrectionsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "wrapfn_", make_descriptor(t_ClockCorrectionsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "boxfn_", make_descriptor(boxObject));
            env->getClass(ClockCorrectionsProvider::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "CLOCK_CORRECTIONS", make_descriptor(j2p(*ClockCorrectionsProvider::CLOCK_CORRECTIONS)));
          }

          static PyObject *t_ClockCorrectionsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ClockCorrectionsProvider::initializeClass, 1)))
              return NULL;
            return t_ClockCorrectionsProvider::wrap_Object(ClockCorrectionsProvider(((t_ClockCorrectionsProvider *) arg)->object.this$));
          }
          static PyObject *t_ClockCorrectionsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ClockCorrectionsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ClockCorrectionsProvider_init_(t_ClockCorrectionsProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements a0((jobject) NULL);
            ClockCorrectionsProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements::initializeClass, &a0))
            {
              INT_CALL(object = ClockCorrectionsProvider(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ClockCorrectionsProvider_getAdditionalState(t_ClockCorrectionsProvider *self, PyObject *arg)
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

          static PyObject *t_ClockCorrectionsProvider_getName(t_ClockCorrectionsProvider *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ClockCorrectionsProvider_get__name(t_ClockCorrectionsProvider *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunctionNewtonForm::class$ = NULL;
        jmethodID *PolynomialFunctionNewtonForm::mids$ = NULL;
        bool PolynomialFunctionNewtonForm::live$ = false;

        jclass PolynomialFunctionNewtonForm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_degree_412668abc8d889e9] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_evaluate_abf45904c34f3045] = env->getStaticMethodID(cls, "evaluate", "([D[DD)D");
            mids$[mid_getCenters_a53a7513ecedada2] = env->getMethodID(cls, "getCenters", "()[D");
            mids$[mid_getCoefficients_a53a7513ecedada2] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_getNewtonCoefficients_a53a7513ecedada2] = env->getMethodID(cls, "getNewtonCoefficients", "()[D");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_6672ad854985cb64] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_computeCoefficients_0640e6acf969ed28] = env->getMethodID(cls, "computeCoefficients", "()V");
            mids$[mid_verifyInputArray_ab4840ba016ef1da] = env->getStaticMethodID(cls, "verifyInputArray", "([D[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunctionNewtonForm::PolynomialFunctionNewtonForm(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

        jint PolynomialFunctionNewtonForm::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_412668abc8d889e9]);
        }

        jdouble PolynomialFunctionNewtonForm::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_evaluate_abf45904c34f3045], a0.this$, a1.this$, a2);
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getCenters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCenters_a53a7513ecedada2]));
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_a53a7513ecedada2]));
        }

        JArray< jdouble > PolynomialFunctionNewtonForm::getNewtonCoefficients() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNewtonCoefficients_a53a7513ecedada2]));
        }

        jdouble PolynomialFunctionNewtonForm::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialFunctionNewtonForm::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6672ad854985cb64], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::Derivative PolynomialFunctionNewtonForm::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
    namespace analysis {
      namespace polynomials {
        static PyObject *t_PolynomialFunctionNewtonForm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunctionNewtonForm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunctionNewtonForm_init_(t_PolynomialFunctionNewtonForm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunctionNewtonForm_degree(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_evaluate(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialFunctionNewtonForm_getCenters(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_getCoefficients(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_getNewtonCoefficients(t_PolynomialFunctionNewtonForm *self);
        static PyObject *t_PolynomialFunctionNewtonForm_value(t_PolynomialFunctionNewtonForm *self, PyObject *args);
        static PyObject *t_PolynomialFunctionNewtonForm_get__centers(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyObject *t_PolynomialFunctionNewtonForm_get__coefficients(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyObject *t_PolynomialFunctionNewtonForm_get__newtonCoefficients(t_PolynomialFunctionNewtonForm *self, void *data);
        static PyGetSetDef t_PolynomialFunctionNewtonForm__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, centers),
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, coefficients),
          DECLARE_GET_FIELD(t_PolynomialFunctionNewtonForm, newtonCoefficients),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialFunctionNewtonForm__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, degree, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, evaluate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getCenters, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, getNewtonCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialFunctionNewtonForm, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionNewtonForm)[] = {
          { Py_tp_methods, t_PolynomialFunctionNewtonForm__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunctionNewtonForm_init_ },
          { Py_tp_getset, t_PolynomialFunctionNewtonForm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunctionNewtonForm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunctionNewtonForm, t_PolynomialFunctionNewtonForm, PolynomialFunctionNewtonForm);

        void t_PolynomialFunctionNewtonForm::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunctionNewtonForm), &PY_TYPE_DEF(PolynomialFunctionNewtonForm), module, "PolynomialFunctionNewtonForm", 0);
        }

        void t_PolynomialFunctionNewtonForm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "class_", make_descriptor(PolynomialFunctionNewtonForm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "wrapfn_", make_descriptor(t_PolynomialFunctionNewtonForm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionNewtonForm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunctionNewtonForm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunctionNewtonForm::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunctionNewtonForm::wrap_Object(PolynomialFunctionNewtonForm(((t_PolynomialFunctionNewtonForm *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunctionNewtonForm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunctionNewtonForm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunctionNewtonForm_init_(t_PolynomialFunctionNewtonForm *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          PolynomialFunctionNewtonForm object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = PolynomialFunctionNewtonForm(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialFunctionNewtonForm_degree(t_PolynomialFunctionNewtonForm *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PolynomialFunctionNewtonForm_evaluate(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm::evaluate(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "evaluate", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getCenters(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenters());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getCoefficients(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_getNewtonCoefficients(t_PolynomialFunctionNewtonForm *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewtonCoefficients());
          return result.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_value(t_PolynomialFunctionNewtonForm *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunctionNewtonForm_get__centers(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenters());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_get__coefficients(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return value.wrap();
        }

        static PyObject *t_PolynomialFunctionNewtonForm_get__newtonCoefficients(t_PolynomialFunctionNewtonForm *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewtonCoefficients());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/PythonLocalizedException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *PythonLocalizedException::class$ = NULL;
      jmethodID *PythonLocalizedException::mids$ = NULL;
      bool PythonLocalizedException::live$ = false;

      jclass PythonLocalizedException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/PythonLocalizedException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getMessage_4b51060c6b7ea981] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_6555a5198c71b73a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_a86d7419cf3241b7] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLocalizedException::PythonLocalizedException() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonLocalizedException::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonLocalizedException::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonLocalizedException::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_PythonLocalizedException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLocalizedException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLocalizedException_init_(t_PythonLocalizedException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLocalizedException_finalize(t_PythonLocalizedException *self);
      static PyObject *t_PythonLocalizedException_pythonExtension(t_PythonLocalizedException *self, PyObject *args);
      static jobject JNICALL t_PythonLocalizedException_getMessage0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonLocalizedException_getParts1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonLocalizedException_getSpecifier2(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonLocalizedException_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonLocalizedException_get__self(t_PythonLocalizedException *self, void *data);
      static PyGetSetDef t_PythonLocalizedException__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLocalizedException, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLocalizedException__methods_[] = {
        DECLARE_METHOD(t_PythonLocalizedException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLocalizedException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLocalizedException, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLocalizedException, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLocalizedException)[] = {
        { Py_tp_methods, t_PythonLocalizedException__methods_ },
        { Py_tp_init, (void *) t_PythonLocalizedException_init_ },
        { Py_tp_getset, t_PythonLocalizedException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLocalizedException)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonLocalizedException, t_PythonLocalizedException, PythonLocalizedException);

      void t_PythonLocalizedException::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLocalizedException), &PY_TYPE_DEF(PythonLocalizedException), module, "PythonLocalizedException", 1);
      }

      void t_PythonLocalizedException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLocalizedException), "class_", make_descriptor(PythonLocalizedException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLocalizedException), "wrapfn_", make_descriptor(t_PythonLocalizedException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLocalizedException), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLocalizedException::initializeClass);
        JNINativeMethod methods[] = {
          { "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;", (void *) t_PythonLocalizedException_getMessage0 },
          { "getParts", "()[Ljava/lang/Object;", (void *) t_PythonLocalizedException_getParts1 },
          { "getSpecifier", "()Lorg/hipparchus/exception/Localizable;", (void *) t_PythonLocalizedException_getSpecifier2 },
          { "pythonDecRef", "()V", (void *) t_PythonLocalizedException_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonLocalizedException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLocalizedException::initializeClass, 1)))
          return NULL;
        return t_PythonLocalizedException::wrap_Object(PythonLocalizedException(((t_PythonLocalizedException *) arg)->object.this$));
      }
      static PyObject *t_PythonLocalizedException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLocalizedException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLocalizedException_init_(t_PythonLocalizedException *self, PyObject *args, PyObject *kwds)
      {
        PythonLocalizedException object((jobject) NULL);

        INT_CALL(object = PythonLocalizedException());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonLocalizedException_finalize(t_PythonLocalizedException *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLocalizedException_pythonExtension(t_PythonLocalizedException *self, PyObject *args)
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

      static jobject JNICALL t_PythonLocalizedException_getMessage0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::util::t_Locale::wrap_Object(::java::util::Locale(a0));
        PyObject *result = PyObject_CallMethod(obj, "getMessage", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getMessage", result);
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

      static jobject JNICALL t_PythonLocalizedException_getParts1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::Object > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getParts", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[o", &value))
        {
          throwTypeError("getParts", result);
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

      static jobject JNICALL t_PythonLocalizedException_getSpecifier2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSpecifier", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::exception::Localizable::initializeClass, &value))
        {
          throwTypeError("getSpecifier", result);
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

      static void JNICALL t_PythonLocalizedException_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLocalizedException::mids$[PythonLocalizedException::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonLocalizedException_get__self(t_PythonLocalizedException *self, void *data)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeBuilder::class$ = NULL;
      jmethodID *AttitudeBuilder::mids$ = NULL;
      bool AttitudeBuilder::live$ = false;

      jclass AttitudeBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_build_4329b81cdba13b7b] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_76e687ee866bdc48] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldAttitude AttitudeBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_4329b81cdba13b7b], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudeBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_76e687ee866bdc48], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_AttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeBuilder_build(t_AttitudeBuilder *self, PyObject *args);

      static PyMethodDef t_AttitudeBuilder__methods_[] = {
        DECLARE_METHOD(t_AttitudeBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeBuilder, build, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeBuilder)[] = {
        { Py_tp_methods, t_AttitudeBuilder__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudeBuilder, t_AttitudeBuilder, AttitudeBuilder);

      void t_AttitudeBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeBuilder), &PY_TYPE_DEF(AttitudeBuilder), module, "AttitudeBuilder", 0);
      }

      void t_AttitudeBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "class_", make_descriptor(AttitudeBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "wrapfn_", make_descriptor(t_AttitudeBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeBuilder::initializeClass, 1)))
          return NULL;
        return t_AttitudeBuilder::wrap_Object(AttitudeBuilder(((t_AttitudeBuilder *) arg)->object.this$));
      }
      static PyObject *t_AttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeBuilder_build(t_AttitudeBuilder *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedAngularCoordinates a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinatesProvider a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::TimeStampedFieldAngularCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "build", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldBlendable::class$ = NULL;
      jmethodID *FieldBlendable::mids$ = NULL;
      bool FieldBlendable::live$ = false;

      jclass FieldBlendable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldBlendable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_blendArithmeticallyWith_a571232b8b757863] = env->getMethodID(cls, "blendArithmeticallyWith", "(Ljava/lang/Object;Lorg/hipparchus/FieldElement;)Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object FieldBlendable::blendArithmeticallyWith(const ::java::lang::Object & a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_a571232b8b757863], a0.this$, a1.this$));
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
      static PyObject *t_FieldBlendable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBlendable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBlendable_of_(t_FieldBlendable *self, PyObject *args);
      static PyObject *t_FieldBlendable_blendArithmeticallyWith(t_FieldBlendable *self, PyObject *args);
      static PyObject *t_FieldBlendable_get__parameters_(t_FieldBlendable *self, void *data);
      static PyGetSetDef t_FieldBlendable__fields_[] = {
        DECLARE_GET_FIELD(t_FieldBlendable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldBlendable__methods_[] = {
        DECLARE_METHOD(t_FieldBlendable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBlendable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBlendable, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldBlendable, blendArithmeticallyWith, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBlendable)[] = {
        { Py_tp_methods, t_FieldBlendable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldBlendable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBlendable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldBlendable, t_FieldBlendable, FieldBlendable);
      PyObject *t_FieldBlendable::wrap_Object(const FieldBlendable& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldBlendable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBlendable *self = (t_FieldBlendable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldBlendable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldBlendable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBlendable *self = (t_FieldBlendable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldBlendable::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBlendable), &PY_TYPE_DEF(FieldBlendable), module, "FieldBlendable", 0);
      }

      void t_FieldBlendable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBlendable), "class_", make_descriptor(FieldBlendable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBlendable), "wrapfn_", make_descriptor(t_FieldBlendable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBlendable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBlendable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBlendable::initializeClass, 1)))
          return NULL;
        return t_FieldBlendable::wrap_Object(FieldBlendable(((t_FieldBlendable *) arg)->object.this$));
      }
      static PyObject *t_FieldBlendable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBlendable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBlendable_of_(t_FieldBlendable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldBlendable_blendArithmeticallyWith(t_FieldBlendable *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "OK", self->parameters[0], ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }
      static PyObject *t_FieldBlendable_get__parameters_(t_FieldBlendable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "java/lang/String.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFile::class$ = NULL;
        jmethodID *EphemerisFile::mids$ = NULL;
        bool EphemerisFile::live$ = false;

        jclass EphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getSatellites_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::Map EphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_1e62c2f73fbdd1c4]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_EphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile_of_(t_EphemerisFile *self, PyObject *args);
        static PyObject *t_EphemerisFile_getSatellites(t_EphemerisFile *self);
        static PyObject *t_EphemerisFile_get__satellites(t_EphemerisFile *self, void *data);
        static PyObject *t_EphemerisFile_get__parameters_(t_EphemerisFile *self, void *data);
        static PyGetSetDef t_EphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFile, satellites),
          DECLARE_GET_FIELD(t_EphemerisFile, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFile__methods_[] = {
          DECLARE_METHOD(t_EphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFile)[] = {
          { Py_tp_methods, t_EphemerisFile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFile, t_EphemerisFile, EphemerisFile);
        PyObject *t_EphemerisFile::wrap_Object(const EphemerisFile& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile *self = (t_EphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_EphemerisFile::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile *self = (t_EphemerisFile *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_EphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFile), &PY_TYPE_DEF(EphemerisFile), module, "EphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "EphemerisSegment", make_descriptor(&PY_TYPE_DEF(EphemerisFile$EphemerisSegment)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "SatelliteEphemeris", make_descriptor(&PY_TYPE_DEF(EphemerisFile$SatelliteEphemeris)));
        }

        void t_EphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "class_", make_descriptor(EphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "wrapfn_", make_descriptor(t_EphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFile::initializeClass, 1)))
            return NULL;
          return t_EphemerisFile::wrap_Object(EphemerisFile(((t_EphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFile_of_(t_EphemerisFile *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFile_getSatellites(t_EphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result);
        }
        static PyObject *t_EphemerisFile_get__parameters_(t_EphemerisFile *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EphemerisFile_get__satellites(t_EphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationUtil.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *TleGenerationUtil::class$ = NULL;
            jmethodID *TleGenerationUtil::mids$ = NULL;
            bool TleGenerationUtil::live$ = false;

            jclass TleGenerationUtil::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/TleGenerationUtil");

                mids$ = new jmethodID[max_mid];
                mids$[mid_newTLE_7f839109c827fb0a] = env->getStaticMethodID(cls, "newTLE", "(Lorg/orekit/orbits/FieldKeplerianOrbit;Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_newTLE_218efa4656bb672d] = env->getStaticMethodID(cls, "newTLE", "(Lorg/orekit/orbits/KeplerianOrbit;Lorg/orekit/propagation/analytical/tle/TLE;DLorg/orekit/time/TimeScale;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::analytical::tle::FieldTLE TleGenerationUtil::newTLE(const ::org::orekit::orbits::FieldKeplerianOrbit & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::time::TimeScale & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callStaticObjectMethod(cls, mids$[mid_newTLE_7f839109c827fb0a], a0.this$, a1.this$, a2.this$, a3.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE TleGenerationUtil::newTLE(const ::org::orekit::orbits::KeplerianOrbit & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1, jdouble a2, const ::org::orekit::time::TimeScale & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::propagation::analytical::tle::TLE(env->callStaticObjectMethod(cls, mids$[mid_newTLE_218efa4656bb672d], a0.this$, a1.this$, a2, a3.this$));
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
      namespace analytical {
        namespace tle {
          namespace generation {
            static PyObject *t_TleGenerationUtil_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationUtil_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationUtil_newTLE(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_TleGenerationUtil__methods_[] = {
              DECLARE_METHOD(t_TleGenerationUtil, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationUtil, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationUtil, newTLE, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TleGenerationUtil)[] = {
              { Py_tp_methods, t_TleGenerationUtil__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TleGenerationUtil)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(TleGenerationUtil, t_TleGenerationUtil, TleGenerationUtil);

            void t_TleGenerationUtil::install(PyObject *module)
            {
              installType(&PY_TYPE(TleGenerationUtil), &PY_TYPE_DEF(TleGenerationUtil), module, "TleGenerationUtil", 0);
            }

            void t_TleGenerationUtil::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "class_", make_descriptor(TleGenerationUtil::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "wrapfn_", make_descriptor(t_TleGenerationUtil::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TleGenerationUtil_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TleGenerationUtil::initializeClass, 1)))
                return NULL;
              return t_TleGenerationUtil::wrap_Object(TleGenerationUtil(((t_TleGenerationUtil *) arg)->object.this$));
            }
            static PyObject *t_TleGenerationUtil_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TleGenerationUtil::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TleGenerationUtil_newTLE(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  ::org::orekit::orbits::KeplerianOrbit a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  jdouble a2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kkDk", ::org::orekit::orbits::KeplerianOrbit::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::generation::TleGenerationUtil::newTLE(a0, a1, a2, a3));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::orbits::FieldKeplerianOrbit a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KKKk", ::org::orekit::orbits::FieldKeplerianOrbit::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldKeplerianOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::generation::TleGenerationUtil::newTLE(a0, a1, a2, a3));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "newTLE", args);
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
#include "org/hipparchus/fraction/FractionFormat.h"
#include "java/text/ParsePosition.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/fraction/FractionFormat.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Object.h"
#include "java/text/FieldPosition.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *FractionFormat::class$ = NULL;
      jmethodID *FractionFormat::mids$ = NULL;
      bool FractionFormat::live$ = false;

      jclass FractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/FractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d53859bd7ba1b247] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_3190c52142e043eb] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_c8dfafe6701753f2] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/Fraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_60ec49fc2ad8aa0e] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_formatFraction_cd71994417403199] = env->getStaticMethodID(cls, "formatFraction", "(Lorg/hipparchus/fraction/Fraction;)Ljava/lang/String;");
          mids$[mid_getAvailableLocales_85ff0d07ca843902] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getImproperInstance_db0cd7373497d40e] = env->getStaticMethodID(cls, "getImproperInstance", "()Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getImproperInstance_b176843742057e70] = env->getStaticMethodID(cls, "getImproperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getProperInstance_db0cd7373497d40e] = env->getStaticMethodID(cls, "getProperInstance", "()Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_getProperInstance_b176843742057e70] = env->getStaticMethodID(cls, "getProperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/FractionFormat;");
          mids$[mid_parse_a402f8f864ba9db4] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_parse_fb155efb3cdca00d] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_getDefaultNumberFormat_001645e916bd626d] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FractionFormat::FractionFormat() : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      FractionFormat::FractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_d53859bd7ba1b247, a0.this$)) {}

      FractionFormat::FractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_3190c52142e043eb, a0.this$, a1.this$)) {}

      ::java::lang::StringBuffer FractionFormat::format(const ::org::hipparchus::fraction::Fraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_c8dfafe6701753f2], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer FractionFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_60ec49fc2ad8aa0e], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String FractionFormat::formatFraction(const ::org::hipparchus::fraction::Fraction & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatFraction_cd71994417403199], a0.this$));
      }

      JArray< ::java::util::Locale > FractionFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_85ff0d07ca843902]));
      }

      FractionFormat FractionFormat::getImproperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_db0cd7373497d40e]));
      }

      FractionFormat FractionFormat::getImproperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_b176843742057e70], a0.this$));
      }

      FractionFormat FractionFormat::getProperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_db0cd7373497d40e]));
      }

      FractionFormat FractionFormat::getProperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_b176843742057e70], a0.this$));
      }

      ::org::hipparchus::fraction::Fraction FractionFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_a402f8f864ba9db4], a0.this$));
      }

      ::org::hipparchus::fraction::Fraction FractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_fb155efb3cdca00d], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_FractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FractionFormat_init_(t_FractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FractionFormat_format(t_FractionFormat *self, PyObject *args);
      static PyObject *t_FractionFormat_formatFraction(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_getProperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FractionFormat_parse(t_FractionFormat *self, PyObject *args);
      static PyObject *t_FractionFormat_get__availableLocales(t_FractionFormat *self, void *data);
      static PyObject *t_FractionFormat_get__improperInstance(t_FractionFormat *self, void *data);
      static PyObject *t_FractionFormat_get__properInstance(t_FractionFormat *self, void *data);
      static PyGetSetDef t_FractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_FractionFormat, availableLocales),
        DECLARE_GET_FIELD(t_FractionFormat, improperInstance),
        DECLARE_GET_FIELD(t_FractionFormat, properInstance),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FractionFormat__methods_[] = {
        DECLARE_METHOD(t_FractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_FractionFormat, formatFraction, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getAvailableLocales, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getImproperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, getProperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FractionFormat)[] = {
        { Py_tp_methods, t_FractionFormat__methods_ },
        { Py_tp_init, (void *) t_FractionFormat_init_ },
        { Py_tp_getset, t_FractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::AbstractFormat),
        NULL
      };

      DEFINE_TYPE(FractionFormat, t_FractionFormat, FractionFormat);

      void t_FractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(FractionFormat), &PY_TYPE_DEF(FractionFormat), module, "FractionFormat", 0);
      }

      void t_FractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "class_", make_descriptor(FractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "wrapfn_", make_descriptor(t_FractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FractionFormat::initializeClass, 1)))
          return NULL;
        return t_FractionFormat::wrap_Object(FractionFormat(((t_FractionFormat *) arg)->object.this$));
      }
      static PyObject *t_FractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FractionFormat_init_(t_FractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat object((jobject) NULL);

            INT_CALL(object = FractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            FractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = FractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            FractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FractionFormat(a0, a1));
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

      static PyObject *t_FractionFormat_format(t_FractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(FractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_FractionFormat_formatFraction(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::fraction::Fraction::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::formatFraction(a0));
          return j2p(result);
        }

        PyErr_SetArgsError(type, "formatFraction", arg);
        return NULL;
      }

      static PyObject *t_FractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getAvailableLocales());
          return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
        }

        return callSuper(type, "getAvailableLocales", args, 2);
      }

      static PyObject *t_FractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getImproperInstance());
            return t_FractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            FractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getImproperInstance(a0));
              return t_FractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getImproperInstance", args);
        return NULL;
      }

      static PyObject *t_FractionFormat_getProperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            FractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getProperInstance());
            return t_FractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            FractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::FractionFormat::getProperInstance(a0));
              return t_FractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getProperInstance", args);
        return NULL;
      }

      static PyObject *t_FractionFormat_parse(t_FractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::fraction::Fraction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::fraction::Fraction result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(FractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_FractionFormat_get__availableLocales(t_FractionFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_FractionFormat_get__improperInstance(t_FractionFormat *self, void *data)
      {
        FractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImproperInstance());
        return t_FractionFormat::wrap_Object(value);
      }

      static PyObject *t_FractionFormat_get__properInstance(t_FractionFormat *self, void *data)
      {
        FractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getProperInstance());
        return t_FractionFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileInputStream.h"
#include "java/io/IOException.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/File.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileInputStream::class$ = NULL;
    jmethodID *FileInputStream::mids$ = NULL;
    bool FileInputStream::live$ = false;

    jclass FileInputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileInputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_5d6bcca91ae998ee] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_0a1c60be3a779b3b] = env->getMethodID(cls, "<init>", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_available_412668abc8d889e9] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getFD_94f00ee7019754d9] = env->getMethodID(cls, "getFD", "()Ljava/io/FileDescriptor;");
        mids$[mid_read_412668abc8d889e9] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_67c88f2bf4e7f8b2] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_68a76742c8623fb3] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_skip_f4ad805a81234b49] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileInputStream::FileInputStream(const ::java::io::File & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_5d6bcca91ae998ee, a0.this$)) {}

    FileInputStream::FileInputStream(const ::java::io::FileDescriptor & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_0a1c60be3a779b3b, a0.this$)) {}

    FileInputStream::FileInputStream(const ::java::lang::String & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    jint FileInputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_412668abc8d889e9]);
    }

    void FileInputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    ::java::io::FileDescriptor FileInputStream::getFD() const
    {
      return ::java::io::FileDescriptor(env->callObjectMethod(this$, mids$[mid_getFD_94f00ee7019754d9]));
    }

    jint FileInputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_412668abc8d889e9]);
    }

    jint FileInputStream::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_67c88f2bf4e7f8b2], a0.this$);
    }

    jint FileInputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_68a76742c8623fb3], a0.this$, a1, a2);
    }

    jlong FileInputStream::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_f4ad805a81234b49], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileInputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileInputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileInputStream_init_(t_FileInputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FileInputStream_available(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_close(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_getFD(t_FileInputStream *self);
    static PyObject *t_FileInputStream_read(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_skip(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_get__fD(t_FileInputStream *self, void *data);
    static PyGetSetDef t_FileInputStream__fields_[] = {
      DECLARE_GET_FIELD(t_FileInputStream, fD),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FileInputStream__methods_[] = {
      DECLARE_METHOD(t_FileInputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileInputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileInputStream, available, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, getFD, METH_NOARGS),
      DECLARE_METHOD(t_FileInputStream, read, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileInputStream)[] = {
      { Py_tp_methods, t_FileInputStream__methods_ },
      { Py_tp_init, (void *) t_FileInputStream_init_ },
      { Py_tp_getset, t_FileInputStream__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileInputStream)[] = {
      &PY_TYPE_DEF(::java::io::InputStream),
      NULL
    };

    DEFINE_TYPE(FileInputStream, t_FileInputStream, FileInputStream);

    void t_FileInputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FileInputStream), &PY_TYPE_DEF(FileInputStream), module, "FileInputStream", 0);
    }

    void t_FileInputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "class_", make_descriptor(FileInputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "wrapfn_", make_descriptor(t_FileInputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileInputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileInputStream::initializeClass, 1)))
        return NULL;
      return t_FileInputStream::wrap_Object(FileInputStream(((t_FileInputStream *) arg)->object.this$));
    }
    static PyObject *t_FileInputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileInputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileInputStream_init_(t_FileInputStream *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = FileInputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::FileDescriptor a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            INT_CALL(object = FileInputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = FileInputStream(a0));
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

    static PyObject *t_FileInputStream_available(t_FileInputStream *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.available());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "available", args, 2);
    }

    static PyObject *t_FileInputStream_close(t_FileInputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FileInputStream_getFD(t_FileInputStream *self)
    {
      ::java::io::FileDescriptor result((jobject) NULL);
      OBJ_CALL(result = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(result);
    }

    static PyObject *t_FileInputStream_read(t_FileInputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_FileInputStream_skip(t_FileInputStream *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "skip", args, 2);
    }

    static PyObject *t_FileInputStream_get__fD(t_FileInputStream *self, void *data)
    {
      ::java::io::FileDescriptor value((jobject) NULL);
      OBJ_CALL(value = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/JacobianFunction.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *JacobianFunction::class$ = NULL;
        jmethodID *JacobianFunction::mids$ = NULL;
        bool JacobianFunction::live$ = false;

        jclass JacobianFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/JacobianFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1a57c6efa87316c2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction;)V");
            mids$[mid_value_e1330e10f5139c33] = env->getMethodID(cls, "value", "([D)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JacobianFunction::JacobianFunction(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a57c6efa87316c2, a0.this$)) {}

        JArray< JArray< jdouble > > JacobianFunction::value(const JArray< jdouble > & a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_e1330e10f5139c33], a0.this$));
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
    namespace analysis {
      namespace differentiation {
        static PyObject *t_JacobianFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_JacobianFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_JacobianFunction_init_(t_JacobianFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_JacobianFunction_value(t_JacobianFunction *self, PyObject *arg);

        static PyMethodDef t_JacobianFunction__methods_[] = {
          DECLARE_METHOD(t_JacobianFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_JacobianFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_JacobianFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(JacobianFunction)[] = {
          { Py_tp_methods, t_JacobianFunction__methods_ },
          { Py_tp_init, (void *) t_JacobianFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(JacobianFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(JacobianFunction, t_JacobianFunction, JacobianFunction);

        void t_JacobianFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(JacobianFunction), &PY_TYPE_DEF(JacobianFunction), module, "JacobianFunction", 0);
        }

        void t_JacobianFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianFunction), "class_", make_descriptor(JacobianFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianFunction), "wrapfn_", make_descriptor(t_JacobianFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_JacobianFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, JacobianFunction::initializeClass, 1)))
            return NULL;
          return t_JacobianFunction::wrap_Object(JacobianFunction(((t_JacobianFunction *) arg)->object.this$));
        }
        static PyObject *t_JacobianFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, JacobianFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_JacobianFunction_init_(t_JacobianFunction *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction a0((jobject) NULL);
          JacobianFunction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableVectorFunction::initializeClass, &a0))
          {
            INT_CALL(object = JacobianFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_JacobianFunction_value(t_JacobianFunction *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonTransformProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FieldTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonTransformProvider::class$ = NULL;
      jmethodID *PythonTransformProvider::mids$ = NULL;
      bool PythonTransformProvider::live$ = false;

      jclass PythonTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getTransform_df04e3927954349e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_e70631ba002d9a32] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTransformProvider::PythonTransformProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonTransformProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonTransformProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonTransformProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTransformProvider_init_(t_PythonTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTransformProvider_finalize(t_PythonTransformProvider *self);
      static PyObject *t_PythonTransformProvider_pythonExtension(t_PythonTransformProvider *self, PyObject *args);
      static jobject JNICALL t_PythonTransformProvider_getTransform0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTransformProvider_getTransform1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonTransformProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTransformProvider_get__self(t_PythonTransformProvider *self, void *data);
      static PyGetSetDef t_PythonTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTransformProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTransformProvider__methods_[] = {
        DECLARE_METHOD(t_PythonTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTransformProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTransformProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTransformProvider)[] = {
        { Py_tp_methods, t_PythonTransformProvider__methods_ },
        { Py_tp_init, (void *) t_PythonTransformProvider_init_ },
        { Py_tp_getset, t_PythonTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTransformProvider, t_PythonTransformProvider, PythonTransformProvider);

      void t_PythonTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTransformProvider), &PY_TYPE_DEF(PythonTransformProvider), module, "PythonTransformProvider", 1);
      }

      void t_PythonTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "class_", make_descriptor(PythonTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "wrapfn_", make_descriptor(t_PythonTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTransformProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;", (void *) t_PythonTransformProvider_getTransform0 },
          { "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;", (void *) t_PythonTransformProvider_getTransform1 },
          { "pythonDecRef", "()V", (void *) t_PythonTransformProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTransformProvider::initializeClass, 1)))
          return NULL;
        return t_PythonTransformProvider::wrap_Object(PythonTransformProvider(((t_PythonTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTransformProvider_init_(t_PythonTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonTransformProvider object((jobject) NULL);

        INT_CALL(object = PythonTransformProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTransformProvider_finalize(t_PythonTransformProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTransformProvider_pythonExtension(t_PythonTransformProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonTransformProvider_getTransform0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Transform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Transform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static jobject JNICALL t_PythonTransformProvider_getTransform1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldTransform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldTransform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
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

      static void JNICALL t_PythonTransformProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTransformProvider_get__self(t_PythonTransformProvider *self, void *data)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarC.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarC::class$ = NULL;
          jmethodID *FieldCopolarC::mids$ = NULL;
          bool FieldCopolarC::live$ = false;

          jclass FieldCopolarC::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarC");

              mids$ = new jmethodID[max_mid];
              mids$[mid_dc_613c8f46c659f636] = env->getMethodID(cls, "dc", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_nc_613c8f46c659f636] = env->getMethodID(cls, "nc", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sc_613c8f46c659f636] = env->getMethodID(cls, "sc", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::dc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dc_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::nc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_nc_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::sc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sc_613c8f46c659f636]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldCopolarC_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarC_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarC_of_(t_FieldCopolarC *self, PyObject *args);
          static PyObject *t_FieldCopolarC_dc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_nc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_sc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_get__parameters_(t_FieldCopolarC *self, void *data);
          static PyGetSetDef t_FieldCopolarC__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarC, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarC__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarC, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarC, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarC, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarC, dc, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarC, nc, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarC, sc, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarC)[] = {
            { Py_tp_methods, t_FieldCopolarC__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarC__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarC)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarC, t_FieldCopolarC, FieldCopolarC);
          PyObject *t_FieldCopolarC::wrap_Object(const FieldCopolarC& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarC::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarC *self = (t_FieldCopolarC *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarC::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarC::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarC *self = (t_FieldCopolarC *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarC::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarC), &PY_TYPE_DEF(FieldCopolarC), module, "FieldCopolarC", 0);
          }

          void t_FieldCopolarC::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "class_", make_descriptor(FieldCopolarC::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "wrapfn_", make_descriptor(t_FieldCopolarC::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarC_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarC::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarC::wrap_Object(FieldCopolarC(((t_FieldCopolarC *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarC_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarC::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarC_of_(t_FieldCopolarC *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarC_dc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.dc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarC_nc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.nc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarC_sc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarC_get__parameters_(t_FieldCopolarC *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *RangeIonosphericDelayModifier::mids$ = NULL;
          bool RangeIonosphericDelayModifier::live$ = false;

          jclass RangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_69c6b2cabec159dd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeIonosphericDelayModifier::RangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_69c6b2cabec159dd, a0.this$, a1)) {}

          void RangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void RangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
        namespace modifiers {
          static PyObject *t_RangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeIonosphericDelayModifier_init_(t_RangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeIonosphericDelayModifier_modify(t_RangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeIonosphericDelayModifier, t_RangeIonosphericDelayModifier, RangeIonosphericDelayModifier);

          void t_RangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeIonosphericDelayModifier), &PY_TYPE_DEF(RangeIonosphericDelayModifier), module, "RangeIonosphericDelayModifier", 0);
          }

          void t_RangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "class_", make_descriptor(RangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_RangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeIonosphericDelayModifier::wrap_Object(RangeIonosphericDelayModifier(((t_RangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeIonosphericDelayModifier_init_(t_RangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            RangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeIonosphericDelayModifier_modify(t_RangeIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_RangeIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }
        }
      }
    }
  }
}
