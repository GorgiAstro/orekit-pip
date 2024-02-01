#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
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
                  mids$[mid_valueOf_8cb77d055af24763] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;");
                  mids$[mid_values_2f606220192b103e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey;");

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
                return AttitudeEntryKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8cb77d055af24763], a0.this$));
              }

              JArray< AttitudeEntryKey > AttitudeEntryKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeEntryKey >(env->callStaticObjectMethod(cls, mids$[mid_values_2f606220192b103e]));
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
#include "org/orekit/gnss/metric/messages/ssr/SsrData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrData::class$ = NULL;
            jmethodID *SsrData::mids$ = NULL;
            bool SsrData::live$ = false;

            jclass SsrData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrData::SsrData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
          namespace ssr {
            static PyObject *t_SsrData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrData_init_(t_SsrData *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_SsrData__methods_[] = {
              DECLARE_METHOD(t_SsrData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrData, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrData)[] = {
              { Py_tp_methods, t_SsrData__methods_ },
              { Py_tp_init, (void *) t_SsrData_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrData, t_SsrData, SsrData);

            void t_SsrData::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrData), &PY_TYPE_DEF(SsrData), module, "SsrData", 0);
            }

            void t_SsrData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "class_", make_descriptor(SsrData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "wrapfn_", make_descriptor(t_SsrData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrData::initializeClass, 1)))
                return NULL;
              return t_SsrData::wrap_Object(SsrData(((t_SsrData *) arg)->object.this$));
            }
            static PyObject *t_SsrData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrData_init_(t_SsrData *self, PyObject *args, PyObject *kwds)
            {
              SsrData object((jobject) NULL);

              INT_CALL(object = SsrData());
              self->object = object;

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
#include "org/orekit/rugged/los/LOSTransform.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *LOSTransform::class$ = NULL;
        jmethodID *LOSTransform::mids$ = NULL;
        bool LOSTransform::live$ = false;

        jclass LOSTransform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/LOSTransform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getParametersDrivers_11e4ca8182c1933d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_21cc615301704d02] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_41d9b45a2778847c] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream LOSTransform::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_11e4ca8182c1933d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_21cc615301704d02], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::rugged::utils::DerivativeGenerator & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_41d9b45a2778847c], a0, a1.this$, a2.this$, a3.this$));
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
    namespace rugged {
      namespace los {
        static PyObject *t_LOSTransform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSTransform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSTransform_getParametersDrivers(t_LOSTransform *self);
        static PyObject *t_LOSTransform_transformLOS(t_LOSTransform *self, PyObject *args);
        static PyObject *t_LOSTransform_get__parametersDrivers(t_LOSTransform *self, void *data);
        static PyGetSetDef t_LOSTransform__fields_[] = {
          DECLARE_GET_FIELD(t_LOSTransform, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LOSTransform__methods_[] = {
          DECLARE_METHOD(t_LOSTransform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSTransform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSTransform, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_LOSTransform, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LOSTransform)[] = {
          { Py_tp_methods, t_LOSTransform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_LOSTransform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LOSTransform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LOSTransform, t_LOSTransform, LOSTransform);

        void t_LOSTransform::install(PyObject *module)
        {
          installType(&PY_TYPE(LOSTransform), &PY_TYPE_DEF(LOSTransform), module, "LOSTransform", 0);
        }

        void t_LOSTransform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "class_", make_descriptor(LOSTransform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "wrapfn_", make_descriptor(t_LOSTransform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LOSTransform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LOSTransform::initializeClass, 1)))
            return NULL;
          return t_LOSTransform::wrap_Object(LOSTransform(((t_LOSTransform *) arg)->object.this$));
        }
        static PyObject *t_LOSTransform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LOSTransform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LOSTransform_getParametersDrivers(t_LOSTransform *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LOSTransform_transformLOS(t_LOSTransform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ikk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::rugged::utils::DerivativeGenerator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_LOSTransform_get__parametersDrivers(t_LOSTransform *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *CommentsContainer::class$ = NULL;
          jmethodID *CommentsContainer::mids$ = NULL;
          bool CommentsContainer::live$ = false;

          jclass CommentsContainer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/CommentsContainer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_acceptComments_eee3de00fe971136] = env->getMethodID(cls, "acceptComments", "()Z");
              mids$[mid_addComment_df4c65b2aede5c41] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)Z");
              mids$[mid_checkAllowed_2acd45577021002d] = env->getMethodID(cls, "checkAllowed", "(DLjava/lang/Object;Ljava/lang/String;DD)V");
              mids$[mid_checkNotNaN_1bad5b063c51df2e] = env->getMethodID(cls, "checkNotNaN", "(DLjava/lang/String;)V");
              mids$[mid_checkNotNegative_a3e920ca64bbfb6f] = env->getMethodID(cls, "checkNotNegative", "(ILjava/lang/String;)V");
              mids$[mid_checkNotNull_be4a5a109766127d] = env->getMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Ljava/lang/String;)V");
              mids$[mid_getComments_d751c1a57012b438] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
              mids$[mid_refuseFurtherComments_ff7cb6c242604316] = env->getMethodID(cls, "refuseFurtherComments", "()V");
              mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CommentsContainer::CommentsContainer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          jboolean CommentsContainer::acceptComments() const
          {
            return env->callBooleanMethod(this$, mids$[mid_acceptComments_eee3de00fe971136]);
          }

          jboolean CommentsContainer::addComment(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_addComment_df4c65b2aede5c41], a0.this$);
          }

          void CommentsContainer::checkAllowed(jdouble a0, const ::java::lang::Object & a1, const ::java::lang::String & a2, jdouble a3, jdouble a4) const
          {
            env->callVoidMethod(this$, mids$[mid_checkAllowed_2acd45577021002d], a0, a1.this$, a2.this$, a3, a4);
          }

          void CommentsContainer::checkNotNaN(jdouble a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNaN_1bad5b063c51df2e], a0, a1.this$);
          }

          void CommentsContainer::checkNotNegative(jint a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNegative_a3e920ca64bbfb6f], a0, a1.this$);
          }

          void CommentsContainer::checkNotNull(const ::java::lang::Object & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_checkNotNull_be4a5a109766127d], a0.this$, a1.this$);
          }

          ::java::util::List CommentsContainer::getComments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_d751c1a57012b438]));
          }

          void CommentsContainer::refuseFurtherComments() const
          {
            env->callVoidMethod(this$, mids$[mid_refuseFurtherComments_ff7cb6c242604316]);
          }

          void CommentsContainer::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
        namespace section {
          static PyObject *t_CommentsContainer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CommentsContainer_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CommentsContainer_init_(t_CommentsContainer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CommentsContainer_acceptComments(t_CommentsContainer *self);
          static PyObject *t_CommentsContainer_addComment(t_CommentsContainer *self, PyObject *arg);
          static PyObject *t_CommentsContainer_checkAllowed(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_checkNotNaN(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_checkNotNegative(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_checkNotNull(t_CommentsContainer *self, PyObject *args);
          static PyObject *t_CommentsContainer_getComments(t_CommentsContainer *self);
          static PyObject *t_CommentsContainer_refuseFurtherComments(t_CommentsContainer *self);
          static PyObject *t_CommentsContainer_validate(t_CommentsContainer *self, PyObject *arg);
          static PyObject *t_CommentsContainer_get__comments(t_CommentsContainer *self, void *data);
          static PyGetSetDef t_CommentsContainer__fields_[] = {
            DECLARE_GET_FIELD(t_CommentsContainer, comments),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CommentsContainer__methods_[] = {
            DECLARE_METHOD(t_CommentsContainer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommentsContainer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommentsContainer, acceptComments, METH_NOARGS),
            DECLARE_METHOD(t_CommentsContainer, addComment, METH_O),
            DECLARE_METHOD(t_CommentsContainer, checkAllowed, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, checkNotNaN, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, checkNotNegative, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, checkNotNull, METH_VARARGS),
            DECLARE_METHOD(t_CommentsContainer, getComments, METH_NOARGS),
            DECLARE_METHOD(t_CommentsContainer, refuseFurtherComments, METH_NOARGS),
            DECLARE_METHOD(t_CommentsContainer, validate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CommentsContainer)[] = {
            { Py_tp_methods, t_CommentsContainer__methods_ },
            { Py_tp_init, (void *) t_CommentsContainer_init_ },
            { Py_tp_getset, t_CommentsContainer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CommentsContainer)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CommentsContainer, t_CommentsContainer, CommentsContainer);

          void t_CommentsContainer::install(PyObject *module)
          {
            installType(&PY_TYPE(CommentsContainer), &PY_TYPE_DEF(CommentsContainer), module, "CommentsContainer", 0);
          }

          void t_CommentsContainer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommentsContainer), "class_", make_descriptor(CommentsContainer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommentsContainer), "wrapfn_", make_descriptor(t_CommentsContainer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommentsContainer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CommentsContainer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CommentsContainer::initializeClass, 1)))
              return NULL;
            return t_CommentsContainer::wrap_Object(CommentsContainer(((t_CommentsContainer *) arg)->object.this$));
          }
          static PyObject *t_CommentsContainer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CommentsContainer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CommentsContainer_init_(t_CommentsContainer *self, PyObject *args, PyObject *kwds)
          {
            CommentsContainer object((jobject) NULL);

            INT_CALL(object = CommentsContainer());
            self->object = object;

            return 0;
          }

          static PyObject *t_CommentsContainer_acceptComments(t_CommentsContainer *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.acceptComments());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CommentsContainer_addComment(t_CommentsContainer *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.addComment(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addComment", arg);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkAllowed(t_CommentsContainer *self, PyObject *args)
          {
            jdouble a0;
            ::java::lang::Object a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jdouble a3;
            jdouble a4;

            if (!parseArgs(args, "DosDD", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(self->object.checkAllowed(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkAllowed", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkNotNaN(t_CommentsContainer *self, PyObject *args)
          {
            jdouble a0;
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "Ds", &a0, &a1))
            {
              OBJ_CALL(self->object.checkNotNaN(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkNotNaN", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkNotNegative(t_CommentsContainer *self, PyObject *args)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "Is", &a0, &a1))
            {
              OBJ_CALL(self->object.checkNotNegative(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkNotNegative", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_checkNotNull(t_CommentsContainer *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "os", &a0, &a1))
            {
              OBJ_CALL(self->object.checkNotNull(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "checkNotNull", args);
            return NULL;
          }

          static PyObject *t_CommentsContainer_getComments(t_CommentsContainer *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_CommentsContainer_refuseFurtherComments(t_CommentsContainer *self)
          {
            OBJ_CALL(self->object.refuseFurtherComments());
            Py_RETURN_NONE;
          }

          static PyObject *t_CommentsContainer_validate(t_CommentsContainer *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "validate", arg);
            return NULL;
          }

          static PyObject *t_CommentsContainer_get__comments(t_CommentsContainer *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/HarmonicAccelerationModel.h"
#include "java/util/List.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *HarmonicAccelerationModel::class$ = NULL;
        jmethodID *HarmonicAccelerationModel::mids$ = NULL;
        bool HarmonicAccelerationModel::live$ = false;

        jclass HarmonicAccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/HarmonicAccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f4b0e27e7ecb64bf] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DI)V");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_6c8e6cd5d59063ae] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_4222abdadde032f5] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicAccelerationModel::HarmonicAccelerationModel(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f4b0e27e7ecb64bf, a0.this$, a1.this$, a2, a3)) {}

        ::java::util::List HarmonicAccelerationModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        void HarmonicAccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement HarmonicAccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_6c8e6cd5d59063ae], a0.this$, a1.this$));
        }

        jdouble HarmonicAccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_4222abdadde032f5], a0.this$, a1.this$);
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
        static PyObject *t_HarmonicAccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicAccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicAccelerationModel_init_(t_HarmonicAccelerationModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicAccelerationModel_getParametersDrivers(t_HarmonicAccelerationModel *self);
        static PyObject *t_HarmonicAccelerationModel_init(t_HarmonicAccelerationModel *self, PyObject *args);
        static PyObject *t_HarmonicAccelerationModel_signedAmplitude(t_HarmonicAccelerationModel *self, PyObject *args);
        static PyObject *t_HarmonicAccelerationModel_get__parametersDrivers(t_HarmonicAccelerationModel *self, void *data);
        static PyGetSetDef t_HarmonicAccelerationModel__fields_[] = {
          DECLARE_GET_FIELD(t_HarmonicAccelerationModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HarmonicAccelerationModel__methods_[] = {
          DECLARE_METHOD(t_HarmonicAccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicAccelerationModel)[] = {
          { Py_tp_methods, t_HarmonicAccelerationModel__methods_ },
          { Py_tp_init, (void *) t_HarmonicAccelerationModel_init_ },
          { Py_tp_getset, t_HarmonicAccelerationModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicAccelerationModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicAccelerationModel, t_HarmonicAccelerationModel, HarmonicAccelerationModel);

        void t_HarmonicAccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicAccelerationModel), &PY_TYPE_DEF(HarmonicAccelerationModel), module, "HarmonicAccelerationModel", 0);
        }

        void t_HarmonicAccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "class_", make_descriptor(HarmonicAccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "wrapfn_", make_descriptor(t_HarmonicAccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicAccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicAccelerationModel::initializeClass, 1)))
            return NULL;
          return t_HarmonicAccelerationModel::wrap_Object(HarmonicAccelerationModel(((t_HarmonicAccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_HarmonicAccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicAccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicAccelerationModel_init_(t_HarmonicAccelerationModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jint a3;
          HarmonicAccelerationModel object((jobject) NULL);

          if (!parseArgs(args, "skDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = HarmonicAccelerationModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HarmonicAccelerationModel_getParametersDrivers(t_HarmonicAccelerationModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_HarmonicAccelerationModel_init(t_HarmonicAccelerationModel *self, PyObject *args)
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

        static PyObject *t_HarmonicAccelerationModel_signedAmplitude(t_HarmonicAccelerationModel *self, PyObject *args)
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

        static PyObject *t_HarmonicAccelerationModel_get__parametersDrivers(t_HarmonicAccelerationModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *MinMaxTreeTile::class$ = NULL;
          jmethodID *MinMaxTreeTile::mids$ = NULL;
          bool MinMaxTreeTile::live$ = false;

          jclass MinMaxTreeTile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCrossedBoundaryColumns_50ae6a9c9fe285e4] = env->getMethodID(cls, "getCrossedBoundaryColumns", "(III)[I");
              mids$[mid_getCrossedBoundaryRows_50ae6a9c9fe285e4] = env->getMethodID(cls, "getCrossedBoundaryRows", "(III)[I");
              mids$[mid_getLevels_d6ab429752e7c267] = env->getMethodID(cls, "getLevels", "()I");
              mids$[mid_getMaxElevation_d692aeb156453fed] = env->getMethodID(cls, "getMaxElevation", "(III)D");
              mids$[mid_getMergeLevel_00616f6c287fc4e7] = env->getMethodID(cls, "getMergeLevel", "(IIII)I");
              mids$[mid_getMinElevation_d692aeb156453fed] = env->getMethodID(cls, "getMinElevation", "(III)D");
              mids$[mid_isColumnMerging_e24caac814db1df5] = env->getMethodID(cls, "isColumnMerging", "(I)Z");
              mids$[mid_locateMax_50ae6a9c9fe285e4] = env->getMethodID(cls, "locateMax", "(III)[I");
              mids$[mid_locateMin_50ae6a9c9fe285e4] = env->getMethodID(cls, "locateMin", "(III)[I");
              mids$[mid_processUpdatedElevation_a71c45509eaf92d1] = env->getMethodID(cls, "processUpdatedElevation", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jint > MinMaxTreeTile::getCrossedBoundaryColumns(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCrossedBoundaryColumns_50ae6a9c9fe285e4], a0, a1, a2));
          }

          JArray< jint > MinMaxTreeTile::getCrossedBoundaryRows(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCrossedBoundaryRows_50ae6a9c9fe285e4], a0, a1, a2));
          }

          jint MinMaxTreeTile::getLevels() const
          {
            return env->callIntMethod(this$, mids$[mid_getLevels_d6ab429752e7c267]);
          }

          jdouble MinMaxTreeTile::getMaxElevation(jint a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_d692aeb156453fed], a0, a1, a2);
          }

          jint MinMaxTreeTile::getMergeLevel(jint a0, jint a1, jint a2, jint a3) const
          {
            return env->callIntMethod(this$, mids$[mid_getMergeLevel_00616f6c287fc4e7], a0, a1, a2, a3);
          }

          jdouble MinMaxTreeTile::getMinElevation(jint a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinElevation_d692aeb156453fed], a0, a1, a2);
          }

          jboolean MinMaxTreeTile::isColumnMerging(jint a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isColumnMerging_e24caac814db1df5], a0);
          }

          JArray< jint > MinMaxTreeTile::locateMax(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_locateMax_50ae6a9c9fe285e4], a0, a1, a2));
          }

          JArray< jint > MinMaxTreeTile::locateMin(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_locateMin_50ae6a9c9fe285e4], a0, a1, a2));
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
    namespace rugged {
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_MinMaxTreeTile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryColumns(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryRows(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getLevels(t_MinMaxTreeTile *self);
          static PyObject *t_MinMaxTreeTile_getMaxElevation(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getMergeLevel(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getMinElevation(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_isColumnMerging(t_MinMaxTreeTile *self, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_locateMax(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_locateMin(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_get__levels(t_MinMaxTreeTile *self, void *data);
          static PyGetSetDef t_MinMaxTreeTile__fields_[] = {
            DECLARE_GET_FIELD(t_MinMaxTreeTile, levels),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MinMaxTreeTile__methods_[] = {
            DECLARE_METHOD(t_MinMaxTreeTile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTile, getCrossedBoundaryColumns, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getCrossedBoundaryRows, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getLevels, METH_NOARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMaxElevation, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMergeLevel, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMinElevation, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, isColumnMerging, METH_O),
            DECLARE_METHOD(t_MinMaxTreeTile, locateMax, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, locateMin, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MinMaxTreeTile)[] = {
            { Py_tp_methods, t_MinMaxTreeTile__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MinMaxTreeTile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MinMaxTreeTile)[] = {
            &PY_TYPE_DEF(::org::orekit::rugged::raster::SimpleTile),
            NULL
          };

          DEFINE_TYPE(MinMaxTreeTile, t_MinMaxTreeTile, MinMaxTreeTile);

          void t_MinMaxTreeTile::install(PyObject *module)
          {
            installType(&PY_TYPE(MinMaxTreeTile), &PY_TYPE_DEF(MinMaxTreeTile), module, "MinMaxTreeTile", 0);
          }

          void t_MinMaxTreeTile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "class_", make_descriptor(MinMaxTreeTile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "wrapfn_", make_descriptor(t_MinMaxTreeTile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MinMaxTreeTile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MinMaxTreeTile::initializeClass, 1)))
              return NULL;
            return t_MinMaxTreeTile::wrap_Object(MinMaxTreeTile(((t_MinMaxTreeTile *) arg)->object.this$));
          }
          static PyObject *t_MinMaxTreeTile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MinMaxTreeTile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryColumns(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getCrossedBoundaryColumns(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getCrossedBoundaryColumns", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryRows(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getCrossedBoundaryRows(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getCrossedBoundaryRows", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getLevels(t_MinMaxTreeTile *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLevels());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_MinMaxTreeTile_getMaxElevation(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getMaxElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(MinMaxTreeTile), (PyObject *) self, "getMaxElevation", args, 2);
          }

          static PyObject *t_MinMaxTreeTile_getMergeLevel(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint result;

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getMergeLevel(a0, a1, a2, a3));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getMergeLevel", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getMinElevation(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getMinElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(MinMaxTreeTile), (PyObject *) self, "getMinElevation", args, 2);
          }

          static PyObject *t_MinMaxTreeTile_isColumnMerging(t_MinMaxTreeTile *self, PyObject *arg)
          {
            jint a0;
            jboolean result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.isColumnMerging(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isColumnMerging", arg);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_locateMax(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.locateMax(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "locateMax", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_locateMin(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.locateMin(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "locateMin", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_get__levels(t_MinMaxTreeTile *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLevels());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonMessageWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonMessageWriter::class$ = NULL;
            jmethodID *PythonMessageWriter::mids$ = NULL;
            bool PythonMessageWriter::live$ = false;

            jclass PythonMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormatVersionKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_d2c8eb4129821f0e] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getVersion_9981f74b2d109da6] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_writeFooter_05c6d36d73082fa6] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_df6f5cf94f18077d] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeSegment_fe05c5cc7a835818] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonMessageWriter::PythonMessageWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonMessageWriter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonMessageWriter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonMessageWriter::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          namespace generation {
            static PyObject *t_PythonMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageWriter_of_(t_PythonMessageWriter *self, PyObject *args);
            static int t_PythonMessageWriter_init_(t_PythonMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonMessageWriter_finalize(t_PythonMessageWriter *self);
            static PyObject *t_PythonMessageWriter_pythonExtension(t_PythonMessageWriter *self, PyObject *args);
            static jobject JNICALL t_PythonMessageWriter_getFormatVersionKey0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageWriter_getRoot1(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonMessageWriter_getVersion2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageWriter_pythonDecRef3(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageWriter_writeFooter4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageWriter_writeHeader5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonMessageWriter_writeSegment6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static PyObject *t_PythonMessageWriter_get__self(t_PythonMessageWriter *self, void *data);
            static PyObject *t_PythonMessageWriter_get__parameters_(t_PythonMessageWriter *self, void *data);
            static PyGetSetDef t_PythonMessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonMessageWriter, self),
              DECLARE_GET_FIELD(t_PythonMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonMessageWriter__methods_[] = {
              DECLARE_METHOD(t_PythonMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonMessageWriter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonMessageWriter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonMessageWriter)[] = {
              { Py_tp_methods, t_PythonMessageWriter__methods_ },
              { Py_tp_init, (void *) t_PythonMessageWriter_init_ },
              { Py_tp_getset, t_PythonMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonMessageWriter, t_PythonMessageWriter, PythonMessageWriter);
            PyObject *t_PythonMessageWriter::wrap_Object(const PythonMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageWriter *self = (t_PythonMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageWriter *self = (t_PythonMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonMessageWriter), &PY_TYPE_DEF(PythonMessageWriter), module, "PythonMessageWriter", 1);
            }

            void t_PythonMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "class_", make_descriptor(PythonMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "wrapfn_", make_descriptor(t_PythonMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonMessageWriter::initializeClass);
              JNINativeMethod methods[] = {
                { "getFormatVersionKey", "()Ljava/lang/String;", (void *) t_PythonMessageWriter_getFormatVersionKey0 },
                { "getRoot", "()Ljava/lang/String;", (void *) t_PythonMessageWriter_getRoot1 },
                { "getVersion", "()D", (void *) t_PythonMessageWriter_getVersion2 },
                { "pythonDecRef", "()V", (void *) t_PythonMessageWriter_pythonDecRef3 },
                { "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V", (void *) t_PythonMessageWriter_writeFooter4 },
                { "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V", (void *) t_PythonMessageWriter_writeHeader5 },
                { "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V", (void *) t_PythonMessageWriter_writeSegment6 },
              };
              env->registerNatives(cls, methods, 7);
            }

            static PyObject *t_PythonMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonMessageWriter::initializeClass, 1)))
                return NULL;
              return t_PythonMessageWriter::wrap_Object(PythonMessageWriter(((t_PythonMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_PythonMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonMessageWriter_of_(t_PythonMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonMessageWriter_init_(t_PythonMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              PythonMessageWriter object((jobject) NULL);

              INT_CALL(object = PythonMessageWriter());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonMessageWriter_finalize(t_PythonMessageWriter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonMessageWriter_pythonExtension(t_PythonMessageWriter *self, PyObject *args)
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

            static jobject JNICALL t_PythonMessageWriter_getFormatVersionKey0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormatVersionKey", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getFormatVersionKey", result);
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

            static jobject JNICALL t_PythonMessageWriter_getRoot1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getRoot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getRoot", result);
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

            static jdouble JNICALL t_PythonMessageWriter_getVersion2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getVersion", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getVersion", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonMessageWriter_pythonDecRef3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonMessageWriter_writeFooter4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeFooter", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageWriter_writeHeader5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o1 = ::org::orekit::files::ccsds::section::t_Header::wrap_Object(::org::orekit::files::ccsds::section::Header(a1));
              PyObject *result = PyObject_CallMethod(obj, "writeHeader", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageWriter_writeSegment6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o1 = ::org::orekit::files::ccsds::section::t_Segment::wrap_Object(::org::orekit::files::ccsds::section::Segment(a1));
              PyObject *result = PyObject_CallMethod(obj, "writeSegment", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonMessageWriter_get__self(t_PythonMessageWriter *self, void *data)
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
            static PyObject *t_PythonMessageWriter_get__parameters_(t_PythonMessageWriter *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ElevationExtremumDetector.h"
#include "org/orekit/propagation/events/ElevationExtremumDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ElevationExtremumDetector::class$ = NULL;
        jmethodID *ElevationExtremumDetector::mids$ = NULL;
        bool ElevationExtremumDetector::live$ = false;

        jclass ElevationExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ElevationExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c9031d766545c51] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_aac1d9a67653fe60] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getElevation_b443ba1cc794b916] = env->getMethodID(cls, "getElevation", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getTopocentricFrame_d0e5c3c9d5578806] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_create_3857937562fc5264] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ElevationExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ElevationExtremumDetector::ElevationExtremumDetector(const ::org::orekit::frames::TopocentricFrame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2c9031d766545c51, a0.this$)) {}

        ElevationExtremumDetector::ElevationExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_aac1d9a67653fe60, a0, a1, a2.this$)) {}

        jdouble ElevationExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        jdouble ElevationExtremumDetector::getElevation(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::frames::TopocentricFrame ElevationExtremumDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_d0e5c3c9d5578806]));
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
        static PyObject *t_ElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_of_(t_ElevationExtremumDetector *self, PyObject *args);
        static int t_ElevationExtremumDetector_init_(t_ElevationExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ElevationExtremumDetector_g(t_ElevationExtremumDetector *self, PyObject *args);
        static PyObject *t_ElevationExtremumDetector_getElevation(t_ElevationExtremumDetector *self, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_getTopocentricFrame(t_ElevationExtremumDetector *self);
        static PyObject *t_ElevationExtremumDetector_get__topocentricFrame(t_ElevationExtremumDetector *self, void *data);
        static PyObject *t_ElevationExtremumDetector_get__parameters_(t_ElevationExtremumDetector *self, void *data);
        static PyGetSetDef t_ElevationExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ElevationExtremumDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_ElevationExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ElevationExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_ElevationExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ElevationExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ElevationExtremumDetector, getElevation, METH_O),
          DECLARE_METHOD(t_ElevationExtremumDetector, getTopocentricFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ElevationExtremumDetector)[] = {
          { Py_tp_methods, t_ElevationExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_ElevationExtremumDetector_init_ },
          { Py_tp_getset, t_ElevationExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ElevationExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ElevationExtremumDetector, t_ElevationExtremumDetector, ElevationExtremumDetector);
        PyObject *t_ElevationExtremumDetector::wrap_Object(const ElevationExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationExtremumDetector *self = (t_ElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ElevationExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationExtremumDetector *self = (t_ElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ElevationExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ElevationExtremumDetector), &PY_TYPE_DEF(ElevationExtremumDetector), module, "ElevationExtremumDetector", 0);
        }

        void t_ElevationExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "class_", make_descriptor(ElevationExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "wrapfn_", make_descriptor(t_ElevationExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ElevationExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_ElevationExtremumDetector::wrap_Object(ElevationExtremumDetector(((t_ElevationExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_ElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ElevationExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ElevationExtremumDetector_of_(t_ElevationExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ElevationExtremumDetector_init_(t_ElevationExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = ElevationExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              ElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ElevationExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationExtremumDetector);
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

        static PyObject *t_ElevationExtremumDetector_g(t_ElevationExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ElevationExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ElevationExtremumDetector_getElevation(t_ElevationExtremumDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getElevation(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
          return NULL;
        }

        static PyObject *t_ElevationExtremumDetector_getTopocentricFrame(t_ElevationExtremumDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }
        static PyObject *t_ElevationExtremumDetector_get__parameters_(t_ElevationExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ElevationExtremumDetector_get__topocentricFrame(t_ElevationExtremumDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Min.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/rank/Min.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Min::class$ = NULL;
          jmethodID *Min::mids$ = NULL;
          bool Min::live$ = false;

          jclass Min::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Min");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_8517e5768ecc2305] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/Min;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_0c41f90993e4c7c6] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Min;");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Min::Min() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void Min::aggregate(const Min & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_8517e5768ecc2305], a0.this$);
          }

          void Min::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          Min Min::copy() const
          {
            return Min(env->callObjectMethod(this$, mids$[mid_copy_0c41f90993e4c7c6]));
          }

          jdouble Min::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jlong Min::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble Min::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void Min::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_1ad26e8c8c0cd65b], a0);
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
    namespace stat {
      namespace descriptive {
        namespace rank {
          static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Min_aggregate(t_Min *self, PyObject *arg);
          static PyObject *t_Min_clear(t_Min *self, PyObject *args);
          static PyObject *t_Min_copy(t_Min *self, PyObject *args);
          static PyObject *t_Min_evaluate(t_Min *self, PyObject *args);
          static PyObject *t_Min_getN(t_Min *self, PyObject *args);
          static PyObject *t_Min_getResult(t_Min *self, PyObject *args);
          static PyObject *t_Min_increment(t_Min *self, PyObject *args);
          static PyObject *t_Min_get__n(t_Min *self, void *data);
          static PyObject *t_Min_get__result(t_Min *self, void *data);
          static PyGetSetDef t_Min__fields_[] = {
            DECLARE_GET_FIELD(t_Min, n),
            DECLARE_GET_FIELD(t_Min, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Min__methods_[] = {
            DECLARE_METHOD(t_Min, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Min, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Min, aggregate, METH_O),
            DECLARE_METHOD(t_Min, clear, METH_VARARGS),
            DECLARE_METHOD(t_Min, copy, METH_VARARGS),
            DECLARE_METHOD(t_Min, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Min, getN, METH_VARARGS),
            DECLARE_METHOD(t_Min, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Min, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Min)[] = {
            { Py_tp_methods, t_Min__methods_ },
            { Py_tp_init, (void *) t_Min_init_ },
            { Py_tp_getset, t_Min__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Min)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Min, t_Min, Min);

          void t_Min::install(PyObject *module)
          {
            installType(&PY_TYPE(Min), &PY_TYPE_DEF(Min), module, "Min", 0);
          }

          void t_Min::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "class_", make_descriptor(Min::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "wrapfn_", make_descriptor(t_Min::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Min::initializeClass, 1)))
              return NULL;
            return t_Min::wrap_Object(Min(((t_Min *) arg)->object.this$));
          }
          static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Min::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds)
          {
            Min object((jobject) NULL);

            INT_CALL(object = Min());
            self->object = object;

            return 0;
          }

          static PyObject *t_Min_aggregate(t_Min *self, PyObject *arg)
          {
            Min a0((jobject) NULL);

            if (!parseArg(arg, "k", Min::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Min_clear(t_Min *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Min_copy(t_Min *self, PyObject *args)
          {
            Min result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Min::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Min_evaluate(t_Min *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Min_getN(t_Min *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Min_getResult(t_Min *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Min_increment(t_Min *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Min_get__n(t_Min *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Min_get__result(t_Min *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeState.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
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
                  mids$[mid_init$_b70e5f4f46b7f371] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getAttitudeType_8cc80fd874f53bfc] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getAvailableDerivatives_410860c8cd87dc25] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getElements_be783177b060994b] = env->getMethodID(cls, "getElements", "()[D");
                  mids$[mid_getRateElementsType_29a8b143d426bd15] = env->getMethodID(cls, "getRateElementsType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_toAngular_ace5b88456b9b14e] = env->getMethodID(cls, "toAngular", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeState::AttitudeState(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< ::java::lang::String > & a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b70e5f4f46b7f371, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeState::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_8cc80fd874f53bfc]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AttitudeState::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_410860c8cd87dc25]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeState::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
              }

              JArray< jdouble > AttitudeState::getElements() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_be783177b060994b]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeState::getRateElementsType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateElementsType_29a8b143d426bd15]));
              }

              ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeState::toAngular(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngular_ace5b88456b9b14e], a0.this$));
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
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ObservedMeasurement::class$ = NULL;
        jmethodID *ObservedMeasurement::mids$ = NULL;
        bool ObservedMeasurement::live$ = false;

        jclass ObservedMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ObservedMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addModifier_a3bed5360bec47d0] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_estimate_eda25b8c88791d9a] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_getBaseWeight_be783177b060994b] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getMeasurementType_d2c8eb4129821f0e] = env->getMethodID(cls, "getMeasurementType", "()Ljava/lang/String;");
            mids$[mid_getModifiers_d751c1a57012b438] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getSatellites_d751c1a57012b438] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_be783177b060994b] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_eee3de00fe971136] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_setEnabled_b35db77cae58639e] = env->getMethodID(cls, "setEnabled", "(Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ObservedMeasurement::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addModifier_a3bed5360bec47d0], a0.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement ObservedMeasurement::estimate(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_estimate_eda25b8c88791d9a], a0, a1, a2.this$));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase ObservedMeasurement::estimateWithoutDerivatives(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->callObjectMethod(this$, mids$[mid_estimateWithoutDerivatives_59954f62fc64aef2], a0, a1, a2.this$));
        }

        JArray< jdouble > ObservedMeasurement::getBaseWeight() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_be783177b060994b]));
        }

        jint ObservedMeasurement::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
        }

        ::java::lang::String ObservedMeasurement::getMeasurementType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeasurementType_d2c8eb4129821f0e]));
        }

        ::java::util::List ObservedMeasurement::getModifiers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_d751c1a57012b438]));
        }

        ::java::util::List ObservedMeasurement::getSatellites() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_d751c1a57012b438]));
        }

        JArray< jdouble > ObservedMeasurement::getTheoreticalStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_be783177b060994b]));
        }

        jboolean ObservedMeasurement::isEnabled() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEnabled_eee3de00fe971136]);
        }

        void ObservedMeasurement::setEnabled(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEnabled_b35db77cae58639e], a0);
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
        static PyObject *t_ObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservedMeasurement_of_(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_addModifier(t_ObservedMeasurement *self, PyObject *arg);
        static PyObject *t_ObservedMeasurement_estimate(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_estimateWithoutDerivatives(t_ObservedMeasurement *self, PyObject *args);
        static PyObject *t_ObservedMeasurement_getBaseWeight(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getDimension(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getMeasurementType(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getModifiers(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getSatellites(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_getTheoreticalStandardDeviation(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_isEnabled(t_ObservedMeasurement *self);
        static PyObject *t_ObservedMeasurement_setEnabled(t_ObservedMeasurement *self, PyObject *arg);
        static PyObject *t_ObservedMeasurement_get__baseWeight(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__dimension(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__enabled(t_ObservedMeasurement *self, void *data);
        static int t_ObservedMeasurement_set__enabled(t_ObservedMeasurement *self, PyObject *arg, void *data);
        static PyObject *t_ObservedMeasurement_get__measurementType(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__modifiers(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__satellites(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__theoreticalStandardDeviation(t_ObservedMeasurement *self, void *data);
        static PyObject *t_ObservedMeasurement_get__parameters_(t_ObservedMeasurement *self, void *data);
        static PyGetSetDef t_ObservedMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_ObservedMeasurement, baseWeight),
          DECLARE_GET_FIELD(t_ObservedMeasurement, dimension),
          DECLARE_GETSET_FIELD(t_ObservedMeasurement, enabled),
          DECLARE_GET_FIELD(t_ObservedMeasurement, measurementType),
          DECLARE_GET_FIELD(t_ObservedMeasurement, modifiers),
          DECLARE_GET_FIELD(t_ObservedMeasurement, satellites),
          DECLARE_GET_FIELD(t_ObservedMeasurement, theoreticalStandardDeviation),
          DECLARE_GET_FIELD(t_ObservedMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ObservedMeasurement__methods_[] = {
          DECLARE_METHOD(t_ObservedMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservedMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservedMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, addModifier, METH_O),
          DECLARE_METHOD(t_ObservedMeasurement, estimate, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, estimateWithoutDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getBaseWeight, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getMeasurementType, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getModifiers, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, getTheoreticalStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, isEnabled, METH_NOARGS),
          DECLARE_METHOD(t_ObservedMeasurement, setEnabled, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ObservedMeasurement)[] = {
          { Py_tp_methods, t_ObservedMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ObservedMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ObservedMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::ComparableMeasurement),
          NULL
        };

        DEFINE_TYPE(ObservedMeasurement, t_ObservedMeasurement, ObservedMeasurement);
        PyObject *t_ObservedMeasurement::wrap_Object(const ObservedMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ObservedMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ObservedMeasurement *self = (t_ObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ObservedMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ObservedMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ObservedMeasurement *self = (t_ObservedMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ObservedMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(ObservedMeasurement), &PY_TYPE_DEF(ObservedMeasurement), module, "ObservedMeasurement", 0);
        }

        void t_ObservedMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "class_", make_descriptor(ObservedMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "wrapfn_", make_descriptor(t_ObservedMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservedMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ObservedMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ObservedMeasurement::initializeClass, 1)))
            return NULL;
          return t_ObservedMeasurement::wrap_Object(ObservedMeasurement(((t_ObservedMeasurement *) arg)->object.this$));
        }
        static PyObject *t_ObservedMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ObservedMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ObservedMeasurement_of_(t_ObservedMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ObservedMeasurement_addModifier(t_ObservedMeasurement *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
          {
            OBJ_CALL(self->object.addModifier(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
          return NULL;
        }

        static PyObject *t_ObservedMeasurement_estimate(t_ObservedMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimate(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_ObservedMeasurement_estimateWithoutDerivatives(t_ObservedMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateWithoutDerivatives(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateWithoutDerivatives", args);
          return NULL;
        }

        static PyObject *t_ObservedMeasurement_getBaseWeight(t_ObservedMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseWeight());
          return result.wrap();
        }

        static PyObject *t_ObservedMeasurement_getDimension(t_ObservedMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ObservedMeasurement_getMeasurementType(t_ObservedMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementType());
          return j2p(result);
        }

        static PyObject *t_ObservedMeasurement_getModifiers(t_ObservedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_ObservedMeasurement_getSatellites(t_ObservedMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::PY_TYPE(ObservableSatellite));
        }

        static PyObject *t_ObservedMeasurement_getTheoreticalStandardDeviation(t_ObservedMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_ObservedMeasurement_isEnabled(t_ObservedMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEnabled());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ObservedMeasurement_setEnabled(t_ObservedMeasurement *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setEnabled(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEnabled", arg);
          return NULL;
        }
        static PyObject *t_ObservedMeasurement_get__parameters_(t_ObservedMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ObservedMeasurement_get__baseWeight(t_ObservedMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseWeight());
          return value.wrap();
        }

        static PyObject *t_ObservedMeasurement_get__dimension(t_ObservedMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ObservedMeasurement_get__enabled(t_ObservedMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEnabled());
          Py_RETURN_BOOL(value);
        }
        static int t_ObservedMeasurement_set__enabled(t_ObservedMeasurement *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setEnabled(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "enabled", arg);
          return -1;
        }

        static PyObject *t_ObservedMeasurement_get__measurementType(t_ObservedMeasurement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementType());
          return j2p(value);
        }

        static PyObject *t_ObservedMeasurement_get__modifiers(t_ObservedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_ObservedMeasurement_get__satellites(t_ObservedMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_ObservedMeasurement_get__theoreticalStandardDeviation(t_ObservedMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *PolyhedronsSet::class$ = NULL;
          jmethodID *PolyhedronsSet::mids$ = NULL;
          bool PolyhedronsSet::live$ = false;

          jclass PolyhedronsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/PolyhedronsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_d1eb831c560f7a84] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep;D)V");
              mids$[mid_init$_83911a7bf86bdb7d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_457d0c956b0d24c0] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_14f88b2d4dcff36a] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;D)V");
              mids$[mid_init$_a3fea7634f569ef9] = env->getMethodID(cls, "<init>", "(DDDDDDD)V");
              mids$[mid_buildNew_8e97708e063ea4d1] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_firstIntersection_2a83991eb1314ee9] = env->getMethodID(cls, "firstIntersection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
              mids$[mid_getBRep_962634ebcba7d012] = env->getMethodID(cls, "getBRep", "()Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep;");
              mids$[mid_rotate_63bdd2668b712b4a] = env->getMethodID(cls, "rotate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_translate_22e928e5df94d5c5] = env->getMethodID(cls, "translate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_computeGeometricalProperties_ff7cb6c242604316] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolyhedronsSet::PolyhedronsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          PolyhedronsSet::PolyhedronsSet(const ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_d1eb831c560f7a84, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_83911a7bf86bdb7d, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_457d0c956b0d24c0, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::java::util::List & a0, const ::java::util::List & a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_14f88b2d4dcff36a, a0.this$, a1.this$, a2)) {}

          PolyhedronsSet::PolyhedronsSet(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_a3fea7634f569ef9, a0, a1, a2, a3, a4, a5, a6)) {}

          PolyhedronsSet PolyhedronsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_buildNew_8e97708e063ea4d1], a0.this$));
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane PolyhedronsSet::firstIntersection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Line & a1) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_firstIntersection_2a83991eb1314ee9], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep PolyhedronsSet::getBRep() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep(env->callObjectMethod(this$, mids$[mid_getBRep_962634ebcba7d012]));
          }

          PolyhedronsSet PolyhedronsSet::rotate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_rotate_63bdd2668b712b4a], a0.this$, a1.this$));
          }

          PolyhedronsSet PolyhedronsSet::translate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_translate_22e928e5df94d5c5], a0.this$));
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
          static PyObject *t_PolyhedronsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet_of_(t_PolyhedronsSet *self, PyObject *args);
          static int t_PolyhedronsSet_init_(t_PolyhedronsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolyhedronsSet_buildNew(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_firstIntersection(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_getBRep(t_PolyhedronsSet *self);
          static PyObject *t_PolyhedronsSet_rotate(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_translate(t_PolyhedronsSet *self, PyObject *arg);
          static PyObject *t_PolyhedronsSet_get__bRep(t_PolyhedronsSet *self, void *data);
          static PyObject *t_PolyhedronsSet_get__parameters_(t_PolyhedronsSet *self, void *data);
          static PyGetSetDef t_PolyhedronsSet__fields_[] = {
            DECLARE_GET_FIELD(t_PolyhedronsSet, bRep),
            DECLARE_GET_FIELD(t_PolyhedronsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolyhedronsSet__methods_[] = {
            DECLARE_METHOD(t_PolyhedronsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, firstIntersection, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, getBRep, METH_NOARGS),
            DECLARE_METHOD(t_PolyhedronsSet, rotate, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, translate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolyhedronsSet)[] = {
            { Py_tp_methods, t_PolyhedronsSet__methods_ },
            { Py_tp_init, (void *) t_PolyhedronsSet_init_ },
            { Py_tp_getset, t_PolyhedronsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolyhedronsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(PolyhedronsSet, t_PolyhedronsSet, PolyhedronsSet);
          PyObject *t_PolyhedronsSet::wrap_Object(const PolyhedronsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet *self = (t_PolyhedronsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolyhedronsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet *self = (t_PolyhedronsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolyhedronsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(PolyhedronsSet), &PY_TYPE_DEF(PolyhedronsSet), module, "PolyhedronsSet", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "BRep", make_descriptor(&PY_TYPE_DEF(PolyhedronsSet$BRep)));
          }

          void t_PolyhedronsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "class_", make_descriptor(PolyhedronsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "wrapfn_", make_descriptor(t_PolyhedronsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolyhedronsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolyhedronsSet::initializeClass, 1)))
              return NULL;
            return t_PolyhedronsSet::wrap_Object(PolyhedronsSet(((t_PolyhedronsSet *) arg)->object.this$));
          }
          static PyObject *t_PolyhedronsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolyhedronsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolyhedronsSet_of_(t_PolyhedronsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolyhedronsSet_init_(t_PolyhedronsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = PolyhedronsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KKD", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
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
                jdouble a4;
                jdouble a5;
                jdouble a6;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "DDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
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

          static PyObject *t_PolyhedronsSet_buildNew(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            PolyhedronsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PolyhedronsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_PolyhedronsSet_firstIntersection(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Line a1((jobject) NULL);
            ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.firstIntersection(a0, a1));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            PyErr_SetArgsError((PyObject *) self, "firstIntersection", args);
            return NULL;
          }

          static PyObject *t_PolyhedronsSet_getBRep(t_PolyhedronsSet *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep result((jobject) NULL);
            OBJ_CALL(result = self->object.getBRep());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::wrap_Object(result);
          }

          static PyObject *t_PolyhedronsSet_rotate(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            PolyhedronsSet result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotate(a0, a1));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "rotate", args);
            return NULL;
          }

          static PyObject *t_PolyhedronsSet_translate(t_PolyhedronsSet *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            PolyhedronsSet result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.translate(a0));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "translate", arg);
            return NULL;
          }
          static PyObject *t_PolyhedronsSet_get__parameters_(t_PolyhedronsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolyhedronsSet_get__bRep(t_PolyhedronsSet *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep value((jobject) NULL);
            OBJ_CALL(value = self->object.getBRep());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *KeplerianOrbit::class$ = NULL;
      jmethodID *KeplerianOrbit::mids$ = NULL;
      bool KeplerianOrbit::live$ = false;

      jclass KeplerianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/KeplerianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17534ef58ef3aaef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_a8e6ee721e0d6799] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_78122b2ba50ff4ac] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_b2d612c221d7654c] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_5192e636016a7ffa] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_3ef35668c0b1580f] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_9981f74b2d109da6] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_9981f74b2d109da6] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getAnomaly_d70fe653db6c6bd3] = env->getMethodID(cls, "getAnomaly", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAnomalyDot_d70fe653db6c6bd3] = env->getMethodID(cls, "getAnomalyDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_9981f74b2d109da6] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEccentricAnomaly_9981f74b2d109da6] = env->getMethodID(cls, "getEccentricAnomaly", "()D");
          mids$[mid_getEccentricAnomalyDot_9981f74b2d109da6] = env->getMethodID(cls, "getEccentricAnomalyDot", "()D");
          mids$[mid_getEquinoctialEx_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_9981f74b2d109da6] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_9981f74b2d109da6] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_9981f74b2d109da6] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_9981f74b2d109da6] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_9981f74b2d109da6] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_9981f74b2d109da6] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_9981f74b2d109da6] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_9981f74b2d109da6] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_9981f74b2d109da6] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_9981f74b2d109da6] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_9981f74b2d109da6] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_9981f74b2d109da6] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getMeanAnomaly_9981f74b2d109da6] = env->getMethodID(cls, "getMeanAnomaly", "()D");
          mids$[mid_getMeanAnomalyDot_9981f74b2d109da6] = env->getMethodID(cls, "getMeanAnomalyDot", "()D");
          mids$[mid_getPerigeeArgument_9981f74b2d109da6] = env->getMethodID(cls, "getPerigeeArgument", "()D");
          mids$[mid_getPerigeeArgumentDot_9981f74b2d109da6] = env->getMethodID(cls, "getPerigeeArgumentDot", "()D");
          mids$[mid_getRightAscensionOfAscendingNode_9981f74b2d109da6] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()D");
          mids$[mid_getRightAscensionOfAscendingNodeDot_9981f74b2d109da6] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()D");
          mids$[mid_getTrueAnomaly_9981f74b2d109da6] = env->getMethodID(cls, "getTrueAnomaly", "()D");
          mids$[mid_getTrueAnomalyDot_9981f74b2d109da6] = env->getMethodID(cls, "getTrueAnomalyDot", "()D");
          mids$[mid_getType_495f818d3570b7f5] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_eee3de00fe971136] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_05c9859fe4d10dff] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_shiftedBy_6b1b8c52ea60ba5f] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPosition_032312bdeb3f2f93] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_674031698a428ce8] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_17534ef58ef3aaef, a0.this$)) {}

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_a8e6ee721e0d6799, a0.this$, a1.this$, a2)) {}

      KeplerianOrbit::KeplerianOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_78122b2ba50ff4ac, a0.this$, a1.this$, a2.this$, a3)) {}

      KeplerianOrbit::KeplerianOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_b2d612c221d7654c, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      KeplerianOrbit::KeplerianOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_5192e636016a7ffa, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void KeplerianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_3ef35668c0b1580f], a0.this$, a1, a2.this$);
      }

      jdouble KeplerianOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getAnomaly(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAnomaly_d70fe653db6c6bd3], a0.this$);
      }

      jdouble KeplerianOrbit::getAnomalyDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAnomalyDot_d70fe653db6c6bd3], a0.this$);
      }

      ::org::orekit::orbits::PositionAngleType KeplerianOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be]));
      }

      jdouble KeplerianOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getEccentricAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricAnomaly_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getEccentricAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricAnomalyDot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getMeanAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomaly_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getMeanAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomalyDot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getPerigeeArgument() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgument_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getPerigeeArgumentDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgumentDot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getRightAscensionOfAscendingNode() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getTrueAnomaly() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrueAnomaly_9981f74b2d109da6]);
      }

      jdouble KeplerianOrbit::getTrueAnomalyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTrueAnomalyDot_9981f74b2d109da6]);
      }

      ::org::orekit::orbits::OrbitType KeplerianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_495f818d3570b7f5]));
      }

      jboolean KeplerianOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_eee3de00fe971136]);
      }

      KeplerianOrbit KeplerianOrbit::removeRates() const
      {
        return KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_05c9859fe4d10dff]));
      }

      KeplerianOrbit KeplerianOrbit::shiftedBy(jdouble a0) const
      {
        return KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_6b1b8c52ea60ba5f], a0));
      }

      ::java::lang::String KeplerianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_KeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_KeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_KeplerianOrbit_init_(t_KeplerianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_KeplerianOrbit_addKeplerContribution(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getA(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getADot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getAnomaly(t_KeplerianOrbit *self, PyObject *arg);
      static PyObject *t_KeplerianOrbit_getAnomalyDot(t_KeplerianOrbit *self, PyObject *arg);
      static PyObject *t_KeplerianOrbit_getCachedPositionAngleType(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getE(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEccentricAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getEccentricAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getEquinoctialEx(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialExDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialEy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getEquinoctialEyDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHx(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHxDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getHyDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getI(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getIDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLE(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLEDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLM(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLMDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLv(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getLvDot(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_getMeanAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getMeanAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getPerigeeArgument(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getPerigeeArgumentDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNode(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getTrueAnomaly(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getTrueAnomalyDot(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_getType(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_hasRates(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_removeRates(t_KeplerianOrbit *self);
      static PyObject *t_KeplerianOrbit_shiftedBy(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_toString(t_KeplerianOrbit *self, PyObject *args);
      static PyObject *t_KeplerianOrbit_get__a(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__aDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__cachedPositionAngleType(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__e(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eccentricAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__eccentricAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEx(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialExDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEy(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__equinoctialEyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hx(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hxDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hy(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__hyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__i(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__iDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lE(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lEDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lM(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lMDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lv(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__lvDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__meanAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__meanAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__perigeeArgument(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__perigeeArgumentDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNode(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__trueAnomaly(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__trueAnomalyDot(t_KeplerianOrbit *self, void *data);
      static PyObject *t_KeplerianOrbit_get__type(t_KeplerianOrbit *self, void *data);
      static PyGetSetDef t_KeplerianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_KeplerianOrbit, a),
        DECLARE_GET_FIELD(t_KeplerianOrbit, aDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_KeplerianOrbit, e),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eccentricAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, eccentricAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_KeplerianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hx),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hxDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hy),
        DECLARE_GET_FIELD(t_KeplerianOrbit, hyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, i),
        DECLARE_GET_FIELD(t_KeplerianOrbit, iDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lE),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lEDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lM),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lMDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lv),
        DECLARE_GET_FIELD(t_KeplerianOrbit, lvDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, meanAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, meanAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, perigeeArgument),
        DECLARE_GET_FIELD(t_KeplerianOrbit, perigeeArgumentDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_KeplerianOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, trueAnomaly),
        DECLARE_GET_FIELD(t_KeplerianOrbit, trueAnomalyDot),
        DECLARE_GET_FIELD(t_KeplerianOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_KeplerianOrbit__methods_[] = {
        DECLARE_METHOD(t_KeplerianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_KeplerianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getAnomaly, METH_O),
        DECLARE_METHOD(t_KeplerianOrbit, getAnomalyDot, METH_O),
        DECLARE_METHOD(t_KeplerianOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEccentricAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEccentricAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getMeanAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getMeanAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getPerigeeArgument, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getPerigeeArgumentDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getTrueAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getTrueAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_KeplerianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_KeplerianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(KeplerianOrbit)[] = {
        { Py_tp_methods, t_KeplerianOrbit__methods_ },
        { Py_tp_init, (void *) t_KeplerianOrbit_init_ },
        { Py_tp_getset, t_KeplerianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(KeplerianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(KeplerianOrbit, t_KeplerianOrbit, KeplerianOrbit);

      void t_KeplerianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(KeplerianOrbit), &PY_TYPE_DEF(KeplerianOrbit), module, "KeplerianOrbit", 0);
      }

      void t_KeplerianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "class_", make_descriptor(KeplerianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "wrapfn_", make_descriptor(t_KeplerianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_KeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, KeplerianOrbit::initializeClass, 1)))
          return NULL;
        return t_KeplerianOrbit::wrap_Object(KeplerianOrbit(((t_KeplerianOrbit *) arg)->object.this$));
      }
      static PyObject *t_KeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, KeplerianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_KeplerianOrbit_init_(t_KeplerianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = KeplerianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3));
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
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
            jdouble a9;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a14((jobject) NULL);
            jdouble a15;
            KeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = KeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_KeplerianOrbit_addKeplerContribution(t_KeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getA(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getADot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getAnomaly(t_KeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomaly(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomaly", arg);
        return NULL;
      }

      static PyObject *t_KeplerianOrbit_getAnomalyDot(t_KeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomalyDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomalyDot", arg);
        return NULL;
      }

      static PyObject *t_KeplerianOrbit_getCachedPositionAngleType(t_KeplerianOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_KeplerianOrbit_getE(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEccentricAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getEccentricAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEx(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialExDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getEquinoctialEyDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHx(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHxDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getHyDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getI(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getIDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLE(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLEDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLM(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLMDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLv(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getLvDot(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_KeplerianOrbit_getMeanAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getMeanAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getPerigeeArgument(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPerigeeArgument());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getPerigeeArgumentDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPerigeeArgumentDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNode(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getTrueAnomaly(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrueAnomaly());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getTrueAnomalyDot(t_KeplerianOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTrueAnomalyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_KeplerianOrbit_getType(t_KeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_KeplerianOrbit_hasRates(t_KeplerianOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_KeplerianOrbit_removeRates(t_KeplerianOrbit *self)
      {
        KeplerianOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_KeplerianOrbit::wrap_Object(result);
      }

      static PyObject *t_KeplerianOrbit_shiftedBy(t_KeplerianOrbit *self, PyObject *args)
      {
        jdouble a0;
        KeplerianOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_KeplerianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_KeplerianOrbit_toString(t_KeplerianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(KeplerianOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_KeplerianOrbit_get__a(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__aDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__cachedPositionAngleType(t_KeplerianOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_KeplerianOrbit_get__e(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eccentricAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__eccentricAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEx(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialExDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEy(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__equinoctialEyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hx(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hxDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hy(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__hyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__i(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__iDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lE(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lEDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lM(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lMDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lv(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__lvDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__meanAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__meanAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__perigeeArgument(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPerigeeArgument());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__perigeeArgumentDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPerigeeArgumentDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNode(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__trueAnomaly(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrueAnomaly());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__trueAnomalyDot(t_KeplerianOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTrueAnomalyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_KeplerianOrbit_get__type(t_KeplerianOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *TrivariateFunction::class$ = NULL;
      jmethodID *TrivariateFunction::mids$ = NULL;
      bool TrivariateFunction::live$ = false;

      jclass TrivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/TrivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_db06d8c3fc3d9670] = env->getMethodID(cls, "value", "(DDD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TrivariateFunction::value(jdouble a0, jdouble a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_db06d8c3fc3d9670], a0, a1, a2);
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
      static PyObject *t_TrivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrivariateFunction_value(t_TrivariateFunction *self, PyObject *args);

      static PyMethodDef t_TrivariateFunction__methods_[] = {
        DECLARE_METHOD(t_TrivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TrivariateFunction)[] = {
        { Py_tp_methods, t_TrivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TrivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TrivariateFunction, t_TrivariateFunction, TrivariateFunction);

      void t_TrivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TrivariateFunction), &PY_TYPE_DEF(TrivariateFunction), module, "TrivariateFunction", 0);
      }

      void t_TrivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "class_", make_descriptor(TrivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "wrapfn_", make_descriptor(t_TrivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TrivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TrivariateFunction::initializeClass, 1)))
          return NULL;
        return t_TrivariateFunction::wrap_Object(TrivariateFunction(((t_TrivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_TrivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TrivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TrivariateFunction_value(t_TrivariateFunction *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.value(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseTroposphericDelayModifier::class$ = NULL;
          jmethodID *PhaseTroposphericDelayModifier::mids$ = NULL;
          bool PhaseTroposphericDelayModifier::live$ = false;

          jclass PhaseTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1f42633debde232b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseTroposphericDelayModifier::PhaseTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1f42633debde232b, a0.this$)) {}

          ::java::util::List PhaseTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void PhaseTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void PhaseTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_PhaseTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseTroposphericDelayModifier_init_(t_PhaseTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseTroposphericDelayModifier_getParametersDrivers(t_PhaseTroposphericDelayModifier *self);
          static PyObject *t_PhaseTroposphericDelayModifier_modify(t_PhaseTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_modifyWithoutDerivatives(t_PhaseTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_get__parametersDrivers(t_PhaseTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_PhaseTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_PhaseTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_PhaseTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseTroposphericDelayModifier, t_PhaseTroposphericDelayModifier, PhaseTroposphericDelayModifier);

          void t_PhaseTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseTroposphericDelayModifier), &PY_TYPE_DEF(PhaseTroposphericDelayModifier), module, "PhaseTroposphericDelayModifier", 0);
          }

          void t_PhaseTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "class_", make_descriptor(PhaseTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "wrapfn_", make_descriptor(t_PhaseTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseTroposphericDelayModifier::wrap_Object(PhaseTroposphericDelayModifier(((t_PhaseTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseTroposphericDelayModifier_init_(t_PhaseTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            PhaseTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = PhaseTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseTroposphericDelayModifier_getParametersDrivers(t_PhaseTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseTroposphericDelayModifier_modify(t_PhaseTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseTroposphericDelayModifier_modifyWithoutDerivatives(t_PhaseTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseTroposphericDelayModifier_get__parametersDrivers(t_PhaseTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/utils/PythonMultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonMultipleShooting::class$ = NULL;
      jmethodID *PythonMultipleShooting::mids$ = NULL;
      bool PythonMultipleShooting::live$ = false;

      jclass PythonMultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonMultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compute_d751c1a57012b438] = env->getMethodID(cls, "compute", "()Ljava/util/List;");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonMultipleShooting::PythonMultipleShooting() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonMultipleShooting::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonMultipleShooting::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonMultipleShooting::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_PythonMultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonMultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonMultipleShooting_init_(t_PythonMultipleShooting *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonMultipleShooting_finalize(t_PythonMultipleShooting *self);
      static PyObject *t_PythonMultipleShooting_pythonExtension(t_PythonMultipleShooting *self, PyObject *args);
      static jobject JNICALL t_PythonMultipleShooting_compute0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonMultipleShooting_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonMultipleShooting_get__self(t_PythonMultipleShooting *self, void *data);
      static PyGetSetDef t_PythonMultipleShooting__fields_[] = {
        DECLARE_GET_FIELD(t_PythonMultipleShooting, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonMultipleShooting__methods_[] = {
        DECLARE_METHOD(t_PythonMultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMultipleShooting, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonMultipleShooting, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonMultipleShooting)[] = {
        { Py_tp_methods, t_PythonMultipleShooting__methods_ },
        { Py_tp_init, (void *) t_PythonMultipleShooting_init_ },
        { Py_tp_getset, t_PythonMultipleShooting__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonMultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonMultipleShooting, t_PythonMultipleShooting, PythonMultipleShooting);

      void t_PythonMultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonMultipleShooting), &PY_TYPE_DEF(PythonMultipleShooting), module, "PythonMultipleShooting", 1);
      }

      void t_PythonMultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "class_", make_descriptor(PythonMultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "wrapfn_", make_descriptor(t_PythonMultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultipleShooting), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonMultipleShooting::initializeClass);
        JNINativeMethod methods[] = {
          { "compute", "()Ljava/util/List;", (void *) t_PythonMultipleShooting_compute0 },
          { "pythonDecRef", "()V", (void *) t_PythonMultipleShooting_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonMultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonMultipleShooting::initializeClass, 1)))
          return NULL;
        return t_PythonMultipleShooting::wrap_Object(PythonMultipleShooting(((t_PythonMultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_PythonMultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonMultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonMultipleShooting_init_(t_PythonMultipleShooting *self, PyObject *args, PyObject *kwds)
      {
        PythonMultipleShooting object((jobject) NULL);

        INT_CALL(object = PythonMultipleShooting());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonMultipleShooting_finalize(t_PythonMultipleShooting *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonMultipleShooting_pythonExtension(t_PythonMultipleShooting *self, PyObject *args)
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

      static jobject JNICALL t_PythonMultipleShooting_compute0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "compute", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("compute", result);
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

      static void JNICALL t_PythonMultipleShooting_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonMultipleShooting::mids$[PythonMultipleShooting::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonMultipleShooting_get__self(t_PythonMultipleShooting *self, void *data)
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
#include "org/hipparchus/util/IterationEvent.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationEvent::class$ = NULL;
      jmethodID *IterationEvent::mids$ = NULL;
      bool IterationEvent::live$ = false;

      jclass IterationEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7e50748b6c508ddd] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;I)V");
          mids$[mid_getIterations_d6ab429752e7c267] = env->getMethodID(cls, "getIterations", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterationEvent::IterationEvent(const ::java::lang::Object & a0, jint a1) : ::java::util::EventObject(env->newObject(initializeClass, &mids$, mid_init$_7e50748b6c508ddd, a0.this$, a1)) {}

      jint IterationEvent::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_d6ab429752e7c267]);
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
      static PyObject *t_IterationEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterationEvent_init_(t_IterationEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterationEvent_getIterations(t_IterationEvent *self);
      static PyObject *t_IterationEvent_get__iterations(t_IterationEvent *self, void *data);
      static PyGetSetDef t_IterationEvent__fields_[] = {
        DECLARE_GET_FIELD(t_IterationEvent, iterations),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterationEvent__methods_[] = {
        DECLARE_METHOD(t_IterationEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationEvent, getIterations, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationEvent)[] = {
        { Py_tp_methods, t_IterationEvent__methods_ },
        { Py_tp_init, (void *) t_IterationEvent_init_ },
        { Py_tp_getset, t_IterationEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationEvent)[] = {
        &PY_TYPE_DEF(::java::util::EventObject),
        NULL
      };

      DEFINE_TYPE(IterationEvent, t_IterationEvent, IterationEvent);

      void t_IterationEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationEvent), &PY_TYPE_DEF(IterationEvent), module, "IterationEvent", 0);
      }

      void t_IterationEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "class_", make_descriptor(IterationEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "wrapfn_", make_descriptor(t_IterationEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationEvent::initializeClass, 1)))
          return NULL;
        return t_IterationEvent::wrap_Object(IterationEvent(((t_IterationEvent *) arg)->object.this$));
      }
      static PyObject *t_IterationEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterationEvent_init_(t_IterationEvent *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        jint a1;
        IterationEvent object((jobject) NULL);

        if (!parseArgs(args, "oI", &a0, &a1))
        {
          INT_CALL(object = IterationEvent(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_IterationEvent_getIterations(t_IterationEvent *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationEvent_get__iterations(t_IterationEvent *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/AbstractFrames.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractFrames::class$ = NULL;
      jmethodID *AbstractFrames::mids$ = NULL;
      bool AbstractFrames::live$ = false;

      jclass AbstractFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d68fa0e4fc7f6cf2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)V");
          mids$[mid_buildUncachedITRF_b3c0898cffa17768] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getCIRF_84e014d661e18862] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_449c13dc13254059] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEcliptic_6c55c8e7e159d424] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_2914574e34e220d9] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_cb151471db4570f0] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_7aa0049260c7fcad] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_84e014d661e18862] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_cb151471db4570f0] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_84e014d661e18862] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_8580ffa0332936c5] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_84e014d661e18862] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_d7c1cc155dc219ec] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_7aa0049260c7fcad] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_84e014d661e18862] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_449c13dc13254059] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_d7c1cc155dc219ec] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_84e014d661e18862] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_7aa0049260c7fcad] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_84e014d661e18862] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_449c13dc13254059] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTimeScales_796d09eb9f0f96ef] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFrames::AbstractFrames(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d68fa0e4fc7f6cf2, a0.this$, a1.this$)) {}

      ::org::orekit::frames::Frame AbstractFrames::buildUncachedITRF(const ::org::orekit::time::UT1Scale & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_buildUncachedITRF_b3c0898cffa17768], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getCIRF_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getEME2000() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getEME2000_449c13dc13254059]));
      }

      ::org::orekit::frames::Frame AbstractFrames::getEcliptic(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEcliptic_6c55c8e7e159d424], a0.this$));
      }

      ::org::orekit::frames::Frame AbstractFrames::getFrame(const ::org::orekit::frames::Predefined & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2914574e34e220d9], a0.this$));
      }

      ::org::orekit::frames::Frame AbstractFrames::getGCRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getGCRF_cb151471db4570f0]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getGTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_7aa0049260c7fcad], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::Frame AbstractFrames::getICRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getICRF_cb151471db4570f0]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRF_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF AbstractFrames::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2) const
      {
        return ::org::orekit::frames::VersionedITRF(env->callObjectMethod(this$, mids$[mid_getITRF_8580ffa0332936c5], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRFEquinox_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getMOD(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_d7c1cc155dc219ec], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getMOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_7aa0049260c7fcad], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getPZ9011_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTEME() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTEME_449c13dc13254059]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTIRF(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_d7c1cc155dc219ec], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_7aa0049260c7fcad], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_84e014d661e18862], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getVeis1950() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getVeis1950_449c13dc13254059]));
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
      static PyObject *t_AbstractFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractFrames_init_(t_AbstractFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFrames_buildUncachedITRF(t_AbstractFrames *self, PyObject *arg);
      static PyObject *t_AbstractFrames_getCIRF(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getEME2000(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getEcliptic(t_AbstractFrames *self, PyObject *arg);
      static PyObject *t_AbstractFrames_getFrame(t_AbstractFrames *self, PyObject *arg);
      static PyObject *t_AbstractFrames_getGCRF(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getGTOD(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getICRF(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getITRF(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getITRFEquinox(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getMOD(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getPZ9011(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getTEME(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_getTIRF(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getTOD(t_AbstractFrames *self, PyObject *args);
      static PyObject *t_AbstractFrames_getVeis1950(t_AbstractFrames *self);
      static PyObject *t_AbstractFrames_get__eME2000(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__gCRF(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__iCRF(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__tEME(t_AbstractFrames *self, void *data);
      static PyObject *t_AbstractFrames_get__veis1950(t_AbstractFrames *self, void *data);
      static PyGetSetDef t_AbstractFrames__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFrames, eME2000),
        DECLARE_GET_FIELD(t_AbstractFrames, gCRF),
        DECLARE_GET_FIELD(t_AbstractFrames, iCRF),
        DECLARE_GET_FIELD(t_AbstractFrames, tEME),
        DECLARE_GET_FIELD(t_AbstractFrames, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFrames__methods_[] = {
        DECLARE_METHOD(t_AbstractFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFrames, buildUncachedITRF, METH_O),
        DECLARE_METHOD(t_AbstractFrames, getCIRF, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getEME2000, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getEcliptic, METH_O),
        DECLARE_METHOD(t_AbstractFrames, getFrame, METH_O),
        DECLARE_METHOD(t_AbstractFrames, getGCRF, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getGTOD, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getICRF, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getITRF, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getITRFEquinox, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getMOD, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getPZ9011, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getTEME, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFrames, getTIRF, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getTOD, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFrames, getVeis1950, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFrames)[] = {
        { Py_tp_methods, t_AbstractFrames__methods_ },
        { Py_tp_init, (void *) t_AbstractFrames_init_ },
        { Py_tp_getset, t_AbstractFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFrames)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFrames, t_AbstractFrames, AbstractFrames);

      void t_AbstractFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFrames), &PY_TYPE_DEF(AbstractFrames), module, "AbstractFrames", 0);
      }

      void t_AbstractFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFrames), "class_", make_descriptor(AbstractFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFrames), "wrapfn_", make_descriptor(t_AbstractFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFrames), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFrames::initializeClass, 1)))
          return NULL;
        return t_AbstractFrames::wrap_Object(AbstractFrames(((t_AbstractFrames *) arg)->object.this$));
      }
      static PyObject *t_AbstractFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractFrames_init_(t_AbstractFrames *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::java::util::function::Supplier a1((jobject) NULL);
        PyTypeObject **p1;
        AbstractFrames object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = AbstractFrames(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFrames_buildUncachedITRF(t_AbstractFrames *self, PyObject *arg)
      {
        ::org::orekit::time::UT1Scale a0((jobject) NULL);
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UT1Scale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.buildUncachedITRF(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "buildUncachedITRF", arg);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getCIRF(t_AbstractFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getCIRF(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCIRF", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getEME2000(t_AbstractFrames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getEcliptic(t_AbstractFrames *self, PyObject *arg)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
        {
          OBJ_CALL(result = self->object.getEcliptic(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEcliptic", arg);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getFrame(t_AbstractFrames *self, PyObject *arg)
      {
        ::org::orekit::frames::Predefined a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::frames::Predefined::initializeClass, &a0, &p0, ::org::orekit::frames::t_Predefined::parameters_))
        {
          OBJ_CALL(result = self->object.getFrame(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrame", arg);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getGCRF(t_AbstractFrames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getGTOD(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getGTOD(a0));
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
              OBJ_CALL(result = self->object.getGTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGTOD", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getICRF(t_AbstractFrames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getITRF(t_AbstractFrames *self, PyObject *args)
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
              OBJ_CALL(result = self->object.getITRF(a0, a1));
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
              OBJ_CALL(result = self->object.getITRF(a0, a1, a2));
              return ::org::orekit::frames::t_VersionedITRF::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getITRF", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getITRFEquinox(t_AbstractFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getITRFEquinox(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getITRFEquinox", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getMOD(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getMOD", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getPZ9011(t_AbstractFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPZ9011(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPZ9011", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getTEME(t_AbstractFrames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_getTIRF(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getTIRF(a0));
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
              OBJ_CALL(result = self->object.getTIRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTIRF", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getTOD(t_AbstractFrames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getTOD(a0));
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
              OBJ_CALL(result = self->object.getTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTOD", args);
        return NULL;
      }

      static PyObject *t_AbstractFrames_getVeis1950(t_AbstractFrames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_AbstractFrames_get__eME2000(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__gCRF(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__iCRF(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__tEME(t_AbstractFrames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_AbstractFrames_get__veis1950(t_AbstractFrames *self, void *data)
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
#include "org/orekit/time/PythonParser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/String.h"
#include "org/orekit/time/OffsetModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonParser::class$ = NULL;
      jmethodID *PythonParser::mids$ = NULL;
      bool PythonParser::live$ = false;

      jclass PythonParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_parse_cf69cc549132f899] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParser::PythonParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonParser::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonParser::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonParser::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_PythonParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParser_init_(t_PythonParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParser_finalize(t_PythonParser *self);
      static PyObject *t_PythonParser_pythonExtension(t_PythonParser *self, PyObject *args);
      static jobject JNICALL t_PythonParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonParser_get__self(t_PythonParser *self, void *data);
      static PyGetSetDef t_PythonParser__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParser, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParser__methods_[] = {
        DECLARE_METHOD(t_PythonParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParser, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParser, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParser)[] = {
        { Py_tp_methods, t_PythonParser__methods_ },
        { Py_tp_init, (void *) t_PythonParser_init_ },
        { Py_tp_getset, t_PythonParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParser, t_PythonParser, PythonParser);

      void t_PythonParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParser), &PY_TYPE_DEF(PythonParser), module, "PythonParser", 1);
      }

      void t_PythonParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParser), "class_", make_descriptor(PythonParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParser), "wrapfn_", make_descriptor(t_PythonParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParser), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParser::initializeClass);
        JNINativeMethod methods[] = {
          { "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;", (void *) t_PythonParser_parse0 },
          { "pythonDecRef", "()V", (void *) t_PythonParser_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParser::initializeClass, 1)))
          return NULL;
        return t_PythonParser::wrap_Object(PythonParser(((t_PythonParser *) arg)->object.this$));
      }
      static PyObject *t_PythonParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParser_init_(t_PythonParser *self, PyObject *args, PyObject *kwds)
      {
        PythonParser object((jobject) NULL);

        INT_CALL(object = PythonParser());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParser_finalize(t_PythonParser *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParser_pythonExtension(t_PythonParser *self, PyObject *args)
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

      static jobject JNICALL t_PythonParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
        PyObject *o1 = env->fromJString((jstring) a1, 0);
        PyObject *result = PyObject_CallMethod(obj, "parse", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("parse", result);
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

      static void JNICALL t_PythonParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonParser_get__self(t_PythonParser *self, void *data)
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
#include "org/orekit/orbits/PythonLibrationOrbit.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/orbits/CR3BPDifferentialCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PythonLibrationOrbit::class$ = NULL;
      jmethodID *PythonLibrationOrbit::mids$ = NULL;
      bool PythonLibrationOrbit::live$ = false;

      jclass PythonLibrationOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PythonLibrationOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2ace0c1a76c4c810] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_6705c201ee6823b5] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLibrationOrbit::PythonLibrationOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_2ace0c1a76c4c810, a0.this$, a1.this$, a2)) {}

      void PythonLibrationOrbit::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonLibrationOrbit::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonLibrationOrbit::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_PythonLibrationOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLibrationOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLibrationOrbit_init_(t_PythonLibrationOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLibrationOrbit_finalize(t_PythonLibrationOrbit *self);
      static PyObject *t_PythonLibrationOrbit_pythonExtension(t_PythonLibrationOrbit *self, PyObject *args);
      static jobject JNICALL t_PythonLibrationOrbit_applyCorrectionOnPV0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonLibrationOrbit_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonLibrationOrbit_get__self(t_PythonLibrationOrbit *self, void *data);
      static PyGetSetDef t_PythonLibrationOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLibrationOrbit, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLibrationOrbit__methods_[] = {
        DECLARE_METHOD(t_PythonLibrationOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLibrationOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLibrationOrbit, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLibrationOrbit, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLibrationOrbit)[] = {
        { Py_tp_methods, t_PythonLibrationOrbit__methods_ },
        { Py_tp_init, (void *) t_PythonLibrationOrbit_init_ },
        { Py_tp_getset, t_PythonLibrationOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLibrationOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(PythonLibrationOrbit, t_PythonLibrationOrbit, PythonLibrationOrbit);

      void t_PythonLibrationOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLibrationOrbit), &PY_TYPE_DEF(PythonLibrationOrbit), module, "PythonLibrationOrbit", 1);
      }

      void t_PythonLibrationOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "class_", make_descriptor(PythonLibrationOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "wrapfn_", make_descriptor(t_PythonLibrationOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLibrationOrbit::initializeClass);
        JNINativeMethod methods[] = {
          { "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;", (void *) t_PythonLibrationOrbit_applyCorrectionOnPV0 },
          { "pythonDecRef", "()V", (void *) t_PythonLibrationOrbit_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonLibrationOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLibrationOrbit::initializeClass, 1)))
          return NULL;
        return t_PythonLibrationOrbit::wrap_Object(PythonLibrationOrbit(((t_PythonLibrationOrbit *) arg)->object.this$));
      }
      static PyObject *t_PythonLibrationOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLibrationOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLibrationOrbit_init_(t_PythonLibrationOrbit *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
        jdouble a2;
        PythonLibrationOrbit object((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PythonLibrationOrbit(a0, a1, a2));
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

      static PyObject *t_PythonLibrationOrbit_finalize(t_PythonLibrationOrbit *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLibrationOrbit_pythonExtension(t_PythonLibrationOrbit *self, PyObject *args)
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

      static jobject JNICALL t_PythonLibrationOrbit_applyCorrectionOnPV0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::orbits::t_CR3BPDifferentialCorrection::wrap_Object(::org::orekit::orbits::CR3BPDifferentialCorrection(a0));
        PyObject *result = PyObject_CallMethod(obj, "applyCorrectionOnPV", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &value))
        {
          throwTypeError("applyCorrectionOnPV", result);
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

      static void JNICALL t_PythonLibrationOrbit_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonLibrationOrbit_get__self(t_PythonLibrationOrbit *self, void *data)
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
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {

          ::java::lang::Class *ContextBinding::class$ = NULL;
          jmethodID *ContextBinding::mids$ = NULL;
          bool ContextBinding::live$ = false;

          jclass ContextBinding::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/ContextBinding");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getClockCount_9981f74b2d109da6] = env->getMethodID(cls, "getClockCount", "()D");
              mids$[mid_getClockRate_9981f74b2d109da6] = env->getMethodID(cls, "getClockRate", "()D");
              mids$[mid_getConventions_635853a14837ea6f] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_66ee964ea58dd871] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getParsedUnitsBehavior_2cdcf2c78bfe02b7] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_getReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeSystem_d72479bc3d5515c9] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_isSimpleEOP_eee3de00fe971136] = env->getMethodID(cls, "isSimpleEOP", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble ContextBinding::getClockCount() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockCount_9981f74b2d109da6]);
          }

          jdouble ContextBinding::getClockRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRate_9981f74b2d109da6]);
          }

          ::org::orekit::utils::IERSConventions ContextBinding::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_635853a14837ea6f]));
          }

          ::org::orekit::data::DataContext ContextBinding::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_66ee964ea58dd871]));
          }

          ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior ContextBinding::getParsedUnitsBehavior() const
          {
            return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_2cdcf2c78bfe02b7]));
          }

          ::org::orekit::time::AbsoluteDate ContextBinding::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_80e11148db499dda]));
          }

          ::org::orekit::files::ccsds::definitions::TimeSystem ContextBinding::getTimeSystem() const
          {
            return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_d72479bc3d5515c9]));
          }

          jboolean ContextBinding::isSimpleEOP() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_eee3de00fe971136]);
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
          static PyObject *t_ContextBinding_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContextBinding_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContextBinding_getClockCount(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getClockRate(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getConventions(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getDataContext(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getParsedUnitsBehavior(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getReferenceDate(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getTimeSystem(t_ContextBinding *self);
          static PyObject *t_ContextBinding_isSimpleEOP(t_ContextBinding *self);
          static PyObject *t_ContextBinding_get__clockCount(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__clockRate(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__conventions(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__dataContext(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__parsedUnitsBehavior(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__referenceDate(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__simpleEOP(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__timeSystem(t_ContextBinding *self, void *data);
          static PyGetSetDef t_ContextBinding__fields_[] = {
            DECLARE_GET_FIELD(t_ContextBinding, clockCount),
            DECLARE_GET_FIELD(t_ContextBinding, clockRate),
            DECLARE_GET_FIELD(t_ContextBinding, conventions),
            DECLARE_GET_FIELD(t_ContextBinding, dataContext),
            DECLARE_GET_FIELD(t_ContextBinding, parsedUnitsBehavior),
            DECLARE_GET_FIELD(t_ContextBinding, referenceDate),
            DECLARE_GET_FIELD(t_ContextBinding, simpleEOP),
            DECLARE_GET_FIELD(t_ContextBinding, timeSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ContextBinding__methods_[] = {
            DECLARE_METHOD(t_ContextBinding, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContextBinding, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContextBinding, getClockCount, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getClockRate, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getParsedUnitsBehavior, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, isSimpleEOP, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContextBinding)[] = {
            { Py_tp_methods, t_ContextBinding__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ContextBinding__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContextBinding)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ContextBinding, t_ContextBinding, ContextBinding);

          void t_ContextBinding::install(PyObject *module)
          {
            installType(&PY_TYPE(ContextBinding), &PY_TYPE_DEF(ContextBinding), module, "ContextBinding", 0);
          }

          void t_ContextBinding::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "class_", make_descriptor(ContextBinding::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "wrapfn_", make_descriptor(t_ContextBinding::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContextBinding_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContextBinding::initializeClass, 1)))
              return NULL;
            return t_ContextBinding::wrap_Object(ContextBinding(((t_ContextBinding *) arg)->object.this$));
          }
          static PyObject *t_ContextBinding_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContextBinding::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ContextBinding_getClockCount(t_ContextBinding *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockCount());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ContextBinding_getClockRate(t_ContextBinding *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ContextBinding_getConventions(t_ContextBinding *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getDataContext(t_ContextBinding *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getParsedUnitsBehavior(t_ContextBinding *self)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
            OBJ_CALL(result = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getReferenceDate(t_ContextBinding *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getTimeSystem(t_ContextBinding *self)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_isSimpleEOP(t_ContextBinding *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isSimpleEOP());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ContextBinding_get__clockCount(t_ContextBinding *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockCount());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ContextBinding_get__clockRate(t_ContextBinding *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ContextBinding_get__conventions(t_ContextBinding *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__dataContext(t_ContextBinding *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__parsedUnitsBehavior(t_ContextBinding *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
            OBJ_CALL(value = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__referenceDate(t_ContextBinding *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__simpleEOP(t_ContextBinding *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isSimpleEOP());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_ContextBinding_get__timeSystem(t_ContextBinding *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/LocalizedOptimFormats.h"
#include "org/hipparchus/optim/LocalizedOptimFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *LocalizedOptimFormats::class$ = NULL;
      jmethodID *LocalizedOptimFormats::mids$ = NULL;
      bool LocalizedOptimFormats::live$ = false;
      LocalizedOptimFormats *LocalizedOptimFormats::EQUAL_VERTICES_IN_SIMPLEX = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::INVALID_IMPLEMENTATION = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::NO_FEASIBLE_SOLUTION = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::SIMPLEX_NEED_ONE_POINT = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TOO_SMALL_COST_RELATIVE_TOLERANCE = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TOO_SMALL_ORTHOGONALITY_TOLERANCE = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::TRUST_REGION_STEP_FAILED = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::UNABLE_TO_SOLVE_SINGULAR_PROBLEM = NULL;
      LocalizedOptimFormats *LocalizedOptimFormats::UNBOUNDED_SOLUTION = NULL;

      jclass LocalizedOptimFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/LocalizedOptimFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_5969ecf7afac3dba] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_d2c8eb4129821f0e] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_3a257bc137cf29fb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/LocalizedOptimFormats;");
          mids$[mid_values_96ba5a366934f742] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/LocalizedOptimFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EQUAL_VERTICES_IN_SIMPLEX = new LocalizedOptimFormats(env->getStaticObjectField(cls, "EQUAL_VERTICES_IN_SIMPLEX", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          INVALID_IMPLEMENTATION = new LocalizedOptimFormats(env->getStaticObjectField(cls, "INVALID_IMPLEMENTATION", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          NO_FEASIBLE_SOLUTION = new LocalizedOptimFormats(env->getStaticObjectField(cls, "NO_FEASIBLE_SOLUTION", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          SIMPLEX_NEED_ONE_POINT = new LocalizedOptimFormats(env->getStaticObjectField(cls, "SIMPLEX_NEED_ONE_POINT", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TOO_SMALL_COST_RELATIVE_TOLERANCE = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TOO_SMALL_COST_RELATIVE_TOLERANCE", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TOO_SMALL_ORTHOGONALITY_TOLERANCE = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TOO_SMALL_ORTHOGONALITY_TOLERANCE", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          TRUST_REGION_STEP_FAILED = new LocalizedOptimFormats(env->getStaticObjectField(cls, "TRUST_REGION_STEP_FAILED", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN = new LocalizedOptimFormats(env->getStaticObjectField(cls, "UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          UNABLE_TO_SOLVE_SINGULAR_PROBLEM = new LocalizedOptimFormats(env->getStaticObjectField(cls, "UNABLE_TO_SOLVE_SINGULAR_PROBLEM", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          UNBOUNDED_SOLUTION = new LocalizedOptimFormats(env->getStaticObjectField(cls, "UNBOUNDED_SOLUTION", "Lorg/hipparchus/optim/LocalizedOptimFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedOptimFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_5969ecf7afac3dba], a0.this$));
      }

      ::java::lang::String LocalizedOptimFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_d2c8eb4129821f0e]));
      }

      LocalizedOptimFormats LocalizedOptimFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedOptimFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3a257bc137cf29fb], a0.this$));
      }

      JArray< LocalizedOptimFormats > LocalizedOptimFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedOptimFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_96ba5a366934f742]));
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
      static PyObject *t_LocalizedOptimFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedOptimFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedOptimFormats_of_(t_LocalizedOptimFormats *self, PyObject *args);
      static PyObject *t_LocalizedOptimFormats_getLocalizedString(t_LocalizedOptimFormats *self, PyObject *arg);
      static PyObject *t_LocalizedOptimFormats_getSourceString(t_LocalizedOptimFormats *self);
      static PyObject *t_LocalizedOptimFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedOptimFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedOptimFormats_get__sourceString(t_LocalizedOptimFormats *self, void *data);
      static PyObject *t_LocalizedOptimFormats_get__parameters_(t_LocalizedOptimFormats *self, void *data);
      static PyGetSetDef t_LocalizedOptimFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedOptimFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedOptimFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedOptimFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedOptimFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedOptimFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedOptimFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedOptimFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedOptimFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedOptimFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedOptimFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedOptimFormats)[] = {
        { Py_tp_methods, t_LocalizedOptimFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedOptimFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedOptimFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedOptimFormats, t_LocalizedOptimFormats, LocalizedOptimFormats);
      PyObject *t_LocalizedOptimFormats::wrap_Object(const LocalizedOptimFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedOptimFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedOptimFormats *self = (t_LocalizedOptimFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedOptimFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedOptimFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedOptimFormats *self = (t_LocalizedOptimFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedOptimFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedOptimFormats), &PY_TYPE_DEF(LocalizedOptimFormats), module, "LocalizedOptimFormats", 0);
      }

      void t_LocalizedOptimFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "class_", make_descriptor(LocalizedOptimFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "wrapfn_", make_descriptor(t_LocalizedOptimFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedOptimFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "EQUAL_VERTICES_IN_SIMPLEX", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::EQUAL_VERTICES_IN_SIMPLEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "INVALID_IMPLEMENTATION", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::INVALID_IMPLEMENTATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "NO_FEASIBLE_SOLUTION", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::NO_FEASIBLE_SOLUTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "SIMPLEX_NEED_ONE_POINT", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::SIMPLEX_NEED_ONE_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TOO_SMALL_COST_RELATIVE_TOLERANCE", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TOO_SMALL_COST_RELATIVE_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TOO_SMALL_ORTHOGONALITY_TOLERANCE", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TOO_SMALL_ORTHOGONALITY_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TOO_SMALL_PARAMETERS_RELATIVE_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "TRUST_REGION_STEP_FAILED", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::TRUST_REGION_STEP_FAILED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::UNABLE_TO_PERFORM_QR_DECOMPOSITION_ON_JACOBIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "UNABLE_TO_SOLVE_SINGULAR_PROBLEM", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::UNABLE_TO_SOLVE_SINGULAR_PROBLEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedOptimFormats), "UNBOUNDED_SOLUTION", make_descriptor(t_LocalizedOptimFormats::wrap_Object(*LocalizedOptimFormats::UNBOUNDED_SOLUTION)));
      }

      static PyObject *t_LocalizedOptimFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedOptimFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedOptimFormats::wrap_Object(LocalizedOptimFormats(((t_LocalizedOptimFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedOptimFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedOptimFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedOptimFormats_of_(t_LocalizedOptimFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedOptimFormats_getLocalizedString(t_LocalizedOptimFormats *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_LocalizedOptimFormats_getSourceString(t_LocalizedOptimFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedOptimFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedOptimFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::optim::LocalizedOptimFormats::valueOf(a0));
          return t_LocalizedOptimFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedOptimFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedOptimFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::LocalizedOptimFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedOptimFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedOptimFormats_get__parameters_(t_LocalizedOptimFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedOptimFormats_get__sourceString(t_LocalizedOptimFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldAdaptableInterval.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldAdaptableInterval::class$ = NULL;
        jmethodID *PythonFieldAdaptableInterval::mids$ = NULL;
        bool PythonFieldAdaptableInterval::live$ = false;

        jclass PythonFieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_currentInterval_e7bbba9ca7087a77] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAdaptableInterval::PythonFieldAdaptableInterval() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonFieldAdaptableInterval::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldAdaptableInterval::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldAdaptableInterval::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonFieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdaptableInterval_of_(t_PythonFieldAdaptableInterval *self, PyObject *args);
        static int t_PythonFieldAdaptableInterval_init_(t_PythonFieldAdaptableInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAdaptableInterval_finalize(t_PythonFieldAdaptableInterval *self);
        static PyObject *t_PythonFieldAdaptableInterval_pythonExtension(t_PythonFieldAdaptableInterval *self, PyObject *args);
        static jdouble JNICALL t_PythonFieldAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAdaptableInterval_get__self(t_PythonFieldAdaptableInterval *self, void *data);
        static PyObject *t_PythonFieldAdaptableInterval_get__parameters_(t_PythonFieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_PythonFieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAdaptableInterval, self),
          DECLARE_GET_FIELD(t_PythonFieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdaptableInterval)[] = {
          { Py_tp_methods, t_PythonFieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAdaptableInterval_init_ },
          { Py_tp_getset, t_PythonFieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldAdaptableInterval, t_PythonFieldAdaptableInterval, PythonFieldAdaptableInterval);
        PyObject *t_PythonFieldAdaptableInterval::wrap_Object(const PythonFieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdaptableInterval *self = (t_PythonFieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdaptableInterval *self = (t_PythonFieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAdaptableInterval), &PY_TYPE_DEF(PythonFieldAdaptableInterval), module, "PythonFieldAdaptableInterval", 1);
        }

        void t_PythonFieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "class_", make_descriptor(PythonFieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "wrapfn_", make_descriptor(t_PythonFieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAdaptableInterval::initializeClass);
          JNINativeMethod methods[] = {
            { "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D", (void *) t_PythonFieldAdaptableInterval_currentInterval0 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAdaptableInterval_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonFieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAdaptableInterval::wrap_Object(PythonFieldAdaptableInterval(((t_PythonFieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAdaptableInterval_of_(t_PythonFieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAdaptableInterval_init_(t_PythonFieldAdaptableInterval *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldAdaptableInterval object((jobject) NULL);

          INT_CALL(object = PythonFieldAdaptableInterval());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAdaptableInterval_finalize(t_PythonFieldAdaptableInterval *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAdaptableInterval_pythonExtension(t_PythonFieldAdaptableInterval *self, PyObject *args)
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

        static jdouble JNICALL t_PythonFieldAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "currentInterval", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("currentInterval", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonFieldAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAdaptableInterval_get__self(t_PythonFieldAdaptableInterval *self, void *data)
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
        static PyObject *t_PythonFieldAdaptableInterval_get__parameters_(t_PythonFieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCombinedCorrectionData::class$ = NULL;
              jmethodID *RtcmCombinedCorrectionData::mids$ = NULL;
              bool RtcmCombinedCorrectionData::live$ = false;

              jclass RtcmCombinedCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_9a94dcb2534bfcee] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_getGnssIod_d6ab429752e7c267] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_a878e7837a73c516] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setClockCorrection_e6ed13e2bb347f8f] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");
                  mids$[mid_setGnssIod_8fd427ab23829bf5] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_cdebebf3a62a7ec1] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCombinedCorrectionData::RtcmCombinedCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection RtcmCombinedCorrectionData::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_9a94dcb2534bfcee]));
              }

              jint RtcmCombinedCorrectionData::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_d6ab429752e7c267]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection RtcmCombinedCorrectionData::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_a878e7837a73c516]));
              }

              void RtcmCombinedCorrectionData::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_e6ed13e2bb347f8f], a0.this$);
              }

              void RtcmCombinedCorrectionData::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_8fd427ab23829bf5], a0);
              }

              void RtcmCombinedCorrectionData::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_cdebebf3a62a7ec1], a0.this$);
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
            namespace correction {
              static PyObject *t_RtcmCombinedCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCombinedCorrectionData_init_(t_RtcmCombinedCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCombinedCorrectionData_getClockCorrection(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_getGnssIod(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_getOrbitCorrection(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_setClockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_setGnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_setOrbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_get__clockCorrection(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__clockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCombinedCorrectionData_get__gnssIod(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__gnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCombinedCorrectionData_get__orbitCorrection(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__orbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCombinedCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, clockCorrection),
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, gnssIod),
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCombinedCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setClockCorrection, METH_O),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setGnssIod, METH_O),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCombinedCorrectionData)[] = {
                { Py_tp_methods, t_RtcmCombinedCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmCombinedCorrectionData_init_ },
                { Py_tp_getset, t_RtcmCombinedCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCombinedCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmCombinedCorrectionData, t_RtcmCombinedCorrectionData, RtcmCombinedCorrectionData);

              void t_RtcmCombinedCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCombinedCorrectionData), &PY_TYPE_DEF(RtcmCombinedCorrectionData), module, "RtcmCombinedCorrectionData", 0);
              }

              void t_RtcmCombinedCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "class_", make_descriptor(RtcmCombinedCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "wrapfn_", make_descriptor(t_RtcmCombinedCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCombinedCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCombinedCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmCombinedCorrectionData::wrap_Object(RtcmCombinedCorrectionData(((t_RtcmCombinedCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmCombinedCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCombinedCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCombinedCorrectionData_init_(t_RtcmCombinedCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmCombinedCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmCombinedCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCombinedCorrectionData_getClockCorrection(t_RtcmCombinedCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_getGnssIod(t_RtcmCombinedCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_getOrbitCorrection(t_RtcmCombinedCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_setClockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmCombinedCorrectionData_setGnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_RtcmCombinedCorrectionData_setOrbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmCombinedCorrectionData_get__clockCorrection(t_RtcmCombinedCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_RtcmCombinedCorrectionData_set__clockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
                return -1;
              }

              static PyObject *t_RtcmCombinedCorrectionData_get__gnssIod(t_RtcmCombinedCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCombinedCorrectionData_set__gnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_RtcmCombinedCorrectionData_get__orbitCorrection(t_RtcmCombinedCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_RtcmCombinedCorrectionData_set__orbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
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
#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AbstractFieldODEDetector::class$ = NULL;
        jmethodID *AbstractFieldODEDetector::mids$ = NULL;
        bool AbstractFieldODEDetector::live$ = false;
        jdouble AbstractFieldODEDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractFieldODEDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractFieldODEDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractFieldODEDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AbstractFieldODEDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_455ff24598d85771] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_dbadd838da9b41eb] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEEventHandler;");
            mids$[mid_getMaxCheckInterval_e0c20def93760aa5] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_015c35a97d20bc51] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;");
            mids$[mid_init_2a077928ff78cfcb] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_isForward_eee3de00fe971136] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_f644ffa57f9fa0cf] = env->getMethodID(cls, "withHandler", "(Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxCheck_7d72de8d8fb436b2] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxCheck_e92acb2a386c9c5f] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxIter_74542175c9ca7f13] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withSolver_bee7daa46becd0d1] = env->getMethodID(cls, "withSolver", "(Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withThreshold_7d72de8d8fb436b2] = env->getMethodID(cls, "withThreshold", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_create_f366c9a6698449a1] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement AbstractFieldODEDetector::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_455ff24598d85771], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventHandler AbstractFieldODEDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_dbadd838da9b41eb]));
        }

        ::org::hipparchus::ode::events::FieldAdaptableInterval AbstractFieldODEDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_e0c20def93760aa5]));
        }

        jint AbstractFieldODEDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_d6ab429752e7c267]);
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver AbstractFieldODEDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_015c35a97d20bc51]));
        }

        void AbstractFieldODEDetector::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2a077928ff78cfcb], a0.this$, a1.this$);
        }

        jboolean AbstractFieldODEDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_eee3de00fe971136]);
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withHandler(const ::org::hipparchus::ode::events::FieldODEEventHandler & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withHandler_f644ffa57f9fa0cf], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxCheck(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_7d72de8d8fb436b2], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxCheck(const ::org::hipparchus::ode::events::FieldAdaptableInterval & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_e92acb2a386c9c5f], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxIter(jint a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_74542175c9ca7f13], a0));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withSolver(const ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withSolver_bee7daa46becd0d1], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withThreshold(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_7d72de8d8fb436b2], a0.this$));
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
        static PyObject *t_AbstractFieldODEDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_of_(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_g(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_getHandler(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getMaxCheckInterval(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getMaxIterationCount(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getSolver(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_init(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_isForward(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_withHandler(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withMaxCheck(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_withMaxIter(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withSolver(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withThreshold(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_get__forward(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__handler(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__maxCheckInterval(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__maxIterationCount(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__solver(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__parameters_(t_AbstractFieldODEDetector *self, void *data);
        static PyGetSetDef t_AbstractFieldODEDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, forward),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, handler),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, solver),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldODEDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldODEDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withSolver, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldODEDetector)[] = {
          { Py_tp_methods, t_AbstractFieldODEDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldODEDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldODEDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldODEDetector, t_AbstractFieldODEDetector, AbstractFieldODEDetector);
        PyObject *t_AbstractFieldODEDetector::wrap_Object(const AbstractFieldODEDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractFieldODEDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEDetector *self = (t_AbstractFieldODEDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractFieldODEDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractFieldODEDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEDetector *self = (t_AbstractFieldODEDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractFieldODEDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldODEDetector), &PY_TYPE_DEF(AbstractFieldODEDetector), module, "AbstractFieldODEDetector", 0);
        }

        void t_AbstractFieldODEDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "class_", make_descriptor(AbstractFieldODEDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "wrapfn_", make_descriptor(t_AbstractFieldODEDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractFieldODEDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractFieldODEDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractFieldODEDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractFieldODEDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractFieldODEDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldODEDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldODEDetector::wrap_Object(AbstractFieldODEDetector(((t_AbstractFieldODEDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldODEDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldODEDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldODEDetector_of_(t_AbstractFieldODEDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractFieldODEDetector_g(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_getHandler(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_getMaxCheckInterval(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_getMaxIterationCount(t_AbstractFieldODEDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractFieldODEDetector_getSolver(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_init(t_AbstractFieldODEDetector *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_isForward(t_AbstractFieldODEDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEDetector_withHandler(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventHandler::parameters_))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withMaxCheck(t_AbstractFieldODEDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              AbstractFieldODEDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::ode::events::FieldAdaptableInterval a0((jobject) NULL);
              PyTypeObject **p0;
              AbstractFieldODEDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldAdaptableInterval::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldAdaptableInterval::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withMaxIter(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withSolver(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::parameters_))
          {
            OBJ_CALL(result = self->object.withSolver(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSolver", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withThreshold(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractFieldODEDetector_get__parameters_(t_AbstractFieldODEDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractFieldODEDetector_get__forward(t_AbstractFieldODEDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__handler(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__maxCheckInterval(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__maxIterationCount(t_AbstractFieldODEDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__solver(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *EncounterLOF::class$ = NULL;
        jmethodID *EncounterLOF::mids$ = NULL;
        bool EncounterLOF::live$ = false;

        jclass EncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/EncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeProjectionMatrix_b2eebabce70526d8] = env->getMethodID(cls, "computeProjectionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeProjectionMatrix_7cd40d804f1ccfb8] = env->getMethodID(cls, "computeProjectionMatrix", "(Lorg/hipparchus/Field;)Lorg/hipparchus/linear/FieldMatrix;");
            mids$[mid_getAxisNormalToCollisionPlane_032312bdeb3f2f93] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_10f9413c61ea347a] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFieldOther_aab2b71a889b2b8a] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getOther_78e01095d7eced90] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_isQuasiInertial_eee3de00fe971136] = env->getMethodID(cls, "isQuasiInertial", "()Z");
            mids$[mid_projectOntoCollisionPlane_f59945942a1427c6] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
            mids$[mid_projectOntoCollisionPlane_2e7d3e3e3ac549f4] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
            mids$[mid_projectOntoCollisionPlane_b180f987191970ad] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
            mids$[mid_projectOntoCollisionPlane_5a8a8185eb309db7] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_rotationFromInertial_cc3fb55bcf18d696] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_7972874aa60c5cbb] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_b6feed19a568aaff] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_5554d692f1f7262c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_rotationFromInertial_24d473279eeb35d9] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_rotationFromInertial_0c632cd592d334d1] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix EncounterLOF::computeProjectionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectionMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::FieldMatrix EncounterLOF::computeProjectionMatrix(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectionMatrix_7cd40d804f1ccfb8], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EncounterLOF::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_032312bdeb3f2f93]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D EncounterLOF::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_10f9413c61ea347a], a0.this$));
        }

        ::org::orekit::utils::FieldPVCoordinates EncounterLOF::getFieldOther(const ::org::hipparchus::Field & a0) const
        {
          return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getFieldOther_aab2b71a889b2b8a], a0.this$));
        }

        ::org::orekit::utils::PVCoordinates EncounterLOF::getOther() const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getOther_78e01095d7eced90]));
        }

        jboolean EncounterLOF::isQuasiInertial() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_eee3de00fe971136]);
        }

        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_f59945942a1427c6], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::twod::Vector2D EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_2e7d3e3e3ac549f4], a0.this$));
        }

        ::org::hipparchus::linear::FieldMatrix EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::linear::FieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_b180f987191970ad], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_5a8a8185eb309db7], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_cc3fb55bcf18d696], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_7972874aa60c5cbb], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_b6feed19a568aaff], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_5554d692f1f7262c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_24d473279eeb35d9], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_0c632cd592d334d1], a0.this$, a1.this$, a2.this$));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_EncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOF_computeProjectionMatrix(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_getAxisNormalToCollisionPlane(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_getFieldOther(t_EncounterLOF *self, PyObject *arg);
        static PyObject *t_EncounterLOF_getOther(t_EncounterLOF *self);
        static PyObject *t_EncounterLOF_isQuasiInertial(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_projectOntoCollisionPlane(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_rotationFromInertial(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_get__axisNormalToCollisionPlane(t_EncounterLOF *self, void *data);
        static PyObject *t_EncounterLOF_get__other(t_EncounterLOF *self, void *data);
        static PyObject *t_EncounterLOF_get__quasiInertial(t_EncounterLOF *self, void *data);
        static PyGetSetDef t_EncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_EncounterLOF, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_EncounterLOF, other),
          DECLARE_GET_FIELD(t_EncounterLOF, quasiInertial),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EncounterLOF__methods_[] = {
          DECLARE_METHOD(t_EncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOF, computeProjectionMatrix, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, getFieldOther, METH_O),
          DECLARE_METHOD(t_EncounterLOF, getOther, METH_NOARGS),
          DECLARE_METHOD(t_EncounterLOF, isQuasiInertial, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, projectOntoCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EncounterLOF)[] = {
          { Py_tp_methods, t_EncounterLOF__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::LOF),
          NULL
        };

        DEFINE_TYPE(EncounterLOF, t_EncounterLOF, EncounterLOF);

        void t_EncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(EncounterLOF), &PY_TYPE_DEF(EncounterLOF), module, "EncounterLOF", 0);
        }

        void t_EncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOF), "class_", make_descriptor(EncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOF), "wrapfn_", make_descriptor(t_EncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EncounterLOF::initializeClass, 1)))
            return NULL;
          return t_EncounterLOF::wrap_Object(EncounterLOF(((t_EncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_EncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EncounterLOF_computeProjectionMatrix(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.computeProjectionMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.computeProjectionMatrix(a0));
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeProjectionMatrix", args);
          return NULL;
        }

        static PyObject *t_EncounterLOF_getAxisNormalToCollisionPlane(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getAxisNormalToCollisionPlane", args);
          return NULL;
        }

        static PyObject *t_EncounterLOF_getFieldOther(t_EncounterLOF *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldOther(a0));
            return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldOther", arg);
          return NULL;
        }

        static PyObject *t_EncounterLOF_getOther(t_EncounterLOF *self)
        {
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        static PyObject *t_EncounterLOF_isQuasiInertial(t_EncounterLOF *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isQuasiInertial());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EncounterLOF), (PyObject *) self, "isQuasiInertial", args, 2);
        }

        static PyObject *t_EncounterLOF_projectOntoCollisionPlane(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "projectOntoCollisionPlane", args);
          return NULL;
        }

        static PyObject *t_EncounterLOF_rotationFromInertial(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(EncounterLOF), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_EncounterLOF_get__axisNormalToCollisionPlane(t_EncounterLOF *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EncounterLOF_get__other(t_EncounterLOF *self, void *data)
        {
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
        }

        static PyObject *t_EncounterLOF_get__quasiInertial(t_EncounterLOF *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isQuasiInertial());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/BeidouMeo.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouMeo::class$ = NULL;
        jmethodID *BeidouMeo::mids$ = NULL;
        bool BeidouMeo::live$ = false;

        jclass BeidouMeo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouMeo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1f1fb4db65d1e285] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_3bb932fc0c863341] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_7e83c4f910737b79] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouMeo::BeidouMeo(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_1f1fb4db65d1e285, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
      namespace attitude {
        static PyObject *t_BeidouMeo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouMeo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouMeo_init_(t_BeidouMeo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouMeo__methods_[] = {
          DECLARE_METHOD(t_BeidouMeo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouMeo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouMeo)[] = {
          { Py_tp_methods, t_BeidouMeo__methods_ },
          { Py_tp_init, (void *) t_BeidouMeo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouMeo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(BeidouMeo, t_BeidouMeo, BeidouMeo);

        void t_BeidouMeo::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouMeo), &PY_TYPE_DEF(BeidouMeo), module, "BeidouMeo", 0);
        }

        void t_BeidouMeo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouMeo), "class_", make_descriptor(BeidouMeo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouMeo), "wrapfn_", make_descriptor(t_BeidouMeo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouMeo), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouMeo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouMeo::initializeClass, 1)))
            return NULL;
          return t_BeidouMeo::wrap_Object(BeidouMeo(((t_BeidouMeo *) arg)->object.this$));
        }
        static PyObject *t_BeidouMeo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouMeo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouMeo_init_(t_BeidouMeo *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouMeo object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouMeo(a0, a1, a2, a3));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/PivotSelectionRule.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/linear/PivotSelectionRule.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *PivotSelectionRule::class$ = NULL;
        jmethodID *PivotSelectionRule::mids$ = NULL;
        bool PivotSelectionRule::live$ = false;
        PivotSelectionRule *PivotSelectionRule::BLAND = NULL;
        PivotSelectionRule *PivotSelectionRule::DANTZIG = NULL;

        jclass PivotSelectionRule::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/PivotSelectionRule");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_7ee13544a71c7b55] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/linear/PivotSelectionRule;");
            mids$[mid_values_bcdc02e9d3f3499c] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/linear/PivotSelectionRule;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BLAND = new PivotSelectionRule(env->getStaticObjectField(cls, "BLAND", "Lorg/hipparchus/optim/linear/PivotSelectionRule;"));
            DANTZIG = new PivotSelectionRule(env->getStaticObjectField(cls, "DANTZIG", "Lorg/hipparchus/optim/linear/PivotSelectionRule;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PivotSelectionRule PivotSelectionRule::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return PivotSelectionRule(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7ee13544a71c7b55], a0.this$));
        }

        JArray< PivotSelectionRule > PivotSelectionRule::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< PivotSelectionRule >(env->callStaticObjectMethod(cls, mids$[mid_values_bcdc02e9d3f3499c]));
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
      namespace linear {
        static PyObject *t_PivotSelectionRule_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PivotSelectionRule_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PivotSelectionRule_of_(t_PivotSelectionRule *self, PyObject *args);
        static PyObject *t_PivotSelectionRule_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_PivotSelectionRule_values(PyTypeObject *type);
        static PyObject *t_PivotSelectionRule_get__parameters_(t_PivotSelectionRule *self, void *data);
        static PyGetSetDef t_PivotSelectionRule__fields_[] = {
          DECLARE_GET_FIELD(t_PivotSelectionRule, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PivotSelectionRule__methods_[] = {
          DECLARE_METHOD(t_PivotSelectionRule, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, of_, METH_VARARGS),
          DECLARE_METHOD(t_PivotSelectionRule, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PivotSelectionRule)[] = {
          { Py_tp_methods, t_PivotSelectionRule__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PivotSelectionRule__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PivotSelectionRule)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(PivotSelectionRule, t_PivotSelectionRule, PivotSelectionRule);
        PyObject *t_PivotSelectionRule::wrap_Object(const PivotSelectionRule& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PivotSelectionRule::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PivotSelectionRule *self = (t_PivotSelectionRule *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PivotSelectionRule::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PivotSelectionRule::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PivotSelectionRule *self = (t_PivotSelectionRule *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PivotSelectionRule::install(PyObject *module)
        {
          installType(&PY_TYPE(PivotSelectionRule), &PY_TYPE_DEF(PivotSelectionRule), module, "PivotSelectionRule", 0);
        }

        void t_PivotSelectionRule::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "class_", make_descriptor(PivotSelectionRule::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "wrapfn_", make_descriptor(t_PivotSelectionRule::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "boxfn_", make_descriptor(boxObject));
          env->getClass(PivotSelectionRule::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "BLAND", make_descriptor(t_PivotSelectionRule::wrap_Object(*PivotSelectionRule::BLAND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "DANTZIG", make_descriptor(t_PivotSelectionRule::wrap_Object(*PivotSelectionRule::DANTZIG)));
        }

        static PyObject *t_PivotSelectionRule_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PivotSelectionRule::initializeClass, 1)))
            return NULL;
          return t_PivotSelectionRule::wrap_Object(PivotSelectionRule(((t_PivotSelectionRule *) arg)->object.this$));
        }
        static PyObject *t_PivotSelectionRule_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PivotSelectionRule::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PivotSelectionRule_of_(t_PivotSelectionRule *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_PivotSelectionRule_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          PivotSelectionRule result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::optim::linear::PivotSelectionRule::valueOf(a0));
            return t_PivotSelectionRule::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_PivotSelectionRule_values(PyTypeObject *type)
        {
          JArray< PivotSelectionRule > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::optim::linear::PivotSelectionRule::values());
          return JArray<jobject>(result.this$).wrap(t_PivotSelectionRule::wrap_jobject);
        }
        static PyObject *t_PivotSelectionRule_get__parameters_(t_PivotSelectionRule *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalParametersKey::class$ = NULL;
            jmethodID *AdditionalParametersKey::mids$ = NULL;
            bool AdditionalParametersKey::live$ = false;
            AdditionalParametersKey *AdditionalParametersKey::APOAPSIS_ALTITUDE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_INT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_ALONG_OEB_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_DRG = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_PC_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::AREA_SRP = NULL;
            AdditionalParametersKey *AdditionalParametersKey::CD_AREA_OVER_MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COMMENT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COV_CONFIDENCE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::COV_CONFIDENCE_METHOD = NULL;
            AdditionalParametersKey *AdditionalParametersKey::CR_AREA_OVER_MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::HBR = NULL;
            AdditionalParametersKey *AdditionalParametersKey::INCLINATION = NULL;
            AdditionalParametersKey *AdditionalParametersKey::MASS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_INT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_PARENT_FRAME = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_PARENT_FRAME_EPOCH = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q1 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q2 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_Q3 = NULL;
            AdditionalParametersKey *AdditionalParametersKey::OEB_QC = NULL;
            AdditionalParametersKey *AdditionalParametersKey::PERIAPSIS_ALTITUDE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::RCS_MIN = NULL;
            AdditionalParametersKey *AdditionalParametersKey::REFLECTANCE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::SEDR = NULL;
            AdditionalParametersKey *AdditionalParametersKey::THRUST_ACCELERATION = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_ABSOLUTE = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT_MAX = NULL;
            AdditionalParametersKey *AdditionalParametersKey::VM_APPARENT_MIN = NULL;

            jclass AdditionalParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_3e173daf36ae15af] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;)Z");
                mids$[mid_valueOf_64075d8e2d8f0b81] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;");
                mids$[mid_values_ae2a647cb9911c35] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                APOAPSIS_ALTITUDE = new AdditionalParametersKey(env->getStaticObjectField(cls, "APOAPSIS_ALTITUDE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_INT = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_INT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_ALONG_OEB_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_DRG = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_PC_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_PC_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                AREA_SRP = new AdditionalParametersKey(env->getStaticObjectField(cls, "AREA_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                CD_AREA_OVER_MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "CD_AREA_OVER_MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COMMENT = new AdditionalParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COV_CONFIDENCE = new AdditionalParametersKey(env->getStaticObjectField(cls, "COV_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                COV_CONFIDENCE_METHOD = new AdditionalParametersKey(env->getStaticObjectField(cls, "COV_CONFIDENCE_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                CR_AREA_OVER_MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "CR_AREA_OVER_MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                HBR = new AdditionalParametersKey(env->getStaticObjectField(cls, "HBR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                INCLINATION = new AdditionalParametersKey(env->getStaticObjectField(cls, "INCLINATION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                MASS = new AdditionalParametersKey(env->getStaticObjectField(cls, "MASS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_INT = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_INT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_PARENT_FRAME = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_PARENT_FRAME_EPOCH = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q1 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q1", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q2 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q2", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_Q3 = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_Q3", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                OEB_QC = new AdditionalParametersKey(env->getStaticObjectField(cls, "OEB_QC", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                PERIAPSIS_ALTITUDE = new AdditionalParametersKey(env->getStaticObjectField(cls, "PERIAPSIS_ALTITUDE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                RCS_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "RCS_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                REFLECTANCE = new AdditionalParametersKey(env->getStaticObjectField(cls, "REFLECTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                SEDR = new AdditionalParametersKey(env->getStaticObjectField(cls, "SEDR", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                THRUST_ACCELERATION = new AdditionalParametersKey(env->getStaticObjectField(cls, "THRUST_ACCELERATION", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_ABSOLUTE = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT_MAX = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                VM_APPARENT_MIN = new AdditionalParametersKey(env->getStaticObjectField(cls, "VM_APPARENT_MIN", "Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdditionalParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_3e173daf36ae15af], a0.this$, a1.this$, a2.this$);
            }

            AdditionalParametersKey AdditionalParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdditionalParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_64075d8e2d8f0b81], a0.this$));
            }

            JArray< AdditionalParametersKey > AdditionalParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdditionalParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_ae2a647cb9911c35]));
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
          namespace cdm {
            static PyObject *t_AdditionalParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersKey_of_(t_AdditionalParametersKey *self, PyObject *args);
            static PyObject *t_AdditionalParametersKey_process(t_AdditionalParametersKey *self, PyObject *args);
            static PyObject *t_AdditionalParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdditionalParametersKey_values(PyTypeObject *type);
            static PyObject *t_AdditionalParametersKey_get__parameters_(t_AdditionalParametersKey *self, void *data);
            static PyGetSetDef t_AdditionalParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdditionalParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalParametersKey__methods_[] = {
              DECLARE_METHOD(t_AdditionalParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdditionalParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParametersKey)[] = {
              { Py_tp_methods, t_AdditionalParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdditionalParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdditionalParametersKey, t_AdditionalParametersKey, AdditionalParametersKey);
            PyObject *t_AdditionalParametersKey::wrap_Object(const AdditionalParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalParametersKey *self = (t_AdditionalParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdditionalParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdditionalParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdditionalParametersKey *self = (t_AdditionalParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdditionalParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParametersKey), &PY_TYPE_DEF(AdditionalParametersKey), module, "AdditionalParametersKey", 0);
            }

            void t_AdditionalParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "class_", make_descriptor(AdditionalParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "wrapfn_", make_descriptor(t_AdditionalParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdditionalParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "APOAPSIS_ALTITUDE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::APOAPSIS_ALTITUDE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_INT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_INT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_ALONG_OEB_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_ALONG_OEB_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_DRG", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_PC_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_PC_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "AREA_SRP", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::AREA_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "CD_AREA_OVER_MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::CD_AREA_OVER_MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COMMENT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COV_CONFIDENCE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COV_CONFIDENCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "COV_CONFIDENCE_METHOD", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::COV_CONFIDENCE_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "CR_AREA_OVER_MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::CR_AREA_OVER_MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "HBR", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::HBR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "INCLINATION", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::INCLINATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "MASS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_INT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_INT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_PARENT_FRAME", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_PARENT_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_PARENT_FRAME_EPOCH", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_PARENT_FRAME_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q1", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q2", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_Q3", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_Q3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "OEB_QC", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::OEB_QC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "PERIAPSIS_ALTITUDE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::PERIAPSIS_ALTITUDE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "RCS_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::RCS_MIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "REFLECTANCE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::REFLECTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "SEDR", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::SEDR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "THRUST_ACCELERATION", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::THRUST_ACCELERATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_ABSOLUTE", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_ABSOLUTE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT_MAX", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersKey), "VM_APPARENT_MIN", make_descriptor(t_AdditionalParametersKey::wrap_Object(*AdditionalParametersKey::VM_APPARENT_MIN)));
            }

            static PyObject *t_AdditionalParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParametersKey::initializeClass, 1)))
                return NULL;
              return t_AdditionalParametersKey::wrap_Object(AdditionalParametersKey(((t_AdditionalParametersKey *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdditionalParametersKey_of_(t_AdditionalParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdditionalParametersKey_process(t_AdditionalParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdditionalParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdditionalParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalParametersKey::valueOf(a0));
                return t_AdditionalParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdditionalParametersKey_values(PyTypeObject *type)
            {
              JArray< AdditionalParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::AdditionalParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdditionalParametersKey::wrap_jobject);
            }
            static PyObject *t_AdditionalParametersKey_get__parameters_(t_AdditionalParametersKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpField$RoundingMode::class$ = NULL;
      jmethodID *DfpField$RoundingMode::mids$ = NULL;
      bool DfpField$RoundingMode::live$ = false;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_CEIL = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_DOWN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_FLOOR = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_DOWN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_EVEN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_ODD = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_UP = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_UP = NULL;

      jclass DfpField$RoundingMode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpField$RoundingMode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_c4b19bb3cef6712a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/dfp/DfpField$RoundingMode;");
          mids$[mid_values_d4f77f9240a38309] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/dfp/DfpField$RoundingMode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ROUND_CEIL = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_CEIL", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_DOWN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_DOWN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_FLOOR = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_FLOOR", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_DOWN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_DOWN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_EVEN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_EVEN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_ODD = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_ODD", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_UP = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_UP", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_UP = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_UP", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpField$RoundingMode DfpField$RoundingMode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DfpField$RoundingMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c4b19bb3cef6712a], a0.this$));
      }

      JArray< DfpField$RoundingMode > DfpField$RoundingMode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< DfpField$RoundingMode >(env->callStaticObjectMethod(cls, mids$[mid_values_d4f77f9240a38309]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_DfpField$RoundingMode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField$RoundingMode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField$RoundingMode_of_(t_DfpField$RoundingMode *self, PyObject *args);
      static PyObject *t_DfpField$RoundingMode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField$RoundingMode_values(PyTypeObject *type);
      static PyObject *t_DfpField$RoundingMode_get__parameters_(t_DfpField$RoundingMode *self, void *data);
      static PyGetSetDef t_DfpField$RoundingMode__fields_[] = {
        DECLARE_GET_FIELD(t_DfpField$RoundingMode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DfpField$RoundingMode__methods_[] = {
        DECLARE_METHOD(t_DfpField$RoundingMode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, of_, METH_VARARGS),
        DECLARE_METHOD(t_DfpField$RoundingMode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpField$RoundingMode)[] = {
        { Py_tp_methods, t_DfpField$RoundingMode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DfpField$RoundingMode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpField$RoundingMode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(DfpField$RoundingMode, t_DfpField$RoundingMode, DfpField$RoundingMode);
      PyObject *t_DfpField$RoundingMode::wrap_Object(const DfpField$RoundingMode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DfpField$RoundingMode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DfpField$RoundingMode *self = (t_DfpField$RoundingMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DfpField$RoundingMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DfpField$RoundingMode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DfpField$RoundingMode *self = (t_DfpField$RoundingMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DfpField$RoundingMode::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpField$RoundingMode), &PY_TYPE_DEF(DfpField$RoundingMode), module, "DfpField$RoundingMode", 0);
      }

      void t_DfpField$RoundingMode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "class_", make_descriptor(DfpField$RoundingMode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "wrapfn_", make_descriptor(t_DfpField$RoundingMode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "boxfn_", make_descriptor(boxObject));
        env->getClass(DfpField$RoundingMode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_CEIL", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_CEIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_DOWN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_DOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_FLOOR", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_FLOOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_DOWN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_DOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_EVEN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_EVEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_ODD", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_ODD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_UP", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_UP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_UP", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_UP)));
      }

      static PyObject *t_DfpField$RoundingMode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpField$RoundingMode::initializeClass, 1)))
          return NULL;
        return t_DfpField$RoundingMode::wrap_Object(DfpField$RoundingMode(((t_DfpField$RoundingMode *) arg)->object.this$));
      }
      static PyObject *t_DfpField$RoundingMode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpField$RoundingMode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DfpField$RoundingMode_of_(t_DfpField$RoundingMode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_DfpField$RoundingMode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        DfpField$RoundingMode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField$RoundingMode::valueOf(a0));
          return t_DfpField$RoundingMode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_DfpField$RoundingMode_values(PyTypeObject *type)
      {
        JArray< DfpField$RoundingMode > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::dfp::DfpField$RoundingMode::values());
        return JArray<jobject>(result.this$).wrap(t_DfpField$RoundingMode::wrap_jobject);
      }
      static PyObject *t_DfpField$RoundingMode_get__parameters_(t_DfpField$RoundingMode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1064.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1064::class$ = NULL;
              jmethodID *Rtcm1064::mids$ = NULL;
              bool Rtcm1064::live$ = false;

              jclass Rtcm1064::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1064");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a690f6f327f6cb67] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1064::Rtcm1064(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_a690f6f327f6cb67, a0, a1.this$, a2.this$)) {}
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
            namespace correction {
              static PyObject *t_Rtcm1064_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1064_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1064_of_(t_Rtcm1064 *self, PyObject *args);
              static int t_Rtcm1064_init_(t_Rtcm1064 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1064_get__parameters_(t_Rtcm1064 *self, void *data);
              static PyGetSetDef t_Rtcm1064__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1064, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1064__methods_[] = {
                DECLARE_METHOD(t_Rtcm1064, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1064, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1064, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1064)[] = {
                { Py_tp_methods, t_Rtcm1064__methods_ },
                { Py_tp_init, (void *) t_Rtcm1064_init_ },
                { Py_tp_getset, t_Rtcm1064__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1064)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1064, t_Rtcm1064, Rtcm1064);
              PyObject *t_Rtcm1064::wrap_Object(const Rtcm1064& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1064::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1064 *self = (t_Rtcm1064 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1064::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1064::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1064 *self = (t_Rtcm1064 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1064::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1064), &PY_TYPE_DEF(Rtcm1064), module, "Rtcm1064", 0);
              }

              void t_Rtcm1064::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "class_", make_descriptor(Rtcm1064::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "wrapfn_", make_descriptor(t_Rtcm1064::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1064_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1064::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1064::wrap_Object(Rtcm1064(((t_Rtcm1064 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1064_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1064::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1064_of_(t_Rtcm1064 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1064_init_(t_Rtcm1064 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1064 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1064(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmClockCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1064_get__parameters_(t_Rtcm1064 *self, void *data)
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
#include "org/hipparchus/linear/FieldQRDecomposition.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldQRDecomposition::class$ = NULL;
      jmethodID *FieldQRDecomposition::mids$ = NULL;
      bool FieldQRDecomposition::live$ = false;

      jclass FieldQRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldQRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_87e4c06eff884f7d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_init$_eea1f146acfd9c5e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getH_02883dbbe5db44ac] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getQ_02883dbbe5db44ac] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getQT_02883dbbe5db44ac] = env->getMethodID(cls, "getQT", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getR_02883dbbe5db44ac] = env->getMethodID(cls, "getR", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSolver_86a1dd9765cf39e6] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/FieldDecompositionSolver;");
          mids$[mid_decompose_b60b8c1db840c496] = env->getMethodID(cls, "decompose", "([[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_performHouseholderReflection_5deabae32e64f622] = env->getMethodID(cls, "performHouseholderReflection", "(I[[Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldQRDecomposition::FieldQRDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87e4c06eff884f7d, a0.this$)) {}

      FieldQRDecomposition::FieldQRDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eea1f146acfd9c5e, a0.this$, a1.this$)) {}

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getH() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getH_02883dbbe5db44ac]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getQ() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getQ_02883dbbe5db44ac]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getQT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getQT_02883dbbe5db44ac]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getR() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getR_02883dbbe5db44ac]));
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldQRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_86a1dd9765cf39e6]));
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
      static PyObject *t_FieldQRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposition_of_(t_FieldQRDecomposition *self, PyObject *args);
      static int t_FieldQRDecomposition_init_(t_FieldQRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldQRDecomposition_getH(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getQ(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getQT(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getR(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getSolver(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_get__h(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__q(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__qT(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__r(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__solver(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__parameters_(t_FieldQRDecomposition *self, void *data);
      static PyGetSetDef t_FieldQRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_FieldQRDecomposition, h),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, q),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, qT),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, r),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, solver),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldQRDecomposition__methods_[] = {
        DECLARE_METHOD(t_FieldQRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposition, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getH, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getQ, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getQT, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getR, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldQRDecomposition)[] = {
        { Py_tp_methods, t_FieldQRDecomposition__methods_ },
        { Py_tp_init, (void *) t_FieldQRDecomposition_init_ },
        { Py_tp_getset, t_FieldQRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldQRDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldQRDecomposition, t_FieldQRDecomposition, FieldQRDecomposition);
      PyObject *t_FieldQRDecomposition::wrap_Object(const FieldQRDecomposition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposition *self = (t_FieldQRDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldQRDecomposition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposition *self = (t_FieldQRDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldQRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldQRDecomposition), &PY_TYPE_DEF(FieldQRDecomposition), module, "FieldQRDecomposition", 0);
      }

      void t_FieldQRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "class_", make_descriptor(FieldQRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "wrapfn_", make_descriptor(t_FieldQRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldQRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldQRDecomposition::initializeClass, 1)))
          return NULL;
        return t_FieldQRDecomposition::wrap_Object(FieldQRDecomposition(((t_FieldQRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_FieldQRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldQRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldQRDecomposition_of_(t_FieldQRDecomposition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldQRDecomposition_init_(t_FieldQRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            FieldQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              INT_CALL(object = FieldQRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::linear::FieldMatrix::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldQRDecomposition(a0, a1));
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

      static PyObject *t_FieldQRDecomposition_getH(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getQ(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQ());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getQT(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getR(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getR());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getSolver(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldQRDecomposition_get__parameters_(t_FieldQRDecomposition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldQRDecomposition_get__h(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__q(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQ());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__qT(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__r(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getR());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__solver(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(value);
      }
    }
  }
}
