#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesRangeModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockInterSatellitesRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockInterSatellitesRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockInterSatellitesRangeModifier::live$ = false;

          jclass RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockInterSatellitesRangeModifier::RelativisticJ2ClockInterSatellitesRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void RelativisticJ2ClockInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockInterSatellitesRangeModifier_init_(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockInterSatellitesRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockInterSatellitesRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockInterSatellitesRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockInterSatellitesRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockInterSatellitesRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockInterSatellitesRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockInterSatellitesRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockInterSatellitesRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier, t_RelativisticJ2ClockInterSatellitesRangeModifier, RelativisticJ2ClockInterSatellitesRangeModifier);

          void t_RelativisticJ2ClockInterSatellitesRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockInterSatellitesRangeModifier), module, "RelativisticJ2ClockInterSatellitesRangeModifier", 0);
          }

          void t_RelativisticJ2ClockInterSatellitesRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), "class_", make_descriptor(RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockInterSatellitesRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockInterSatellitesRangeModifier::wrap_Object(RelativisticJ2ClockInterSatellitesRangeModifier(((t_RelativisticJ2ClockInterSatellitesRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockInterSatellitesRangeModifier_init_(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockInterSatellitesRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockInterSatellitesRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitDeterminationKey::class$ = NULL;
              jmethodID *OrbitDeterminationKey::mids$ = NULL;
              bool OrbitDeterminationKey::live$ = false;
              OrbitDeterminationKey *OrbitDeterminationKey::ACTUAL_OD_SPAN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::COMMENT = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::CONSIDER_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::CONSIDER_PARAMS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DATA_TYPES = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DAYS_SINCE_FIRST_OBS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DAYS_SINCE_LAST_OBS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::GDOP = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::MAXIMUM_OBS_GAP = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OBS_AVAILABLE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OBS_USED = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_CONFIDENCE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGINT = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGMAJ = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGMIN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_ID = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_MAX_PRED_EIGMAJ = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_METHOD = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_MIN_PRED_EIGMIN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_PREV_ID = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::RECOMMENDED_OD_SPAN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SEDR = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SENSORS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SENSORS_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SOLVE_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SOLVE_STATES = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::TRACKS_AVAILABLE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::TRACKS_USED = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::WEIGHTED_RMS = NULL;

              jclass OrbitDeterminationKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_0072cda7b17789c4] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;)Z");
                  mids$[mid_valueOf_60748ebb979d4329] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;");
                  mids$[mid_values_82853cd1e5b0e1a3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACTUAL_OD_SPAN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "ACTUAL_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  COMMENT = new OrbitDeterminationKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  CONSIDER_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "CONSIDER_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  CONSIDER_PARAMS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "CONSIDER_PARAMS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DATA_TYPES = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DATA_TYPES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DAYS_SINCE_FIRST_OBS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DAYS_SINCE_FIRST_OBS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DAYS_SINCE_LAST_OBS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DAYS_SINCE_LAST_OBS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  GDOP = new OrbitDeterminationKey(env->getStaticObjectField(cls, "GDOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  MAXIMUM_OBS_GAP = new OrbitDeterminationKey(env->getStaticObjectField(cls, "MAXIMUM_OBS_GAP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OBS_AVAILABLE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OBS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OBS_USED = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OBS_USED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_CONFIDENCE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGINT = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGINT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGMAJ = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGMAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGMIN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGMIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_ID = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_MAX_PRED_EIGMAJ = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_MAX_PRED_EIGMAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_METHOD = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_MIN_PRED_EIGMIN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_MIN_PRED_EIGMIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_PREV_ID = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  RECOMMENDED_OD_SPAN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "RECOMMENDED_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SEDR = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SEDR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SENSORS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SENSORS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SENSORS_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SENSORS_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SOLVE_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SOLVE_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SOLVE_STATES = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SOLVE_STATES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  TRACKS_AVAILABLE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "TRACKS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  TRACKS_USED = new OrbitDeterminationKey(env->getStaticObjectField(cls, "TRACKS_USED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  WEIGHTED_RMS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "WEIGHTED_RMS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitDeterminationKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_0072cda7b17789c4], a0.this$, a1.this$, a2.this$);
              }

              OrbitDeterminationKey OrbitDeterminationKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitDeterminationKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_60748ebb979d4329], a0.this$));
              }

              JArray< OrbitDeterminationKey > OrbitDeterminationKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitDeterminationKey >(env->callStaticObjectMethod(cls, mids$[mid_values_82853cd1e5b0e1a3]));
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
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitDeterminationKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDeterminationKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDeterminationKey_of_(t_OrbitDeterminationKey *self, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_process(t_OrbitDeterminationKey *self, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_values(PyTypeObject *type);
              static PyObject *t_OrbitDeterminationKey_get__parameters_(t_OrbitDeterminationKey *self, void *data);
              static PyGetSetDef t_OrbitDeterminationKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitDeterminationKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitDeterminationKey__methods_[] = {
                DECLARE_METHOD(t_OrbitDeterminationKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitDeterminationKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitDeterminationKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitDeterminationKey)[] = {
                { Py_tp_methods, t_OrbitDeterminationKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitDeterminationKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitDeterminationKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitDeterminationKey, t_OrbitDeterminationKey, OrbitDeterminationKey);
              PyObject *t_OrbitDeterminationKey::wrap_Object(const OrbitDeterminationKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitDeterminationKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitDeterminationKey *self = (t_OrbitDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitDeterminationKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitDeterminationKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitDeterminationKey *self = (t_OrbitDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitDeterminationKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitDeterminationKey), &PY_TYPE_DEF(OrbitDeterminationKey), module, "OrbitDeterminationKey", 0);
              }

              void t_OrbitDeterminationKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "class_", make_descriptor(OrbitDeterminationKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "wrapfn_", make_descriptor(t_OrbitDeterminationKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitDeterminationKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "ACTUAL_OD_SPAN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::ACTUAL_OD_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "COMMENT", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "CONSIDER_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::CONSIDER_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "CONSIDER_PARAMS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::CONSIDER_PARAMS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DATA_TYPES", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DATA_TYPES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DAYS_SINCE_FIRST_OBS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DAYS_SINCE_FIRST_OBS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DAYS_SINCE_LAST_OBS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DAYS_SINCE_LAST_OBS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "GDOP", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::GDOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "MAXIMUM_OBS_GAP", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::MAXIMUM_OBS_GAP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OBS_AVAILABLE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OBS_AVAILABLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OBS_USED", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OBS_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_CONFIDENCE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_CONFIDENCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGINT", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGINT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGMAJ", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGMAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGMIN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGMIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_ID", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_MAX_PRED_EIGMAJ", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_MAX_PRED_EIGMAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_METHOD", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_MIN_PRED_EIGMIN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_MIN_PRED_EIGMIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_PREV_ID", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "RECOMMENDED_OD_SPAN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::RECOMMENDED_OD_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SEDR", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SEDR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SENSORS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SENSORS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SENSORS_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SENSORS_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SOLVE_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SOLVE_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SOLVE_STATES", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SOLVE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "TRACKS_AVAILABLE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::TRACKS_AVAILABLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "TRACKS_USED", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::TRACKS_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "WEIGHTED_RMS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::WEIGHTED_RMS)));
              }

              static PyObject *t_OrbitDeterminationKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitDeterminationKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitDeterminationKey::wrap_Object(OrbitDeterminationKey(((t_OrbitDeterminationKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitDeterminationKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitDeterminationKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitDeterminationKey_of_(t_OrbitDeterminationKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitDeterminationKey_process(t_OrbitDeterminationKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitDeterminationKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitDeterminationKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDeterminationKey::valueOf(a0));
                  return t_OrbitDeterminationKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitDeterminationKey_values(PyTypeObject *type)
              {
                JArray< OrbitDeterminationKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDeterminationKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitDeterminationKey::wrap_jobject);
              }
              static PyObject *t_OrbitDeterminationKey_get__parameters_(t_OrbitDeterminationKey *self, void *data)
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
#include "org/hipparchus/util/OpenIntToFieldHashMap.h"
#include "org/hipparchus/util/OpenIntToFieldHashMap$Iterator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToFieldHashMap::class$ = NULL;
      jmethodID *OpenIntToFieldHashMap::mids$ = NULL;
      bool OpenIntToFieldHashMap::live$ = false;

      jclass OpenIntToFieldHashMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToFieldHashMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_399daf55ca8a95b8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_caee123f69538f07] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_b83a083268c0872f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/hipparchus/FieldElement;)V");
          mids$[mid_containsKey_e24caac814db1df5] = env->getMethodID(cls, "containsKey", "(I)Z");
          mids$[mid_get_bae57aba20797b29] = env->getMethodID(cls, "get", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_iterator_723bd8aa95f35d38] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/OpenIntToFieldHashMap$Iterator;");
          mids$[mid_put_fafd637e37b17b35] = env->getMethodID(cls, "put", "(ILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
          mids$[mid_remove_bae57aba20797b29] = env->getMethodID(cls, "remove", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_399daf55ca8a95b8, a0.this$, a1)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, const ::org::hipparchus::FieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_caee123f69538f07, a0.this$, a1.this$)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, jint a1, const ::org::hipparchus::FieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b83a083268c0872f, a0.this$, a1, a2.this$)) {}

      jboolean OpenIntToFieldHashMap::containsKey(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_containsKey_e24caac814db1df5], a0);
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::get$(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_get_bae57aba20797b29], a0));
      }

      ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator OpenIntToFieldHashMap::iterator() const
      {
        return ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_723bd8aa95f35d38]));
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::put(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_put_fafd637e37b17b35], a0, a1.this$));
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::remove(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remove_bae57aba20797b29], a0));
      }

      jint OpenIntToFieldHashMap::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
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
      static PyObject *t_OpenIntToFieldHashMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_of_(t_OpenIntToFieldHashMap *self, PyObject *args);
      static int t_OpenIntToFieldHashMap_init_(t_OpenIntToFieldHashMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenIntToFieldHashMap_containsKey(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_get(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_iterator(t_OpenIntToFieldHashMap *self);
      static PyObject *t_OpenIntToFieldHashMap_put(t_OpenIntToFieldHashMap *self, PyObject *args);
      static PyObject *t_OpenIntToFieldHashMap_remove(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_size(t_OpenIntToFieldHashMap *self);
      static PyObject *t_OpenIntToFieldHashMap_get__parameters_(t_OpenIntToFieldHashMap *self, void *data);
      static PyGetSetDef t_OpenIntToFieldHashMap__fields_[] = {
        DECLARE_GET_FIELD(t_OpenIntToFieldHashMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenIntToFieldHashMap__methods_[] = {
        DECLARE_METHOD(t_OpenIntToFieldHashMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, containsKey, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, get, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, iterator, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, put, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, remove, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, size, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToFieldHashMap)[] = {
        { Py_tp_methods, t_OpenIntToFieldHashMap__methods_ },
        { Py_tp_init, (void *) t_OpenIntToFieldHashMap_init_ },
        { Py_tp_getset, t_OpenIntToFieldHashMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToFieldHashMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToFieldHashMap, t_OpenIntToFieldHashMap, OpenIntToFieldHashMap);
      PyObject *t_OpenIntToFieldHashMap::wrap_Object(const OpenIntToFieldHashMap& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap *self = (t_OpenIntToFieldHashMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OpenIntToFieldHashMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap *self = (t_OpenIntToFieldHashMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OpenIntToFieldHashMap::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToFieldHashMap), &PY_TYPE_DEF(OpenIntToFieldHashMap), module, "OpenIntToFieldHashMap", 0);
      }

      void t_OpenIntToFieldHashMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "class_", make_descriptor(OpenIntToFieldHashMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "wrapfn_", make_descriptor(t_OpenIntToFieldHashMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToFieldHashMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToFieldHashMap::initializeClass, 1)))
          return NULL;
        return t_OpenIntToFieldHashMap::wrap_Object(OpenIntToFieldHashMap(((t_OpenIntToFieldHashMap *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToFieldHashMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToFieldHashMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToFieldHashMap_of_(t_OpenIntToFieldHashMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OpenIntToFieldHashMap_init_(t_OpenIntToFieldHashMap *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::FieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KIK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1, a2));
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

      static PyObject *t_OpenIntToFieldHashMap_containsKey(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.containsKey(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_get(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_iterator(t_OpenIntToFieldHashMap *self)
      {
        ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_OpenIntToFieldHashMap$Iterator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_OpenIntToFieldHashMap_put(t_OpenIntToFieldHashMap *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.put(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_remove(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_size(t_OpenIntToFieldHashMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_OpenIntToFieldHashMap_get__parameters_(t_OpenIntToFieldHashMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/InterSatDirectViewDetector.h"
#include "org/orekit/propagation/events/InterSatDirectViewDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *InterSatDirectViewDetector::class$ = NULL;
        jmethodID *InterSatDirectViewDetector::mids$ = NULL;
        bool InterSatDirectViewDetector::live$ = false;

        jclass InterSatDirectViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/InterSatDirectViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_584b06ca4271f2b5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/utils/PVCoordinatesProvider;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getCentralBody_dc8275c31111ad9c] = env->getMethodID(cls, "getCentralBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getSecondary_781ab98286dad7d5] = env->getMethodID(cls, "getSecondary", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getSkimmingAltitude_9981f74b2d109da6] = env->getMethodID(cls, "getSkimmingAltitude", "()D");
            mids$[mid_withSkimmingAltitude_e70c0d5ce41a8a1e] = env->getMethodID(cls, "withSkimmingAltitude", "(D)Lorg/orekit/propagation/events/InterSatDirectViewDetector;");
            mids$[mid_create_464d5a275df7110d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/InterSatDirectViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSatDirectViewDetector::InterSatDirectViewDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_584b06ca4271f2b5, a0.this$, a1.this$)) {}

        jdouble InterSatDirectViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid InterSatDirectViewDetector::getCentralBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getCentralBody_dc8275c31111ad9c]));
        }

        ::org::orekit::utils::PVCoordinatesProvider InterSatDirectViewDetector::getSecondary() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondary_781ab98286dad7d5]));
        }

        jdouble InterSatDirectViewDetector::getSkimmingAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkimmingAltitude_9981f74b2d109da6]);
        }

        InterSatDirectViewDetector InterSatDirectViewDetector::withSkimmingAltitude(jdouble a0) const
        {
          return InterSatDirectViewDetector(env->callObjectMethod(this$, mids$[mid_withSkimmingAltitude_e70c0d5ce41a8a1e], a0));
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
        static PyObject *t_InterSatDirectViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_of_(t_InterSatDirectViewDetector *self, PyObject *args);
        static int t_InterSatDirectViewDetector_init_(t_InterSatDirectViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSatDirectViewDetector_g(t_InterSatDirectViewDetector *self, PyObject *args);
        static PyObject *t_InterSatDirectViewDetector_getCentralBody(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_getSecondary(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_getSkimmingAltitude(t_InterSatDirectViewDetector *self);
        static PyObject *t_InterSatDirectViewDetector_withSkimmingAltitude(t_InterSatDirectViewDetector *self, PyObject *arg);
        static PyObject *t_InterSatDirectViewDetector_get__centralBody(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__secondary(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__skimmingAltitude(t_InterSatDirectViewDetector *self, void *data);
        static PyObject *t_InterSatDirectViewDetector_get__parameters_(t_InterSatDirectViewDetector *self, void *data);
        static PyGetSetDef t_InterSatDirectViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, centralBody),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, secondary),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, skimmingAltitude),
          DECLARE_GET_FIELD(t_InterSatDirectViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterSatDirectViewDetector__methods_[] = {
          DECLARE_METHOD(t_InterSatDirectViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getCentralBody, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getSecondary, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, getSkimmingAltitude, METH_NOARGS),
          DECLARE_METHOD(t_InterSatDirectViewDetector, withSkimmingAltitude, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSatDirectViewDetector)[] = {
          { Py_tp_methods, t_InterSatDirectViewDetector__methods_ },
          { Py_tp_init, (void *) t_InterSatDirectViewDetector_init_ },
          { Py_tp_getset, t_InterSatDirectViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSatDirectViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(InterSatDirectViewDetector, t_InterSatDirectViewDetector, InterSatDirectViewDetector);
        PyObject *t_InterSatDirectViewDetector::wrap_Object(const InterSatDirectViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatDirectViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatDirectViewDetector *self = (t_InterSatDirectViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InterSatDirectViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatDirectViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatDirectViewDetector *self = (t_InterSatDirectViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InterSatDirectViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSatDirectViewDetector), &PY_TYPE_DEF(InterSatDirectViewDetector), module, "InterSatDirectViewDetector", 0);
        }

        void t_InterSatDirectViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "class_", make_descriptor(InterSatDirectViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "wrapfn_", make_descriptor(t_InterSatDirectViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatDirectViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterSatDirectViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSatDirectViewDetector::initializeClass, 1)))
            return NULL;
          return t_InterSatDirectViewDetector::wrap_Object(InterSatDirectViewDetector(((t_InterSatDirectViewDetector *) arg)->object.this$));
        }
        static PyObject *t_InterSatDirectViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSatDirectViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InterSatDirectViewDetector_of_(t_InterSatDirectViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_InterSatDirectViewDetector_init_(t_InterSatDirectViewDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          InterSatDirectViewDetector object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1))
          {
            INT_CALL(object = InterSatDirectViewDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(InterSatDirectViewDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSatDirectViewDetector_g(t_InterSatDirectViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(InterSatDirectViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_InterSatDirectViewDetector_getCentralBody(t_InterSatDirectViewDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getCentralBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_InterSatDirectViewDetector_getSecondary(t_InterSatDirectViewDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondary());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_InterSatDirectViewDetector_getSkimmingAltitude(t_InterSatDirectViewDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkimmingAltitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_InterSatDirectViewDetector_withSkimmingAltitude(t_InterSatDirectViewDetector *self, PyObject *arg)
        {
          jdouble a0;
          InterSatDirectViewDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withSkimmingAltitude(a0));
            return t_InterSatDirectViewDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSkimmingAltitude", arg);
          return NULL;
        }
        static PyObject *t_InterSatDirectViewDetector_get__parameters_(t_InterSatDirectViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_InterSatDirectViewDetector_get__centralBody(t_InterSatDirectViewDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getCentralBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_InterSatDirectViewDetector_get__secondary(t_InterSatDirectViewDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondary());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_InterSatDirectViewDetector_get__skimmingAltitude(t_InterSatDirectViewDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkimmingAltitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative2Field::class$ = NULL;
        jmethodID *UnivariateDerivative2Field::mids$ = NULL;
        bool UnivariateDerivative2Field::live$ = false;

        jclass UnivariateDerivative2Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative2Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getInstance_2bcf1e61705679e1] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2Field;");
            mids$[mid_getOne_cdd1771068ccd0b5] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_cdd1771068ccd0b5] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/UnivariateDerivative2;");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean UnivariateDerivative2Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        UnivariateDerivative2Field UnivariateDerivative2Field::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return UnivariateDerivative2Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_2bcf1e61705679e1]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 UnivariateDerivative2Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getOne_cdd1771068ccd0b5]));
        }

        ::java::lang::Class UnivariateDerivative2Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 UnivariateDerivative2Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getZero_cdd1771068ccd0b5]));
        }

        jint UnivariateDerivative2Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
        static PyObject *t_UnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative2Field_equals(t_UnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2Field_getInstance(PyTypeObject *type);
        static PyObject *t_UnivariateDerivative2Field_getOne(t_UnivariateDerivative2Field *self);
        static PyObject *t_UnivariateDerivative2Field_getRuntimeClass(t_UnivariateDerivative2Field *self);
        static PyObject *t_UnivariateDerivative2Field_getZero(t_UnivariateDerivative2Field *self);
        static PyObject *t_UnivariateDerivative2Field_hashCode(t_UnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_UnivariateDerivative2Field_get__instance(t_UnivariateDerivative2Field *self, void *data);
        static PyObject *t_UnivariateDerivative2Field_get__one(t_UnivariateDerivative2Field *self, void *data);
        static PyObject *t_UnivariateDerivative2Field_get__runtimeClass(t_UnivariateDerivative2Field *self, void *data);
        static PyObject *t_UnivariateDerivative2Field_get__zero(t_UnivariateDerivative2Field *self, void *data);
        static PyGetSetDef t_UnivariateDerivative2Field__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, instance),
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, one),
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, runtimeClass),
          DECLARE_GET_FIELD(t_UnivariateDerivative2Field, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative2Field__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative2Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative2Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative2Field)[] = {
          { Py_tp_methods, t_UnivariateDerivative2Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateDerivative2Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative2Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative2Field, t_UnivariateDerivative2Field, UnivariateDerivative2Field);

        void t_UnivariateDerivative2Field::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative2Field), &PY_TYPE_DEF(UnivariateDerivative2Field), module, "UnivariateDerivative2Field", 0);
        }

        void t_UnivariateDerivative2Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2Field), "class_", make_descriptor(UnivariateDerivative2Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2Field), "wrapfn_", make_descriptor(t_UnivariateDerivative2Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative2Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative2Field::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative2Field::wrap_Object(UnivariateDerivative2Field(((t_UnivariateDerivative2Field *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative2Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative2Field_equals(t_UnivariateDerivative2Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_UnivariateDerivative2Field_getInstance(PyTypeObject *type)
        {
          UnivariateDerivative2Field result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field::getInstance());
          return t_UnivariateDerivative2Field::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative2Field_getOne(t_UnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative2Field_getRuntimeClass(t_UnivariateDerivative2Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
        }

        static PyObject *t_UnivariateDerivative2Field_getZero(t_UnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(result);
        }

        static PyObject *t_UnivariateDerivative2Field_hashCode(t_UnivariateDerivative2Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UnivariateDerivative2Field), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_UnivariateDerivative2Field_get__instance(t_UnivariateDerivative2Field *self, void *data)
        {
          UnivariateDerivative2Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_UnivariateDerivative2Field::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2Field_get__one(t_UnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2Field_get__runtimeClass(t_UnivariateDerivative2Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_UnivariateDerivative2Field_get__zero(t_UnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_UnivariateDerivative2::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/SinexLoader.h"
#include "java/util/Map.h"
#include "org/orekit/files/sinex/Station.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/files/sinex/DcbSatellite.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sinex/DcbStation.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/files/sinex/SinexEopEntry.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *SinexLoader::class$ = NULL;
        jmethodID *SinexLoader::mids$ = NULL;
        bool SinexLoader::live$ = false;

        jclass SinexLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/SinexLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_init$_023df3a7dca17c03] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
            mids$[mid_init$_71f9c35d068ceff3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_init$_23ada22a1e61cacc] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_fillHistory_09d2fc89df23cd1a] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");
            mids$[mid_getCreationDate_80e11148db499dda] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDcbSatellite_4b30c7d0b08cbb9f] = env->getMethodID(cls, "getDcbSatellite", "(Ljava/lang/String;)Lorg/orekit/files/sinex/DcbSatellite;");
            mids$[mid_getDcbStation_ce8e09d11b4ad7bc] = env->getMethodID(cls, "getDcbStation", "(Ljava/lang/String;)Lorg/orekit/files/sinex/DcbStation;");
            mids$[mid_getFileEpochEndTime_80e11148db499dda] = env->getMethodID(cls, "getFileEpochEndTime", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFileEpochStartTime_80e11148db499dda] = env->getMethodID(cls, "getFileEpochStartTime", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getITRFVersion_4865f340ec39b9c4] = env->getMethodID(cls, "getITRFVersion", "()Lorg/orekit/frames/ITRFVersion;");
            mids$[mid_getParsedEop_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getParsedEop", "()Ljava/util/Map;");
            mids$[mid_getStation_a57da290771c14bb] = env->getMethodID(cls, "getStation", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station;");
            mids$[mid_getStations_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getStations", "()Ljava/util/Map;");
            mids$[mid_setITRFVersion_8fd427ab23829bf5] = env->getMethodID(cls, "setITRFVersion", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SinexLoader::SinexLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

        SinexLoader::SinexLoader(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_023df3a7dca17c03, a0.this$)) {}

        SinexLoader::SinexLoader(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScales & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_71f9c35d068ceff3, a0.this$, a1.this$)) {}

        SinexLoader::SinexLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_23ada22a1e61cacc, a0.this$, a1.this$, a2.this$)) {}

        void SinexLoader::fillHistory(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::java::util::SortedSet & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_fillHistory_09d2fc89df23cd1a], a0.this$, a1.this$);
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getCreationDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_80e11148db499dda]));
        }

        ::org::orekit::files::sinex::DcbSatellite SinexLoader::getDcbSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::DcbSatellite(env->callObjectMethod(this$, mids$[mid_getDcbSatellite_4b30c7d0b08cbb9f], a0.this$));
        }

        ::org::orekit::files::sinex::DcbStation SinexLoader::getDcbStation(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::DcbStation(env->callObjectMethod(this$, mids$[mid_getDcbStation_ce8e09d11b4ad7bc], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getFileEpochEndTime() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFileEpochEndTime_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getFileEpochStartTime() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFileEpochStartTime_80e11148db499dda]));
        }

        ::org::orekit::frames::ITRFVersion SinexLoader::getITRFVersion() const
        {
          return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_4865f340ec39b9c4]));
        }

        ::java::util::Map SinexLoader::getParsedEop() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParsedEop_dbcb8bbac6b35e0d]));
        }

        ::org::orekit::files::sinex::Station SinexLoader::getStation(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::Station(env->callObjectMethod(this$, mids$[mid_getStation_a57da290771c14bb], a0.this$));
        }

        ::java::util::Map SinexLoader::getStations() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getStations_dbcb8bbac6b35e0d]));
        }

        void SinexLoader::setITRFVersion(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setITRFVersion_8fd427ab23829bf5], a0);
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
      namespace sinex {
        static PyObject *t_SinexLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SinexLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SinexLoader_init_(t_SinexLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SinexLoader_fillHistory(t_SinexLoader *self, PyObject *args);
        static PyObject *t_SinexLoader_getCreationDate(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getDcbSatellite(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getDcbStation(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getFileEpochEndTime(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getFileEpochStartTime(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getITRFVersion(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getParsedEop(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getStation(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getStations(t_SinexLoader *self);
        static PyObject *t_SinexLoader_setITRFVersion(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_get__creationDate(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__fileEpochEndTime(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__fileEpochStartTime(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__iTRFVersion(t_SinexLoader *self, void *data);
        static int t_SinexLoader_set__iTRFVersion(t_SinexLoader *self, PyObject *arg, void *data);
        static PyObject *t_SinexLoader_get__parsedEop(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__stations(t_SinexLoader *self, void *data);
        static PyGetSetDef t_SinexLoader__fields_[] = {
          DECLARE_GET_FIELD(t_SinexLoader, creationDate),
          DECLARE_GET_FIELD(t_SinexLoader, fileEpochEndTime),
          DECLARE_GET_FIELD(t_SinexLoader, fileEpochStartTime),
          DECLARE_GETSET_FIELD(t_SinexLoader, iTRFVersion),
          DECLARE_GET_FIELD(t_SinexLoader, parsedEop),
          DECLARE_GET_FIELD(t_SinexLoader, stations),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SinexLoader__methods_[] = {
          DECLARE_METHOD(t_SinexLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexLoader, fillHistory, METH_VARARGS),
          DECLARE_METHOD(t_SinexLoader, getCreationDate, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getDcbSatellite, METH_O),
          DECLARE_METHOD(t_SinexLoader, getDcbStation, METH_O),
          DECLARE_METHOD(t_SinexLoader, getFileEpochEndTime, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getFileEpochStartTime, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getITRFVersion, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getParsedEop, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getStation, METH_O),
          DECLARE_METHOD(t_SinexLoader, getStations, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, setITRFVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SinexLoader)[] = {
          { Py_tp_methods, t_SinexLoader__methods_ },
          { Py_tp_init, (void *) t_SinexLoader_init_ },
          { Py_tp_getset, t_SinexLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SinexLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SinexLoader, t_SinexLoader, SinexLoader);

        void t_SinexLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(SinexLoader), &PY_TYPE_DEF(SinexLoader), module, "SinexLoader", 0);
        }

        void t_SinexLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "class_", make_descriptor(SinexLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "wrapfn_", make_descriptor(t_SinexLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SinexLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SinexLoader::initializeClass, 1)))
            return NULL;
          return t_SinexLoader::wrap_Object(SinexLoader(((t_SinexLoader *) arg)->object.this$));
        }
        static PyObject *t_SinexLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SinexLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SinexLoader_init_(t_SinexLoader *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                INT_CALL(object = SinexLoader(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = SinexLoader(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::time::TimeScales a1((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
              {
                INT_CALL(object = SinexLoader(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
              ::org::orekit::time::TimeScales a2((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SinexLoader(a0, a1, a2));
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

        static PyObject *t_SinexLoader_fillHistory(t_SinexLoader *self, PyObject *args)
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

        static PyObject *t_SinexLoader_getCreationDate(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCreationDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getDcbSatellite(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::DcbSatellite result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getDcbSatellite(a0));
            return ::org::orekit::files::sinex::t_DcbSatellite::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbSatellite", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getDcbStation(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::DcbStation result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getDcbStation(a0));
            return ::org::orekit::files::sinex::t_DcbStation::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbStation", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getFileEpochEndTime(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getFileEpochEndTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getFileEpochStartTime(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getFileEpochStartTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getITRFVersion(t_SinexLoader *self)
        {
          ::org::orekit::frames::ITRFVersion result((jobject) NULL);
          OBJ_CALL(result = self->object.getITRFVersion());
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getParsedEop(t_SinexLoader *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getParsedEop());
          return ::java::util::t_Map::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate), ::org::orekit::files::sinex::PY_TYPE(SinexEopEntry));
        }

        static PyObject *t_SinexLoader_getStation(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::Station result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getStation(a0));
            return ::org::orekit::files::sinex::t_Station::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getStation", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getStations(t_SinexLoader *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getStations());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::sinex::PY_TYPE(Station));
        }

        static PyObject *t_SinexLoader_setITRFVersion(t_SinexLoader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setITRFVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setITRFVersion", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_get__creationDate(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCreationDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__fileEpochEndTime(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getFileEpochEndTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__fileEpochStartTime(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getFileEpochStartTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__iTRFVersion(t_SinexLoader *self, void *data)
        {
          ::org::orekit::frames::ITRFVersion value((jobject) NULL);
          OBJ_CALL(value = self->object.getITRFVersion());
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
        }
        static int t_SinexLoader_set__iTRFVersion(t_SinexLoader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setITRFVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "iTRFVersion", arg);
          return -1;
        }

        static PyObject *t_SinexLoader_get__parsedEop(t_SinexLoader *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getParsedEop());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__stations(t_SinexLoader *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getStations());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedField.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedField::class$ = NULL;
      jmethodID *TimeStampedField::mids$ = NULL;
      bool TimeStampedField::live$ = false;

      jclass TimeStampedField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fbe996b6216f8920] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_077232d878739e12] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getValue_08d37e3f77b7239d] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedField::TimeStampedField(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fbe996b6216f8920, a0.this$, a1.this$)) {}

      TimeStampedField::TimeStampedField(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_077232d878739e12, a0.this$, a1.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate TimeStampedField::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
      }

      ::org::hipparchus::CalculusFieldElement TimeStampedField::getValue() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_08d37e3f77b7239d]));
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
      static PyObject *t_TimeStampedField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedField_of_(t_TimeStampedField *self, PyObject *args);
      static int t_TimeStampedField_init_(t_TimeStampedField *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedField_getDate(t_TimeStampedField *self);
      static PyObject *t_TimeStampedField_getValue(t_TimeStampedField *self);
      static PyObject *t_TimeStampedField_get__date(t_TimeStampedField *self, void *data);
      static PyObject *t_TimeStampedField_get__value(t_TimeStampedField *self, void *data);
      static PyObject *t_TimeStampedField_get__parameters_(t_TimeStampedField *self, void *data);
      static PyGetSetDef t_TimeStampedField__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedField, date),
        DECLARE_GET_FIELD(t_TimeStampedField, value),
        DECLARE_GET_FIELD(t_TimeStampedField, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedField__methods_[] = {
        DECLARE_METHOD(t_TimeStampedField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedField, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedField, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedField, getValue, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedField)[] = {
        { Py_tp_methods, t_TimeStampedField__methods_ },
        { Py_tp_init, (void *) t_TimeStampedField_init_ },
        { Py_tp_getset, t_TimeStampedField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedField, t_TimeStampedField, TimeStampedField);
      PyObject *t_TimeStampedField::wrap_Object(const TimeStampedField& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedField::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedField *self = (t_TimeStampedField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedField::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedField::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedField *self = (t_TimeStampedField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedField::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedField), &PY_TYPE_DEF(TimeStampedField), module, "TimeStampedField", 0);
      }

      void t_TimeStampedField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "class_", make_descriptor(TimeStampedField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "wrapfn_", make_descriptor(t_TimeStampedField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedField::initializeClass, 1)))
          return NULL;
        return t_TimeStampedField::wrap_Object(TimeStampedField(((t_TimeStampedField *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedField_of_(t_TimeStampedField *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedField_init_(t_TimeStampedField *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            TimeStampedField object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedField(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedField object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              INT_CALL(object = TimeStampedField(a0, a1));
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

      static PyObject *t_TimeStampedField_getDate(t_TimeStampedField *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedField_getValue(t_TimeStampedField *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_TimeStampedField_get__parameters_(t_TimeStampedField *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedField_get__date(t_TimeStampedField *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedField_get__value(t_TimeStampedField *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrameDummyAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrameDummyAlmanac::class$ = NULL;
          jmethodID *SubFrameDummyAlmanac::mids$ = NULL;
          bool SubFrameDummyAlmanac::live$ = false;

          jclass SubFrameDummyAlmanac::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrameDummyAlmanac");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrameDummyAlmanac_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameDummyAlmanac_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrameDummyAlmanac__methods_[] = {
            DECLARE_METHOD(t_SubFrameDummyAlmanac, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameDummyAlmanac, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrameDummyAlmanac)[] = {
            { Py_tp_methods, t_SubFrameDummyAlmanac__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrameDummyAlmanac)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrameDummyAlmanac, t_SubFrameDummyAlmanac, SubFrameDummyAlmanac);

          void t_SubFrameDummyAlmanac::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrameDummyAlmanac), &PY_TYPE_DEF(SubFrameDummyAlmanac), module, "SubFrameDummyAlmanac", 0);
          }

          void t_SubFrameDummyAlmanac::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameDummyAlmanac), "class_", make_descriptor(SubFrameDummyAlmanac::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameDummyAlmanac), "wrapfn_", make_descriptor(t_SubFrameDummyAlmanac::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameDummyAlmanac), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrameDummyAlmanac_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrameDummyAlmanac::initializeClass, 1)))
              return NULL;
            return t_SubFrameDummyAlmanac::wrap_Object(SubFrameDummyAlmanac(((t_SubFrameDummyAlmanac *) arg)->object.this$));
          }
          static PyObject *t_SubFrameDummyAlmanac_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrameDummyAlmanac::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BisectionSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BisectionSolver::class$ = NULL;
        jmethodID *BisectionSolver::mids$ = NULL;
        bool BisectionSolver::live$ = false;

        jclass BisectionSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BisectionSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_9981f74b2d109da6] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BisectionSolver::BisectionSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        BisectionSolver::BisectionSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        BisectionSolver::BisectionSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}
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
      namespace solvers {
        static PyObject *t_BisectionSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BisectionSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BisectionSolver_of_(t_BisectionSolver *self, PyObject *args);
        static int t_BisectionSolver_init_(t_BisectionSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BisectionSolver_get__parameters_(t_BisectionSolver *self, void *data);
        static PyGetSetDef t_BisectionSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BisectionSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BisectionSolver__methods_[] = {
          DECLARE_METHOD(t_BisectionSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BisectionSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BisectionSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BisectionSolver)[] = {
          { Py_tp_methods, t_BisectionSolver__methods_ },
          { Py_tp_init, (void *) t_BisectionSolver_init_ },
          { Py_tp_getset, t_BisectionSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BisectionSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BisectionSolver, t_BisectionSolver, BisectionSolver);
        PyObject *t_BisectionSolver::wrap_Object(const BisectionSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BisectionSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BisectionSolver *self = (t_BisectionSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BisectionSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BisectionSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BisectionSolver *self = (t_BisectionSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BisectionSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BisectionSolver), &PY_TYPE_DEF(BisectionSolver), module, "BisectionSolver", 0);
        }

        void t_BisectionSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "class_", make_descriptor(BisectionSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "wrapfn_", make_descriptor(t_BisectionSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BisectionSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BisectionSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BisectionSolver::initializeClass, 1)))
            return NULL;
          return t_BisectionSolver::wrap_Object(BisectionSolver(((t_BisectionSolver *) arg)->object.this$));
        }
        static PyObject *t_BisectionSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BisectionSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BisectionSolver_of_(t_BisectionSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BisectionSolver_init_(t_BisectionSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BisectionSolver object((jobject) NULL);

              INT_CALL(object = BisectionSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              BisectionSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = BisectionSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BisectionSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BisectionSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_BisectionSolver_get__parameters_(t_BisectionSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/ViennaModelCoefficientsLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaModelCoefficientsLoader::class$ = NULL;
          jmethodID *ViennaModelCoefficientsLoader::mids$ = NULL;
          bool ViennaModelCoefficientsLoader::live$ = false;
          ::java::lang::String *ViennaModelCoefficientsLoader::DEFAULT_SUPPORTED_NAMES = NULL;

          jclass ViennaModelCoefficientsLoader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaModelCoefficientsLoader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_78b7236f6301a45c] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/troposphere/ViennaModelType;)V");
              mids$[mid_init$_546546d83e2025a2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/troposphere/ViennaModelType;)V");
              mids$[mid_init$_eae678247058e615] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/troposphere/ViennaModelType;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getA_be783177b060994b] = env->getMethodID(cls, "getA", "()[D");
              mids$[mid_getSupportedNames_d2c8eb4129821f0e] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_getZenithDelay_be783177b060994b] = env->getMethodID(cls, "getZenithDelay", "()[D");
              mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_loadViennaCoefficients_ff7cb6c242604316] = env->getMethodID(cls, "loadViennaCoefficients", "()V");
              mids$[mid_loadViennaCoefficients_d3c621492f146ad9] = env->getMethodID(cls, "loadViennaCoefficients", "(Lorg/orekit/time/DateTimeComponents;)V");
              mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(jdouble a0, jdouble a1, const ::org::orekit::models::earth::troposphere::ViennaModelType & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_78b7236f6301a45c, a0, a1, a2.this$)) {}

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::troposphere::ViennaModelType & a3) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_546546d83e2025a2, a0.this$, a1, a2, a3.this$)) {}

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::troposphere::ViennaModelType & a3, const ::org::orekit::data::DataProvidersManager & a4) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_eae678247058e615, a0.this$, a1, a2, a3.this$, a4.this$)) {}

          JArray< jdouble > ViennaModelCoefficientsLoader::getA() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getA_be783177b060994b]));
          }

          ::java::lang::String ViennaModelCoefficientsLoader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_d2c8eb4129821f0e]));
          }

          JArray< jdouble > ViennaModelCoefficientsLoader::getZenithDelay() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getZenithDelay_be783177b060994b]));
          }

          void ViennaModelCoefficientsLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
          }

          void ViennaModelCoefficientsLoader::loadViennaCoefficients() const
          {
            env->callVoidMethod(this$, mids$[mid_loadViennaCoefficients_ff7cb6c242604316]);
          }

          void ViennaModelCoefficientsLoader::loadViennaCoefficients(const ::org::orekit::time::DateTimeComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_loadViennaCoefficients_d3c621492f146ad9], a0.this$);
          }

          jboolean ViennaModelCoefficientsLoader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_eee3de00fe971136]);
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
          static PyObject *t_ViennaModelCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaModelCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaModelCoefficientsLoader_init_(t_ViennaModelCoefficientsLoader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaModelCoefficientsLoader_getA(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_getSupportedNames(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_getZenithDelay(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_loadData(t_ViennaModelCoefficientsLoader *self, PyObject *args);
          static PyObject *t_ViennaModelCoefficientsLoader_loadViennaCoefficients(t_ViennaModelCoefficientsLoader *self, PyObject *args);
          static PyObject *t_ViennaModelCoefficientsLoader_stillAcceptsData(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_get__a(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyObject *t_ViennaModelCoefficientsLoader_get__supportedNames(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyObject *t_ViennaModelCoefficientsLoader_get__zenithDelay(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyGetSetDef t_ViennaModelCoefficientsLoader__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, a),
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, supportedNames),
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, zenithDelay),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaModelCoefficientsLoader__methods_[] = {
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getA, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getZenithDelay, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, loadViennaCoefficients, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaModelCoefficientsLoader)[] = {
            { Py_tp_methods, t_ViennaModelCoefficientsLoader__methods_ },
            { Py_tp_init, (void *) t_ViennaModelCoefficientsLoader_init_ },
            { Py_tp_getset, t_ViennaModelCoefficientsLoader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaModelCoefficientsLoader)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(ViennaModelCoefficientsLoader, t_ViennaModelCoefficientsLoader, ViennaModelCoefficientsLoader);

          void t_ViennaModelCoefficientsLoader::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaModelCoefficientsLoader), &PY_TYPE_DEF(ViennaModelCoefficientsLoader), module, "ViennaModelCoefficientsLoader", 0);
          }

          void t_ViennaModelCoefficientsLoader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "class_", make_descriptor(ViennaModelCoefficientsLoader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "wrapfn_", make_descriptor(t_ViennaModelCoefficientsLoader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "boxfn_", make_descriptor(boxObject));
            env->getClass(ViennaModelCoefficientsLoader::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*ViennaModelCoefficientsLoader::DEFAULT_SUPPORTED_NAMES)));
          }

          static PyObject *t_ViennaModelCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaModelCoefficientsLoader::initializeClass, 1)))
              return NULL;
            return t_ViennaModelCoefficientsLoader::wrap_Object(ViennaModelCoefficientsLoader(((t_ViennaModelCoefficientsLoader *) arg)->object.this$));
          }
          static PyObject *t_ViennaModelCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaModelCoefficientsLoader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaModelCoefficientsLoader_init_(t_ViennaModelCoefficientsLoader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::troposphere::ViennaModelType a2((jobject) NULL);
                PyTypeObject **p2;
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "DDK", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::troposphere::ViennaModelType a3((jobject) NULL);
                PyTypeObject **p3;
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sDDK", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::troposphere::ViennaModelType a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::data::DataProvidersManager a4((jobject) NULL);
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sDDKk", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_, &a4))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2, a3, a4));
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

          static PyObject *t_ViennaModelCoefficientsLoader_getA(t_ViennaModelCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getA());
            return result.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_getSupportedNames(t_ViennaModelCoefficientsLoader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_getZenithDelay(t_ViennaModelCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getZenithDelay());
            return result.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_loadData(t_ViennaModelCoefficientsLoader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "loadData", args);
            return NULL;
          }

          static PyObject *t_ViennaModelCoefficientsLoader_loadViennaCoefficients(t_ViennaModelCoefficientsLoader *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                OBJ_CALL(self->object.loadViennaCoefficients());
                Py_RETURN_NONE;
              }
              break;
             case 1:
              {
                ::org::orekit::time::DateTimeComponents a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::DateTimeComponents::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.loadViennaCoefficients(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "loadViennaCoefficients", args);
            return NULL;
          }

          static PyObject *t_ViennaModelCoefficientsLoader_stillAcceptsData(t_ViennaModelCoefficientsLoader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__a(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getA());
            return value.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__supportedNames(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__zenithDelay(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getZenithDelay());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/TimeSpanParametricAcceleration.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *TimeSpanParametricAcceleration::class$ = NULL;
        jmethodID *TimeSpanParametricAcceleration::mids$ = NULL;
        bool TimeSpanParametricAcceleration::live$ = false;
        ::java::lang::String *TimeSpanParametricAcceleration::DATE_AFTER = NULL;
        ::java::lang::String *TimeSpanParametricAcceleration::DATE_BEFORE = NULL;

        jclass TimeSpanParametricAcceleration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/TimeSpanParametricAcceleration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d120eee40e024d34] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZLorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_init$_fb104f3162f22c26] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_addAccelerationModelValidAfter_97826c43d9cbc7e2] = env->getMethodID(cls, "addAccelerationModelValidAfter", "(Lorg/orekit/forces/empirical/AccelerationModel;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addAccelerationModelValidBefore_97826c43d9cbc7e2] = env->getMethodID(cls, "addAccelerationModelValidBefore", "(Lorg/orekit/forces/empirical/AccelerationModel;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_extractAccelerationModelRange_d943d113c5f78644] = env->getMethodID(cls, "extractAccelerationModelRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_extractParameters_f6f6c8fcf1e496fb] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
            mids$[mid_extractParameters_f4e70a6b1a1cf5f6] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAccelerationModel_871196f960e454d6] = env->getMethodID(cls, "getAccelerationModel", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/empirical/AccelerationModel;");
            mids$[mid_getAccelerationModelSpan_7b19e06f3155cde2] = env->getMethodID(cls, "getAccelerationModelSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFirstSpan_ea49fa2ad441b95d] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
            DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TimeSpanParametricAcceleration::TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jboolean a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d120eee40e024d34, a0.this$, a1, a2.this$)) {}

        TimeSpanParametricAcceleration::TimeSpanParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb104f3162f22c26, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeSpanParametricAcceleration::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeSpanParametricAcceleration::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        void TimeSpanParametricAcceleration::addAccelerationModelValidAfter(const ::org::orekit::forces::empirical::AccelerationModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAccelerationModelValidAfter_97826c43d9cbc7e2], a0.this$, a1.this$);
        }

        void TimeSpanParametricAcceleration::addAccelerationModelValidBefore(const ::org::orekit::forces::empirical::AccelerationModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAccelerationModelValidBefore_97826c43d9cbc7e2], a0.this$, a1.this$);
        }

        jboolean TimeSpanParametricAcceleration::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::org::orekit::utils::TimeSpanMap TimeSpanParametricAcceleration::extractAccelerationModelRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractAccelerationModelRange_d943d113c5f78644], a0.this$, a1.this$));
        }

        JArray< jdouble > TimeSpanParametricAcceleration::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_f6f6c8fcf1e496fb], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanParametricAcceleration::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_f4e70a6b1a1cf5f6], a0.this$, a1.this$));
        }

        ::org::orekit::forces::empirical::AccelerationModel TimeSpanParametricAcceleration::getAccelerationModel(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::forces::empirical::AccelerationModel(env->callObjectMethod(this$, mids$[mid_getAccelerationModel_871196f960e454d6], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanParametricAcceleration::getAccelerationModelSpan(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getAccelerationModelSpan_7b19e06f3155cde2], a0.this$));
        }

        ::java::util::stream::Stream TimeSpanParametricAcceleration::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
        }

        ::java::util::stream::Stream TimeSpanParametricAcceleration::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap$Span TimeSpanParametricAcceleration::getFirstSpan() const
        {
          return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_ea49fa2ad441b95d]));
        }

        ::java::util::List TimeSpanParametricAcceleration::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        void TimeSpanParametricAcceleration::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
        static PyObject *t_TimeSpanParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TimeSpanParametricAcceleration_init_(t_TimeSpanParametricAcceleration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TimeSpanParametricAcceleration_acceleration(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidAfter(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidBefore(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_dependsOnPositionOnly(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_extractAccelerationModelRange(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_extractParameters(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModel(t_TimeSpanParametricAcceleration *self, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModelSpan(t_TimeSpanParametricAcceleration *self, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_getEventDetectors(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_getFieldEventDetectors(t_TimeSpanParametricAcceleration *self, PyObject *arg);
        static PyObject *t_TimeSpanParametricAcceleration_getFirstSpan(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_getParametersDrivers(t_TimeSpanParametricAcceleration *self);
        static PyObject *t_TimeSpanParametricAcceleration_init(t_TimeSpanParametricAcceleration *self, PyObject *args);
        static PyObject *t_TimeSpanParametricAcceleration_get__eventDetectors(t_TimeSpanParametricAcceleration *self, void *data);
        static PyObject *t_TimeSpanParametricAcceleration_get__firstSpan(t_TimeSpanParametricAcceleration *self, void *data);
        static PyObject *t_TimeSpanParametricAcceleration_get__parametersDrivers(t_TimeSpanParametricAcceleration *self, void *data);
        static PyGetSetDef t_TimeSpanParametricAcceleration__fields_[] = {
          DECLARE_GET_FIELD(t_TimeSpanParametricAcceleration, eventDetectors),
          DECLARE_GET_FIELD(t_TimeSpanParametricAcceleration, firstSpan),
          DECLARE_GET_FIELD(t_TimeSpanParametricAcceleration, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeSpanParametricAcceleration__methods_[] = {
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, addAccelerationModelValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, addAccelerationModelValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, extractAccelerationModelRange, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, extractParameters, METH_VARARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getAccelerationModel, METH_O),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getAccelerationModelSpan, METH_O),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getFirstSpan, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_TimeSpanParametricAcceleration, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeSpanParametricAcceleration)[] = {
          { Py_tp_methods, t_TimeSpanParametricAcceleration__methods_ },
          { Py_tp_init, (void *) t_TimeSpanParametricAcceleration_init_ },
          { Py_tp_getset, t_TimeSpanParametricAcceleration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeSpanParametricAcceleration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeSpanParametricAcceleration, t_TimeSpanParametricAcceleration, TimeSpanParametricAcceleration);

        void t_TimeSpanParametricAcceleration::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeSpanParametricAcceleration), &PY_TYPE_DEF(TimeSpanParametricAcceleration), module, "TimeSpanParametricAcceleration", 0);
        }

        void t_TimeSpanParametricAcceleration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "class_", make_descriptor(TimeSpanParametricAcceleration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "wrapfn_", make_descriptor(t_TimeSpanParametricAcceleration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "boxfn_", make_descriptor(boxObject));
          env->getClass(TimeSpanParametricAcceleration::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "DATE_AFTER", make_descriptor(j2p(*TimeSpanParametricAcceleration::DATE_AFTER)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanParametricAcceleration), "DATE_BEFORE", make_descriptor(j2p(*TimeSpanParametricAcceleration::DATE_BEFORE)));
        }

        static PyObject *t_TimeSpanParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeSpanParametricAcceleration::initializeClass, 1)))
            return NULL;
          return t_TimeSpanParametricAcceleration::wrap_Object(TimeSpanParametricAcceleration(((t_TimeSpanParametricAcceleration *) arg)->object.this$));
        }
        static PyObject *t_TimeSpanParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeSpanParametricAcceleration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TimeSpanParametricAcceleration_init_(t_TimeSpanParametricAcceleration *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              TimeSpanParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kZk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = TimeSpanParametricAcceleration(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              TimeSpanParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = TimeSpanParametricAcceleration(a0, a1, a2));
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

        static PyObject *t_TimeSpanParametricAcceleration_acceleration(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidAfter(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::forces::empirical::AccelerationModel a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::empirical::AccelerationModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAccelerationModelValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAccelerationModelValidAfter", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_addAccelerationModelValidBefore(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::forces::empirical::AccelerationModel a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::empirical::AccelerationModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAccelerationModelValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAccelerationModelValidBefore", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_dependsOnPositionOnly(t_TimeSpanParametricAcceleration *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_TimeSpanParametricAcceleration_extractAccelerationModelRange(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.extractAccelerationModelRange(a0, a1));
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::orekit::forces::empirical::PY_TYPE(AccelerationModel));
          }

          PyErr_SetArgsError((PyObject *) self, "extractAccelerationModelRange", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_extractParameters(t_TimeSpanParametricAcceleration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return result.wrap();
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.extractParameters(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModel(t_TimeSpanParametricAcceleration *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::forces::empirical::AccelerationModel result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAccelerationModel(a0));
            return ::org::orekit::forces::empirical::t_AccelerationModel::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAccelerationModel", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getAccelerationModelSpan(t_TimeSpanParametricAcceleration *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAccelerationModelSpan(a0));
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::empirical::PY_TYPE(AccelerationModel));
          }

          PyErr_SetArgsError((PyObject *) self, "getAccelerationModelSpan", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getEventDetectors(t_TimeSpanParametricAcceleration *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_TimeSpanParametricAcceleration_getFieldEventDetectors(t_TimeSpanParametricAcceleration *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_TimeSpanParametricAcceleration_getFirstSpan(t_TimeSpanParametricAcceleration *self)
        {
          ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::forces::empirical::PY_TYPE(AccelerationModel));
        }

        static PyObject *t_TimeSpanParametricAcceleration_getParametersDrivers(t_TimeSpanParametricAcceleration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeSpanParametricAcceleration_init(t_TimeSpanParametricAcceleration *self, PyObject *args)
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

        static PyObject *t_TimeSpanParametricAcceleration_get__eventDetectors(t_TimeSpanParametricAcceleration *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_TimeSpanParametricAcceleration_get__firstSpan(t_TimeSpanParametricAcceleration *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstSpan());
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
        }

        static PyObject *t_TimeSpanParametricAcceleration_get__parametersDrivers(t_TimeSpanParametricAcceleration *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmOrbitCorrectionData::class$ = NULL;
              jmethodID *RtcmOrbitCorrectionData::mids$ = NULL;
              bool RtcmOrbitCorrectionData::live$ = false;

              jclass RtcmOrbitCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGnssIod_d6ab429752e7c267] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_a878e7837a73c516] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setGnssIod_8fd427ab23829bf5] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_cdebebf3a62a7ec1] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmOrbitCorrectionData::RtcmOrbitCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jint RtcmOrbitCorrectionData::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_d6ab429752e7c267]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection RtcmOrbitCorrectionData::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_a878e7837a73c516]));
              }

              void RtcmOrbitCorrectionData::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_8fd427ab23829bf5], a0);
              }

              void RtcmOrbitCorrectionData::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
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
              static PyObject *t_RtcmOrbitCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmOrbitCorrectionData_init_(t_RtcmOrbitCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmOrbitCorrectionData_getGnssIod(t_RtcmOrbitCorrectionData *self);
              static PyObject *t_RtcmOrbitCorrectionData_getOrbitCorrection(t_RtcmOrbitCorrectionData *self);
              static PyObject *t_RtcmOrbitCorrectionData_setGnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionData_setOrbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionData_get__gnssIod(t_RtcmOrbitCorrectionData *self, void *data);
              static int t_RtcmOrbitCorrectionData_set__gnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmOrbitCorrectionData_get__orbitCorrection(t_RtcmOrbitCorrectionData *self, void *data);
              static int t_RtcmOrbitCorrectionData_set__orbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmOrbitCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmOrbitCorrectionData, gnssIod),
                DECLARE_GETSET_FIELD(t_RtcmOrbitCorrectionData, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmOrbitCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, setGnssIod, METH_O),
                DECLARE_METHOD(t_RtcmOrbitCorrectionData, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmOrbitCorrectionData)[] = {
                { Py_tp_methods, t_RtcmOrbitCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmOrbitCorrectionData_init_ },
                { Py_tp_getset, t_RtcmOrbitCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmOrbitCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmOrbitCorrectionData, t_RtcmOrbitCorrectionData, RtcmOrbitCorrectionData);

              void t_RtcmOrbitCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmOrbitCorrectionData), &PY_TYPE_DEF(RtcmOrbitCorrectionData), module, "RtcmOrbitCorrectionData", 0);
              }

              void t_RtcmOrbitCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionData), "class_", make_descriptor(RtcmOrbitCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionData), "wrapfn_", make_descriptor(t_RtcmOrbitCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmOrbitCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmOrbitCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmOrbitCorrectionData::wrap_Object(RtcmOrbitCorrectionData(((t_RtcmOrbitCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmOrbitCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmOrbitCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmOrbitCorrectionData_init_(t_RtcmOrbitCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmOrbitCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmOrbitCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmOrbitCorrectionData_getGnssIod(t_RtcmOrbitCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmOrbitCorrectionData_getOrbitCorrection(t_RtcmOrbitCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmOrbitCorrectionData_setGnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg)
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

              static PyObject *t_RtcmOrbitCorrectionData_setOrbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg)
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

              static PyObject *t_RtcmOrbitCorrectionData_get__gnssIod(t_RtcmOrbitCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmOrbitCorrectionData_set__gnssIod(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data)
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

              static PyObject *t_RtcmOrbitCorrectionData_get__orbitCorrection(t_RtcmOrbitCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_RtcmOrbitCorrectionData_set__orbitCorrection(t_RtcmOrbitCorrectionData *self, PyObject *arg, void *data)
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
#include "org/orekit/propagation/conversion/GraggBulirschStoerIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
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
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GraggBulirschStoerIntegratorBuilder::GraggBulirschStoerIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator GraggBulirschStoerIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_31c1ebb8b9cbaedc], a0.this$, a1.this$));
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
#include "org/orekit/estimation/sequential/SemiAnalyticalMeasurementHandler.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalMeasurementHandler::class$ = NULL;
        jmethodID *SemiAnalyticalMeasurementHandler::mids$ = NULL;
        bool SemiAnalyticalMeasurementHandler::live$ = false;

        jclass SemiAnalyticalMeasurementHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalMeasurementHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_038251d17f092e03] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/sequential/SemiAnalyticalProcess;Lorg/hipparchus/filtering/kalman/KalmanFilter;Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_36616686aa8cda1a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/sequential/SemiAnalyticalProcess;Lorg/hipparchus/filtering/kalman/KalmanFilter;Ljava/util/List;Lorg/orekit/time/AbsoluteDate;Z)V");
            mids$[mid_handleStep_9db9d9fe85cac7f9] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalMeasurementHandler::SemiAnalyticalMeasurementHandler(const ::org::orekit::estimation::sequential::SemiAnalyticalProcess & a0, const ::org::hipparchus::filtering::kalman::KalmanFilter & a1, const ::java::util::List & a2, const ::org::orekit::time::AbsoluteDate & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_038251d17f092e03, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        SemiAnalyticalMeasurementHandler::SemiAnalyticalMeasurementHandler(const ::org::orekit::estimation::sequential::SemiAnalyticalProcess & a0, const ::org::hipparchus::filtering::kalman::KalmanFilter & a1, const ::java::util::List & a2, const ::org::orekit::time::AbsoluteDate & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_36616686aa8cda1a, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        void SemiAnalyticalMeasurementHandler::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_9db9d9fe85cac7f9], a0.this$);
        }

        void SemiAnalyticalMeasurementHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
      namespace sequential {
        static PyObject *t_SemiAnalyticalMeasurementHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalMeasurementHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalMeasurementHandler_init_(t_SemiAnalyticalMeasurementHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalMeasurementHandler_handleStep(t_SemiAnalyticalMeasurementHandler *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalMeasurementHandler_init(t_SemiAnalyticalMeasurementHandler *self, PyObject *args);

        static PyMethodDef t_SemiAnalyticalMeasurementHandler__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, handleStep, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalMeasurementHandler)[] = {
          { Py_tp_methods, t_SemiAnalyticalMeasurementHandler__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalMeasurementHandler_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalMeasurementHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalMeasurementHandler, t_SemiAnalyticalMeasurementHandler, SemiAnalyticalMeasurementHandler);

        void t_SemiAnalyticalMeasurementHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalMeasurementHandler), &PY_TYPE_DEF(SemiAnalyticalMeasurementHandler), module, "SemiAnalyticalMeasurementHandler", 0);
        }

        void t_SemiAnalyticalMeasurementHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalMeasurementHandler), "class_", make_descriptor(SemiAnalyticalMeasurementHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalMeasurementHandler), "wrapfn_", make_descriptor(t_SemiAnalyticalMeasurementHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalMeasurementHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalMeasurementHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalMeasurementHandler::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalMeasurementHandler::wrap_Object(SemiAnalyticalMeasurementHandler(((t_SemiAnalyticalMeasurementHandler *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalMeasurementHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalMeasurementHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalMeasurementHandler_init_(t_SemiAnalyticalMeasurementHandler *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::estimation::sequential::SemiAnalyticalProcess a0((jobject) NULL);
              ::org::hipparchus::filtering::kalman::KalmanFilter a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              SemiAnalyticalMeasurementHandler object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::estimation::sequential::SemiAnalyticalProcess::initializeClass, ::org::hipparchus::filtering::kalman::KalmanFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::t_KalmanFilter::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3))
              {
                INT_CALL(object = SemiAnalyticalMeasurementHandler(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::estimation::sequential::SemiAnalyticalProcess a0((jobject) NULL);
              ::org::hipparchus::filtering::kalman::KalmanFilter a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              jboolean a4;
              SemiAnalyticalMeasurementHandler object((jobject) NULL);

              if (!parseArgs(args, "kKKkZ", ::org::orekit::estimation::sequential::SemiAnalyticalProcess::initializeClass, ::org::hipparchus::filtering::kalman::KalmanFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::t_KalmanFilter::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
              {
                INT_CALL(object = SemiAnalyticalMeasurementHandler(a0, a1, a2, a3, a4));
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

        static PyObject *t_SemiAnalyticalMeasurementHandler_handleStep(t_SemiAnalyticalMeasurementHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalMeasurementHandler_init(t_SemiAnalyticalMeasurementHandler *self, PyObject *args)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonStateJacobian.h"
#include "org/orekit/utils/StateJacobian.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonStateJacobian::class$ = NULL;
      jmethodID *PythonStateJacobian::mids$ = NULL;
      bool PythonStateJacobian::live$ = false;

      jclass PythonStateJacobian::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonStateJacobian");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_9f1f355491808400] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStateJacobian::PythonStateJacobian() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonStateJacobian::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonStateJacobian::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonStateJacobian::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonStateJacobian_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStateJacobian_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStateJacobian_init_(t_PythonStateJacobian *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStateJacobian_finalize(t_PythonStateJacobian *self);
      static PyObject *t_PythonStateJacobian_pythonExtension(t_PythonStateJacobian *self, PyObject *args);
      static void JNICALL t_PythonStateJacobian_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStateJacobian_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonStateJacobian_get__self(t_PythonStateJacobian *self, void *data);
      static PyGetSetDef t_PythonStateJacobian__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStateJacobian, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStateJacobian__methods_[] = {
        DECLARE_METHOD(t_PythonStateJacobian, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateJacobian, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateJacobian, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStateJacobian, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStateJacobian)[] = {
        { Py_tp_methods, t_PythonStateJacobian__methods_ },
        { Py_tp_init, (void *) t_PythonStateJacobian_init_ },
        { Py_tp_getset, t_PythonStateJacobian__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStateJacobian)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStateJacobian, t_PythonStateJacobian, PythonStateJacobian);

      void t_PythonStateJacobian::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStateJacobian), &PY_TYPE_DEF(PythonStateJacobian), module, "PythonStateJacobian", 1);
      }

      void t_PythonStateJacobian::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "class_", make_descriptor(PythonStateJacobian::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "wrapfn_", make_descriptor(t_PythonStateJacobian::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStateJacobian::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonStateJacobian_pythonDecRef0 },
          { "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D", (void *) t_PythonStateJacobian_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonStateJacobian_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStateJacobian::initializeClass, 1)))
          return NULL;
        return t_PythonStateJacobian::wrap_Object(PythonStateJacobian(((t_PythonStateJacobian *) arg)->object.this$));
      }
      static PyObject *t_PythonStateJacobian_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStateJacobian::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStateJacobian_init_(t_PythonStateJacobian *self, PyObject *args, PyObject *kwds)
      {
        PythonStateJacobian object((jobject) NULL);

        INT_CALL(object = PythonStateJacobian());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStateJacobian_finalize(t_PythonStateJacobian *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStateJacobian_pythonExtension(t_PythonStateJacobian *self, PyObject *args)
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

      static void JNICALL t_PythonStateJacobian_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonStateJacobian_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonStateJacobian_get__self(t_PythonStateJacobian *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
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
                  mids$[mid_init$_3fedc1babc120c04] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_writeSegmentContent_305aa7864995b122] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_ACM_VERS = env->getStaticDoubleField(cls, "CCSDS_ACM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmWriter::AcmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_3fedc1babc120c04, a0.this$, a1.this$)) {}
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
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDHeader$DataType::class$ = NULL;
        jmethodID *CRDHeader$DataType::mids$ = NULL;
        bool CRDHeader$DataType::live$ = false;
        CRDHeader$DataType *CRDHeader$DataType::FULL_RATE = NULL;
        CRDHeader$DataType *CRDHeader$DataType::NORMAL_POINT = NULL;
        CRDHeader$DataType *CRDHeader$DataType::SAMPLED_ENGIEERING = NULL;

        jclass CRDHeader$DataType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDHeader$DataType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDataType_a50ea0afb412449f] = env->getStaticMethodID(cls, "getDataType", "(I)Lorg/orekit/files/ilrs/CRDHeader$DataType;");
            mids$[mid_getIndicator_d6ab429752e7c267] = env->getMethodID(cls, "getIndicator", "()I");
            mids$[mid_valueOf_c1c818f24ac72769] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDHeader$DataType;");
            mids$[mid_values_ca2db5aa479af477] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/CRDHeader$DataType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            FULL_RATE = new CRDHeader$DataType(env->getStaticObjectField(cls, "FULL_RATE", "Lorg/orekit/files/ilrs/CRDHeader$DataType;"));
            NORMAL_POINT = new CRDHeader$DataType(env->getStaticObjectField(cls, "NORMAL_POINT", "Lorg/orekit/files/ilrs/CRDHeader$DataType;"));
            SAMPLED_ENGIEERING = new CRDHeader$DataType(env->getStaticObjectField(cls, "SAMPLED_ENGIEERING", "Lorg/orekit/files/ilrs/CRDHeader$DataType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDHeader$DataType CRDHeader$DataType::getDataType(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$DataType(env->callStaticObjectMethod(cls, mids$[mid_getDataType_a50ea0afb412449f], a0));
        }

        jint CRDHeader$DataType::getIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getIndicator_d6ab429752e7c267]);
        }

        CRDHeader$DataType CRDHeader$DataType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$DataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c1c818f24ac72769], a0.this$));
        }

        JArray< CRDHeader$DataType > CRDHeader$DataType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< CRDHeader$DataType >(env->callStaticObjectMethod(cls, mids$[mid_values_ca2db5aa479af477]));
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
      namespace ilrs {
        static PyObject *t_CRDHeader$DataType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$DataType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$DataType_of_(t_CRDHeader$DataType *self, PyObject *args);
        static PyObject *t_CRDHeader$DataType_getDataType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$DataType_getIndicator(t_CRDHeader$DataType *self);
        static PyObject *t_CRDHeader$DataType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_CRDHeader$DataType_values(PyTypeObject *type);
        static PyObject *t_CRDHeader$DataType_get__indicator(t_CRDHeader$DataType *self, void *data);
        static PyObject *t_CRDHeader$DataType_get__parameters_(t_CRDHeader$DataType *self, void *data);
        static PyGetSetDef t_CRDHeader$DataType__fields_[] = {
          DECLARE_GET_FIELD(t_CRDHeader$DataType, indicator),
          DECLARE_GET_FIELD(t_CRDHeader$DataType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDHeader$DataType__methods_[] = {
          DECLARE_METHOD(t_CRDHeader$DataType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, of_, METH_VARARGS),
          DECLARE_METHOD(t_CRDHeader$DataType, getDataType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, getIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader$DataType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDHeader$DataType)[] = {
          { Py_tp_methods, t_CRDHeader$DataType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_CRDHeader$DataType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDHeader$DataType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(CRDHeader$DataType, t_CRDHeader$DataType, CRDHeader$DataType);
        PyObject *t_CRDHeader$DataType::wrap_Object(const CRDHeader$DataType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$DataType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$DataType *self = (t_CRDHeader$DataType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_CRDHeader$DataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$DataType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$DataType *self = (t_CRDHeader$DataType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_CRDHeader$DataType::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDHeader$DataType), &PY_TYPE_DEF(CRDHeader$DataType), module, "CRDHeader$DataType", 0);
        }

        void t_CRDHeader$DataType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "class_", make_descriptor(CRDHeader$DataType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "wrapfn_", make_descriptor(t_CRDHeader$DataType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRDHeader$DataType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "FULL_RATE", make_descriptor(t_CRDHeader$DataType::wrap_Object(*CRDHeader$DataType::FULL_RATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "NORMAL_POINT", make_descriptor(t_CRDHeader$DataType::wrap_Object(*CRDHeader$DataType::NORMAL_POINT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "SAMPLED_ENGIEERING", make_descriptor(t_CRDHeader$DataType::wrap_Object(*CRDHeader$DataType::SAMPLED_ENGIEERING)));
        }

        static PyObject *t_CRDHeader$DataType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDHeader$DataType::initializeClass, 1)))
            return NULL;
          return t_CRDHeader$DataType::wrap_Object(CRDHeader$DataType(((t_CRDHeader$DataType *) arg)->object.this$));
        }
        static PyObject *t_CRDHeader$DataType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDHeader$DataType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_CRDHeader$DataType_of_(t_CRDHeader$DataType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_CRDHeader$DataType_getDataType(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          CRDHeader$DataType result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$DataType::getDataType(a0));
            return t_CRDHeader$DataType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getDataType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader$DataType_getIndicator(t_CRDHeader$DataType *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader$DataType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          CRDHeader$DataType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$DataType::valueOf(a0));
            return t_CRDHeader$DataType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_CRDHeader$DataType_values(PyTypeObject *type)
        {
          JArray< CRDHeader$DataType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$DataType::values());
          return JArray<jobject>(result.this$).wrap(t_CRDHeader$DataType::wrap_jobject);
        }
        static PyObject *t_CRDHeader$DataType_get__parameters_(t_CRDHeader$DataType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_CRDHeader$DataType_get__indicator(t_CRDHeader$DataType *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIndicator());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/GridCreation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *GridCreation::class$ = NULL;
        jmethodID *GridCreation::mids$ = NULL;
        bool GridCreation::live$ = false;

        jclass GridCreation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/GridCreation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createLinearGrid_f4df05b115f1b51a] = env->getStaticMethodID(cls, "createLinearGrid", "(DDI)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > GridCreation::createLinearGrid(jdouble a0, jdouble a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_createLinearGrid_f4df05b115f1b51a], a0, a1, a2));
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
      namespace utils {
        static PyObject *t_GridCreation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GridCreation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GridCreation_createLinearGrid(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_GridCreation__methods_[] = {
          DECLARE_METHOD(t_GridCreation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridCreation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridCreation, createLinearGrid, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GridCreation)[] = {
          { Py_tp_methods, t_GridCreation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GridCreation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GridCreation, t_GridCreation, GridCreation);

        void t_GridCreation::install(PyObject *module)
        {
          installType(&PY_TYPE(GridCreation), &PY_TYPE_DEF(GridCreation), module, "GridCreation", 0);
        }

        void t_GridCreation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridCreation), "class_", make_descriptor(GridCreation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridCreation), "wrapfn_", make_descriptor(t_GridCreation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridCreation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GridCreation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GridCreation::initializeClass, 1)))
            return NULL;
          return t_GridCreation::wrap_Object(GridCreation(((t_GridCreation *) arg)->object.this$));
        }
        static PyObject *t_GridCreation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GridCreation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GridCreation_createLinearGrid(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jint a2;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "DDI", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::rugged::utils::GridCreation::createLinearGrid(a0, a1, a2));
            return result.wrap();
          }

          PyErr_SetArgsError(type, "createLinearGrid", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldHermiteRuleFactory.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldHermiteRuleFactory::class$ = NULL;
          jmethodID *FieldHermiteRuleFactory::mids$ = NULL;
          bool FieldHermiteRuleFactory::live$ = false;

          jclass FieldHermiteRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldHermiteRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_c07c8b9364272960] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldHermiteRuleFactory::FieldHermiteRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}
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
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldHermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldHermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldHermiteRuleFactory_of_(t_FieldHermiteRuleFactory *self, PyObject *args);
          static int t_FieldHermiteRuleFactory_init_(t_FieldHermiteRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldHermiteRuleFactory_get__parameters_(t_FieldHermiteRuleFactory *self, void *data);
          static PyGetSetDef t_FieldHermiteRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldHermiteRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldHermiteRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldHermiteRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldHermiteRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldHermiteRuleFactory, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldHermiteRuleFactory)[] = {
            { Py_tp_methods, t_FieldHermiteRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldHermiteRuleFactory_init_ },
            { Py_tp_getset, t_FieldHermiteRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldHermiteRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldHermiteRuleFactory, t_FieldHermiteRuleFactory, FieldHermiteRuleFactory);
          PyObject *t_FieldHermiteRuleFactory::wrap_Object(const FieldHermiteRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldHermiteRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldHermiteRuleFactory *self = (t_FieldHermiteRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldHermiteRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldHermiteRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldHermiteRuleFactory *self = (t_FieldHermiteRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldHermiteRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldHermiteRuleFactory), &PY_TYPE_DEF(FieldHermiteRuleFactory), module, "FieldHermiteRuleFactory", 0);
          }

          void t_FieldHermiteRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "class_", make_descriptor(FieldHermiteRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "wrapfn_", make_descriptor(t_FieldHermiteRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldHermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldHermiteRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldHermiteRuleFactory::wrap_Object(FieldHermiteRuleFactory(((t_FieldHermiteRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldHermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldHermiteRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldHermiteRuleFactory_of_(t_FieldHermiteRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldHermiteRuleFactory_init_(t_FieldHermiteRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldHermiteRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldHermiteRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_FieldHermiteRuleFactory_get__parameters_(t_FieldHermiteRuleFactory *self, void *data)
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
#include "org/hipparchus/linear/AbstractFieldMatrix.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AbstractFieldMatrix::class$ = NULL;
      jmethodID *AbstractFieldMatrix::mids$ = NULL;
      bool AbstractFieldMatrix::live$ = false;

      jclass AbstractFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AbstractFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_b180f987191970ad] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_8de38856a6ebea36] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_02883dbbe5db44ac] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copySubMatrix_fdff770d906e9d35] = env->getMethodID(cls, "copySubMatrix", "([I[I[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_copySubMatrix_8a7c61f1af16bed4] = env->getMethodID(cls, "copySubMatrix", "(IIII[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_createMatrix_71a6a4df501a3e03] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getColumn_9410bfc023ff0ee6] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_338ea041dc2f9292] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_229c51f1f7aa44e3] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_5d4bb4c2b3c3b853] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_a81b5a6b0760a7e3] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getRow_9410bfc023ff0ee6] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_338ea041dc2f9292] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_229c51f1f7aa44e3] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_9ff0154dcafe800b] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSubMatrix_1acf4e5d8c70f8c1] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getTrace_f6328613456309a1] = env->getMethodID(cls, "getTrace", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isSquare_eee3de00fe971136] = env->getMethodID(cls, "isSquare", "()Z");
          mids$[mid_multiply_b180f987191970ad] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_8de38856a6ebea36] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_operate_da4e13f241d172b2] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_operate_17fc5256c635037d] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_power_338ea041dc2f9292] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_da4e13f241d172b2] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_b180f987191970ad] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_17fc5256c635037d] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_scalarAdd_8a90f00b11f69825] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_8a90f00b11f69825] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_1d7c60cf27d9f179] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_87d8f99edb7a39ea] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_9f6a0cf723c2763b] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_8de38856a6ebea36] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_1d7c60cf27d9f179] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_87d8f99edb7a39ea] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_9f6a0cf723c2763b] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_24d277c6faa30a04] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_b180f987191970ad] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_transpose_02883dbbe5db44ac] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_9511e2a4670e260a] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_718adedab84e4562] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_4e13f6cf4599797e] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_8e3632311c5af3b6] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_9511e2a4670e260a] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_718adedab84e4562] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_4e13f6cf4599797e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_8e3632311c5af3b6] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_9511e2a4670e260a] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_718adedab84e4562] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_4e13f6cf4599797e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_8e3632311c5af3b6] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkMultiplicationCompatible_87e4c06eff884f7d] = env->getMethodID(cls, "checkMultiplicationCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_checkRowIndex_8fd427ab23829bf5] = env->getMethodID(cls, "checkRowIndex", "(I)V");
          mids$[mid_checkColumnIndex_8fd427ab23829bf5] = env->getMethodID(cls, "checkColumnIndex", "(I)V");
          mids$[mid_checkSubMatrixIndex_6e41e5beb7528b4b] = env->getMethodID(cls, "checkSubMatrixIndex", "([I[I)V");
          mids$[mid_checkSubMatrixIndex_bad5463a48cbddf0] = env->getMethodID(cls, "checkSubMatrixIndex", "(IIII)V");
          mids$[mid_checkAdditionCompatible_87e4c06eff884f7d] = env->getMethodID(cls, "checkAdditionCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_checkSubtractionCompatible_87e4c06eff884f7d] = env->getMethodID(cls, "checkSubtractionCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_extractField_794f62224fd08271] = env->getStaticMethodID(cls, "extractField", "([[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/Field;");
          mids$[mid_extractField_abe4b1c7aee06125] = env->getStaticMethodID(cls, "extractField", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/Field;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::add(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_b180f987191970ad], a0.this$));
      }

      void AbstractFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_02883dbbe5db44ac]));
      }

      void AbstractFieldMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_fdff770d906e9d35], a0.this$, a1.this$, a2.this$);
      }

      void AbstractFieldMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< ::org::hipparchus::FieldElement > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_8a7c61f1af16bed4], a0, a1, a2, a3, a4.this$);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_71a6a4df501a3e03], a0, a1));
      }

      jboolean AbstractFieldMatrix::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_9410bfc023ff0ee6], a0));
      }

      jint AbstractFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_338ea041dc2f9292], a0));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_229c51f1f7aa44e3], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > AbstractFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_5d4bb4c2b3c3b853]));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_a81b5a6b0760a7e3], a0, a1));
      }

      ::org::hipparchus::Field AbstractFieldMatrix::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_9410bfc023ff0ee6], a0));
      }

      jint AbstractFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_338ea041dc2f9292], a0));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_229c51f1f7aa44e3], a0));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_9ff0154dcafe800b], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_1acf4e5d8c70f8c1], a0, a1, a2, a3));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::getTrace() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getTrace_f6328613456309a1]));
      }

      jint AbstractFieldMatrix::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      jboolean AbstractFieldMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_eee3de00fe971136]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::multiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_b180f987191970ad], a0.this$));
      }

      void AbstractFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_da4e13f241d172b2], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::operate(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_operate_17fc5256c635037d], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::power(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_power_338ea041dc2f9292], a0));
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_da4e13f241d172b2], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_b180f987191970ad], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_preMultiply_17fc5256c635037d], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_8a90f00b11f69825], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_8a90f00b11f69825], a0.this$));
      }

      void AbstractFieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_1d7c60cf27d9f179], a0, a1.this$);
      }

      void AbstractFieldMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_87d8f99edb7a39ea], a0, a1.this$);
      }

      void AbstractFieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_9f6a0cf723c2763b], a0, a1.this$);
      }

      void AbstractFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_8de38856a6ebea36], a0, a1, a2.this$);
      }

      void AbstractFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_1d7c60cf27d9f179], a0, a1.this$);
      }

      void AbstractFieldMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_87d8f99edb7a39ea], a0, a1.this$);
      }

      void AbstractFieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_9f6a0cf723c2763b], a0, a1.this$);
      }

      void AbstractFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_24d277c6faa30a04], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::subtract(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_b180f987191970ad], a0.this$));
      }

      ::java::lang::String AbstractFieldMatrix::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::transpose() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_02883dbbe5db44ac]));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_9511e2a4670e260a], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_718adedab84e4562], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_4e13f6cf4599797e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_8e3632311c5af3b6], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_9511e2a4670e260a], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_718adedab84e4562], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_4e13f6cf4599797e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_8e3632311c5af3b6], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_9511e2a4670e260a], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_718adedab84e4562], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_4e13f6cf4599797e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_8e3632311c5af3b6], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_AbstractFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_of_(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_add(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_addToEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_copy(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_copySubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_createMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_equals(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getColumn(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getColumnDimension(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getColumnMatrix(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getColumnVector(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getData(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getField(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getRow(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getRowDimension(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getRowMatrix(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getRowVector(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getSubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getTrace(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_hashCode(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_isSquare(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_multiply(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_multiplyEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_operate(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_power(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_preMultiply(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_scalarAdd(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_scalarMultiply(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_setColumn(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setColumnMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setColumnVector(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRow(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRowMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRowVector(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setSubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_subtract(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_toString(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_transpose(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_walkInColumnOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_walkInOptimizedOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_walkInRowOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_get__columnDimension(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__data(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__field(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__rowDimension(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__square(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__trace(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__parameters_(t_AbstractFieldMatrix *self, void *data);
      static PyGetSetDef t_AbstractFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, data),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, field),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, square),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, trace),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, add, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRow, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, isSquare, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, multiply, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, power, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, subtract, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldMatrix)[] = {
        { Py_tp_methods, t_AbstractFieldMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldMatrix, t_AbstractFieldMatrix, AbstractFieldMatrix);
      PyObject *t_AbstractFieldMatrix::wrap_Object(const AbstractFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldMatrix *self = (t_AbstractFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldMatrix *self = (t_AbstractFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldMatrix), &PY_TYPE_DEF(AbstractFieldMatrix), module, "AbstractFieldMatrix", 0);
      }

      void t_AbstractFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "class_", make_descriptor(AbstractFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "wrapfn_", make_descriptor(t_AbstractFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldMatrix::wrap_Object(AbstractFieldMatrix(((t_AbstractFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldMatrix_of_(t_AbstractFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldMatrix_add(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_addToEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_copy(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_copySubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< ::org::hipparchus::FieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "[I[I[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< ::org::hipparchus::FieldElement > > a4((jobject) NULL);
            PyTypeObject **p4;

            if (!parseArgs(args, "IIII[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_createMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_equals(t_AbstractFieldMatrix *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_getColumn(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getColumnDimension(t_AbstractFieldMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldMatrix_getColumnMatrix(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getColumnVector(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getData(t_AbstractFieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_AbstractFieldMatrix_getEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getField(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_getRow(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getRowDimension(t_AbstractFieldMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldMatrix_getRowMatrix(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getRowVector(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getSubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getTrace(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrace());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldMatrix_hashCode(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_isSquare(t_AbstractFieldMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AbstractFieldMatrix_multiply(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_multiplyEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_operate(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_power(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_preMultiply(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_scalarAdd(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_scalarMultiply(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumn(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumnMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumnVector(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setRow(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setRowMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setRowVector(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setSubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_subtract(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_toString(t_AbstractFieldMatrix *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_transpose(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_walkInColumnOrder(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_walkInOptimizedOrder(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_walkInRowOrder(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }
      static PyObject *t_AbstractFieldMatrix_get__parameters_(t_AbstractFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldMatrix_get__columnDimension(t_AbstractFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldMatrix_get__data(t_AbstractFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_AbstractFieldMatrix_get__field(t_AbstractFieldMatrix *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldMatrix_get__rowDimension(t_AbstractFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldMatrix_get__square(t_AbstractFieldMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_AbstractFieldMatrix_get__trace(t_AbstractFieldMatrix *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrace());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/InitialGuess.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *InitialGuess::class$ = NULL;
      jmethodID *InitialGuess::mids$ = NULL;
      bool InitialGuess::live$ = false;

      jclass InitialGuess::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/InitialGuess");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_getInitialGuess_be783177b060994b] = env->getMethodID(cls, "getInitialGuess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InitialGuess::InitialGuess(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

      JArray< jdouble > InitialGuess::getInitialGuess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInitialGuess_be783177b060994b]));
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
      static PyObject *t_InitialGuess_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InitialGuess_instance_(PyTypeObject *type, PyObject *arg);
      static int t_InitialGuess_init_(t_InitialGuess *self, PyObject *args, PyObject *kwds);
      static PyObject *t_InitialGuess_getInitialGuess(t_InitialGuess *self);
      static PyObject *t_InitialGuess_get__initialGuess(t_InitialGuess *self, void *data);
      static PyGetSetDef t_InitialGuess__fields_[] = {
        DECLARE_GET_FIELD(t_InitialGuess, initialGuess),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InitialGuess__methods_[] = {
        DECLARE_METHOD(t_InitialGuess, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InitialGuess, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InitialGuess, getInitialGuess, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InitialGuess)[] = {
        { Py_tp_methods, t_InitialGuess__methods_ },
        { Py_tp_init, (void *) t_InitialGuess_init_ },
        { Py_tp_getset, t_InitialGuess__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InitialGuess)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InitialGuess, t_InitialGuess, InitialGuess);

      void t_InitialGuess::install(PyObject *module)
      {
        installType(&PY_TYPE(InitialGuess), &PY_TYPE_DEF(InitialGuess), module, "InitialGuess", 0);
      }

      void t_InitialGuess::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InitialGuess), "class_", make_descriptor(InitialGuess::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InitialGuess), "wrapfn_", make_descriptor(t_InitialGuess::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InitialGuess), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InitialGuess_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InitialGuess::initializeClass, 1)))
          return NULL;
        return t_InitialGuess::wrap_Object(InitialGuess(((t_InitialGuess *) arg)->object.this$));
      }
      static PyObject *t_InitialGuess_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InitialGuess::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_InitialGuess_init_(t_InitialGuess *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        InitialGuess object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = InitialGuess(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_InitialGuess_getInitialGuess(t_InitialGuess *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialGuess());
        return result.wrap();
      }

      static PyObject *t_InitialGuess_get__initialGuess(t_InitialGuess *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialGuess());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TTScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *LazyLoadedTimeScales::class$ = NULL;
      jmethodID *LazyLoadedTimeScales::mids$ = NULL;
      bool LazyLoadedTimeScales::live$ = false;

      jclass LazyLoadedTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/LazyLoadedTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9a9df3f1eee81313] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/LazyLoadedEop;)V");
          mids$[mid_addDefaultUTCTAIOffsetsLoaders_ff7cb6c242604316] = env->getMethodID(cls, "addDefaultUTCTAIOffsetsLoaders", "()V");
          mids$[mid_addUTCTAIOffsetsLoader_87c1680ac97bbb89] = env->getMethodID(cls, "addUTCTAIOffsetsLoader", "(Lorg/orekit/time/UTCTAIOffsetsLoader;)V");
          mids$[mid_clearUTCTAIOffsetsLoaders_ff7cb6c242604316] = env->getMethodID(cls, "clearUTCTAIOffsetsLoaders", "()V");
          mids$[mid_getBDT_9d93fd70217d9218] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getGLONASS_98a4c7e041a431de] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_3a2e75d759160885] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_bfc706ac1880dab6] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_03bea9e4eca66482] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_4011a9310ce86043] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_af6710830d0f02e7] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_617450d859ecaf8d] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_0a0f63c3aa49765d] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_d96035eea3611111] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_cfeb575714faef31] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_3b674fc7b42c8f62] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_0287466dc96c535a] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_ff99e037ad2c3870] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_bdbc31f45ed399a7] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_getEopHistory_5f3b1864e8a02d51] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedTimeScales::LazyLoadedTimeScales(const ::org::orekit::frames::LazyLoadedEop & a0) : ::org::orekit::time::AbstractTimeScales(env->newObject(initializeClass, &mids$, mid_init$_9a9df3f1eee81313, a0.this$)) {}

      void LazyLoadedTimeScales::addDefaultUTCTAIOffsetsLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultUTCTAIOffsetsLoaders_ff7cb6c242604316]);
      }

      void LazyLoadedTimeScales::addUTCTAIOffsetsLoader(const ::org::orekit::time::UTCTAIOffsetsLoader & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addUTCTAIOffsetsLoader_87c1680ac97bbb89], a0.this$);
      }

      void LazyLoadedTimeScales::clearUTCTAIOffsetsLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearUTCTAIOffsetsLoaders_ff7cb6c242604316]);
      }

      ::org::orekit::time::BDTScale LazyLoadedTimeScales::getBDT() const
      {
        return ::org::orekit::time::BDTScale(env->callObjectMethod(this$, mids$[mid_getBDT_9d93fd70217d9218]));
      }

      ::org::orekit::time::GLONASSScale LazyLoadedTimeScales::getGLONASS() const
      {
        return ::org::orekit::time::GLONASSScale(env->callObjectMethod(this$, mids$[mid_getGLONASS_98a4c7e041a431de]));
      }

      ::org::orekit::time::GMSTScale LazyLoadedTimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_3a2e75d759160885], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale LazyLoadedTimeScales::getGPS() const
      {
        return ::org::orekit::time::GPSScale(env->callObjectMethod(this$, mids$[mid_getGPS_bfc706ac1880dab6]));
      }

      ::org::orekit::time::GalileoScale LazyLoadedTimeScales::getGST() const
      {
        return ::org::orekit::time::GalileoScale(env->callObjectMethod(this$, mids$[mid_getGST_03bea9e4eca66482]));
      }

      ::org::orekit::time::IRNSSScale LazyLoadedTimeScales::getIRNSS() const
      {
        return ::org::orekit::time::IRNSSScale(env->callObjectMethod(this$, mids$[mid_getIRNSS_4011a9310ce86043]));
      }

      ::org::orekit::time::QZSSScale LazyLoadedTimeScales::getQZSS() const
      {
        return ::org::orekit::time::QZSSScale(env->callObjectMethod(this$, mids$[mid_getQZSS_af6710830d0f02e7]));
      }

      ::org::orekit::time::TAIScale LazyLoadedTimeScales::getTAI() const
      {
        return ::org::orekit::time::TAIScale(env->callObjectMethod(this$, mids$[mid_getTAI_617450d859ecaf8d]));
      }

      ::org::orekit::time::TCBScale LazyLoadedTimeScales::getTCB() const
      {
        return ::org::orekit::time::TCBScale(env->callObjectMethod(this$, mids$[mid_getTCB_0a0f63c3aa49765d]));
      }

      ::org::orekit::time::TCGScale LazyLoadedTimeScales::getTCG() const
      {
        return ::org::orekit::time::TCGScale(env->callObjectMethod(this$, mids$[mid_getTCG_d96035eea3611111]));
      }

      ::org::orekit::time::TDBScale LazyLoadedTimeScales::getTDB() const
      {
        return ::org::orekit::time::TDBScale(env->callObjectMethod(this$, mids$[mid_getTDB_cfeb575714faef31]));
      }

      ::org::orekit::time::TTScale LazyLoadedTimeScales::getTT() const
      {
        return ::org::orekit::time::TTScale(env->callObjectMethod(this$, mids$[mid_getTT_3b674fc7b42c8f62]));
      }

      ::org::orekit::time::UT1Scale LazyLoadedTimeScales::getUT1(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_0287466dc96c535a], a0.this$));
      }

      ::org::orekit::time::UT1Scale LazyLoadedTimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_ff99e037ad2c3870], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale LazyLoadedTimeScales::getUTC() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTC_bdbc31f45ed399a7]));
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
      static PyObject *t_LazyLoadedTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedTimeScales_init_(t_LazyLoadedTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedTimeScales_addDefaultUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self);
      static PyObject *t_LazyLoadedTimeScales_addUTCTAIOffsetsLoader(t_LazyLoadedTimeScales *self, PyObject *arg);
      static PyObject *t_LazyLoadedTimeScales_clearUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self);
      static PyObject *t_LazyLoadedTimeScales_getBDT(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGLONASS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGMST(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGPS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGST(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getIRNSS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getQZSS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTAI(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTCB(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTCG(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTDB(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTT(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getUT1(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getUTC(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_get__bDT(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gLONASS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gPS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gST(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__iRNSS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__qZSS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tAI(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tCB(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tCG(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tDB(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tT(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__uTC(t_LazyLoadedTimeScales *self, void *data);
      static PyGetSetDef t_LazyLoadedTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, bDT),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gLONASS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gPS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gST),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, iRNSS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, qZSS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tAI),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tCB),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tCG),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tDB),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tT),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedTimeScales__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, addDefaultUTCTAIOffsetsLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, addUTCTAIOffsetsLoader, METH_O),
        DECLARE_METHOD(t_LazyLoadedTimeScales, clearUTCTAIOffsetsLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getBDT, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGLONASS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGPS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGST, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getIRNSS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getQZSS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTAI, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTCB, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTCG, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTDB, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTT, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getUTC, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedTimeScales)[] = {
        { Py_tp_methods, t_LazyLoadedTimeScales__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedTimeScales_init_ },
        { Py_tp_getset, t_LazyLoadedTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedTimeScales)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeScales),
        NULL
      };

      DEFINE_TYPE(LazyLoadedTimeScales, t_LazyLoadedTimeScales, LazyLoadedTimeScales);

      void t_LazyLoadedTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedTimeScales), &PY_TYPE_DEF(LazyLoadedTimeScales), module, "LazyLoadedTimeScales", 0);
      }

      void t_LazyLoadedTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "class_", make_descriptor(LazyLoadedTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "wrapfn_", make_descriptor(t_LazyLoadedTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedTimeScales::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedTimeScales::wrap_Object(LazyLoadedTimeScales(((t_LazyLoadedTimeScales *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedTimeScales_init_(t_LazyLoadedTimeScales *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::LazyLoadedEop a0((jobject) NULL);
        LazyLoadedTimeScales object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::LazyLoadedEop::initializeClass, &a0))
        {
          INT_CALL(object = LazyLoadedTimeScales(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedTimeScales_addDefaultUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self)
      {
        OBJ_CALL(self->object.addDefaultUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedTimeScales_addUTCTAIOffsetsLoader(t_LazyLoadedTimeScales *self, PyObject *arg)
      {
        ::org::orekit::time::UTCTAIOffsetsLoader a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UTCTAIOffsetsLoader::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addUTCTAIOffsetsLoader(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addUTCTAIOffsetsLoader", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedTimeScales_clearUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self)
      {
        OBJ_CALL(self->object.clearUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedTimeScales_getBDT(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getBDT());
          return ::org::orekit::time::t_BDTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getBDT", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGLONASS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGLONASS());
          return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGLONASS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGMST(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGMST", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGPS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGPS());
          return ::org::orekit::time::t_GPSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGPS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGST(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGST());
          return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGST", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getIRNSS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIRNSS());
          return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getIRNSS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getQZSS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getQZSS());
          return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getQZSS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTAI(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTAI());
          return ::org::orekit::time::t_TAIScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTAI", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTCB(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTCB());
          return ::org::orekit::time::t_TCBScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTCB", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTCG(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTCG());
          return ::org::orekit::time::t_TCGScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTCG", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTDB(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTDB());
          return ::org::orekit::time::t_TDBScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTDB", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTT(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTT());
          return ::org::orekit::time::t_TTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTT", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getUT1(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::EOPHistory a0((jobject) NULL);
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getUT1(a0));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getUT1(a0, a1));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getUT1", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getUTC(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getUTC());
          return ::org::orekit::time::t_UTCScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getUTC", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_get__bDT(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gLONASS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gPS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gST(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__iRNSS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__qZSS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tAI(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tCB(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tCG(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tDB(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tT(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__uTC(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/PhaseBias.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *PhaseBias::class$ = NULL;
            jmethodID *PhaseBias::mids$ = NULL;
            bool PhaseBias::live$ = false;

            jclass PhaseBias::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/PhaseBias");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_27566aef6e7bbee7] = env->getMethodID(cls, "<init>", "(IZIID)V");
                mids$[mid_getDiscontinuityCounter_d6ab429752e7c267] = env->getMethodID(cls, "getDiscontinuityCounter", "()I");
                mids$[mid_getPhaseBias_9981f74b2d109da6] = env->getMethodID(cls, "getPhaseBias", "()D");
                mids$[mid_getSignalID_d6ab429752e7c267] = env->getMethodID(cls, "getSignalID", "()I");
                mids$[mid_getSignalWideLaneIntegerIndicator_d6ab429752e7c267] = env->getMethodID(cls, "getSignalWideLaneIntegerIndicator", "()I");
                mids$[mid_isSignalInteger_eee3de00fe971136] = env->getMethodID(cls, "isSignalInteger", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PhaseBias::PhaseBias(jint a0, jboolean a1, jint a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_27566aef6e7bbee7, a0, a1, a2, a3, a4)) {}

            jint PhaseBias::getDiscontinuityCounter() const
            {
              return env->callIntMethod(this$, mids$[mid_getDiscontinuityCounter_d6ab429752e7c267]);
            }

            jdouble PhaseBias::getPhaseBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPhaseBias_9981f74b2d109da6]);
            }

            jint PhaseBias::getSignalID() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalID_d6ab429752e7c267]);
            }

            jint PhaseBias::getSignalWideLaneIntegerIndicator() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalWideLaneIntegerIndicator_d6ab429752e7c267]);
            }

            jboolean PhaseBias::isSignalInteger() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isSignalInteger_eee3de00fe971136]);
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
          namespace common {
            static PyObject *t_PhaseBias_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PhaseBias_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PhaseBias_init_(t_PhaseBias *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PhaseBias_getDiscontinuityCounter(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getPhaseBias(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getSignalID(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getSignalWideLaneIntegerIndicator(t_PhaseBias *self);
            static PyObject *t_PhaseBias_isSignalInteger(t_PhaseBias *self);
            static PyObject *t_PhaseBias_get__discontinuityCounter(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__phaseBias(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalID(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalInteger(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalWideLaneIntegerIndicator(t_PhaseBias *self, void *data);
            static PyGetSetDef t_PhaseBias__fields_[] = {
              DECLARE_GET_FIELD(t_PhaseBias, discontinuityCounter),
              DECLARE_GET_FIELD(t_PhaseBias, phaseBias),
              DECLARE_GET_FIELD(t_PhaseBias, signalID),
              DECLARE_GET_FIELD(t_PhaseBias, signalInteger),
              DECLARE_GET_FIELD(t_PhaseBias, signalWideLaneIntegerIndicator),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PhaseBias__methods_[] = {
              DECLARE_METHOD(t_PhaseBias, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PhaseBias, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PhaseBias, getDiscontinuityCounter, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getPhaseBias, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getSignalID, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getSignalWideLaneIntegerIndicator, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, isSignalInteger, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PhaseBias)[] = {
              { Py_tp_methods, t_PhaseBias__methods_ },
              { Py_tp_init, (void *) t_PhaseBias_init_ },
              { Py_tp_getset, t_PhaseBias__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PhaseBias)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PhaseBias, t_PhaseBias, PhaseBias);

            void t_PhaseBias::install(PyObject *module)
            {
              installType(&PY_TYPE(PhaseBias), &PY_TYPE_DEF(PhaseBias), module, "PhaseBias", 0);
            }

            void t_PhaseBias::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "class_", make_descriptor(PhaseBias::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "wrapfn_", make_descriptor(t_PhaseBias::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_PhaseBias_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PhaseBias::initializeClass, 1)))
                return NULL;
              return t_PhaseBias::wrap_Object(PhaseBias(((t_PhaseBias *) arg)->object.this$));
            }
            static PyObject *t_PhaseBias_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PhaseBias::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PhaseBias_init_(t_PhaseBias *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jboolean a1;
              jint a2;
              jint a3;
              jdouble a4;
              PhaseBias object((jobject) NULL);

              if (!parseArgs(args, "IZIID", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = PhaseBias(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_PhaseBias_getDiscontinuityCounter(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDiscontinuityCounter());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_getPhaseBias(t_PhaseBias *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPhaseBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_PhaseBias_getSignalID(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalID());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_getSignalWideLaneIntegerIndicator(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalWideLaneIntegerIndicator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_isSignalInteger(t_PhaseBias *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isSignalInteger());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_PhaseBias_get__discontinuityCounter(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDiscontinuityCounter());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_PhaseBias_get__phaseBias(t_PhaseBias *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPhaseBias());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_PhaseBias_get__signalID(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalID());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_PhaseBias_get__signalInteger(t_PhaseBias *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isSignalInteger());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_PhaseBias_get__signalWideLaneIntegerIndicator(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalWideLaneIntegerIndicator());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04Data::class$ = NULL;
              jmethodID *SsrIgm04Data::mids$ = NULL;
              bool SsrIgm04Data::live$ = false;

              jclass SsrIgm04Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getHighRateClockCorrection_9981f74b2d109da6] = env->getMethodID(cls, "getHighRateClockCorrection", "()D");
                  mids$[mid_setHighRateClockCorrection_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setHighRateClockCorrection", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04Data::SsrIgm04Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jdouble SsrIgm04Data::getHighRateClockCorrection() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getHighRateClockCorrection_9981f74b2d109da6]);
              }

              void SsrIgm04Data::setHighRateClockCorrection(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHighRateClockCorrection_1ad26e8c8c0cd65b], a0);
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
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm04Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm04Data_init_(t_SsrIgm04Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm04Data_getHighRateClockCorrection(t_SsrIgm04Data *self);
              static PyObject *t_SsrIgm04Data_setHighRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg);
              static PyObject *t_SsrIgm04Data_get__highRateClockCorrection(t_SsrIgm04Data *self, void *data);
              static int t_SsrIgm04Data_set__highRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm04Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm04Data, highRateClockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm04Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Data, getHighRateClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm04Data, setHighRateClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04Data)[] = {
                { Py_tp_methods, t_SsrIgm04Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04Data_init_ },
                { Py_tp_getset, t_SsrIgm04Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm04Data, t_SsrIgm04Data, SsrIgm04Data);

              void t_SsrIgm04Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04Data), &PY_TYPE_DEF(SsrIgm04Data), module, "SsrIgm04Data", 0);
              }

              void t_SsrIgm04Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "class_", make_descriptor(SsrIgm04Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "wrapfn_", make_descriptor(t_SsrIgm04Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04Data::wrap_Object(SsrIgm04Data(((t_SsrIgm04Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm04Data_init_(t_SsrIgm04Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm04Data object((jobject) NULL);

                INT_CALL(object = SsrIgm04Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm04Data_getHighRateClockCorrection(t_SsrIgm04Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getHighRateClockCorrection());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm04Data_setHighRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setHighRateClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHighRateClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm04Data_get__highRateClockCorrection(t_SsrIgm04Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getHighRateClockCorrection());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm04Data_set__highRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setHighRateClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "highRateClockCorrection", arg);
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
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
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
          mids$[mid_blendArithmeticallyWith_3927543110e7683e] = env->getMethodID(cls, "blendArithmeticallyWith", "(Ljava/lang/Object;Lorg/hipparchus/FieldElement;)Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object FieldBlendable::blendArithmeticallyWith(const ::java::lang::Object & a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_3927543110e7683e], a0.this$, a1.this$));
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
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *RichardsonExpansion::class$ = NULL;
      jmethodID *RichardsonExpansion::mids$ = NULL;
      bool RichardsonExpansion::live$ = false;

      jclass RichardsonExpansion::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/RichardsonExpansion");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_afa868b056706e58] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/LagrangianPoints;)V");
          mids$[mid_computeHaloFirstGuess_476e672aac8c4e37] = env->getMethodID(cls, "computeHaloFirstGuess", "(DLorg/orekit/orbits/LibrationOrbitFamily;DD)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_computeLyapunovFirstGuess_02628d3a946752e3] = env->getMethodID(cls, "computeLyapunovFirstGuess", "(DDD)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getCr3bpSystem_46ee78c3fbfe7bfc] = env->getMethodID(cls, "getCr3bpSystem", "()Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getHaloOrbitalPeriod_bf28ed64d6e8576b] = env->getMethodID(cls, "getHaloOrbitalPeriod", "(D)D");
          mids$[mid_getLagrangianPoint_633f09b0beab6a42] = env->getMethodID(cls, "getLagrangianPoint", "()Lorg/orekit/utils/LagrangianPoints;");
          mids$[mid_getLyapunovOrbitalPeriod_bf28ed64d6e8576b] = env->getMethodID(cls, "getLyapunovOrbitalPeriod", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RichardsonExpansion::RichardsonExpansion(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::LagrangianPoints & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_afa868b056706e58, a0.this$, a1.this$)) {}

      ::org::orekit::utils::PVCoordinates RichardsonExpansion::computeHaloFirstGuess(jdouble a0, const ::org::orekit::orbits::LibrationOrbitFamily & a1, jdouble a2, jdouble a3) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeHaloFirstGuess_476e672aac8c4e37], a0, a1.this$, a2, a3));
      }

      ::org::orekit::utils::PVCoordinates RichardsonExpansion::computeLyapunovFirstGuess(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeLyapunovFirstGuess_02628d3a946752e3], a0, a1, a2));
      }

      ::org::orekit::bodies::CR3BPSystem RichardsonExpansion::getCr3bpSystem() const
      {
        return ::org::orekit::bodies::CR3BPSystem(env->callObjectMethod(this$, mids$[mid_getCr3bpSystem_46ee78c3fbfe7bfc]));
      }

      jdouble RichardsonExpansion::getHaloOrbitalPeriod(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHaloOrbitalPeriod_bf28ed64d6e8576b], a0);
      }

      ::org::orekit::utils::LagrangianPoints RichardsonExpansion::getLagrangianPoint() const
      {
        return ::org::orekit::utils::LagrangianPoints(env->callObjectMethod(this$, mids$[mid_getLagrangianPoint_633f09b0beab6a42]));
      }

      jdouble RichardsonExpansion::getLyapunovOrbitalPeriod(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLyapunovOrbitalPeriod_bf28ed64d6e8576b], a0);
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
      static PyObject *t_RichardsonExpansion_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RichardsonExpansion_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RichardsonExpansion_init_(t_RichardsonExpansion *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RichardsonExpansion_computeHaloFirstGuess(t_RichardsonExpansion *self, PyObject *args);
      static PyObject *t_RichardsonExpansion_computeLyapunovFirstGuess(t_RichardsonExpansion *self, PyObject *args);
      static PyObject *t_RichardsonExpansion_getCr3bpSystem(t_RichardsonExpansion *self);
      static PyObject *t_RichardsonExpansion_getHaloOrbitalPeriod(t_RichardsonExpansion *self, PyObject *arg);
      static PyObject *t_RichardsonExpansion_getLagrangianPoint(t_RichardsonExpansion *self);
      static PyObject *t_RichardsonExpansion_getLyapunovOrbitalPeriod(t_RichardsonExpansion *self, PyObject *arg);
      static PyObject *t_RichardsonExpansion_get__cr3bpSystem(t_RichardsonExpansion *self, void *data);
      static PyObject *t_RichardsonExpansion_get__lagrangianPoint(t_RichardsonExpansion *self, void *data);
      static PyGetSetDef t_RichardsonExpansion__fields_[] = {
        DECLARE_GET_FIELD(t_RichardsonExpansion, cr3bpSystem),
        DECLARE_GET_FIELD(t_RichardsonExpansion, lagrangianPoint),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RichardsonExpansion__methods_[] = {
        DECLARE_METHOD(t_RichardsonExpansion, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RichardsonExpansion, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RichardsonExpansion, computeHaloFirstGuess, METH_VARARGS),
        DECLARE_METHOD(t_RichardsonExpansion, computeLyapunovFirstGuess, METH_VARARGS),
        DECLARE_METHOD(t_RichardsonExpansion, getCr3bpSystem, METH_NOARGS),
        DECLARE_METHOD(t_RichardsonExpansion, getHaloOrbitalPeriod, METH_O),
        DECLARE_METHOD(t_RichardsonExpansion, getLagrangianPoint, METH_NOARGS),
        DECLARE_METHOD(t_RichardsonExpansion, getLyapunovOrbitalPeriod, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RichardsonExpansion)[] = {
        { Py_tp_methods, t_RichardsonExpansion__methods_ },
        { Py_tp_init, (void *) t_RichardsonExpansion_init_ },
        { Py_tp_getset, t_RichardsonExpansion__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RichardsonExpansion)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RichardsonExpansion, t_RichardsonExpansion, RichardsonExpansion);

      void t_RichardsonExpansion::install(PyObject *module)
      {
        installType(&PY_TYPE(RichardsonExpansion), &PY_TYPE_DEF(RichardsonExpansion), module, "RichardsonExpansion", 0);
      }

      void t_RichardsonExpansion::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RichardsonExpansion), "class_", make_descriptor(RichardsonExpansion::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RichardsonExpansion), "wrapfn_", make_descriptor(t_RichardsonExpansion::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RichardsonExpansion), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RichardsonExpansion_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RichardsonExpansion::initializeClass, 1)))
          return NULL;
        return t_RichardsonExpansion::wrap_Object(RichardsonExpansion(((t_RichardsonExpansion *) arg)->object.this$));
      }
      static PyObject *t_RichardsonExpansion_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RichardsonExpansion::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RichardsonExpansion_init_(t_RichardsonExpansion *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
        ::org::orekit::utils::LagrangianPoints a1((jobject) NULL);
        PyTypeObject **p1;
        RichardsonExpansion object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::LagrangianPoints::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_LagrangianPoints::parameters_))
        {
          INT_CALL(object = RichardsonExpansion(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RichardsonExpansion_computeHaloFirstGuess(t_RichardsonExpansion *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::orbits::LibrationOrbitFamily a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        jdouble a3;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "DKDD", ::org::orekit::orbits::LibrationOrbitFamily::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_LibrationOrbitFamily::parameters_, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeHaloFirstGuess(a0, a1, a2, a3));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "computeHaloFirstGuess", args);
        return NULL;
      }

      static PyObject *t_RichardsonExpansion_computeLyapunovFirstGuess(t_RichardsonExpansion *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeLyapunovFirstGuess(a0, a1, a2));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "computeLyapunovFirstGuess", args);
        return NULL;
      }

      static PyObject *t_RichardsonExpansion_getCr3bpSystem(t_RichardsonExpansion *self)
      {
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);
        OBJ_CALL(result = self->object.getCr3bpSystem());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
      }

      static PyObject *t_RichardsonExpansion_getHaloOrbitalPeriod(t_RichardsonExpansion *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getHaloOrbitalPeriod(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getHaloOrbitalPeriod", arg);
        return NULL;
      }

      static PyObject *t_RichardsonExpansion_getLagrangianPoint(t_RichardsonExpansion *self)
      {
        ::org::orekit::utils::LagrangianPoints result((jobject) NULL);
        OBJ_CALL(result = self->object.getLagrangianPoint());
        return ::org::orekit::utils::t_LagrangianPoints::wrap_Object(result);
      }

      static PyObject *t_RichardsonExpansion_getLyapunovOrbitalPeriod(t_RichardsonExpansion *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getLyapunovOrbitalPeriod(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLyapunovOrbitalPeriod", arg);
        return NULL;
      }

      static PyObject *t_RichardsonExpansion_get__cr3bpSystem(t_RichardsonExpansion *self, void *data)
      {
        ::org::orekit::bodies::CR3BPSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getCr3bpSystem());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(value);
      }

      static PyObject *t_RichardsonExpansion_get__lagrangianPoint(t_RichardsonExpansion *self, void *data)
      {
        ::org::orekit::utils::LagrangianPoints value((jobject) NULL);
        OBJ_CALL(value = self->object.getLagrangianPoint());
        return ::org::orekit::utils::t_LagrangianPoints::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/ErrorState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *ErrorState::class$ = NULL;
            jmethodID *ErrorState::mids$ = NULL;
            bool ErrorState::live$ = false;

            jclass ErrorState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/ErrorState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_processToken_48865e799ebb0b92] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ErrorState::ErrorState() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jboolean ErrorState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_48865e799ebb0b92], a0.this$);
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
          namespace parsing {
            static PyObject *t_ErrorState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ErrorState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ErrorState_init_(t_ErrorState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ErrorState_processToken(t_ErrorState *self, PyObject *arg);

            static PyMethodDef t_ErrorState__methods_[] = {
              DECLARE_METHOD(t_ErrorState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ErrorState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ErrorState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ErrorState)[] = {
              { Py_tp_methods, t_ErrorState__methods_ },
              { Py_tp_init, (void *) t_ErrorState_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ErrorState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ErrorState, t_ErrorState, ErrorState);

            void t_ErrorState::install(PyObject *module)
            {
              installType(&PY_TYPE(ErrorState), &PY_TYPE_DEF(ErrorState), module, "ErrorState", 0);
            }

            void t_ErrorState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "class_", make_descriptor(ErrorState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "wrapfn_", make_descriptor(t_ErrorState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ErrorState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ErrorState::initializeClass, 1)))
                return NULL;
              return t_ErrorState::wrap_Object(ErrorState(((t_ErrorState *) arg)->object.this$));
            }
            static PyObject *t_ErrorState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ErrorState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ErrorState_init_(t_ErrorState *self, PyObject *args, PyObject *kwds)
            {
              ErrorState object((jobject) NULL);

              INT_CALL(object = ErrorState());
              self->object = object;

              return 0;
            }

            static PyObject *t_ErrorState_processToken(t_ErrorState *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processToken(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processToken", arg);
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
#include "org/orekit/propagation/analytical/AbstractAnalyticalMatricesHarvester.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "java/util/List.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
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
            mids$[mid_freezeColumnsNames_ff7cb6c242604316] = env->getMethodID(cls, "freezeColumnsNames", "()V");
            mids$[mid_getAdditionalState_e8a4ac02afc72623] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
            mids$[mid_getGradientConverter_d2718eefd4d5ae94] = env->getMethodID(cls, "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;");
            mids$[mid_getJacobiansColumnsNames_d751c1a57012b438] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getParametersJacobian_011bf64ebaa4e018] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getStateTransitionMatrix_011bf64ebaa4e018] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_setReferenceState_72b846eb87f3af9a] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractAnalyticalMatricesHarvester::freezeColumnsNames() const
        {
          env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_ff7cb6c242604316]);
        }

        JArray< jdouble > AbstractAnalyticalMatricesHarvester::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_e8a4ac02afc72623], a0.this$));
        }

        ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter AbstractAnalyticalMatricesHarvester::getGradientConverter() const
        {
          return ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter(env->callObjectMethod(this$, mids$[mid_getGradientConverter_d2718eefd4d5ae94]));
        }

        ::java::util::List AbstractAnalyticalMatricesHarvester::getJacobiansColumnsNames() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_d751c1a57012b438]));
        }

        ::java::lang::String AbstractAnalyticalMatricesHarvester::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        ::org::orekit::orbits::OrbitType AbstractAnalyticalMatricesHarvester::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
        }

        ::org::hipparchus::linear::RealMatrix AbstractAnalyticalMatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_011bf64ebaa4e018], a0.this$));
        }

        ::org::orekit::orbits::PositionAngleType AbstractAnalyticalMatricesHarvester::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
        }

        ::org::hipparchus::linear::RealMatrix AbstractAnalyticalMatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_011bf64ebaa4e018], a0.this$));
        }

        void AbstractAnalyticalMatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setReferenceState_72b846eb87f3af9a], a0.this$);
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
#include "org/hipparchus/analysis/function/Atan2.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atan2::class$ = NULL;
        jmethodID *Atan2::mids$ = NULL;
        bool Atan2::live$ = false;

        jclass Atan2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atan2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atan2::Atan2() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Atan2::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_82f92590f4247da1], a0, a1);
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
      namespace function {
        static PyObject *t_Atan2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atan2_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atan2_init_(t_Atan2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atan2_value(t_Atan2 *self, PyObject *args);

        static PyMethodDef t_Atan2__methods_[] = {
          DECLARE_METHOD(t_Atan2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan2, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atan2)[] = {
          { Py_tp_methods, t_Atan2__methods_ },
          { Py_tp_init, (void *) t_Atan2_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atan2)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atan2, t_Atan2, Atan2);

        void t_Atan2::install(PyObject *module)
        {
          installType(&PY_TYPE(Atan2), &PY_TYPE_DEF(Atan2), module, "Atan2", 0);
        }

        void t_Atan2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "class_", make_descriptor(Atan2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "wrapfn_", make_descriptor(t_Atan2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atan2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atan2::initializeClass, 1)))
            return NULL;
          return t_Atan2::wrap_Object(Atan2(((t_Atan2 *) arg)->object.this$));
        }
        static PyObject *t_Atan2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atan2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atan2_init_(t_Atan2 *self, PyObject *args, PyObject *kwds)
        {
          Atan2 object((jobject) NULL);

          INT_CALL(object = Atan2());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atan2_value(t_Atan2 *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSPhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
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
              mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockOneWayGNSSPhaseModifier::RelativisticJ2ClockOneWayGNSSPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void RelativisticJ2ClockOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
#include "java/util/function/LongConsumer.h"
#include "java/util/function/LongConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *LongConsumer::class$ = NULL;
      jmethodID *LongConsumer::mids$ = NULL;
      bool LongConsumer::live$ = false;

      jclass LongConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/LongConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_f5bbab7e97879358] = env->getMethodID(cls, "accept", "(J)V");
          mids$[mid_andThen_e5f704fe4e8df09c] = env->getMethodID(cls, "andThen", "(Ljava/util/function/LongConsumer;)Ljava/util/function/LongConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void LongConsumer::accept(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_f5bbab7e97879358], a0);
      }

      LongConsumer LongConsumer::andThen(const LongConsumer & a0) const
      {
        return LongConsumer(env->callObjectMethod(this$, mids$[mid_andThen_e5f704fe4e8df09c], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_LongConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LongConsumer_accept(t_LongConsumer *self, PyObject *arg);
      static PyObject *t_LongConsumer_andThen(t_LongConsumer *self, PyObject *arg);

      static PyMethodDef t_LongConsumer__methods_[] = {
        DECLARE_METHOD(t_LongConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LongConsumer, accept, METH_O),
        DECLARE_METHOD(t_LongConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LongConsumer)[] = {
        { Py_tp_methods, t_LongConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LongConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LongConsumer, t_LongConsumer, LongConsumer);

      void t_LongConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(LongConsumer), &PY_TYPE_DEF(LongConsumer), module, "LongConsumer", 0);
      }

      void t_LongConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "class_", make_descriptor(LongConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "wrapfn_", make_descriptor(t_LongConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LongConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LongConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LongConsumer::initializeClass, 1)))
          return NULL;
        return t_LongConsumer::wrap_Object(LongConsumer(((t_LongConsumer *) arg)->object.this$));
      }
      static PyObject *t_LongConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LongConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LongConsumer_accept(t_LongConsumer *self, PyObject *arg)
      {
        jlong a0;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(self->object.accept(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "accept", arg);
        return NULL;
      }

      static PyObject *t_LongConsumer_andThen(t_LongConsumer *self, PyObject *arg)
      {
        LongConsumer a0((jobject) NULL);
        LongConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", LongConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_LongConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/PowellOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *PowellOptimizer::class$ = NULL;
            jmethodID *PowellOptimizer::mids$ = NULL;
            bool PowellOptimizer::live$ = false;

            jclass PowellOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/PowellOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_init$_2a1e7c9bd9677ee4] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
                mids$[mid_init$_d67ede80e74aa5d1] = env->getMethodID(cls, "<init>", "(DDDDLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_doOptimize_a812a1ba2cf9f7b4] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, const ::org::hipparchus::optim::ConvergenceChecker & a2) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_2a1e7c9bd9677ee4, a0, a1, a2.this$)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::optim::ConvergenceChecker & a4) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_d67ede80e74aa5d1, a0, a1, a2, a3, a4.this$)) {}
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
            static PyObject *t_PowellOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PowellOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PowellOptimizer_of_(t_PowellOptimizer *self, PyObject *args);
            static int t_PowellOptimizer_init_(t_PowellOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PowellOptimizer_get__parameters_(t_PowellOptimizer *self, void *data);
            static PyGetSetDef t_PowellOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_PowellOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PowellOptimizer__methods_[] = {
              DECLARE_METHOD(t_PowellOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PowellOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PowellOptimizer, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PowellOptimizer)[] = {
              { Py_tp_methods, t_PowellOptimizer__methods_ },
              { Py_tp_init, (void *) t_PowellOptimizer_init_ },
              { Py_tp_getset, t_PowellOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PowellOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(PowellOptimizer, t_PowellOptimizer, PowellOptimizer);
            PyObject *t_PowellOptimizer::wrap_Object(const PowellOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PowellOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PowellOptimizer *self = (t_PowellOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PowellOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PowellOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PowellOptimizer *self = (t_PowellOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PowellOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(PowellOptimizer), &PY_TYPE_DEF(PowellOptimizer), module, "PowellOptimizer", 0);
            }

            void t_PowellOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "class_", make_descriptor(PowellOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "wrapfn_", make_descriptor(t_PowellOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_PowellOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PowellOptimizer::initializeClass, 1)))
                return NULL;
              return t_PowellOptimizer::wrap_Object(PowellOptimizer(((t_PowellOptimizer *) arg)->object.this$));
            }
            static PyObject *t_PowellOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PowellOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PowellOptimizer_of_(t_PowellOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PowellOptimizer_init_(t_PowellOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::hipparchus::optim::ConvergenceChecker a2((jobject) NULL);
                  PyTypeObject **p2;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2, a3, a4));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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
            static PyObject *t_PowellOptimizer_get__parameters_(t_PowellOptimizer *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
