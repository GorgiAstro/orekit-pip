#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDeterminationKey::class$ = NULL;
              jmethodID *AttitudeDeterminationKey::mids$ = NULL;
              bool AttitudeDeterminationKey::live$ = false;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_ID = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_METHOD = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_PREV_ID = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::ATTITUDE_SOURCE = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::ATTITUDE_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::COMMENT = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::COV_TYPE = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::EULER_ROT_SEQ = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::NUMBER_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::RATE_PROCESS_NOISE_STDDEV = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::RATE_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::REF_FRAME_A = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::REF_FRAME_B = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SENSOR = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SIGMA_U = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SIGMA_V = NULL;

              jclass AttitudeDeterminationKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_7de5479f21cfd292] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;)Z");
                  mids$[mid_valueOf_0f0bc24df96a9694] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;");
                  mids$[mid_values_278facb7b4c66a27] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD_ID = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  AD_METHOD = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_METHOD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  AD_PREV_ID = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  ATTITUDE_SOURCE = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "ATTITUDE_SOURCE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  ATTITUDE_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "ATTITUDE_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  COMMENT = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  COV_TYPE = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  EULER_ROT_SEQ = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  NUMBER_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "NUMBER_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  RATE_PROCESS_NOISE_STDDEV = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "RATE_PROCESS_NOISE_STDDEV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  RATE_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "RATE_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  REF_FRAME_A = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  REF_FRAME_B = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SENSOR = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SENSOR", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SIGMA_U = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SIGMA_U", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SIGMA_V = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SIGMA_V", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeDeterminationKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser & a1, const ::org::orekit::files::ccsds::utils::ContextBinding & a2, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination & a3) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_7de5479f21cfd292], a0.this$, a1.this$, a2.this$, a3.this$);
              }

              AttitudeDeterminationKey AttitudeDeterminationKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeDeterminationKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0f0bc24df96a9694], a0.this$));
              }

              JArray< AttitudeDeterminationKey > AttitudeDeterminationKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeDeterminationKey >(env->callStaticObjectMethod(cls, mids$[mid_values_278facb7b4c66a27]));
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
              static PyObject *t_AttitudeDeterminationKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationKey_of_(t_AttitudeDeterminationKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_process(t_AttitudeDeterminationKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeDeterminationKey_get__parameters_(t_AttitudeDeterminationKey *self, void *data);
              static PyGetSetDef t_AttitudeDeterminationKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeDeterminationKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDeterminationKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeDeterminationKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDeterminationKey)[] = {
                { Py_tp_methods, t_AttitudeDeterminationKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeDeterminationKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDeterminationKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeDeterminationKey, t_AttitudeDeterminationKey, AttitudeDeterminationKey);
              PyObject *t_AttitudeDeterminationKey::wrap_Object(const AttitudeDeterminationKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationKey *self = (t_AttitudeDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeDeterminationKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationKey *self = (t_AttitudeDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeDeterminationKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDeterminationKey), &PY_TYPE_DEF(AttitudeDeterminationKey), module, "AttitudeDeterminationKey", 0);
              }

              void t_AttitudeDeterminationKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "class_", make_descriptor(AttitudeDeterminationKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "wrapfn_", make_descriptor(t_AttitudeDeterminationKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeDeterminationKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_ID", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_METHOD", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_PREV_ID", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "ATTITUDE_SOURCE", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::ATTITUDE_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "ATTITUDE_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::ATTITUDE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "COMMENT", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "COV_TYPE", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::COV_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "EULER_ROT_SEQ", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "NUMBER_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::NUMBER_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "RATE_PROCESS_NOISE_STDDEV", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::RATE_PROCESS_NOISE_STDDEV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "RATE_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::RATE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "REF_FRAME_A", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "REF_FRAME_B", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SENSOR", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SENSOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SIGMA_U", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SIGMA_U)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SIGMA_V", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SIGMA_V)));
              }

              static PyObject *t_AttitudeDeterminationKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDeterminationKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDeterminationKey::wrap_Object(AttitudeDeterminationKey(((t_AttitudeDeterminationKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDeterminationKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDeterminationKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeDeterminationKey_of_(t_AttitudeDeterminationKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeDeterminationKey_process(t_AttitudeDeterminationKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::files::ccsds::utils::ContextBinding a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination a3((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::parameters_, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2, a3));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeDeterminationKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationKey::valueOf(a0));
                  return t_AttitudeDeterminationKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeDeterminationKey_values(PyTypeObject *type)
              {
                JArray< AttitudeDeterminationKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeDeterminationKey::wrap_jobject);
              }
              static PyObject *t_AttitudeDeterminationKey_get__parameters_(t_AttitudeDeterminationKey *self, void *data)
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
#include "org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$TransponderConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$TransponderConfiguration::mids$ = NULL;
        bool CRDConfiguration$TransponderConfiguration::live$ = false;

        jclass CRDConfiguration$TransponderConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getSpacecraftClockAndDriftApplied_f2f64475e4580546] = env->getMethodID(cls, "getSpacecraftClockAndDriftApplied", "()I");
            mids$[mid_getStationClockAndDriftApplied_f2f64475e4580546] = env->getMethodID(cls, "getStationClockAndDriftApplied", "()I");
            mids$[mid_getStationOscDrift_456d9a2f64d6b28d] = env->getMethodID(cls, "getStationOscDrift", "()D");
            mids$[mid_getStationUTCOffset_456d9a2f64d6b28d] = env->getMethodID(cls, "getStationUTCOffset", "()D");
            mids$[mid_getTranspClkRefTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTranspClkRefTime", "()D");
            mids$[mid_getTranspOscDrift_456d9a2f64d6b28d] = env->getMethodID(cls, "getTranspOscDrift", "()D");
            mids$[mid_getTranspUTCOffset_456d9a2f64d6b28d] = env->getMethodID(cls, "getTranspUTCOffset", "()D");
            mids$[mid_getTransponderId_0090f7797e403f43] = env->getMethodID(cls, "getTransponderId", "()Ljava/lang/String;");
            mids$[mid_isSpacecraftTimeSimplified_e470b6d9e0d979db] = env->getMethodID(cls, "isSpacecraftTimeSimplified", "()Z");
            mids$[mid_setIsSpacecraftTimeSimplified_50a2e0b139e80a58] = env->getMethodID(cls, "setIsSpacecraftTimeSimplified", "(Z)V");
            mids$[mid_setSpacecraftClockAndDriftApplied_0a2a1ac2721c0336] = env->getMethodID(cls, "setSpacecraftClockAndDriftApplied", "(I)V");
            mids$[mid_setStationClockAndDriftApplied_0a2a1ac2721c0336] = env->getMethodID(cls, "setStationClockAndDriftApplied", "(I)V");
            mids$[mid_setStationOscDrift_77e0f9a1f260e2e5] = env->getMethodID(cls, "setStationOscDrift", "(D)V");
            mids$[mid_setStationUTCOffset_77e0f9a1f260e2e5] = env->getMethodID(cls, "setStationUTCOffset", "(D)V");
            mids$[mid_setTranspClkRefTime_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTranspClkRefTime", "(D)V");
            mids$[mid_setTranspOscDrift_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTranspOscDrift", "(D)V");
            mids$[mid_setTranspUTCOffset_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTranspUTCOffset", "(D)V");
            mids$[mid_setTransponderId_e939c6558ae8d313] = env->getMethodID(cls, "setTransponderId", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$TransponderConfiguration::CRDConfiguration$TransponderConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jint CRDConfiguration$TransponderConfiguration::getSpacecraftClockAndDriftApplied() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpacecraftClockAndDriftApplied_f2f64475e4580546]);
        }

        jint CRDConfiguration$TransponderConfiguration::getStationClockAndDriftApplied() const
        {
          return env->callIntMethod(this$, mids$[mid_getStationClockAndDriftApplied_f2f64475e4580546]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getStationOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStationOscDrift_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getStationUTCOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStationUTCOffset_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspClkRefTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspClkRefTime_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspOscDrift_456d9a2f64d6b28d]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspUTCOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspUTCOffset_456d9a2f64d6b28d]);
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::getTransponderId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTransponderId_0090f7797e403f43]));
        }

        jboolean CRDConfiguration$TransponderConfiguration::isSpacecraftTimeSimplified() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSpacecraftTimeSimplified_e470b6d9e0d979db]);
        }

        void CRDConfiguration$TransponderConfiguration::setIsSpacecraftTimeSimplified(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsSpacecraftTimeSimplified_50a2e0b139e80a58], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setSpacecraftClockAndDriftApplied(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpacecraftClockAndDriftApplied_0a2a1ac2721c0336], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationClockAndDriftApplied(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationClockAndDriftApplied_0a2a1ac2721c0336], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationOscDrift_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationUTCOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationUTCOffset_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspClkRefTime(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspClkRefTime_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspOscDrift_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspUTCOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspUTCOffset_77e0f9a1f260e2e5], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTransponderId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTransponderId_e939c6558ae8d313], a0.this$);
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        static PyObject *t_CRDConfiguration$TransponderConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$TransponderConfiguration_init_(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTransponderId(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_isSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setIsSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTransponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_toCrdString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_toString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transponderId(t_CRDConfiguration$TransponderConfiguration *self, void *data);
        static int t_CRDConfiguration$TransponderConfiguration_set__transponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$TransponderConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, spacecraftClockAndDriftApplied),
          DECLARE_GET_FIELD(t_CRDConfiguration$TransponderConfiguration, spacecraftTimeSimplified),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, stationClockAndDriftApplied),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, stationOscDrift),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, stationUTCOffset),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transpClkRefTime),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transpOscDrift),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transpUTCOffset),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$TransponderConfiguration, transponderId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$TransponderConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getSpacecraftClockAndDriftApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getStationClockAndDriftApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getStationOscDrift, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getStationUTCOffset, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTranspClkRefTime, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTranspOscDrift, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTranspUTCOffset, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, getTransponderId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, isSpacecraftTimeSimplified, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setIsSpacecraftTimeSimplified, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setSpacecraftClockAndDriftApplied, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setStationClockAndDriftApplied, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setStationOscDrift, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setStationUTCOffset, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTranspClkRefTime, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTranspOscDrift, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTranspUTCOffset, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, setTransponderId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$TransponderConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$TransponderConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$TransponderConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$TransponderConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$TransponderConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$TransponderConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$TransponderConfiguration, t_CRDConfiguration$TransponderConfiguration, CRDConfiguration$TransponderConfiguration);

        void t_CRDConfiguration$TransponderConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$TransponderConfiguration), &PY_TYPE_DEF(CRDConfiguration$TransponderConfiguration), module, "CRDConfiguration$TransponderConfiguration", 0);
        }

        void t_CRDConfiguration$TransponderConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TransponderConfiguration), "class_", make_descriptor(CRDConfiguration$TransponderConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TransponderConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$TransponderConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$TransponderConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$TransponderConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$TransponderConfiguration::wrap_Object(CRDConfiguration$TransponderConfiguration(((t_CRDConfiguration$TransponderConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$TransponderConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$TransponderConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$TransponderConfiguration_init_(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$TransponderConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$TransponderConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSpacecraftClockAndDriftApplied());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStationClockAndDriftApplied());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStationOscDrift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStationUTCOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspClkRefTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspUTCOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_getTransponderId(t_CRDConfiguration$TransponderConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransponderId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_isSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isSpacecraftTimeSimplified());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setIsSpacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsSpacecraftTimeSimplified(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsSpacecraftTimeSimplified", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setSpacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSpacecraftClockAndDriftApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpacecraftClockAndDriftApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setStationClockAndDriftApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationClockAndDriftApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setStationOscDrift(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationOscDrift", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setStationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setStationUTCOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationUTCOffset", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspClkRefTime(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspClkRefTime", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspOscDrift(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspOscDrift", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTranspUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspUTCOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspUTCOffset", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_setTransponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTransponderId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTransponderId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_toCrdString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TransponderConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_toString(t_CRDConfiguration$TransponderConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$TransponderConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSpacecraftClockAndDriftApplied());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__spacecraftClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSpacecraftClockAndDriftApplied(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spacecraftClockAndDriftApplied", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__spacecraftTimeSimplified(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSpacecraftTimeSimplified());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStationClockAndDriftApplied());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__stationClockAndDriftApplied(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setStationClockAndDriftApplied(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationClockAndDriftApplied", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStationOscDrift());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__stationOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setStationOscDrift(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationOscDrift", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStationUTCOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__stationUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setStationUTCOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationUTCOffset", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspClkRefTime());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transpClkRefTime(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspClkRefTime(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpClkRefTime", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transpOscDrift(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspOscDrift(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpOscDrift", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspUTCOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transpUTCOffset(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspUTCOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpUTCOffset", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$TransponderConfiguration_get__transponderId(t_CRDConfiguration$TransponderConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransponderId());
          return j2p(value);
        }
        static int t_CRDConfiguration$TransponderConfiguration_set__transponderId(t_CRDConfiguration$TransponderConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTransponderId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transponderId", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AmbiguityAcceptance::class$ = NULL;
          jmethodID *AmbiguityAcceptance::mids$ = NULL;
          bool AmbiguityAcceptance::live$ = false;

          jclass AmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_accept_20e068095c0bf963] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_numberOfCandidates_f2f64475e4580546] = env->getMethodID(cls, "numberOfCandidates", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution AmbiguityAcceptance::accept(const JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution(env->callObjectMethod(this$, mids$[mid_accept_20e068095c0bf963], a0.this$));
          }

          jint AmbiguityAcceptance::numberOfCandidates() const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfCandidates_f2f64475e4580546]);
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
        namespace gnss {
          static PyObject *t_AmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_accept(t_AmbiguityAcceptance *self, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_numberOfCandidates(t_AmbiguityAcceptance *self);

          static PyMethodDef t_AmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_AmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguityAcceptance, accept, METH_O),
            DECLARE_METHOD(t_AmbiguityAcceptance, numberOfCandidates, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AmbiguityAcceptance)[] = {
            { Py_tp_methods, t_AmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AmbiguityAcceptance, t_AmbiguityAcceptance, AmbiguityAcceptance);

          void t_AmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(AmbiguityAcceptance), &PY_TYPE_DEF(AmbiguityAcceptance), module, "AmbiguityAcceptance", 0);
          }

          void t_AmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "class_", make_descriptor(AmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "wrapfn_", make_descriptor(t_AmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_AmbiguityAcceptance::wrap_Object(AmbiguityAcceptance(((t_AmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_AmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AmbiguityAcceptance_accept(t_AmbiguityAcceptance *self, PyObject *arg)
          {
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution result((jobject) NULL);

            if (!parseArg(arg, "[k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.accept(a0));
              return ::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "accept", arg);
            return NULL;
          }

          static PyObject *t_AmbiguityAcceptance_numberOfCandidates(t_AmbiguityAcceptance *self)
          {
            jint result;
            OBJ_CALL(result = self->object.numberOfCandidates());
            return PyLong_FromLong((long) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/Fieldifier.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *Fieldifier::class$ = NULL;
      jmethodID *Fieldifier::mids$ = NULL;
      bool Fieldifier::live$ = false;

      jclass Fieldifier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/Fieldifier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_fieldify_169ee1c5c6f349b6] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_fieldify_9fa67162fa1e99f8] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/StateCovariance;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_fieldify_23bcd78a2b0d2684] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::FieldOrbit Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::orbits::FieldOrbit(env->callStaticObjectMethod(cls, mids$[mid_fieldify_169ee1c5c6f349b6], a0.this$, a1.this$));
      }

      ::org::orekit::propagation::FieldStateCovariance Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::StateCovariance & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::propagation::FieldStateCovariance(env->callStaticObjectMethod(cls, mids$[mid_fieldify_9fa67162fa1e99f8], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::hipparchus::linear::RealMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_fieldify_23bcd78a2b0d2684], a0.this$, a1.this$));
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
      static PyObject *t_Fieldifier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fieldifier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fieldifier_fieldify(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Fieldifier__methods_[] = {
        DECLARE_METHOD(t_Fieldifier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fieldifier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fieldifier, fieldify, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fieldifier)[] = {
        { Py_tp_methods, t_Fieldifier__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fieldifier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Fieldifier, t_Fieldifier, Fieldifier);

      void t_Fieldifier::install(PyObject *module)
      {
        installType(&PY_TYPE(Fieldifier), &PY_TYPE_DEF(Fieldifier), module, "Fieldifier", 0);
      }

      void t_Fieldifier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "class_", make_descriptor(Fieldifier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "wrapfn_", make_descriptor(t_Fieldifier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Fieldifier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fieldifier::initializeClass, 1)))
          return NULL;
        return t_Fieldifier::wrap_Object(Fieldifier(((t_Fieldifier *) arg)->object.this$));
      }
      static PyObject *t_Fieldifier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fieldifier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Fieldifier_fieldify(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
            ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "fieldify", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeScalarFunction.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScalarFunction::class$ = NULL;
      jmethodID *PythonTimeScalarFunction::mids$ = NULL;
      bool PythonTimeScalarFunction::live$ = false;

      jclass PythonTimeScalarFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScalarFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_e912d21057defe63] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_value_7bc0fd76ee915b72] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScalarFunction::PythonTimeScalarFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonTimeScalarFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonTimeScalarFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonTimeScalarFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonTimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScalarFunction_init_(t_PythonTimeScalarFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScalarFunction_finalize(t_PythonTimeScalarFunction *self);
      static PyObject *t_PythonTimeScalarFunction_pythonExtension(t_PythonTimeScalarFunction *self, PyObject *args);
      static void JNICALL t_PythonTimeScalarFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonTimeScalarFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeScalarFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonTimeScalarFunction_get__self(t_PythonTimeScalarFunction *self, void *data);
      static PyGetSetDef t_PythonTimeScalarFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScalarFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScalarFunction__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScalarFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScalarFunction)[] = {
        { Py_tp_methods, t_PythonTimeScalarFunction__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScalarFunction_init_ },
        { Py_tp_getset, t_PythonTimeScalarFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScalarFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScalarFunction, t_PythonTimeScalarFunction, PythonTimeScalarFunction);

      void t_PythonTimeScalarFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScalarFunction), &PY_TYPE_DEF(PythonTimeScalarFunction), module, "PythonTimeScalarFunction", 1);
      }

      void t_PythonTimeScalarFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "class_", make_descriptor(PythonTimeScalarFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "wrapfn_", make_descriptor(t_PythonTimeScalarFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScalarFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonTimeScalarFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonTimeScalarFunction_value1 },
          { "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeScalarFunction_value2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScalarFunction::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScalarFunction::wrap_Object(PythonTimeScalarFunction(((t_PythonTimeScalarFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScalarFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScalarFunction_init_(t_PythonTimeScalarFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScalarFunction object((jobject) NULL);

        INT_CALL(object = PythonTimeScalarFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScalarFunction_finalize(t_PythonTimeScalarFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScalarFunction_pythonExtension(t_PythonTimeScalarFunction *self, PyObject *args)
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

      static void JNICALL t_PythonTimeScalarFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonTimeScalarFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonTimeScalarFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
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

      static PyObject *t_PythonTimeScalarFunction_get__self(t_PythonTimeScalarFunction *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldTLE::class$ = NULL;
          jmethodID *FieldTLE::mids$ = NULL;
          bool FieldTLE::live$ = false;
          ::java::lang::String *FieldTLE::B_STAR = NULL;
          jint FieldTLE::DEFAULT = (jint) 0;
          jint FieldTLE::SDP4 = (jint) 0;
          jint FieldTLE::SDP8 = (jint) 0;
          jint FieldTLE::SGP = (jint) 0;
          jint FieldTLE::SGP4 = (jint) 0;
          jint FieldTLE::SGP8 = (jint) 0;

          jclass FieldTLE::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldTLE");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_aa4622cb6d5137d4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_91e14236df002fd6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_init$_77334416a19ff5a0] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ID)V");
              mids$[mid_init$_1d424f52c08f21e2] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;IDLorg/orekit/time/TimeScale;)V");
              mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getBStar_456d9a2f64d6b28d] = env->getMethodID(cls, "getBStar", "()D");
              mids$[mid_getClassification_29e026b9d068f1c7] = env->getMethodID(cls, "getClassification", "()C");
              mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
              mids$[mid_getE_e6d4d3215c30992a] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getElementNumber_f2f64475e4580546] = env->getMethodID(cls, "getElementNumber", "()I");
              mids$[mid_getEphemerisType_f2f64475e4580546] = env->getMethodID(cls, "getEphemerisType", "()I");
              mids$[mid_getI_e6d4d3215c30992a] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getLaunchNumber_f2f64475e4580546] = env->getMethodID(cls, "getLaunchNumber", "()I");
              mids$[mid_getLaunchPiece_0090f7797e403f43] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
              mids$[mid_getLaunchYear_f2f64475e4580546] = env->getMethodID(cls, "getLaunchYear", "()I");
              mids$[mid_getLine1_0090f7797e403f43] = env->getMethodID(cls, "getLine1", "()Ljava/lang/String;");
              mids$[mid_getLine2_0090f7797e403f43] = env->getMethodID(cls, "getLine2", "()Ljava/lang/String;");
              mids$[mid_getMeanAnomaly_e6d4d3215c30992a] = env->getMethodID(cls, "getMeanAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotion_e6d4d3215c30992a] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotionFirstDerivative_e6d4d3215c30992a] = env->getMethodID(cls, "getMeanMotionFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMeanMotionSecondDerivative_e6d4d3215c30992a] = env->getMethodID(cls, "getMeanMotionSecondDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPerigeeArgument_e6d4d3215c30992a] = env->getMethodID(cls, "getPerigeeArgument", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getRaan_e6d4d3215c30992a] = env->getMethodID(cls, "getRaan", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getRevolutionNumberAtEpoch_f2f64475e4580546] = env->getMethodID(cls, "getRevolutionNumberAtEpoch", "()I");
              mids$[mid_getSatelliteNumber_f2f64475e4580546] = env->getMethodID(cls, "getSatelliteNumber", "()I");
              mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isFormatOK_5e4279f3952110c4] = env->getStaticMethodID(cls, "isFormatOK", "(Ljava/lang/String;Ljava/lang/String;)Z");
              mids$[mid_stateToTLE_b3cd93b70cce68fe] = env->getStaticMethodID(cls, "stateToTLE", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toTLE_32ddbfc0b67883b1] = env->getMethodID(cls, "toTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              B_STAR = new ::java::lang::String(env->getStaticObjectField(cls, "B_STAR", "Ljava/lang/String;"));
              DEFAULT = env->getStaticIntField(cls, "DEFAULT");
              SDP4 = env->getStaticIntField(cls, "SDP4");
              SDP8 = env->getStaticIntField(cls, "SDP8");
              SGP = env->getStaticIntField(cls, "SGP");
              SGP4 = env->getStaticIntField(cls, "SGP4");
              SGP8 = env->getStaticIntField(cls, "SGP8");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldTLE::FieldTLE(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa4622cb6d5137d4, a0.this$, a1.this$, a2.this$)) {}

          FieldTLE::FieldTLE(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_91e14236df002fd6, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldTLE::FieldTLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::FieldAbsoluteDate & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, jint a16, jdouble a17) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77334416a19ff5a0, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16, a17)) {}

          FieldTLE::FieldTLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::FieldAbsoluteDate & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, jint a16, jdouble a17, const ::org::orekit::time::TimeScale & a18) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d424f52c08f21e2, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16, a17, a18.this$)) {}

          jboolean FieldTLE::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
          }

          jdouble FieldTLE::getBStar() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_456d9a2f64d6b28d]);
          }

          jchar FieldTLE::getClassification() const
          {
            return env->callCharMethod(this$, mids$[mid_getClassification_29e026b9d068f1c7]);
          }

          ::org::orekit::time::FieldAbsoluteDate FieldTLE::getDate() const
          {
            return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getE() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_e6d4d3215c30992a]));
          }

          jint FieldTLE::getElementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getElementNumber_f2f64475e4580546]);
          }

          jint FieldTLE::getEphemerisType() const
          {
            return env->callIntMethod(this$, mids$[mid_getEphemerisType_f2f64475e4580546]);
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getI() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_e6d4d3215c30992a]));
          }

          jint FieldTLE::getLaunchNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchNumber_f2f64475e4580546]);
          }

          ::java::lang::String FieldTLE::getLaunchPiece() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_0090f7797e403f43]));
          }

          jint FieldTLE::getLaunchYear() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchYear_f2f64475e4580546]);
          }

          ::java::lang::String FieldTLE::getLine1() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine1_0090f7797e403f43]));
          }

          ::java::lang::String FieldTLE::getLine2() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine2_0090f7797e403f43]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanAnomaly() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomaly_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotion() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotionFirstDerivative() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotionFirstDerivative_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getMeanMotionSecondDerivative() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotionSecondDerivative_e6d4d3215c30992a]));
          }

          ::java::util::List FieldTLE::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getPerigeeArgument() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgument_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTLE::getRaan() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRaan_e6d4d3215c30992a]));
          }

          jint FieldTLE::getRevolutionNumberAtEpoch() const
          {
            return env->callIntMethod(this$, mids$[mid_getRevolutionNumberAtEpoch_f2f64475e4580546]);
          }

          jint FieldTLE::getSatelliteNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteNumber_f2f64475e4580546]);
          }

          jint FieldTLE::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
          }

          jboolean FieldTLE::isFormatOK(const ::java::lang::String & a0, const ::java::lang::String & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_isFormatOK_5e4279f3952110c4], a0.this$, a1.this$);
          }

          FieldTLE FieldTLE::stateToTLE(const ::org::orekit::propagation::FieldSpacecraftState & a0, const FieldTLE & a1, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLE(env->callStaticObjectMethod(cls, mids$[mid_stateToTLE_b3cd93b70cce68fe], a0.this$, a1.this$, a2.this$));
          }

          ::java::lang::String FieldTLE::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
          }

          ::org::orekit::propagation::analytical::tle::TLE FieldTLE::toTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_toTLE_32ddbfc0b67883b1]));
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
          static PyObject *t_FieldTLE_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLE_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLE_of_(t_FieldTLE *self, PyObject *args);
          static int t_FieldTLE_init_(t_FieldTLE *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldTLE_equals(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_getBStar(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getClassification(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getDate(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getE(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getElementNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getEphemerisType(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getI(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchPiece(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLaunchYear(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLine1(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getLine2(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanAnomaly(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotion(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotionFirstDerivative(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getMeanMotionSecondDerivative(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getParametersDrivers(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getPerigeeArgument(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getRaan(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getRevolutionNumberAtEpoch(t_FieldTLE *self);
          static PyObject *t_FieldTLE_getSatelliteNumber(t_FieldTLE *self);
          static PyObject *t_FieldTLE_hashCode(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_isFormatOK(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLE_stateToTLE(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLE_toString(t_FieldTLE *self, PyObject *args);
          static PyObject *t_FieldTLE_toTLE(t_FieldTLE *self);
          static PyObject *t_FieldTLE_get__bStar(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__classification(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__date(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__e(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__elementNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__ephemerisType(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__i(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchPiece(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__launchYear(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__line1(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__line2(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanAnomaly(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotion(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotionFirstDerivative(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__meanMotionSecondDerivative(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__parametersDrivers(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__perigeeArgument(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__raan(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__revolutionNumberAtEpoch(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__satelliteNumber(t_FieldTLE *self, void *data);
          static PyObject *t_FieldTLE_get__parameters_(t_FieldTLE *self, void *data);
          static PyGetSetDef t_FieldTLE__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTLE, bStar),
            DECLARE_GET_FIELD(t_FieldTLE, classification),
            DECLARE_GET_FIELD(t_FieldTLE, date),
            DECLARE_GET_FIELD(t_FieldTLE, e),
            DECLARE_GET_FIELD(t_FieldTLE, elementNumber),
            DECLARE_GET_FIELD(t_FieldTLE, ephemerisType),
            DECLARE_GET_FIELD(t_FieldTLE, i),
            DECLARE_GET_FIELD(t_FieldTLE, launchNumber),
            DECLARE_GET_FIELD(t_FieldTLE, launchPiece),
            DECLARE_GET_FIELD(t_FieldTLE, launchYear),
            DECLARE_GET_FIELD(t_FieldTLE, line1),
            DECLARE_GET_FIELD(t_FieldTLE, line2),
            DECLARE_GET_FIELD(t_FieldTLE, meanAnomaly),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotion),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotionFirstDerivative),
            DECLARE_GET_FIELD(t_FieldTLE, meanMotionSecondDerivative),
            DECLARE_GET_FIELD(t_FieldTLE, parametersDrivers),
            DECLARE_GET_FIELD(t_FieldTLE, perigeeArgument),
            DECLARE_GET_FIELD(t_FieldTLE, raan),
            DECLARE_GET_FIELD(t_FieldTLE, revolutionNumberAtEpoch),
            DECLARE_GET_FIELD(t_FieldTLE, satelliteNumber),
            DECLARE_GET_FIELD(t_FieldTLE, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTLE__methods_[] = {
            DECLARE_METHOD(t_FieldTLE, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, getBStar, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getDate, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getE, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getElementNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getEphemerisType, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getI, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchPiece, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLaunchYear, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLine1, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getLine2, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanAnomaly, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotion, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotionFirstDerivative, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getMeanMotionSecondDerivative, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getPerigeeArgument, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getRaan, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getRevolutionNumberAtEpoch, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, getSatelliteNumber, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLE, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, isFormatOK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, stateToTLE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLE, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLE, toTLE, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTLE)[] = {
            { Py_tp_methods, t_FieldTLE__methods_ },
            { Py_tp_init, (void *) t_FieldTLE_init_ },
            { Py_tp_getset, t_FieldTLE__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTLE)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldTLE, t_FieldTLE, FieldTLE);
          PyObject *t_FieldTLE::wrap_Object(const FieldTLE& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLE::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLE *self = (t_FieldTLE *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTLE::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLE::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLE *self = (t_FieldTLE *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTLE::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTLE), &PY_TYPE_DEF(FieldTLE), module, "FieldTLE", 0);
          }

          void t_FieldTLE::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "class_", make_descriptor(FieldTLE::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "wrapfn_", make_descriptor(t_FieldTLE::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "boxfn_", make_descriptor(boxObject));
            env->getClass(FieldTLE::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "B_STAR", make_descriptor(j2p(*FieldTLE::B_STAR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "DEFAULT", make_descriptor(FieldTLE::DEFAULT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SDP4", make_descriptor(FieldTLE::SDP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SDP8", make_descriptor(FieldTLE::SDP8));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP", make_descriptor(FieldTLE::SGP));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP4", make_descriptor(FieldTLE::SGP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLE), "SGP8", make_descriptor(FieldTLE::SGP8));
          }

          static PyObject *t_FieldTLE_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTLE::initializeClass, 1)))
              return NULL;
            return t_FieldTLE::wrap_Object(FieldTLE(((t_FieldTLE *) arg)->object.this$));
          }
          static PyObject *t_FieldTLE_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTLE::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTLE_of_(t_FieldTLE *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldTLE_init_(t_FieldTLE *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "Kss", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "Kssk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 18:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::FieldAbsoluteDate a7((jobject) NULL);
                PyTypeObject **p7;
                ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
                PyTypeObject **p8;
                ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
                PyTypeObject **p9;
                ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
                PyTypeObject **p10;
                ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
                PyTypeObject **p11;
                ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
                PyTypeObject **p12;
                ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
                PyTypeObject **p13;
                ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
                PyTypeObject **p14;
                ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
                PyTypeObject **p15;
                jint a16;
                jdouble a17;
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIKKKKKKKKKID", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &a17))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 19:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::FieldAbsoluteDate a7((jobject) NULL);
                PyTypeObject **p7;
                ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
                PyTypeObject **p8;
                ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
                PyTypeObject **p9;
                ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
                PyTypeObject **p10;
                ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
                PyTypeObject **p11;
                ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
                PyTypeObject **p12;
                ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
                PyTypeObject **p13;
                ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
                PyTypeObject **p14;
                ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
                PyTypeObject **p15;
                jint a16;
                jdouble a17;
                ::org::orekit::time::TimeScale a18((jobject) NULL);
                FieldTLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIKKKKKKKKKIDk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &a17, &a18))
                {
                  INT_CALL(object = FieldTLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18));
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

          static PyObject *t_FieldTLE_equals(t_FieldTLE *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldTLE_getBStar(t_FieldTLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBStar());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldTLE_getClassification(t_FieldTLE *self)
          {
            jchar result;
            OBJ_CALL(result = self->object.getClassification());
            return c2p(result);
          }

          static PyObject *t_FieldTLE_getDate(t_FieldTLE *self)
          {
            ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldTLE_getE(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getE());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getElementNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getElementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getEphemerisType(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEphemerisType());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getI(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getI());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getLaunchNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getLaunchPiece(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLaunchPiece());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getLaunchYear(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchYear());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getLine1(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine1());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getLine2(t_FieldTLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine2());
            return j2p(result);
          }

          static PyObject *t_FieldTLE_getMeanAnomaly(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanAnomaly());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotion(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotion());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotionFirstDerivative(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotionFirstDerivative());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getMeanMotionSecondDerivative(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanMotionSecondDerivative());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getParametersDrivers(t_FieldTLE *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_FieldTLE_getPerigeeArgument(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getPerigeeArgument());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getRaan(t_FieldTLE *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getRaan());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTLE_getRevolutionNumberAtEpoch(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_getSatelliteNumber(t_FieldTLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldTLE_hashCode(t_FieldTLE *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldTLE_isFormatOK(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLE::isFormatOK(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "isFormatOK", args);
            return NULL;
          }

          static PyObject *t_FieldTLE_stateToTLE(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTLE a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a2((jobject) NULL);
            FieldTLE result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, FieldTLE::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, t_FieldTLE::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLE::stateToTLE(a0, a1, a2));
              return t_FieldTLE::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "stateToTLE", args);
            return NULL;
          }

          static PyObject *t_FieldTLE_toString(t_FieldTLE *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(FieldTLE), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldTLE_toTLE(t_FieldTLE *self)
          {
            ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
            OBJ_CALL(result = self->object.toTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
          }
          static PyObject *t_FieldTLE_get__parameters_(t_FieldTLE *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldTLE_get__bStar(t_FieldTLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBStar());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_FieldTLE_get__classification(t_FieldTLE *self, void *data)
          {
            jchar value;
            OBJ_CALL(value = self->object.getClassification());
            return c2p(value);
          }

          static PyObject *t_FieldTLE_get__date(t_FieldTLE *self, void *data)
          {
            ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__e(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getE());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__elementNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getElementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__ephemerisType(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEphemerisType());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__i(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getI());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__launchNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__launchPiece(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLaunchPiece());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__launchYear(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchYear());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__line1(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine1());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__line2(t_FieldTLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine2());
            return j2p(value);
          }

          static PyObject *t_FieldTLE_get__meanAnomaly(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanAnomaly());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotion(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotion());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotionFirstDerivative(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotionFirstDerivative());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__meanMotionSecondDerivative(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeanMotionSecondDerivative());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__parametersDrivers(t_FieldTLE *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__perigeeArgument(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getPerigeeArgument());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__raan(t_FieldTLE *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getRaan());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldTLE_get__revolutionNumberAtEpoch(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_FieldTLE_get__satelliteNumber(t_FieldTLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer.h"
#include "java/lang/Class.h"
#include "java/lang/Enum.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$EnumConsumer::class$ = NULL;
            jmethodID *ParseToken$EnumConsumer::mids$ = NULL;
            bool ParseToken$EnumConsumer::live$ = false;

            jclass ParseToken$EnumConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_ad2697207e89116a] = env->getMethodID(cls, "accept", "(Ljava/lang/Enum;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$EnumConsumer::accept(const ::java::lang::Enum & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_ad2697207e89116a], a0.this$);
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
            static PyObject *t_ParseToken$EnumConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumConsumer_of_(t_ParseToken$EnumConsumer *self, PyObject *args);
            static PyObject *t_ParseToken$EnumConsumer_accept(t_ParseToken$EnumConsumer *self, PyObject *arg);
            static PyObject *t_ParseToken$EnumConsumer_get__parameters_(t_ParseToken$EnumConsumer *self, void *data);
            static PyGetSetDef t_ParseToken$EnumConsumer__fields_[] = {
              DECLARE_GET_FIELD(t_ParseToken$EnumConsumer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ParseToken$EnumConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$EnumConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumConsumer, of_, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken$EnumConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$EnumConsumer)[] = {
              { Py_tp_methods, t_ParseToken$EnumConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ParseToken$EnumConsumer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$EnumConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$EnumConsumer, t_ParseToken$EnumConsumer, ParseToken$EnumConsumer);
            PyObject *t_ParseToken$EnumConsumer::wrap_Object(const ParseToken$EnumConsumer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumConsumer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumConsumer *self = (t_ParseToken$EnumConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ParseToken$EnumConsumer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumConsumer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumConsumer *self = (t_ParseToken$EnumConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ParseToken$EnumConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$EnumConsumer), &PY_TYPE_DEF(ParseToken$EnumConsumer), module, "ParseToken$EnumConsumer", 0);
            }

            void t_ParseToken$EnumConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumConsumer), "class_", make_descriptor(ParseToken$EnumConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumConsumer), "wrapfn_", make_descriptor(t_ParseToken$EnumConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$EnumConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$EnumConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$EnumConsumer::wrap_Object(ParseToken$EnumConsumer(((t_ParseToken$EnumConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$EnumConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$EnumConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$EnumConsumer_of_(t_ParseToken$EnumConsumer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ParseToken$EnumConsumer_accept(t_ParseToken$EnumConsumer *self, PyObject *arg)
            {
              ::java::lang::Enum a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::lang::Enum::initializeClass, &a0, &p0, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
            static PyObject *t_ParseToken$EnumConsumer_get__parameters_(t_ParseToken$EnumConsumer *self, void *data)
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
#include "org/orekit/forces/maneuvers/FieldImpulseManeuver.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *FieldImpulseManeuver::class$ = NULL;
        jmethodID *FieldImpulseManeuver::mids$ = NULL;
        bool FieldImpulseManeuver::live$ = false;

        jclass FieldImpulseManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/FieldImpulseManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_51c66098ffd41132] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_7217c2ed7ac326fe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_e08909fdaee52ce1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAttitudeOverride_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getDeltaVSat_5791f80683b5227e] = env->getMethodID(cls, "getDeltaVSat", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getIsp_e6d4d3215c30992a] = env->getMethodID(cls, "getIsp", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getTrigger_9afb3f6694da2222] = env->getMethodID(cls, "getTrigger", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_8c3de04b2e5d0bcb] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/forces/maneuvers/FieldImpulseManeuver;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_51c66098ffd41132, a0.this$, a1.this$, a2.this$)) {}

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_7217c2ed7ac326fe, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a4) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_e08909fdaee52ce1, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldImpulseManeuver::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::attitudes::AttitudeProvider FieldImpulseManeuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_5cce95036ae870ba]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType FieldImpulseManeuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldImpulseManeuver::getDeltaVSat() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getDeltaVSat_5791f80683b5227e]));
        }

        ::org::hipparchus::CalculusFieldElement FieldImpulseManeuver::getIsp() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIsp_e6d4d3215c30992a]));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldImpulseManeuver::getTrigger() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getTrigger_9afb3f6694da2222]));
        }

        void FieldImpulseManeuver::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
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
        static PyObject *t_FieldImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldImpulseManeuver_of_(t_FieldImpulseManeuver *self, PyObject *args);
        static int t_FieldImpulseManeuver_init_(t_FieldImpulseManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldImpulseManeuver_g(t_FieldImpulseManeuver *self, PyObject *args);
        static PyObject *t_FieldImpulseManeuver_getAttitudeOverride(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getControl3DVectorCostType(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getDeltaVSat(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getIsp(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getTrigger(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_init(t_FieldImpulseManeuver *self, PyObject *args);
        static PyObject *t_FieldImpulseManeuver_get__attitudeOverride(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__control3DVectorCostType(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__deltaVSat(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__isp(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__trigger(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__parameters_(t_FieldImpulseManeuver *self, void *data);
        static PyGetSetDef t_FieldImpulseManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, attitudeOverride),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, deltaVSat),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, isp),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, trigger),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldImpulseManeuver__methods_[] = {
          DECLARE_METHOD(t_FieldImpulseManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldImpulseManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldImpulseManeuver, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getDeltaVSat, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getIsp, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getTrigger, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldImpulseManeuver)[] = {
          { Py_tp_methods, t_FieldImpulseManeuver__methods_ },
          { Py_tp_init, (void *) t_FieldImpulseManeuver_init_ },
          { Py_tp_getset, t_FieldImpulseManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldImpulseManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldImpulseManeuver, t_FieldImpulseManeuver, FieldImpulseManeuver);
        PyObject *t_FieldImpulseManeuver::wrap_Object(const FieldImpulseManeuver& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldImpulseManeuver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldImpulseManeuver *self = (t_FieldImpulseManeuver *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldImpulseManeuver::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldImpulseManeuver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldImpulseManeuver *self = (t_FieldImpulseManeuver *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldImpulseManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldImpulseManeuver), &PY_TYPE_DEF(FieldImpulseManeuver), module, "FieldImpulseManeuver", 0);
        }

        void t_FieldImpulseManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "class_", make_descriptor(FieldImpulseManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "wrapfn_", make_descriptor(t_FieldImpulseManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldImpulseManeuver::initializeClass, 1)))
            return NULL;
          return t_FieldImpulseManeuver::wrap_Object(FieldImpulseManeuver(((t_FieldImpulseManeuver *) arg)->object.this$));
        }
        static PyObject *t_FieldImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldImpulseManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldImpulseManeuver_of_(t_FieldImpulseManeuver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldImpulseManeuver_init_(t_FieldImpulseManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KkKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a4((jobject) NULL);
              PyTypeObject **p4;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KkKKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2, a3, a4));
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

        static PyObject *t_FieldImpulseManeuver_g(t_FieldImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldImpulseManeuver), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldImpulseManeuver_getAttitudeOverride(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getControl3DVectorCostType(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getDeltaVSat(t_FieldImpulseManeuver *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldImpulseManeuver_getIsp(t_FieldImpulseManeuver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getIsp());
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getTrigger(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldImpulseManeuver_init(t_FieldImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldImpulseManeuver), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldImpulseManeuver_get__parameters_(t_FieldImpulseManeuver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldImpulseManeuver_get__attitudeOverride(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__control3DVectorCostType(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__deltaVSat(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__isp(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getIsp());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__trigger(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/TectonicsDisplacement.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *TectonicsDisplacement::class$ = NULL;
          jmethodID *TectonicsDisplacement::mids$ = NULL;
          bool TectonicsDisplacement::live$ = false;

          jclass TectonicsDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/TectonicsDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4fd2c20d73afc943] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_displacement_90801f07349d77e7] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TectonicsDisplacement::TectonicsDisplacement(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4fd2c20d73afc943, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TectonicsDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_90801f07349d77e7], a0.this$, a1.this$, a2.this$));
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
        namespace displacement {
          static PyObject *t_TectonicsDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TectonicsDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TectonicsDisplacement_init_(t_TectonicsDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TectonicsDisplacement_displacement(t_TectonicsDisplacement *self, PyObject *args);

          static PyMethodDef t_TectonicsDisplacement__methods_[] = {
            DECLARE_METHOD(t_TectonicsDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TectonicsDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TectonicsDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TectonicsDisplacement)[] = {
            { Py_tp_methods, t_TectonicsDisplacement__methods_ },
            { Py_tp_init, (void *) t_TectonicsDisplacement_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TectonicsDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TectonicsDisplacement, t_TectonicsDisplacement, TectonicsDisplacement);

          void t_TectonicsDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(TectonicsDisplacement), &PY_TYPE_DEF(TectonicsDisplacement), module, "TectonicsDisplacement", 0);
          }

          void t_TectonicsDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TectonicsDisplacement), "class_", make_descriptor(TectonicsDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TectonicsDisplacement), "wrapfn_", make_descriptor(t_TectonicsDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TectonicsDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TectonicsDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TectonicsDisplacement::initializeClass, 1)))
              return NULL;
            return t_TectonicsDisplacement::wrap_Object(TectonicsDisplacement(((t_TectonicsDisplacement *) arg)->object.this$));
          }
          static PyObject *t_TectonicsDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TectonicsDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TectonicsDisplacement_init_(t_TectonicsDisplacement *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            TectonicsDisplacement object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TectonicsDisplacement(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TectonicsDisplacement_displacement(t_TectonicsDisplacement *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/BigReal.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/BigReal.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *BigReal::class$ = NULL;
      jmethodID *BigReal::mids$ = NULL;
      bool BigReal::live$ = false;
      BigReal *BigReal::ONE = NULL;
      BigReal *BigReal::ZERO = NULL;

      jclass BigReal::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/BigReal");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_819ed274952f967e] = env->getMethodID(cls, "<init>", "([C)V");
          mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_init$_2df38be22737223f] = env->getMethodID(cls, "<init>", "([CII)V");
          mids$[mid_add_916d074b37ce122c] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_compareTo_d6baeffb117a468b] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/util/BigReal;)I");
          mids$[mid_divide_916d074b37ce122c] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_doubleValue_456d9a2f64d6b28d] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getScale_f2f64475e4580546] = env->getMethodID(cls, "getScale", "()I");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_multiply_916d074b37ce122c] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");
          mids$[mid_multiply_b29a900833a8d2ea] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/BigReal;");
          mids$[mid_negate_032077e6380ada07] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_reciprocal_032077e6380ada07] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_setScale_0a2a1ac2721c0336] = env->getMethodID(cls, "setScale", "(I)V");
          mids$[mid_subtract_916d074b37ce122c] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/BigReal;)Lorg/hipparchus/util/BigReal;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ONE = new BigReal(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/util/BigReal;"));
          ZERO = new BigReal(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/util/BigReal;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigReal::BigReal(const JArray< jchar > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_819ed274952f967e, a0.this$)) {}

      BigReal::BigReal(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

      BigReal::BigReal(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

      BigReal::BigReal(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      BigReal::BigReal(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

      BigReal::BigReal(const JArray< jchar > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2df38be22737223f, a0.this$, a1, a2)) {}

      BigReal BigReal::add(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_add_916d074b37ce122c], a0.this$));
      }

      jint BigReal::compareTo(const BigReal & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_d6baeffb117a468b], a0.this$);
      }

      BigReal BigReal::divide(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_divide_916d074b37ce122c], a0.this$));
      }

      jdouble BigReal::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_456d9a2f64d6b28d]);
      }

      jboolean BigReal::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      ::org::hipparchus::Field BigReal::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      jdouble BigReal::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
      }

      jint BigReal::getScale() const
      {
        return env->callIntMethod(this$, mids$[mid_getScale_f2f64475e4580546]);
      }

      jint BigReal::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      BigReal BigReal::multiply(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_multiply_916d074b37ce122c], a0.this$));
      }

      BigReal BigReal::multiply(jint a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_multiply_b29a900833a8d2ea], a0));
      }

      BigReal BigReal::negate() const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_negate_032077e6380ada07]));
      }

      BigReal BigReal::reciprocal() const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_reciprocal_032077e6380ada07]));
      }

      void BigReal::setScale(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScale_0a2a1ac2721c0336], a0);
      }

      BigReal BigReal::subtract(const BigReal & a0) const
      {
        return BigReal(env->callObjectMethod(this$, mids$[mid_subtract_916d074b37ce122c], a0.this$));
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
      static PyObject *t_BigReal_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigReal_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigReal_init_(t_BigReal *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigReal_add(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_compareTo(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_divide(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_doubleValue(t_BigReal *self);
      static PyObject *t_BigReal_equals(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_getField(t_BigReal *self);
      static PyObject *t_BigReal_getReal(t_BigReal *self);
      static PyObject *t_BigReal_getScale(t_BigReal *self);
      static PyObject *t_BigReal_hashCode(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_multiply(t_BigReal *self, PyObject *args);
      static PyObject *t_BigReal_negate(t_BigReal *self);
      static PyObject *t_BigReal_reciprocal(t_BigReal *self);
      static PyObject *t_BigReal_setScale(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_subtract(t_BigReal *self, PyObject *arg);
      static PyObject *t_BigReal_get__field(t_BigReal *self, void *data);
      static PyObject *t_BigReal_get__real(t_BigReal *self, void *data);
      static PyObject *t_BigReal_get__scale(t_BigReal *self, void *data);
      static int t_BigReal_set__scale(t_BigReal *self, PyObject *arg, void *data);
      static PyGetSetDef t_BigReal__fields_[] = {
        DECLARE_GET_FIELD(t_BigReal, field),
        DECLARE_GET_FIELD(t_BigReal, real),
        DECLARE_GETSET_FIELD(t_BigReal, scale),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigReal__methods_[] = {
        DECLARE_METHOD(t_BigReal, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigReal, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigReal, add, METH_O),
        DECLARE_METHOD(t_BigReal, compareTo, METH_O),
        DECLARE_METHOD(t_BigReal, divide, METH_O),
        DECLARE_METHOD(t_BigReal, doubleValue, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, getField, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, getReal, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, getScale, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BigReal, negate, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_BigReal, setScale, METH_O),
        DECLARE_METHOD(t_BigReal, subtract, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigReal)[] = {
        { Py_tp_methods, t_BigReal__methods_ },
        { Py_tp_init, (void *) t_BigReal_init_ },
        { Py_tp_getset, t_BigReal__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigReal)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigReal, t_BigReal, BigReal);

      void t_BigReal::install(PyObject *module)
      {
        installType(&PY_TYPE(BigReal), &PY_TYPE_DEF(BigReal), module, "BigReal", 0);
      }

      void t_BigReal::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "class_", make_descriptor(BigReal::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "wrapfn_", make_descriptor(t_BigReal::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "boxfn_", make_descriptor(boxObject));
        env->getClass(BigReal::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "ONE", make_descriptor(t_BigReal::wrap_Object(*BigReal::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigReal), "ZERO", make_descriptor(t_BigReal::wrap_Object(*BigReal::ZERO)));
      }

      static PyObject *t_BigReal_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigReal::initializeClass, 1)))
          return NULL;
        return t_BigReal::wrap_Object(BigReal(((t_BigReal *) arg)->object.this$));
      }
      static PyObject *t_BigReal_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigReal::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigReal_init_(t_BigReal *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jchar > a0((jobject) NULL);
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "[C", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = BigReal(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jchar > a0((jobject) NULL);
            jint a1;
            jint a2;
            BigReal object((jobject) NULL);

            if (!parseArgs(args, "[CII", &a0, &a1, &a2))
            {
              INT_CALL(object = BigReal(a0, a1, a2));
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

      static PyObject *t_BigReal_add(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_BigReal_compareTo(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_BigReal_divide(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.divide(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "divide", arg);
        return NULL;
      }

      static PyObject *t_BigReal_doubleValue(t_BigReal *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigReal_equals(t_BigReal *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigReal), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigReal_getField(t_BigReal *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(BigReal));
      }

      static PyObject *t_BigReal_getReal(t_BigReal *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigReal_getScale(t_BigReal *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getScale());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigReal_hashCode(t_BigReal *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigReal), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigReal_multiply(t_BigReal *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigReal a0((jobject) NULL);
            BigReal result((jobject) NULL);

            if (!parseArgs(args, "k", BigReal::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigReal::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigReal result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigReal::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_BigReal_negate(t_BigReal *self)
      {
        BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigReal_reciprocal(t_BigReal *self)
      {
        BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigReal_setScale(t_BigReal *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setScale(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScale", arg);
        return NULL;
      }

      static PyObject *t_BigReal_subtract(t_BigReal *self, PyObject *arg)
      {
        BigReal a0((jobject) NULL);
        BigReal result((jobject) NULL);

        if (!parseArg(arg, "k", BigReal::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_BigReal::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_BigReal_get__field(t_BigReal *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_BigReal_get__real(t_BigReal *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_BigReal_get__scale(t_BigReal *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getScale());
        return PyLong_FromLong((long) value);
      }
      static int t_BigReal_set__scale(t_BigReal *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setScale(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scale", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *NRLMSISE00::class$ = NULL;
          jmethodID *NRLMSISE00::mids$ = NULL;
          bool NRLMSISE00::live$ = false;

          jclass NRLMSISE00::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/NRLMSISE00");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b8492ed5ddc9c0d3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/NRLMSISE00InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_7ae9e48b9511bd6a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/NRLMSISE00InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_e3f5c4474b151066] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_ee5ac6667b0d4b90] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_withSwitch_5970e9ba856fdbdf] = env->getMethodID(cls, "withSwitch", "(II)Lorg/orekit/models/earth/atmosphere/NRLMSISE00;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NRLMSISE00::NRLMSISE00(const ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b8492ed5ddc9c0d3, a0.this$, a1.this$, a2.this$)) {}

          NRLMSISE00::NRLMSISE00(const ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae9e48b9511bd6a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::CalculusFieldElement NRLMSISE00::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_e3f5c4474b151066], a0.this$, a1.this$, a2.this$));
          }

          jdouble NRLMSISE00::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_ee5ac6667b0d4b90], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::frames::Frame NRLMSISE00::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
          }

          NRLMSISE00 NRLMSISE00::withSwitch(jint a0, jint a1) const
          {
            return NRLMSISE00(env->callObjectMethod(this$, mids$[mid_withSwitch_5970e9ba856fdbdf], a0, a1));
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
        namespace atmosphere {
          static PyObject *t_NRLMSISE00_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NRLMSISE00_init_(t_NRLMSISE00 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NRLMSISE00_getDensity(t_NRLMSISE00 *self, PyObject *args);
          static PyObject *t_NRLMSISE00_getFrame(t_NRLMSISE00 *self);
          static PyObject *t_NRLMSISE00_withSwitch(t_NRLMSISE00 *self, PyObject *args);
          static PyObject *t_NRLMSISE00_get__frame(t_NRLMSISE00 *self, void *data);
          static PyGetSetDef t_NRLMSISE00__fields_[] = {
            DECLARE_GET_FIELD(t_NRLMSISE00, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NRLMSISE00__methods_[] = {
            DECLARE_METHOD(t_NRLMSISE00, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_NRLMSISE00, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_NRLMSISE00, withSwitch, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NRLMSISE00)[] = {
            { Py_tp_methods, t_NRLMSISE00__methods_ },
            { Py_tp_init, (void *) t_NRLMSISE00_init_ },
            { Py_tp_getset, t_NRLMSISE00__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NRLMSISE00)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NRLMSISE00, t_NRLMSISE00, NRLMSISE00);

          void t_NRLMSISE00::install(PyObject *module)
          {
            installType(&PY_TYPE(NRLMSISE00), &PY_TYPE_DEF(NRLMSISE00), module, "NRLMSISE00", 0);
          }

          void t_NRLMSISE00::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00), "class_", make_descriptor(NRLMSISE00::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00), "wrapfn_", make_descriptor(t_NRLMSISE00::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NRLMSISE00_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NRLMSISE00::initializeClass, 1)))
              return NULL;
            return t_NRLMSISE00::wrap_Object(NRLMSISE00(((t_NRLMSISE00 *) arg)->object.this$));
          }
          static PyObject *t_NRLMSISE00_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NRLMSISE00::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NRLMSISE00_init_(t_NRLMSISE00 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                NRLMSISE00 object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = NRLMSISE00(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                NRLMSISE00 object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = NRLMSISE00(a0, a1, a2, a3));
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

          static PyObject *t_NRLMSISE00_getDensity(t_NRLMSISE00 *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_NRLMSISE00_getFrame(t_NRLMSISE00 *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_NRLMSISE00_withSwitch(t_NRLMSISE00 *self, PyObject *args)
          {
            jint a0;
            jint a1;
            NRLMSISE00 result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.withSwitch(a0, a1));
              return t_NRLMSISE00::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withSwitch", args);
            return NULL;
          }

          static PyObject *t_NRLMSISE00_get__frame(t_NRLMSISE00 *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Min.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/rank/Min.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
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
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_8308ffa537ab4bee] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/Min;)V");
              mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_29daa50c328b365c] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Min;");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_456d9a2f64d6b28d] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_77e0f9a1f260e2e5] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Min::Min() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void Min::aggregate(const Min & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_8308ffa537ab4bee], a0.this$);
          }

          void Min::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
          }

          Min Min::copy() const
          {
            return Min(env->callObjectMethod(this$, mids$[mid_copy_29daa50c328b365c]));
          }

          jdouble Min::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          jlong Min::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
          }

          jdouble Min::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_456d9a2f64d6b28d]);
          }

          void Min::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_77e0f9a1f260e2e5], a0);
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
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "org/orekit/gnss/metric/parser/MessagesParser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Type::class$ = NULL;
          jmethodID *Type::mids$ = NULL;
          bool Type::live$ = false;
          Type *Type::IGS_SSR = NULL;
          Type *Type::RTCM = NULL;

          jclass Type::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Type");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParser_09ac26d591138915] = env->getMethodID(cls, "getParser", "(Ljava/util/List;)Lorg/orekit/gnss/metric/parser/MessagesParser;");
              mids$[mid_valueOf_f4c0e1b44bda57b4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Type;");
              mids$[mid_values_329c4a6079522b88] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/Type;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IGS_SSR = new Type(env->getStaticObjectField(cls, "IGS_SSR", "Lorg/orekit/gnss/metric/ntrip/Type;"));
              RTCM = new Type(env->getStaticObjectField(cls, "RTCM", "Lorg/orekit/gnss/metric/ntrip/Type;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::gnss::metric::parser::MessagesParser Type::getParser(const ::java::util::List & a0) const
          {
            return ::org::orekit::gnss::metric::parser::MessagesParser(env->callObjectMethod(this$, mids$[mid_getParser_09ac26d591138915], a0.this$));
          }

          Type Type::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Type(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f4c0e1b44bda57b4], a0.this$));
          }

          JArray< Type > Type::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Type >(env->callStaticObjectMethod(cls, mids$[mid_values_329c4a6079522b88]));
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
        namespace ntrip {
          static PyObject *t_Type_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Type_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Type_of_(t_Type *self, PyObject *args);
          static PyObject *t_Type_getParser(t_Type *self, PyObject *arg);
          static PyObject *t_Type_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Type_values(PyTypeObject *type);
          static PyObject *t_Type_get__parameters_(t_Type *self, void *data);
          static PyGetSetDef t_Type__fields_[] = {
            DECLARE_GET_FIELD(t_Type, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Type__methods_[] = {
            DECLARE_METHOD(t_Type, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Type, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Type, of_, METH_VARARGS),
            DECLARE_METHOD(t_Type, getParser, METH_O),
            DECLARE_METHOD(t_Type, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Type, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Type)[] = {
            { Py_tp_methods, t_Type__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Type__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Type)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Type, t_Type, Type);
          PyObject *t_Type::wrap_Object(const Type& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Type::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Type *self = (t_Type *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Type::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Type::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Type *self = (t_Type *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Type::install(PyObject *module)
          {
            installType(&PY_TYPE(Type), &PY_TYPE_DEF(Type), module, "Type", 0);
          }

          void t_Type::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "class_", make_descriptor(Type::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "wrapfn_", make_descriptor(t_Type::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "boxfn_", make_descriptor(boxObject));
            env->getClass(Type::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "IGS_SSR", make_descriptor(t_Type::wrap_Object(*Type::IGS_SSR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "RTCM", make_descriptor(t_Type::wrap_Object(*Type::RTCM)));
          }

          static PyObject *t_Type_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Type::initializeClass, 1)))
              return NULL;
            return t_Type::wrap_Object(Type(((t_Type *) arg)->object.this$));
          }
          static PyObject *t_Type_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Type::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Type_of_(t_Type *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Type_getParser(t_Type *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::metric::parser::MessagesParser result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.getParser(a0));
              return ::org::orekit::gnss::metric::parser::t_MessagesParser::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getParser", arg);
            return NULL;
          }

          static PyObject *t_Type_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Type result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Type::valueOf(a0));
              return t_Type::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Type_values(PyTypeObject *type)
          {
            JArray< Type > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Type::values());
            return JArray<jobject>(result.this$).wrap(t_Type::wrap_jobject);
          }
          static PyObject *t_Type_get__parameters_(t_Type *self, void *data)
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
#include "org/orekit/estimation/measurements/filtering/ElevationFilter.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *ElevationFilter::class$ = NULL;
          jmethodID *ElevationFilter::mids$ = NULL;
          bool ElevationFilter::live$ = false;

          jclass ElevationFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/ElevationFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_dd574d616afd3f43] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;D)V");
              mids$[mid_filter_00f3b288ddb27bce] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ElevationFilter::ElevationFilter(const ::org::orekit::estimation::measurements::GroundStation & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dd574d616afd3f43, a0.this$, a1)) {}

          void ElevationFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_00f3b288ddb27bce], a0.this$, a1.this$);
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
          static PyObject *t_ElevationFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ElevationFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ElevationFilter_of_(t_ElevationFilter *self, PyObject *args);
          static int t_ElevationFilter_init_(t_ElevationFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ElevationFilter_filter(t_ElevationFilter *self, PyObject *args);
          static PyObject *t_ElevationFilter_get__parameters_(t_ElevationFilter *self, void *data);
          static PyGetSetDef t_ElevationFilter__fields_[] = {
            DECLARE_GET_FIELD(t_ElevationFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ElevationFilter__methods_[] = {
            DECLARE_METHOD(t_ElevationFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ElevationFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ElevationFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_ElevationFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ElevationFilter)[] = {
            { Py_tp_methods, t_ElevationFilter__methods_ },
            { Py_tp_init, (void *) t_ElevationFilter_init_ },
            { Py_tp_getset, t_ElevationFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ElevationFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ElevationFilter, t_ElevationFilter, ElevationFilter);
          PyObject *t_ElevationFilter::wrap_Object(const ElevationFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ElevationFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ElevationFilter *self = (t_ElevationFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ElevationFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ElevationFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ElevationFilter *self = (t_ElevationFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ElevationFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(ElevationFilter), &PY_TYPE_DEF(ElevationFilter), module, "ElevationFilter", 0);
          }

          void t_ElevationFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "class_", make_descriptor(ElevationFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "wrapfn_", make_descriptor(t_ElevationFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ElevationFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ElevationFilter::initializeClass, 1)))
              return NULL;
            return t_ElevationFilter::wrap_Object(ElevationFilter(((t_ElevationFilter *) arg)->object.this$));
          }
          static PyObject *t_ElevationFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ElevationFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ElevationFilter_of_(t_ElevationFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ElevationFilter_init_(t_ElevationFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
            jdouble a1;
            ElevationFilter object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::estimation::measurements::GroundStation::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ElevationFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ElevationFilter_filter(t_ElevationFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
            {
              OBJ_CALL(self->object.filter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filter", args);
            return NULL;
          }
          static PyObject *t_ElevationFilter_get__parameters_(t_ElevationFilter *self, void *data)
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
#include "org/orekit/files/ilrs/CPFWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFWriter::class$ = NULL;
        jmethodID *CPFWriter::mids$ = NULL;
        bool CPFWriter::live$ = false;

        jclass CPFWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b0a39b372287516d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPFHeader;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_init$_65ba074ead79dc34] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPFHeader;Lorg/orekit/time/TimeScale;Z)V");
            mids$[mid_write_e65e411976c35f1d] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFWriter::CPFWriter(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0a39b372287516d, a0.this$, a1.this$)) {}

        CPFWriter::CPFWriter(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::org::orekit::time::TimeScale & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65ba074ead79dc34, a0.this$, a1.this$, a2)) {}

        void CPFWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_e65e411976c35f1d], a0.this$, a1.this$);
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
        static PyObject *t_CPFWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFWriter_init_(t_CPFWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFWriter_write(t_CPFWriter *self, PyObject *args);

        static PyMethodDef t_CPFWriter__methods_[] = {
          DECLARE_METHOD(t_CPFWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFWriter)[] = {
          { Py_tp_methods, t_CPFWriter__methods_ },
          { Py_tp_init, (void *) t_CPFWriter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPFWriter, t_CPFWriter, CPFWriter);

        void t_CPFWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFWriter), &PY_TYPE_DEF(CPFWriter), module, "CPFWriter", 0);
        }

        void t_CPFWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "class_", make_descriptor(CPFWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "wrapfn_", make_descriptor(t_CPFWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFWriter::initializeClass, 1)))
            return NULL;
          return t_CPFWriter::wrap_Object(CPFWriter(((t_CPFWriter *) arg)->object.this$));
        }
        static PyObject *t_CPFWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFWriter_init_(t_CPFWriter *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              CPFWriter object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CPFWriter(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              jboolean a2;
              CPFWriter object((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CPFWriter(a0, a1, a2));
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

        static PyObject *t_CPFWriter_write(t_CPFWriter *self, PyObject *args)
        {
          ::java::lang::Appendable a0((jobject) NULL);
          ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
          {
            OBJ_CALL(self->object.write(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *NormalizedGeodeticPoint::class$ = NULL;
        jmethodID *NormalizedGeodeticPoint::mids$ = NULL;
        bool NormalizedGeodeticPoint::live$ = false;

        jclass NormalizedGeodeticPoint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/NormalizedGeodeticPoint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getLongitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NormalizedGeodeticPoint::NormalizedGeodeticPoint(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::bodies::GeodeticPoint(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

        jboolean NormalizedGeodeticPoint::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        jdouble NormalizedGeodeticPoint::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_456d9a2f64d6b28d]);
        }

        jint NormalizedGeodeticPoint::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
        static PyObject *t_NormalizedGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NormalizedGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NormalizedGeodeticPoint_init_(t_NormalizedGeodeticPoint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NormalizedGeodeticPoint_equals(t_NormalizedGeodeticPoint *self, PyObject *args);
        static PyObject *t_NormalizedGeodeticPoint_getLongitude(t_NormalizedGeodeticPoint *self, PyObject *args);
        static PyObject *t_NormalizedGeodeticPoint_hashCode(t_NormalizedGeodeticPoint *self, PyObject *args);
        static PyObject *t_NormalizedGeodeticPoint_get__longitude(t_NormalizedGeodeticPoint *self, void *data);
        static PyGetSetDef t_NormalizedGeodeticPoint__fields_[] = {
          DECLARE_GET_FIELD(t_NormalizedGeodeticPoint, longitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NormalizedGeodeticPoint__methods_[] = {
          DECLARE_METHOD(t_NormalizedGeodeticPoint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalizedGeodeticPoint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalizedGeodeticPoint, equals, METH_VARARGS),
          DECLARE_METHOD(t_NormalizedGeodeticPoint, getLongitude, METH_VARARGS),
          DECLARE_METHOD(t_NormalizedGeodeticPoint, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NormalizedGeodeticPoint)[] = {
          { Py_tp_methods, t_NormalizedGeodeticPoint__methods_ },
          { Py_tp_init, (void *) t_NormalizedGeodeticPoint_init_ },
          { Py_tp_getset, t_NormalizedGeodeticPoint__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NormalizedGeodeticPoint)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::GeodeticPoint),
          NULL
        };

        DEFINE_TYPE(NormalizedGeodeticPoint, t_NormalizedGeodeticPoint, NormalizedGeodeticPoint);

        void t_NormalizedGeodeticPoint::install(PyObject *module)
        {
          installType(&PY_TYPE(NormalizedGeodeticPoint), &PY_TYPE_DEF(NormalizedGeodeticPoint), module, "NormalizedGeodeticPoint", 0);
        }

        void t_NormalizedGeodeticPoint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedGeodeticPoint), "class_", make_descriptor(NormalizedGeodeticPoint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedGeodeticPoint), "wrapfn_", make_descriptor(t_NormalizedGeodeticPoint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedGeodeticPoint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NormalizedGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NormalizedGeodeticPoint::initializeClass, 1)))
            return NULL;
          return t_NormalizedGeodeticPoint::wrap_Object(NormalizedGeodeticPoint(((t_NormalizedGeodeticPoint *) arg)->object.this$));
        }
        static PyObject *t_NormalizedGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NormalizedGeodeticPoint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NormalizedGeodeticPoint_init_(t_NormalizedGeodeticPoint *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          NormalizedGeodeticPoint object((jobject) NULL);

          if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = NormalizedGeodeticPoint(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NormalizedGeodeticPoint_equals(t_NormalizedGeodeticPoint *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(NormalizedGeodeticPoint), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_NormalizedGeodeticPoint_getLongitude(t_NormalizedGeodeticPoint *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getLongitude());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalizedGeodeticPoint), (PyObject *) self, "getLongitude", args, 2);
        }

        static PyObject *t_NormalizedGeodeticPoint_hashCode(t_NormalizedGeodeticPoint *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(NormalizedGeodeticPoint), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_NormalizedGeodeticPoint_get__longitude(t_NormalizedGeodeticPoint *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldBoundedPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldBoundedPropagator::class$ = NULL;
      jmethodID *PythonFieldBoundedPropagator::mids$ = NULL;
      bool PythonFieldBoundedPropagator::live$ = false;

      jclass PythonFieldBoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldBoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_a97b38ef37f9ad9f] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_1843b26af41f9c8e] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_a6156df500549a58] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_a9ea70419e870eb4] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_cfcfd130f9013e3e] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_a553824829fc2514] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f62ccf08eef5924] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMaxDate_09b0a926600dfc14] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMinDate_09b0a926600dfc14] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMultiplexer_e40bff2c3349a3fd] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_6b161f495ea569b8] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_85b5a3e9101d7c1f] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_195e701ebc75aca3] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_52154b94d63e10ed] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldBoundedPropagator::PythonFieldBoundedPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFieldBoundedPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFieldBoundedPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFieldBoundedPropagator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonFieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldBoundedPropagator_of_(t_PythonFieldBoundedPropagator *self, PyObject *args);
      static int t_PythonFieldBoundedPropagator_init_(t_PythonFieldBoundedPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldBoundedPropagator_finalize(t_PythonFieldBoundedPropagator *self);
      static PyObject *t_PythonFieldBoundedPropagator_pythonExtension(t_PythonFieldBoundedPropagator *self, PyObject *args);
      static void JNICALL t_PythonFieldBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonFieldBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFieldBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldBoundedPropagator_get__self(t_PythonFieldBoundedPropagator *self, void *data);
      static PyObject *t_PythonFieldBoundedPropagator_get__parameters_(t_PythonFieldBoundedPropagator *self, void *data);
      static PyGetSetDef t_PythonFieldBoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldBoundedPropagator, self),
        DECLARE_GET_FIELD(t_PythonFieldBoundedPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldBoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldBoundedPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldBoundedPropagator)[] = {
        { Py_tp_methods, t_PythonFieldBoundedPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldBoundedPropagator_init_ },
        { Py_tp_getset, t_PythonFieldBoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldBoundedPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldBoundedPropagator, t_PythonFieldBoundedPropagator, PythonFieldBoundedPropagator);
      PyObject *t_PythonFieldBoundedPropagator::wrap_Object(const PythonFieldBoundedPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldBoundedPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldBoundedPropagator *self = (t_PythonFieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldBoundedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldBoundedPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldBoundedPropagator *self = (t_PythonFieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldBoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldBoundedPropagator), &PY_TYPE_DEF(PythonFieldBoundedPropagator), module, "PythonFieldBoundedPropagator", 1);
      }

      void t_PythonFieldBoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldBoundedPropagator), "class_", make_descriptor(PythonFieldBoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldBoundedPropagator), "wrapfn_", make_descriptor(t_PythonFieldBoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldBoundedPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldBoundedPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V", (void *) t_PythonFieldBoundedPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldBoundedPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonFieldBoundedPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonFieldBoundedPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonFieldBoundedPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;", (void *) t_PythonFieldBoundedPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonFieldBoundedPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFieldBoundedPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldBoundedPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonFieldBoundedPropagator_getManagedAdditionalStates9 },
          { "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;", (void *) t_PythonFieldBoundedPropagator_getMaxDate10 },
          { "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;", (void *) t_PythonFieldBoundedPropagator_getMinDate11 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;", (void *) t_PythonFieldBoundedPropagator_getMultiplexer12 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonFieldBoundedPropagator_getPVCoordinates13 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonFieldBoundedPropagator_isAdditionalStateManaged14 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldBoundedPropagator_propagate15 },
          { "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldBoundedPropagator_propagate16 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldBoundedPropagator_pythonDecRef17 },
          { "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldBoundedPropagator_resetInitialState18 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonFieldBoundedPropagator_setAttitudeProvider19 },
        };
        env->registerNatives(cls, methods, 20);
      }

      static PyObject *t_PythonFieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldBoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldBoundedPropagator::wrap_Object(PythonFieldBoundedPropagator(((t_PythonFieldBoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldBoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldBoundedPropagator_of_(t_PythonFieldBoundedPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldBoundedPropagator_init_(t_PythonFieldBoundedPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldBoundedPropagator object((jobject) NULL);

        INT_CALL(object = PythonFieldBoundedPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldBoundedPropagator_finalize(t_PythonFieldBoundedPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldBoundedPropagator_pythonExtension(t_PythonFieldBoundedPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonFieldBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldAdditionalStateProvider::wrap_Object(::org::orekit::propagation::FieldAdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalStateProviders", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getAdditionalStateProviders", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getAttitudeProvider", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldEphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getFrame", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("getInitialState", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::String > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getManagedAdditionalStates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[s", &value))
        {
          throwTypeError("getManagedAdditionalStates", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMaxDate", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMinDate", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer::initializeClass, &value))
        {
          throwTypeError("getMultiplexer", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static jboolean JNICALL t_PythonFieldBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isAdditionalStateManaged", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isAdditionalStateManaged", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static jobject JNICALL t_PythonFieldBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonFieldBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonFieldBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "setAttitudeProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonFieldBoundedPropagator_get__self(t_PythonFieldBoundedPropagator *self, void *data)
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
      static PyObject *t_PythonFieldBoundedPropagator_get__parameters_(t_PythonFieldBoundedPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixChangingVisitor::class$ = NULL;
      jmethodID *FieldMatrixChangingVisitor::mids$ = NULL;
      bool FieldMatrixChangingVisitor::live$ = false;

      jclass FieldMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_7e89936bdf79375b] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_47d591670cfcc314] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_ad4e446b355be785] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldMatrixChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_7e89936bdf79375b]));
      }

      void FieldMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_47d591670cfcc314], a0, a1, a2, a3, a4, a5);
      }

      ::org::hipparchus::FieldElement FieldMatrixChangingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_ad4e446b355be785], a0, a1, a2.this$));
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
      static PyObject *t_FieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixChangingVisitor_of_(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_end(t_FieldMatrixChangingVisitor *self);
      static PyObject *t_FieldMatrixChangingVisitor_start(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_visit(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_get__parameters_(t_FieldMatrixChangingVisitor *self, void *data);
      static PyGetSetDef t_FieldMatrixChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_FieldMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixChangingVisitor, t_FieldMatrixChangingVisitor, FieldMatrixChangingVisitor);
      PyObject *t_FieldMatrixChangingVisitor::wrap_Object(const FieldMatrixChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixChangingVisitor *self = (t_FieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixChangingVisitor *self = (t_FieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixChangingVisitor), &PY_TYPE_DEF(FieldMatrixChangingVisitor), module, "FieldMatrixChangingVisitor", 0);
      }

      void t_FieldMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "class_", make_descriptor(FieldMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "wrapfn_", make_descriptor(t_FieldMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixChangingVisitor::wrap_Object(FieldMatrixChangingVisitor(((t_FieldMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixChangingVisitor_of_(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixChangingVisitor_end(t_FieldMatrixChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrixChangingVisitor_start(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldMatrixChangingVisitor_visit(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldMatrixChangingVisitor_get__parameters_(t_FieldMatrixChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldSinhCosh::class$ = NULL;
      jmethodID *FieldSinhCosh::mids$ = NULL;
      bool FieldSinhCosh::live$ = false;

      jclass FieldSinhCosh::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldSinhCosh");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0d8a2282c8979673] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_cosh_dfd7647d9110ac9f] = env->getMethodID(cls, "cosh", "()Ljava/lang/Object;");
          mids$[mid_difference_e90a07b5a1c475aa] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/FieldSinhCosh;Lorg/hipparchus/util/FieldSinhCosh;)Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sinh_dfd7647d9110ac9f] = env->getMethodID(cls, "sinh", "()Ljava/lang/Object;");
          mids$[mid_sum_e90a07b5a1c475aa] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/FieldSinhCosh;Lorg/hipparchus/util/FieldSinhCosh;)Lorg/hipparchus/util/FieldSinhCosh;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSinhCosh::FieldSinhCosh(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d8a2282c8979673, a0.this$, a1.this$)) {}

      ::java::lang::Object FieldSinhCosh::cosh() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cosh_dfd7647d9110ac9f]));
      }

      FieldSinhCosh FieldSinhCosh::difference(const FieldSinhCosh & a0, const FieldSinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_difference_e90a07b5a1c475aa], a0.this$, a1.this$));
      }

      ::java::lang::Object FieldSinhCosh::sinh() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_sinh_dfd7647d9110ac9f]));
      }

      FieldSinhCosh FieldSinhCosh::sum(const FieldSinhCosh & a0, const FieldSinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sum_e90a07b5a1c475aa], a0.this$, a1.this$));
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
      static PyObject *t_FieldSinhCosh_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinhCosh_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinhCosh_of_(t_FieldSinhCosh *self, PyObject *args);
      static int t_FieldSinhCosh_init_(t_FieldSinhCosh *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSinhCosh_cosh(t_FieldSinhCosh *self);
      static PyObject *t_FieldSinhCosh_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinhCosh_sinh(t_FieldSinhCosh *self);
      static PyObject *t_FieldSinhCosh_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinhCosh_get__parameters_(t_FieldSinhCosh *self, void *data);
      static PyGetSetDef t_FieldSinhCosh__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSinhCosh, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSinhCosh__methods_[] = {
        DECLARE_METHOD(t_FieldSinhCosh, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSinhCosh, cosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinhCosh, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, sinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinhCosh, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSinhCosh)[] = {
        { Py_tp_methods, t_FieldSinhCosh__methods_ },
        { Py_tp_init, (void *) t_FieldSinhCosh_init_ },
        { Py_tp_getset, t_FieldSinhCosh__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSinhCosh)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSinhCosh, t_FieldSinhCosh, FieldSinhCosh);
      PyObject *t_FieldSinhCosh::wrap_Object(const FieldSinhCosh& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinhCosh::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinhCosh *self = (t_FieldSinhCosh *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSinhCosh::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinhCosh::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinhCosh *self = (t_FieldSinhCosh *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSinhCosh::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSinhCosh), &PY_TYPE_DEF(FieldSinhCosh), module, "FieldSinhCosh", 0);
      }

      void t_FieldSinhCosh::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "class_", make_descriptor(FieldSinhCosh::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "wrapfn_", make_descriptor(t_FieldSinhCosh::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSinhCosh_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSinhCosh::initializeClass, 1)))
          return NULL;
        return t_FieldSinhCosh::wrap_Object(FieldSinhCosh(((t_FieldSinhCosh *) arg)->object.this$));
      }
      static PyObject *t_FieldSinhCosh_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSinhCosh::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSinhCosh_of_(t_FieldSinhCosh *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSinhCosh_init_(t_FieldSinhCosh *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        FieldSinhCosh object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = FieldSinhCosh(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldSinhCosh_cosh(t_FieldSinhCosh *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinhCosh_difference(PyTypeObject *type, PyObject *args)
      {
        FieldSinhCosh a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinhCosh a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinhCosh result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinhCosh::initializeClass, FieldSinhCosh::initializeClass, &a0, &p0, t_FieldSinhCosh::parameters_, &a1, &p1, t_FieldSinhCosh::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinhCosh::difference(a0, a1));
          return t_FieldSinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_FieldSinhCosh_sinh(t_FieldSinhCosh *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinhCosh_sum(PyTypeObject *type, PyObject *args)
      {
        FieldSinhCosh a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinhCosh a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinhCosh result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinhCosh::initializeClass, FieldSinhCosh::initializeClass, &a0, &p0, t_FieldSinhCosh::parameters_, &a1, &p1, t_FieldSinhCosh::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinhCosh::sum(a0, a1));
          return t_FieldSinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
      static PyObject *t_FieldSinhCosh_get__parameters_(t_FieldSinhCosh *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *HarmonicCurveFitter::class$ = NULL;
      jmethodID *HarmonicCurveFitter::mids$ = NULL;
      bool HarmonicCurveFitter::live$ = false;

      jclass HarmonicCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/HarmonicCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_9217ee8eb10288e2] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_withMaxIterations_ba777541dd810b05] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_withStartPoint_a911bddf12c54170] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/HarmonicCurveFitter;");
          mids$[mid_getProblem_23a9c25631fa37c2] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HarmonicCurveFitter HarmonicCurveFitter::create()
      {
        jclass cls = env->getClass(initializeClass);
        return HarmonicCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_9217ee8eb10288e2]));
      }

      HarmonicCurveFitter HarmonicCurveFitter::withMaxIterations(jint a0) const
      {
        return HarmonicCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_ba777541dd810b05], a0));
      }

      HarmonicCurveFitter HarmonicCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return HarmonicCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_a911bddf12c54170], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_HarmonicCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_create(PyTypeObject *type);
      static PyObject *t_HarmonicCurveFitter_withMaxIterations(t_HarmonicCurveFitter *self, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter_withStartPoint(t_HarmonicCurveFitter *self, PyObject *arg);

      static PyMethodDef t_HarmonicCurveFitter__methods_[] = {
        DECLARE_METHOD(t_HarmonicCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_HarmonicCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HarmonicCurveFitter)[] = {
        { Py_tp_methods, t_HarmonicCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HarmonicCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(HarmonicCurveFitter, t_HarmonicCurveFitter, HarmonicCurveFitter);

      void t_HarmonicCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(HarmonicCurveFitter), &PY_TYPE_DEF(HarmonicCurveFitter), module, "HarmonicCurveFitter", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "ParameterGuesser", make_descriptor(&PY_TYPE_DEF(HarmonicCurveFitter$ParameterGuesser)));
      }

      void t_HarmonicCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "class_", make_descriptor(HarmonicCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "wrapfn_", make_descriptor(t_HarmonicCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HarmonicCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HarmonicCurveFitter::initializeClass, 1)))
          return NULL;
        return t_HarmonicCurveFitter::wrap_Object(HarmonicCurveFitter(((t_HarmonicCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_HarmonicCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HarmonicCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_HarmonicCurveFitter_create(PyTypeObject *type)
      {
        HarmonicCurveFitter result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fitting::HarmonicCurveFitter::create());
        return t_HarmonicCurveFitter::wrap_Object(result);
      }

      static PyObject *t_HarmonicCurveFitter_withMaxIterations(t_HarmonicCurveFitter *self, PyObject *arg)
      {
        jint a0;
        HarmonicCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_HarmonicCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_HarmonicCurveFitter_withStartPoint(t_HarmonicCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        HarmonicCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_HarmonicCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "java/util/Map.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldShortPeriodTerms::class$ = NULL;
            jmethodID *FieldShortPeriodTerms::mids$ = NULL;
            bool FieldShortPeriodTerms::live$ = false;

            jclass FieldShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCoefficients_a035db54d6f73186] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_0090f7797e403f43] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_value_bc63835161dae773] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Map FieldShortPeriodTerms::getCoefficients(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Set & a1) const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCoefficients_a035db54d6f73186], a0.this$, a1.this$));
            }

            ::java::lang::String FieldShortPeriodTerms::getCoefficientsKeyPrefix() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoefficientsKeyPrefix_0090f7797e403f43]));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldShortPeriodTerms::value(const ::org::orekit::orbits::FieldOrbit & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_bc63835161dae773], a0.this$));
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
            static PyObject *t_FieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_of_(t_FieldShortPeriodTerms *self, PyObject *args);
            static PyObject *t_FieldShortPeriodTerms_getCoefficients(t_FieldShortPeriodTerms *self, PyObject *args);
            static PyObject *t_FieldShortPeriodTerms_getCoefficientsKeyPrefix(t_FieldShortPeriodTerms *self);
            static PyObject *t_FieldShortPeriodTerms_value(t_FieldShortPeriodTerms *self, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_get__coefficientsKeyPrefix(t_FieldShortPeriodTerms *self, void *data);
            static PyObject *t_FieldShortPeriodTerms_get__parameters_(t_FieldShortPeriodTerms *self, void *data);
            static PyGetSetDef t_FieldShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_FieldShortPeriodTerms, coefficientsKeyPrefix),
              DECLARE_GET_FIELD(t_FieldShortPeriodTerms, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_FieldShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, getCoefficients, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, getCoefficientsKeyPrefix, METH_NOARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldShortPeriodTerms)[] = {
              { Py_tp_methods, t_FieldShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldShortPeriodTerms, t_FieldShortPeriodTerms, FieldShortPeriodTerms);
            PyObject *t_FieldShortPeriodTerms::wrap_Object(const FieldShortPeriodTerms& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodTerms::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodTerms *self = (t_FieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldShortPeriodTerms::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodTerms::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodTerms *self = (t_FieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldShortPeriodTerms), &PY_TYPE_DEF(FieldShortPeriodTerms), module, "FieldShortPeriodTerms", 0);
            }

            void t_FieldShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "class_", make_descriptor(FieldShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "wrapfn_", make_descriptor(t_FieldShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_FieldShortPeriodTerms::wrap_Object(FieldShortPeriodTerms(((t_FieldShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_FieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldShortPeriodTerms_of_(t_FieldShortPeriodTerms *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldShortPeriodTerms_getCoefficients(t_FieldShortPeriodTerms *self, PyObject *args)
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::Set a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Set::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Set::parameters_))
              {
                OBJ_CALL(result = self->object.getCoefficients(a0, a1));
                return ::java::util::t_Map::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCoefficients", args);
              return NULL;
            }

            static PyObject *t_FieldShortPeriodTerms_getCoefficientsKeyPrefix(t_FieldShortPeriodTerms *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCoefficientsKeyPrefix());
              return j2p(result);
            }

            static PyObject *t_FieldShortPeriodTerms_value(t_FieldShortPeriodTerms *self, PyObject *arg)
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
              return NULL;
            }
            static PyObject *t_FieldShortPeriodTerms_get__parameters_(t_FieldShortPeriodTerms *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldShortPeriodTerms_get__coefficientsKeyPrefix(t_FieldShortPeriodTerms *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCoefficientsKeyPrefix());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/ModifiedLambdaMethod.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *ModifiedLambdaMethod::class$ = NULL;
          jmethodID *ModifiedLambdaMethod::mids$ = NULL;
          bool ModifiedLambdaMethod::live$ = false;

          jclass ModifiedLambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/ModifiedLambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_sign_0ba5fed9597b693e] = env->getMethodID(cls, "sign", "(D)D");
              mids$[mid_inverseDecomposition_7ae3461a92a43152] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_reduction_7ae3461a92a43152] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_discreteSearch_7ae3461a92a43152] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_ltdlDecomposition_7ae3461a92a43152] = env->getMethodID(cls, "ltdlDecomposition", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifiedLambdaMethod::ModifiedLambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
        namespace gnss {
          static PyObject *t_ModifiedLambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifiedLambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifiedLambdaMethod_init_(t_ModifiedLambdaMethod *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_ModifiedLambdaMethod__methods_[] = {
            DECLARE_METHOD(t_ModifiedLambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedLambdaMethod, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifiedLambdaMethod)[] = {
            { Py_tp_methods, t_ModifiedLambdaMethod__methods_ },
            { Py_tp_init, (void *) t_ModifiedLambdaMethod_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifiedLambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(ModifiedLambdaMethod, t_ModifiedLambdaMethod, ModifiedLambdaMethod);

          void t_ModifiedLambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifiedLambdaMethod), &PY_TYPE_DEF(ModifiedLambdaMethod), module, "ModifiedLambdaMethod", 0);
          }

          void t_ModifiedLambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedLambdaMethod), "class_", make_descriptor(ModifiedLambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedLambdaMethod), "wrapfn_", make_descriptor(t_ModifiedLambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedLambdaMethod), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifiedLambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifiedLambdaMethod::initializeClass, 1)))
              return NULL;
            return t_ModifiedLambdaMethod::wrap_Object(ModifiedLambdaMethod(((t_ModifiedLambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_ModifiedLambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifiedLambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifiedLambdaMethod_init_(t_ModifiedLambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            ModifiedLambdaMethod object((jobject) NULL);

            INT_CALL(object = ModifiedLambdaMethod());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmMetadataKey::class$ = NULL;
            jmethodID *TdmMetadataKey::mids$ = NULL;
            bool TdmMetadataKey::live$ = false;
            TdmMetadataKey *TdmMetadataKey::ANGLE_TYPE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTIONS_APPLIED = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ABERRATION_DIURNAL = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ABERRATION_YEARLY = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ANGLE_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ANGLE_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_DOPPLER = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_MAG = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RANGE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RCS = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RECEIVE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_TRANSMIT = NULL;
            TdmMetadataKey *TdmMetadataKey::DATA_QUALITY = NULL;
            TdmMetadataKey *TdmMetadataKey::DATA_TYPES = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_BIAS = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_ROLLOVER = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_SCALE = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::FREQ_OFFSET = NULL;
            TdmMetadataKey *TdmMetadataKey::INTEGRATION_INTERVAL = NULL;
            TdmMetadataKey *TdmMetadataKey::INTEGRATION_REF = NULL;
            TdmMetadataKey *TdmMetadataKey::INTERPOLATION = NULL;
            TdmMetadataKey *TdmMetadataKey::INTERPOLATION_DEGREE = NULL;
            TdmMetadataKey *TdmMetadataKey::MODE = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_MODE = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_MODULUS = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_UNITS = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_BAND = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::REFERENCE_FRAME = NULL;
            TdmMetadataKey *TdmMetadataKey::START_TIME = NULL;
            TdmMetadataKey *TdmMetadataKey::STOP_TIME = NULL;
            TdmMetadataKey *TdmMetadataKey::TIMETAG_REF = NULL;
            TdmMetadataKey *TdmMetadataKey::TRACK_ID = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_BAND = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::TURNAROUND_DENOMINATOR = NULL;
            TdmMetadataKey *TdmMetadataKey::TURNAROUND_NUMERATOR = NULL;

            jclass TdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_78ad67048f905a40] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;)Z");
                mids$[mid_valueOf_ffe28d90ef8d6653] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;");
                mids$[mid_values_9b004f5c0beeec69] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ANGLE_TYPE = new TdmMetadataKey(env->getStaticObjectField(cls, "ANGLE_TYPE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTIONS_APPLIED = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTIONS_APPLIED", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ABERRATION_DIURNAL = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ABERRATION_DIURNAL", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ABERRATION_YEARLY = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ABERRATION_YEARLY", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ANGLE_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ANGLE_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ANGLE_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ANGLE_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_DOPPLER = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_DOPPLER", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_MAG = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_MAG", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RANGE = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RANGE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RCS = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RCS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RECEIVE = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RECEIVE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_TRANSMIT = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_TRANSMIT", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DATA_QUALITY = new TdmMetadataKey(env->getStaticObjectField(cls, "DATA_QUALITY", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DATA_TYPES = new TdmMetadataKey(env->getStaticObjectField(cls, "DATA_TYPES", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_BIAS = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_BIAS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_ROLLOVER = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_ROLLOVER", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_SCALE = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_SCALE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                FREQ_OFFSET = new TdmMetadataKey(env->getStaticObjectField(cls, "FREQ_OFFSET", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTEGRATION_INTERVAL = new TdmMetadataKey(env->getStaticObjectField(cls, "INTEGRATION_INTERVAL", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTEGRATION_REF = new TdmMetadataKey(env->getStaticObjectField(cls, "INTEGRATION_REF", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTERPOLATION = new TdmMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTERPOLATION_DEGREE = new TdmMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                MODE = new TdmMetadataKey(env->getStaticObjectField(cls, "MODE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_MODE = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_MODE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_MODULUS = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_MODULUS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_UNITS = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_UNITS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_BAND = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_BAND", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                REFERENCE_FRAME = new TdmMetadataKey(env->getStaticObjectField(cls, "REFERENCE_FRAME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                START_TIME = new TdmMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                STOP_TIME = new TdmMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TIMETAG_REF = new TdmMetadataKey(env->getStaticObjectField(cls, "TIMETAG_REF", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRACK_ID = new TdmMetadataKey(env->getStaticObjectField(cls, "TRACK_ID", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_BAND = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_BAND", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TURNAROUND_DENOMINATOR = new TdmMetadataKey(env->getStaticObjectField(cls, "TURNAROUND_DENOMINATOR", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TURNAROUND_NUMERATOR = new TdmMetadataKey(env->getStaticObjectField(cls, "TURNAROUND_NUMERATOR", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean TdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_78ad67048f905a40], a0.this$, a1.this$, a2.this$);
            }

            TdmMetadataKey TdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ffe28d90ef8d6653], a0.this$));
            }

            JArray< TdmMetadataKey > TdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_9b004f5c0beeec69]));
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
          namespace tdm {
            static PyObject *t_TdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadataKey_of_(t_TdmMetadataKey *self, PyObject *args);
            static PyObject *t_TdmMetadataKey_process(t_TdmMetadataKey *self, PyObject *args);
            static PyObject *t_TdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_TdmMetadataKey_get__parameters_(t_TdmMetadataKey *self, void *data);
            static PyGetSetDef t_TdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_TdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_TdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmMetadataKey)[] = {
              { Py_tp_methods, t_TdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TdmMetadataKey, t_TdmMetadataKey, TdmMetadataKey);
            PyObject *t_TdmMetadataKey::wrap_Object(const TdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmMetadataKey *self = (t_TdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmMetadataKey *self = (t_TdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmMetadataKey), &PY_TYPE_DEF(TdmMetadataKey), module, "TdmMetadataKey", 0);
            }

            void t_TdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "class_", make_descriptor(TdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "wrapfn_", make_descriptor(t_TdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "ANGLE_TYPE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::ANGLE_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTIONS_APPLIED", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTIONS_APPLIED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ABERRATION_DIURNAL", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ABERRATION_DIURNAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ABERRATION_YEARLY", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ABERRATION_YEARLY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ANGLE_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ANGLE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ANGLE_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ANGLE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_DOPPLER", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_DOPPLER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_MAG", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_MAG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RANGE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RANGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RCS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RECEIVE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RECEIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_TRANSMIT", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_TRANSMIT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DATA_QUALITY", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DATA_QUALITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DATA_TYPES", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DATA_TYPES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_BIAS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_BIAS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_ROLLOVER", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_ROLLOVER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_SCALE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_SCALE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "FREQ_OFFSET", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::FREQ_OFFSET)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTEGRATION_INTERVAL", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTEGRATION_INTERVAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTEGRATION_REF", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTEGRATION_REF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTERPOLATION", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTERPOLATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTERPOLATION_DEGREE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "MODE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::MODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_MODE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_MODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_MODULUS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_MODULUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_UNITS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_UNITS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_BAND", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_BAND)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "REFERENCE_FRAME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::REFERENCE_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "START_TIME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::START_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "STOP_TIME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::STOP_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TIMETAG_REF", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TIMETAG_REF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRACK_ID", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRACK_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_BAND", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_BAND)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TURNAROUND_DENOMINATOR", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TURNAROUND_DENOMINATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TURNAROUND_NUMERATOR", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TURNAROUND_NUMERATOR)));
            }

            static PyObject *t_TdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_TdmMetadataKey::wrap_Object(TdmMetadataKey(((t_TdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_TdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmMetadataKey_of_(t_TdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmMetadataKey_process(t_TdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_TdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmMetadataKey::valueOf(a0));
                return t_TdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< TdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_TdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_TdmMetadataKey_get__parameters_(t_TdmMetadataKey *self, void *data)
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
#include "org/orekit/gnss/antenna/SatelliteAntenna.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *SatelliteAntenna::class$ = NULL;
        jmethodID *SatelliteAntenna::mids$ = NULL;
        bool SatelliteAntenna::live$ = false;

        jclass SatelliteAntenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/SatelliteAntenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c67d92af369348d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/antenna/SatelliteType;ILjava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getCosparID_0090f7797e403f43] = env->getMethodID(cls, "getCosparID", "()Ljava/lang/String;");
            mids$[mid_getPrnNumber_f2f64475e4580546] = env->getMethodID(cls, "getPrnNumber", "()I");
            mids$[mid_getSatelliteCode_f2f64475e4580546] = env->getMethodID(cls, "getSatelliteCode", "()I");
            mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSatelliteType_334ebad3fd252e3f] = env->getMethodID(cls, "getSatelliteType", "()Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_getValidFrom_aaa854c403487cf3] = env->getMethodID(cls, "getValidFrom", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getValidUntil_aaa854c403487cf3] = env->getMethodID(cls, "getValidUntil", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SatelliteAntenna::SatelliteAntenna(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::util::Map & a2, const ::org::orekit::gnss::SatelliteSystem & a3, jint a4, const ::org::orekit::gnss::antenna::SatelliteType & a5, jint a6, const ::java::lang::String & a7, const ::org::orekit::time::AbsoluteDate & a8, const ::org::orekit::time::AbsoluteDate & a9) : ::org::orekit::gnss::antenna::Antenna(env->newObject(initializeClass, &mids$, mid_init$_2c67d92af369348d, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6, a7.this$, a8.this$, a9.this$)) {}

        ::java::lang::String SatelliteAntenna::getCosparID() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCosparID_0090f7797e403f43]));
        }

        jint SatelliteAntenna::getPrnNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getPrnNumber_f2f64475e4580546]);
        }

        jint SatelliteAntenna::getSatelliteCode() const
        {
          return env->callIntMethod(this$, mids$[mid_getSatelliteCode_f2f64475e4580546]);
        }

        ::org::orekit::gnss::SatelliteSystem SatelliteAntenna::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7]));
        }

        ::org::orekit::gnss::antenna::SatelliteType SatelliteAntenna::getSatelliteType() const
        {
          return ::org::orekit::gnss::antenna::SatelliteType(env->callObjectMethod(this$, mids$[mid_getSatelliteType_334ebad3fd252e3f]));
        }

        ::org::orekit::time::AbsoluteDate SatelliteAntenna::getValidFrom() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidFrom_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate SatelliteAntenna::getValidUntil() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidUntil_aaa854c403487cf3]));
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
      namespace antenna {
        static PyObject *t_SatelliteAntenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteAntenna_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SatelliteAntenna_init_(t_SatelliteAntenna *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SatelliteAntenna_getCosparID(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getPrnNumber(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteCode(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteSystem(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteType(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getValidFrom(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getValidUntil(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_get__cosparID(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__prnNumber(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteCode(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteSystem(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteType(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__validFrom(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__validUntil(t_SatelliteAntenna *self, void *data);
        static PyGetSetDef t_SatelliteAntenna__fields_[] = {
          DECLARE_GET_FIELD(t_SatelliteAntenna, cosparID),
          DECLARE_GET_FIELD(t_SatelliteAntenna, prnNumber),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteCode),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteSystem),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteType),
          DECLARE_GET_FIELD(t_SatelliteAntenna, validFrom),
          DECLARE_GET_FIELD(t_SatelliteAntenna, validUntil),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SatelliteAntenna__methods_[] = {
          DECLARE_METHOD(t_SatelliteAntenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteAntenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteAntenna, getCosparID, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getPrnNumber, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteCode, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteType, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getValidFrom, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getValidUntil, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SatelliteAntenna)[] = {
          { Py_tp_methods, t_SatelliteAntenna__methods_ },
          { Py_tp_init, (void *) t_SatelliteAntenna_init_ },
          { Py_tp_getset, t_SatelliteAntenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SatelliteAntenna)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::antenna::Antenna),
          NULL
        };

        DEFINE_TYPE(SatelliteAntenna, t_SatelliteAntenna, SatelliteAntenna);

        void t_SatelliteAntenna::install(PyObject *module)
        {
          installType(&PY_TYPE(SatelliteAntenna), &PY_TYPE_DEF(SatelliteAntenna), module, "SatelliteAntenna", 0);
        }

        void t_SatelliteAntenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "class_", make_descriptor(SatelliteAntenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "wrapfn_", make_descriptor(t_SatelliteAntenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SatelliteAntenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SatelliteAntenna::initializeClass, 1)))
            return NULL;
          return t_SatelliteAntenna::wrap_Object(SatelliteAntenna(((t_SatelliteAntenna *) arg)->object.this$));
        }
        static PyObject *t_SatelliteAntenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SatelliteAntenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SatelliteAntenna_init_(t_SatelliteAntenna *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::util::Map a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
          PyTypeObject **p3;
          jint a4;
          ::org::orekit::gnss::antenna::SatelliteType a5((jobject) NULL);
          PyTypeObject **p5;
          jint a6;
          ::java::lang::String a7((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
          SatelliteAntenna object((jobject) NULL);

          if (!parseArgs(args, "ssKKIKIskk", ::java::util::Map::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::antenna::SatelliteType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Map::parameters_, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a4, &a5, &p5, ::org::orekit::gnss::antenna::t_SatelliteType::parameters_, &a6, &a7, &a8, &a9))
          {
            INT_CALL(object = SatelliteAntenna(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SatelliteAntenna_getCosparID(t_SatelliteAntenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getCosparID());
          return j2p(result);
        }

        static PyObject *t_SatelliteAntenna_getPrnNumber(t_SatelliteAntenna *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPrnNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteCode(t_SatelliteAntenna *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSatelliteCode());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteSystem(t_SatelliteAntenna *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteType(t_SatelliteAntenna *self)
        {
          ::org::orekit::gnss::antenna::SatelliteType result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteType());
          return ::org::orekit::gnss::antenna::t_SatelliteType::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getValidFrom(t_SatelliteAntenna *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getValidUntil(t_SatelliteAntenna *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_get__cosparID(t_SatelliteAntenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getCosparID());
          return j2p(value);
        }

        static PyObject *t_SatelliteAntenna_get__prnNumber(t_SatelliteAntenna *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPrnNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteCode(t_SatelliteAntenna *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSatelliteCode());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteSystem(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteType(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::gnss::antenna::SatelliteType value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteType());
          return ::org::orekit::gnss::antenna::t_SatelliteType::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__validFrom(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__validUntil(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/TimeSpanEstimatedTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/troposphere/EstimatedTroposphericModel.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *TimeSpanEstimatedTroposphericModel::class$ = NULL;
          jmethodID *TimeSpanEstimatedTroposphericModel::mids$ = NULL;
          bool TimeSpanEstimatedTroposphericModel::live$ = false;
          ::java::lang::String *TimeSpanEstimatedTroposphericModel::DATE_AFTER = NULL;
          ::java::lang::String *TimeSpanEstimatedTroposphericModel::DATE_BEFORE = NULL;

          jclass TimeSpanEstimatedTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/TimeSpanEstimatedTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c6fb7ef4a979e235] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;)V");
              mids$[mid_init$_f8b676ef258f695c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_addTroposphericModelValidAfter_7c58a07aee9727ab] = env->getMethodID(cls, "addTroposphericModelValidAfter", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_addTroposphericModelValidBefore_7c58a07aee9727ab] = env->getMethodID(cls, "addTroposphericModelValidBefore", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_extractParameters_d7d552e275320f67] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_extractParameters_8b177eb25e4eb468] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFirstSpan_39a1e35b17737f60] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getTroposphericModel_56bce35cef2cb913] = env->getMethodID(cls, "getTroposphericModel", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;");
              mids$[mid_pathDelay_af133f80cdba1dc2] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_0326270bf0e8ed17] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
              DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeSpanEstimatedTroposphericModel::TimeSpanEstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6fb7ef4a979e235, a0.this$)) {}

          TimeSpanEstimatedTroposphericModel::TimeSpanEstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f8b676ef258f695c, a0.this$, a1.this$)) {}

          void TimeSpanEstimatedTroposphericModel::addTroposphericModelValidAfter(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addTroposphericModelValidAfter_7c58a07aee9727ab], a0.this$, a1.this$);
          }

          void TimeSpanEstimatedTroposphericModel::addTroposphericModelValidBefore(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addTroposphericModelValidBefore_7c58a07aee9727ab], a0.this$, a1.this$);
          }

          JArray< jdouble > TimeSpanEstimatedTroposphericModel::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_d7d552e275320f67], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanEstimatedTroposphericModel::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_8b177eb25e4eb468], a0.this$, a1.this$));
          }

          ::org::orekit::utils::TimeSpanMap$Span TimeSpanEstimatedTroposphericModel::getFirstSpan() const
          {
            return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_39a1e35b17737f60]));
          }

          ::java::util::List TimeSpanEstimatedTroposphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel TimeSpanEstimatedTroposphericModel::getTroposphericModel(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel(env->callObjectMethod(this$, mids$[mid_getTroposphericModel_56bce35cef2cb913], a0.this$));
          }

          jdouble TimeSpanEstimatedTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_af133f80cdba1dc2], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement TimeSpanEstimatedTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0326270bf0e8ed17], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_TimeSpanEstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeSpanEstimatedTroposphericModel_init_(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidAfter(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidBefore(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_extractParameters(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getFirstSpan(t_TimeSpanEstimatedTroposphericModel *self);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getParametersDrivers(t_TimeSpanEstimatedTroposphericModel *self);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getTroposphericModel(t_TimeSpanEstimatedTroposphericModel *self, PyObject *arg);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_pathDelay(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__firstSpan(t_TimeSpanEstimatedTroposphericModel *self, void *data);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__parametersDrivers(t_TimeSpanEstimatedTroposphericModel *self, void *data);
          static PyGetSetDef t_TimeSpanEstimatedTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSpanEstimatedTroposphericModel, firstSpan),
            DECLARE_GET_FIELD(t_TimeSpanEstimatedTroposphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSpanEstimatedTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, addTroposphericModelValidAfter, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, addTroposphericModelValidBefore, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, extractParameters, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getFirstSpan, METH_NOARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getTroposphericModel, METH_O),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSpanEstimatedTroposphericModel)[] = {
            { Py_tp_methods, t_TimeSpanEstimatedTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_TimeSpanEstimatedTroposphericModel_init_ },
            { Py_tp_getset, t_TimeSpanEstimatedTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSpanEstimatedTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeSpanEstimatedTroposphericModel, t_TimeSpanEstimatedTroposphericModel, TimeSpanEstimatedTroposphericModel);

          void t_TimeSpanEstimatedTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSpanEstimatedTroposphericModel), &PY_TYPE_DEF(TimeSpanEstimatedTroposphericModel), module, "TimeSpanEstimatedTroposphericModel", 0);
          }

          void t_TimeSpanEstimatedTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "class_", make_descriptor(TimeSpanEstimatedTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "wrapfn_", make_descriptor(t_TimeSpanEstimatedTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(TimeSpanEstimatedTroposphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "DATE_AFTER", make_descriptor(j2p(*TimeSpanEstimatedTroposphericModel::DATE_AFTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "DATE_BEFORE", make_descriptor(j2p(*TimeSpanEstimatedTroposphericModel::DATE_BEFORE)));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSpanEstimatedTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_TimeSpanEstimatedTroposphericModel::wrap_Object(TimeSpanEstimatedTroposphericModel(((t_TimeSpanEstimatedTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_TimeSpanEstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSpanEstimatedTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeSpanEstimatedTroposphericModel_init_(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
                TimeSpanEstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, &a0))
                {
                  INT_CALL(object = TimeSpanEstimatedTroposphericModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
                ::org::orekit::time::TimeScale a1((jobject) NULL);
                TimeSpanEstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = TimeSpanEstimatedTroposphericModel(a0, a1));
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

          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidAfter(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addTroposphericModelValidAfter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTroposphericModelValidAfter", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidBefore(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addTroposphericModelValidBefore(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTroposphericModelValidBefore", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_extractParameters(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
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

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getFirstSpan(t_TimeSpanEstimatedTroposphericModel *self)
          {
            ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirstSpan());
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::models::earth::troposphere::PY_TYPE(EstimatedTroposphericModel));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getParametersDrivers(t_TimeSpanEstimatedTroposphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getTroposphericModel(t_TimeSpanEstimatedTroposphericModel *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTroposphericModel(a0));
              return ::org::orekit::models::earth::troposphere::t_EstimatedTroposphericModel::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getTroposphericModel", arg);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_pathDelay(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
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
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__firstSpan(t_TimeSpanEstimatedTroposphericModel *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirstSpan());
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__parametersDrivers(t_TimeSpanEstimatedTroposphericModel *self, void *data)
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
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "java/lang/String.h"
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DoubleArrayDictionary$Entry::class$ = NULL;
      jmethodID *DoubleArrayDictionary$Entry::mids$ = NULL;
      bool DoubleArrayDictionary$Entry::live$ = false;

      jclass DoubleArrayDictionary$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DoubleArrayDictionary$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_0090f7797e403f43] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getValue_7cdc325af0834901] = env->getMethodID(cls, "getValue", "()[D");
          mids$[mid_increment_ebc26dcaf4761286] = env->getMethodID(cls, "increment", "([D)V");
          mids$[mid_scaledIncrement_23168b0b541a29a2] = env->getMethodID(cls, "scaledIncrement", "(DLorg/orekit/utils/DoubleArrayDictionary$Entry;)V");
          mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
          mids$[mid_zero_7ae3461a92a43152] = env->getMethodID(cls, "zero", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String DoubleArrayDictionary$Entry::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_0090f7797e403f43]));
      }

      JArray< jdouble > DoubleArrayDictionary$Entry::getValue() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValue_7cdc325af0834901]));
      }

      void DoubleArrayDictionary$Entry::increment(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_ebc26dcaf4761286], a0.this$);
      }

      void DoubleArrayDictionary$Entry::scaledIncrement(jdouble a0, const DoubleArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_23168b0b541a29a2], a0, a1.this$);
      }

      jint DoubleArrayDictionary$Entry::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
      }

      void DoubleArrayDictionary$Entry::zero() const
      {
        env->callVoidMethod(this$, mids$[mid_zero_7ae3461a92a43152]);
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
      static PyObject *t_DoubleArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_getKey(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_getValue(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_increment(t_DoubleArrayDictionary$Entry *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_scaledIncrement(t_DoubleArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary$Entry_size(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_zero(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_get__key(t_DoubleArrayDictionary$Entry *self, void *data);
      static PyObject *t_DoubleArrayDictionary$Entry_get__value(t_DoubleArrayDictionary$Entry *self, void *data);
      static PyGetSetDef t_DoubleArrayDictionary$Entry__fields_[] = {
        DECLARE_GET_FIELD(t_DoubleArrayDictionary$Entry, key),
        DECLARE_GET_FIELD(t_DoubleArrayDictionary$Entry, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DoubleArrayDictionary$Entry__methods_[] = {
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, getKey, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, increment, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, scaledIncrement, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, size, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, zero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleArrayDictionary$Entry)[] = {
        { Py_tp_methods, t_DoubleArrayDictionary$Entry__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DoubleArrayDictionary$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleArrayDictionary$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleArrayDictionary$Entry, t_DoubleArrayDictionary$Entry, DoubleArrayDictionary$Entry);

      void t_DoubleArrayDictionary$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleArrayDictionary$Entry), &PY_TYPE_DEF(DoubleArrayDictionary$Entry), module, "DoubleArrayDictionary$Entry", 0);
      }

      void t_DoubleArrayDictionary$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "class_", make_descriptor(DoubleArrayDictionary$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "wrapfn_", make_descriptor(t_DoubleArrayDictionary$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleArrayDictionary$Entry::initializeClass, 1)))
          return NULL;
        return t_DoubleArrayDictionary$Entry::wrap_Object(DoubleArrayDictionary$Entry(((t_DoubleArrayDictionary$Entry *) arg)->object.this$));
      }
      static PyObject *t_DoubleArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleArrayDictionary$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_getKey(t_DoubleArrayDictionary$Entry *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_getValue(t_DoubleArrayDictionary$Entry *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return result.wrap();
      }

      static PyObject *t_DoubleArrayDictionary$Entry_increment(t_DoubleArrayDictionary$Entry *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(self->object.increment(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "increment", arg);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_scaledIncrement(t_DoubleArrayDictionary$Entry *self, PyObject *args)
      {
        jdouble a0;
        DoubleArrayDictionary$Entry a1((jobject) NULL);

        if (!parseArgs(args, "Dk", DoubleArrayDictionary$Entry::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.scaledIncrement(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "scaledIncrement", args);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_size(t_DoubleArrayDictionary$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_zero(t_DoubleArrayDictionary$Entry *self)
      {
        OBJ_CALL(self->object.zero());
        Py_RETURN_NONE;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_get__key(t_DoubleArrayDictionary$Entry *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_get__value(t_DoubleArrayDictionary$Entry *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *FieldElement::class$ = NULL;
    jmethodID *FieldElement::mids$ = NULL;
    bool FieldElement::live$ = false;

    jclass FieldElement::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/FieldElement");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_2ab3500f2b9ac35d] = env->getMethodID(cls, "add", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_divide_2ab3500f2b9ac35d] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
        mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
        mids$[mid_isZero_e470b6d9e0d979db] = env->getMethodID(cls, "isZero", "()Z");
        mids$[mid_multiply_5e30662bac3edb02] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_multiply_2ab3500f2b9ac35d] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_negate_7e89936bdf79375b] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_reciprocal_7e89936bdf79375b] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_subtract_2ab3500f2b9ac35d] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FieldElement FieldElement::add(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_add_2ab3500f2b9ac35d], a0.this$));
    }

    FieldElement FieldElement::divide(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_divide_2ab3500f2b9ac35d], a0.this$));
    }

    ::org::hipparchus::Field FieldElement::getField() const
    {
      return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
    }

    jdouble FieldElement::getReal() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
    }

    jboolean FieldElement::isZero() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isZero_e470b6d9e0d979db]);
    }

    FieldElement FieldElement::multiply(jint a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_5e30662bac3edb02], a0));
    }

    FieldElement FieldElement::multiply(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_2ab3500f2b9ac35d], a0.this$));
    }

    FieldElement FieldElement::negate() const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_negate_7e89936bdf79375b]));
    }

    FieldElement FieldElement::reciprocal() const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_reciprocal_7e89936bdf79375b]));
    }

    FieldElement FieldElement::subtract(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_subtract_2ab3500f2b9ac35d], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_FieldElement_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FieldElement_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FieldElement_of_(t_FieldElement *self, PyObject *args);
    static PyObject *t_FieldElement_add(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_divide(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_getField(t_FieldElement *self);
    static PyObject *t_FieldElement_getReal(t_FieldElement *self);
    static PyObject *t_FieldElement_isZero(t_FieldElement *self);
    static PyObject *t_FieldElement_multiply(t_FieldElement *self, PyObject *args);
    static PyObject *t_FieldElement_negate(t_FieldElement *self);
    static PyObject *t_FieldElement_reciprocal(t_FieldElement *self);
    static PyObject *t_FieldElement_subtract(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_get__field(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__real(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__zero(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__parameters_(t_FieldElement *self, void *data);
    static PyGetSetDef t_FieldElement__fields_[] = {
      DECLARE_GET_FIELD(t_FieldElement, field),
      DECLARE_GET_FIELD(t_FieldElement, real),
      DECLARE_GET_FIELD(t_FieldElement, zero),
      DECLARE_GET_FIELD(t_FieldElement, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FieldElement__methods_[] = {
      DECLARE_METHOD(t_FieldElement, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldElement, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldElement, of_, METH_VARARGS),
      DECLARE_METHOD(t_FieldElement, add, METH_O),
      DECLARE_METHOD(t_FieldElement, divide, METH_O),
      DECLARE_METHOD(t_FieldElement, getField, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, getReal, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, isZero, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, multiply, METH_VARARGS),
      DECLARE_METHOD(t_FieldElement, negate, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, reciprocal, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, subtract, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FieldElement)[] = {
      { Py_tp_methods, t_FieldElement__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_FieldElement__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FieldElement)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FieldElement, t_FieldElement, FieldElement);
    PyObject *t_FieldElement::wrap_Object(const FieldElement& object, PyTypeObject *p0)
    {
      PyObject *obj = t_FieldElement::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_FieldElement *self = (t_FieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_FieldElement::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_FieldElement::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_FieldElement *self = (t_FieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_FieldElement::install(PyObject *module)
    {
      installType(&PY_TYPE(FieldElement), &PY_TYPE_DEF(FieldElement), module, "FieldElement", 0);
    }

    void t_FieldElement::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "class_", make_descriptor(FieldElement::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "wrapfn_", make_descriptor(t_FieldElement::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FieldElement_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FieldElement::initializeClass, 1)))
        return NULL;
      return t_FieldElement::wrap_Object(FieldElement(((t_FieldElement *) arg)->object.this$));
    }
    static PyObject *t_FieldElement_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FieldElement::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_FieldElement_of_(t_FieldElement *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_FieldElement_add(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.add(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_FieldElement_divide(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.divide(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "divide", arg);
      return NULL;
    }

    static PyObject *t_FieldElement_getField(t_FieldElement *self)
    {
      ::org::hipparchus::Field result((jobject) NULL);
      OBJ_CALL(result = self->object.getField());
      return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_FieldElement_getReal(t_FieldElement *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getReal());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_FieldElement_isZero(t_FieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isZero());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_FieldElement_multiply(t_FieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          FieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
          }
        }
        {
          FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "multiply", args);
      return NULL;
    }

    static PyObject *t_FieldElement_negate(t_FieldElement *self)
    {
      FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.negate());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_FieldElement_reciprocal(t_FieldElement *self)
    {
      FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.reciprocal());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_FieldElement_subtract(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.subtract(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "subtract", arg);
      return NULL;
    }
    static PyObject *t_FieldElement_get__parameters_(t_FieldElement *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_FieldElement_get__field(t_FieldElement *self, void *data)
    {
      ::org::hipparchus::Field value((jobject) NULL);
      OBJ_CALL(value = self->object.getField());
      return ::org::hipparchus::t_Field::wrap_Object(value);
    }

    static PyObject *t_FieldElement_get__real(t_FieldElement *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getReal());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_FieldElement_get__zero(t_FieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isZero());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/GraggBulirschStoerIntegrator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GraggBulirschStoerIntegrator::class$ = NULL;
        jmethodID *GraggBulirschStoerIntegrator::mids$ = NULL;
        bool GraggBulirschStoerIntegrator::live$ = false;

        jclass GraggBulirschStoerIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GraggBulirschStoerIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e5787c5177784e12] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_integrate_7efcd57267e426c3] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_setControlFactors_667a7965403ed91a] = env->getMethodID(cls, "setControlFactors", "(DDDD)V");
            mids$[mid_setInterpolationControl_e61872df3ae879e5] = env->getMethodID(cls, "setInterpolationControl", "(ZI)V");
            mids$[mid_setOrderControl_13f7a72902bf1e20] = env->getMethodID(cls, "setOrderControl", "(IDD)V");
            mids$[mid_setStabilityCheck_9b1e296a55c440ad] = env->getMethodID(cls, "setStabilityCheck", "(ZIID)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GraggBulirschStoerIntegrator::GraggBulirschStoerIntegrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e5787c5177784e12, a0, a1, a2.this$, a3.this$)) {}

        GraggBulirschStoerIntegrator::GraggBulirschStoerIntegrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::ODEStateAndDerivative GraggBulirschStoerIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7efcd57267e426c3], a0.this$, a1.this$, a2));
        }

        void GraggBulirschStoerIntegrator::setControlFactors(jdouble a0, jdouble a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setControlFactors_667a7965403ed91a], a0, a1, a2, a3);
        }

        void GraggBulirschStoerIntegrator::setInterpolationControl(jboolean a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setInterpolationControl_e61872df3ae879e5], a0, a1);
        }

        void GraggBulirschStoerIntegrator::setOrderControl(jint a0, jdouble a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrderControl_13f7a72902bf1e20], a0, a1, a2);
        }

        void GraggBulirschStoerIntegrator::setStabilityCheck(jboolean a0, jint a1, jint a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setStabilityCheck_9b1e296a55c440ad], a0, a1, a2, a3);
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
      namespace nonstiff {
        static PyObject *t_GraggBulirschStoerIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GraggBulirschStoerIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GraggBulirschStoerIntegrator_init_(t_GraggBulirschStoerIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GraggBulirschStoerIntegrator_integrate(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setControlFactors(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setInterpolationControl(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setOrderControl(t_GraggBulirschStoerIntegrator *self, PyObject *args);
        static PyObject *t_GraggBulirschStoerIntegrator_setStabilityCheck(t_GraggBulirschStoerIntegrator *self, PyObject *args);

        static PyMethodDef t_GraggBulirschStoerIntegrator__methods_[] = {
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setControlFactors, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setInterpolationControl, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setOrderControl, METH_VARARGS),
          DECLARE_METHOD(t_GraggBulirschStoerIntegrator, setStabilityCheck, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GraggBulirschStoerIntegrator)[] = {
          { Py_tp_methods, t_GraggBulirschStoerIntegrator__methods_ },
          { Py_tp_init, (void *) t_GraggBulirschStoerIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GraggBulirschStoerIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
          NULL
        };

        DEFINE_TYPE(GraggBulirschStoerIntegrator, t_GraggBulirschStoerIntegrator, GraggBulirschStoerIntegrator);

        void t_GraggBulirschStoerIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GraggBulirschStoerIntegrator), &PY_TYPE_DEF(GraggBulirschStoerIntegrator), module, "GraggBulirschStoerIntegrator", 0);
        }

        void t_GraggBulirschStoerIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "class_", make_descriptor(GraggBulirschStoerIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "wrapfn_", make_descriptor(t_GraggBulirschStoerIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GraggBulirschStoerIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GraggBulirschStoerIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GraggBulirschStoerIntegrator::initializeClass, 1)))
            return NULL;
          return t_GraggBulirschStoerIntegrator::wrap_Object(GraggBulirschStoerIntegrator(((t_GraggBulirschStoerIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GraggBulirschStoerIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GraggBulirschStoerIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GraggBulirschStoerIntegrator_init_(t_GraggBulirschStoerIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              GraggBulirschStoerIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GraggBulirschStoerIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              GraggBulirschStoerIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GraggBulirschStoerIntegrator(a0, a1, a2, a3));
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

        static PyObject *t_GraggBulirschStoerIntegrator_integrate(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GraggBulirschStoerIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setControlFactors(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;

          if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.setControlFactors(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setControlFactors", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setInterpolationControl(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;

          if (!parseArgs(args, "ZI", &a0, &a1))
          {
            OBJ_CALL(self->object.setInterpolationControl(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInterpolationControl", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setOrderControl(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "IDD", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setOrderControl(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrderControl", args);
          return NULL;
        }

        static PyObject *t_GraggBulirschStoerIntegrator_setStabilityCheck(t_GraggBulirschStoerIntegrator *self, PyObject *args)
        {
          jboolean a0;
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "ZIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.setStabilityCheck(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStabilityCheck", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
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
              mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockInterSatellitesRangeModifier::RelativisticJ2ClockInterSatellitesRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void RelativisticJ2ClockInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
