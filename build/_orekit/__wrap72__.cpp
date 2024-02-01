#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *PocMethodFacade::class$ = NULL;
          jmethodID *PocMethodFacade::mids$ = NULL;
          bool PocMethodFacade::live$ = false;

          jclass PocMethodFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/PocMethodFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a03163693f231223] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/PocMethodType;)V");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getType_8cc529497929859e] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/definitions/PocMethodType;");
              mids$[mid_parse_993207c48db7c9c9] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PocMethodFacade::PocMethodFacade(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::PocMethodType & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a03163693f231223, a0.this$, a1.this$)) {}

          ::java::lang::String PocMethodFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          ::org::orekit::files::ccsds::definitions::PocMethodType PocMethodFacade::getType() const
          {
            return ::org::orekit::files::ccsds::definitions::PocMethodType(env->callObjectMethod(this$, mids$[mid_getType_8cc529497929859e]));
          }

          PocMethodFacade PocMethodFacade::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return PocMethodFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_993207c48db7c9c9], a0.this$));
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
        namespace definitions {
          static PyObject *t_PocMethodFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PocMethodFacade_init_(t_PocMethodFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PocMethodFacade_getName(t_PocMethodFacade *self);
          static PyObject *t_PocMethodFacade_getType(t_PocMethodFacade *self);
          static PyObject *t_PocMethodFacade_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodFacade_get__name(t_PocMethodFacade *self, void *data);
          static PyObject *t_PocMethodFacade_get__type(t_PocMethodFacade *self, void *data);
          static PyGetSetDef t_PocMethodFacade__fields_[] = {
            DECLARE_GET_FIELD(t_PocMethodFacade, name),
            DECLARE_GET_FIELD(t_PocMethodFacade, type),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PocMethodFacade__methods_[] = {
            DECLARE_METHOD(t_PocMethodFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodFacade, getType, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodFacade, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PocMethodFacade)[] = {
            { Py_tp_methods, t_PocMethodFacade__methods_ },
            { Py_tp_init, (void *) t_PocMethodFacade_init_ },
            { Py_tp_getset, t_PocMethodFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PocMethodFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PocMethodFacade, t_PocMethodFacade, PocMethodFacade);

          void t_PocMethodFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(PocMethodFacade), &PY_TYPE_DEF(PocMethodFacade), module, "PocMethodFacade", 0);
          }

          void t_PocMethodFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "class_", make_descriptor(PocMethodFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "wrapfn_", make_descriptor(t_PocMethodFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PocMethodFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PocMethodFacade::initializeClass, 1)))
              return NULL;
            return t_PocMethodFacade::wrap_Object(PocMethodFacade(((t_PocMethodFacade *) arg)->object.this$));
          }
          static PyObject *t_PocMethodFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PocMethodFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PocMethodFacade_init_(t_PocMethodFacade *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::PocMethodType a1((jobject) NULL);
            PyTypeObject **p1;
            PocMethodFacade object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::files::ccsds::definitions::PocMethodType::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_PocMethodType::parameters_))
            {
              INT_CALL(object = PocMethodFacade(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PocMethodFacade_getName(t_PocMethodFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_PocMethodFacade_getType(t_PocMethodFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::PocMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(result);
          }

          static PyObject *t_PocMethodFacade_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            PocMethodFacade result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodFacade::parse(a0));
              return t_PocMethodFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_PocMethodFacade_get__name(t_PocMethodFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_PocMethodFacade_get__type(t_PocMethodFacade *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::PocMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
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
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDeterminationSensorKey::class$ = NULL;
              jmethodID *AttitudeDeterminationSensorKey::mids$ = NULL;
              bool AttitudeDeterminationSensorKey::live$ = false;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::NUMBER_SENSOR_NOISE_COVARIANCE = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_FREQUENCY = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_NOISE_STDDEV = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_NUMBER = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_USED = NULL;

              jclass AttitudeDeterminationSensorKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_aaf800ef038097fb] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor;)Z");
                  mids$[mid_valueOf_fe0127e2c1fcb623] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;");
                  mids$[mid_values_2f4c390550dbbad4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  NUMBER_SENSOR_NOISE_COVARIANCE = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "NUMBER_SENSOR_NOISE_COVARIANCE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_FREQUENCY = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_FREQUENCY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_NOISE_STDDEV = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_NOISE_STDDEV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_NUMBER = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_NUMBER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_USED = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_USED", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeDeterminationSensorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_aaf800ef038097fb], a0.this$, a1.this$, a2.this$);
              }

              AttitudeDeterminationSensorKey AttitudeDeterminationSensorKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeDeterminationSensorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fe0127e2c1fcb623], a0.this$));
              }

              JArray< AttitudeDeterminationSensorKey > AttitudeDeterminationSensorKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeDeterminationSensorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_2f4c390550dbbad4]));
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
              static PyObject *t_AttitudeDeterminationSensorKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensorKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensorKey_of_(t_AttitudeDeterminationSensorKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_process(t_AttitudeDeterminationSensorKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeDeterminationSensorKey_get__parameters_(t_AttitudeDeterminationSensorKey *self, void *data);
              static PyGetSetDef t_AttitudeDeterminationSensorKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeDeterminationSensorKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDeterminationSensorKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDeterminationSensorKey)[] = {
                { Py_tp_methods, t_AttitudeDeterminationSensorKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeDeterminationSensorKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDeterminationSensorKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeDeterminationSensorKey, t_AttitudeDeterminationSensorKey, AttitudeDeterminationSensorKey);
              PyObject *t_AttitudeDeterminationSensorKey::wrap_Object(const AttitudeDeterminationSensorKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationSensorKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationSensorKey *self = (t_AttitudeDeterminationSensorKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeDeterminationSensorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationSensorKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationSensorKey *self = (t_AttitudeDeterminationSensorKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeDeterminationSensorKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDeterminationSensorKey), &PY_TYPE_DEF(AttitudeDeterminationSensorKey), module, "AttitudeDeterminationSensorKey", 0);
              }

              void t_AttitudeDeterminationSensorKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "class_", make_descriptor(AttitudeDeterminationSensorKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "wrapfn_", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeDeterminationSensorKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "NUMBER_SENSOR_NOISE_COVARIANCE", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::NUMBER_SENSOR_NOISE_COVARIANCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_FREQUENCY", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_FREQUENCY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_NOISE_STDDEV", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_NOISE_STDDEV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_NUMBER", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_NUMBER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_USED", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_USED)));
              }

              static PyObject *t_AttitudeDeterminationSensorKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDeterminationSensorKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDeterminationSensorKey::wrap_Object(AttitudeDeterminationSensorKey(((t_AttitudeDeterminationSensorKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDeterminationSensorKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDeterminationSensorKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeDeterminationSensorKey_of_(t_AttitudeDeterminationSensorKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeDeterminationSensorKey_process(t_AttitudeDeterminationSensorKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensorKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeDeterminationSensorKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensorKey::valueOf(a0));
                  return t_AttitudeDeterminationSensorKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeDeterminationSensorKey_values(PyTypeObject *type)
              {
                JArray< AttitudeDeterminationSensorKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensorKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeDeterminationSensorKey::wrap_jobject);
              }
              static PyObject *t_AttitudeDeterminationSensorKey_get__parameters_(t_AttitudeDeterminationSensorKey *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/PythonSBASOrbitalElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *PythonSBASOrbitalElements::class$ = NULL;
            jmethodID *PythonSBASOrbitalElements::mids$ = NULL;
            bool PythonSBASOrbitalElements::live$ = false;

            jclass PythonSBASOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/PythonSBASOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getAGf0_9981f74b2d109da6] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_9981f74b2d109da6] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getIODN_d6ab429752e7c267] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPRN_d6ab429752e7c267] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getToc_9981f74b2d109da6] = env->getMethodID(cls, "getToc", "()D");
                mids$[mid_getWeek_d6ab429752e7c267] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_getX_9981f74b2d109da6] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_9981f74b2d109da6] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_9981f74b2d109da6] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_9981f74b2d109da6] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_9981f74b2d109da6] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_9981f74b2d109da6] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_9981f74b2d109da6] = env->getMethodID(cls, "getZDotDot", "()D");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonSBASOrbitalElements::PythonSBASOrbitalElements() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonSBASOrbitalElements::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonSBASOrbitalElements::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonSBASOrbitalElements::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_PythonSBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonSBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonSBASOrbitalElements_init_(t_PythonSBASOrbitalElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonSBASOrbitalElements_finalize(t_PythonSBASOrbitalElements *self);
            static PyObject *t_PythonSBASOrbitalElements_pythonExtension(t_PythonSBASOrbitalElements *self, PyObject *args);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf00(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf11(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonSBASOrbitalElements_getDate2(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getIODN3(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getPRN4(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getTime5(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getToc6(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getWeek7(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getX8(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDot9(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDotDot10(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getY11(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDot12(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDotDot13(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZ14(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDot15(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDotDot16(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonSBASOrbitalElements_pythonDecRef17(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonSBASOrbitalElements_get__self(t_PythonSBASOrbitalElements *self, void *data);
            static PyGetSetDef t_PythonSBASOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_PythonSBASOrbitalElements, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonSBASOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_PythonSBASOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonSBASOrbitalElements)[] = {
              { Py_tp_methods, t_PythonSBASOrbitalElements__methods_ },
              { Py_tp_init, (void *) t_PythonSBASOrbitalElements_init_ },
              { Py_tp_getset, t_PythonSBASOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonSBASOrbitalElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonSBASOrbitalElements, t_PythonSBASOrbitalElements, PythonSBASOrbitalElements);

            void t_PythonSBASOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonSBASOrbitalElements), &PY_TYPE_DEF(PythonSBASOrbitalElements), module, "PythonSBASOrbitalElements", 1);
            }

            void t_PythonSBASOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "class_", make_descriptor(PythonSBASOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "wrapfn_", make_descriptor(t_PythonSBASOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonSBASOrbitalElements::initializeClass);
              JNINativeMethod methods[] = {
                { "getAGf0", "()D", (void *) t_PythonSBASOrbitalElements_getAGf00 },
                { "getAGf1", "()D", (void *) t_PythonSBASOrbitalElements_getAGf11 },
                { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSBASOrbitalElements_getDate2 },
                { "getIODN", "()I", (void *) t_PythonSBASOrbitalElements_getIODN3 },
                { "getPRN", "()I", (void *) t_PythonSBASOrbitalElements_getPRN4 },
                { "getTime", "()D", (void *) t_PythonSBASOrbitalElements_getTime5 },
                { "getToc", "()D", (void *) t_PythonSBASOrbitalElements_getToc6 },
                { "getWeek", "()I", (void *) t_PythonSBASOrbitalElements_getWeek7 },
                { "getX", "()D", (void *) t_PythonSBASOrbitalElements_getX8 },
                { "getXDot", "()D", (void *) t_PythonSBASOrbitalElements_getXDot9 },
                { "getXDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getXDotDot10 },
                { "getY", "()D", (void *) t_PythonSBASOrbitalElements_getY11 },
                { "getYDot", "()D", (void *) t_PythonSBASOrbitalElements_getYDot12 },
                { "getYDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getYDotDot13 },
                { "getZ", "()D", (void *) t_PythonSBASOrbitalElements_getZ14 },
                { "getZDot", "()D", (void *) t_PythonSBASOrbitalElements_getZDot15 },
                { "getZDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getZDotDot16 },
                { "pythonDecRef", "()V", (void *) t_PythonSBASOrbitalElements_pythonDecRef17 },
              };
              env->registerNatives(cls, methods, 18);
            }

            static PyObject *t_PythonSBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonSBASOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_PythonSBASOrbitalElements::wrap_Object(PythonSBASOrbitalElements(((t_PythonSBASOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_PythonSBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonSBASOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonSBASOrbitalElements_init_(t_PythonSBASOrbitalElements *self, PyObject *args, PyObject *kwds)
            {
              PythonSBASOrbitalElements object((jobject) NULL);

              INT_CALL(object = PythonSBASOrbitalElements());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonSBASOrbitalElements_finalize(t_PythonSBASOrbitalElements *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonSBASOrbitalElements_pythonExtension(t_PythonSBASOrbitalElements *self, PyObject *args)
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

            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf00(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAGf0", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAGf0", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAGf1", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAGf1", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jobject JNICALL t_PythonSBASOrbitalElements_getDate2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getDate", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                throwTypeError("getDate", result);
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

            static jint JNICALL t_PythonSBASOrbitalElements_getIODN3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getIODN", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getIODN", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jint JNICALL t_PythonSBASOrbitalElements_getPRN4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getPRN", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getPRN", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getTime5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getTime", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getTime", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getToc6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getToc", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getToc", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jint JNICALL t_PythonSBASOrbitalElements_getWeek7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getWeek", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getWeek", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getX8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getX", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getX", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDot9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getXDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getXDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDotDot10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getXDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getXDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getY11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getY", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getY", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDot12(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getYDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getYDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDotDot13(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getYDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getYDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZ14(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZ", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZ", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDot15(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDotDot16(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonSBASOrbitalElements_pythonDecRef17(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonSBASOrbitalElements_get__self(t_PythonSBASOrbitalElements *self, void *data)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedCache::class$ = NULL;
      jmethodID *TimeStampedCache::mids$ = NULL;
      bool TimeStampedCache::live$ = false;

      jclass TimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarliest_80bbab87cd34ef1a] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_80bbab87cd34ef1a] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_d6ab429752e7c267] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_51316859db71bd81] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighbors_ad75bac85cbb88e7] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeStamped TimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_80bbab87cd34ef1a]));
      }

      ::org::orekit::time::TimeStamped TimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_80bbab87cd34ef1a]));
      }

      jint TimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_d6ab429752e7c267]);
      }

      ::java::util::stream::Stream TimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_51316859db71bd81], a0.this$));
      }

      ::java::util::stream::Stream TimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_ad75bac85cbb88e7], a0.this$, a1));
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
      static PyObject *t_TimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedCache_of_(t_TimeStampedCache *self, PyObject *args);
      static PyObject *t_TimeStampedCache_getEarliest(t_TimeStampedCache *self);
      static PyObject *t_TimeStampedCache_getLatest(t_TimeStampedCache *self);
      static PyObject *t_TimeStampedCache_getMaxNeighborsSize(t_TimeStampedCache *self);
      static PyObject *t_TimeStampedCache_getNeighbors(t_TimeStampedCache *self, PyObject *args);
      static PyObject *t_TimeStampedCache_get__earliest(t_TimeStampedCache *self, void *data);
      static PyObject *t_TimeStampedCache_get__latest(t_TimeStampedCache *self, void *data);
      static PyObject *t_TimeStampedCache_get__maxNeighborsSize(t_TimeStampedCache *self, void *data);
      static PyObject *t_TimeStampedCache_get__parameters_(t_TimeStampedCache *self, void *data);
      static PyGetSetDef t_TimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_TimeStampedCache, latest),
        DECLARE_GET_FIELD(t_TimeStampedCache, maxNeighborsSize),
        DECLARE_GET_FIELD(t_TimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_TimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedCache, getMaxNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedCache, getNeighbors, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedCache)[] = {
        { Py_tp_methods, t_TimeStampedCache__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedCache, t_TimeStampedCache, TimeStampedCache);
      PyObject *t_TimeStampedCache::wrap_Object(const TimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedCache *self = (t_TimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedCache *self = (t_TimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedCache), &PY_TYPE_DEF(TimeStampedCache), module, "TimeStampedCache", 0);
      }

      void t_TimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCache), "class_", make_descriptor(TimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCache), "wrapfn_", make_descriptor(t_TimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_TimeStampedCache::wrap_Object(TimeStampedCache(((t_TimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedCache_of_(t_TimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeStampedCache_getEarliest(t_TimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_TimeStampedCache_getLatest(t_TimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_TimeStampedCache_getMaxNeighborsSize(t_TimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeStampedCache_getNeighbors(t_TimeStampedCache *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNeighbors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint a1;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNeighbors(a0, a1));
              return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", args);
        return NULL;
      }
      static PyObject *t_TimeStampedCache_get__parameters_(t_TimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedCache_get__earliest(t_TimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_TimeStampedCache_get__latest(t_TimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_TimeStampedCache_get__maxNeighborsSize(t_TimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ElevationMask.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ElevationMask::class$ = NULL;
      jmethodID *ElevationMask::mids$ = NULL;
      bool ElevationMask::live$ = false;

      jclass ElevationMask::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ElevationMask");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_11ecdbb5af7ed67d] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_getElevation_bf28ed64d6e8576b] = env->getMethodID(cls, "getElevation", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ElevationMask::ElevationMask(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11ecdbb5af7ed67d, a0.this$)) {}

      jdouble ElevationMask::getElevation(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_bf28ed64d6e8576b], a0);
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
      static PyObject *t_ElevationMask_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ElevationMask_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ElevationMask_init_(t_ElevationMask *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ElevationMask_getElevation(t_ElevationMask *self, PyObject *arg);

      static PyMethodDef t_ElevationMask__methods_[] = {
        DECLARE_METHOD(t_ElevationMask, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ElevationMask, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ElevationMask, getElevation, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ElevationMask)[] = {
        { Py_tp_methods, t_ElevationMask__methods_ },
        { Py_tp_init, (void *) t_ElevationMask_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ElevationMask)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ElevationMask, t_ElevationMask, ElevationMask);

      void t_ElevationMask::install(PyObject *module)
      {
        installType(&PY_TYPE(ElevationMask), &PY_TYPE_DEF(ElevationMask), module, "ElevationMask", 0);
      }

      void t_ElevationMask::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "class_", make_descriptor(ElevationMask::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "wrapfn_", make_descriptor(t_ElevationMask::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ElevationMask_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ElevationMask::initializeClass, 1)))
          return NULL;
        return t_ElevationMask::wrap_Object(ElevationMask(((t_ElevationMask *) arg)->object.this$));
      }
      static PyObject *t_ElevationMask_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ElevationMask::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ElevationMask_init_(t_ElevationMask *self, PyObject *args, PyObject *kwds)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        ElevationMask object((jobject) NULL);

        if (!parseArgs(args, "[[D", &a0))
        {
          INT_CALL(object = ElevationMask(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ElevationMask_getElevation(t_ElevationMask *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getElevation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
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

        ::java::lang::Class *TimeDependentLOS::class$ = NULL;
        jmethodID *TimeDependentLOS::mids$ = NULL;
        bool TimeDependentLOS::live$ = false;

        jclass TimeDependentLOS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/TimeDependentLOS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getLOS_a5eda1966a92bc34] = env->getMethodID(cls, "getLOS", "(ILorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOSDerivatives_f9ac050f4f50d612] = env->getMethodID(cls, "getLOSDerivatives", "(ILorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getNbPixels_d6ab429752e7c267] = env->getMethodID(cls, "getNbPixels", "()I");
            mids$[mid_getParametersDrivers_11e4ca8182c1933d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeDependentLOS::getLOS(jint a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_a5eda1966a92bc34], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeDependentLOS::getLOSDerivatives(jint a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_f9ac050f4f50d612], a0, a1.this$, a2.this$));
        }

        jint TimeDependentLOS::getNbPixels() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixels_d6ab429752e7c267]);
        }

        ::java::util::stream::Stream TimeDependentLOS::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_11e4ca8182c1933d]));
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
        static PyObject *t_TimeDependentLOS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDependentLOS_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDependentLOS_getLOS(t_TimeDependentLOS *self, PyObject *args);
        static PyObject *t_TimeDependentLOS_getLOSDerivatives(t_TimeDependentLOS *self, PyObject *args);
        static PyObject *t_TimeDependentLOS_getNbPixels(t_TimeDependentLOS *self);
        static PyObject *t_TimeDependentLOS_getParametersDrivers(t_TimeDependentLOS *self);
        static PyObject *t_TimeDependentLOS_get__nbPixels(t_TimeDependentLOS *self, void *data);
        static PyObject *t_TimeDependentLOS_get__parametersDrivers(t_TimeDependentLOS *self, void *data);
        static PyGetSetDef t_TimeDependentLOS__fields_[] = {
          DECLARE_GET_FIELD(t_TimeDependentLOS, nbPixels),
          DECLARE_GET_FIELD(t_TimeDependentLOS, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeDependentLOS__methods_[] = {
          DECLARE_METHOD(t_TimeDependentLOS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDependentLOS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDependentLOS, getLOS, METH_VARARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getLOSDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getNbPixels, METH_NOARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeDependentLOS)[] = {
          { Py_tp_methods, t_TimeDependentLOS__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TimeDependentLOS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeDependentLOS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeDependentLOS, t_TimeDependentLOS, TimeDependentLOS);

        void t_TimeDependentLOS::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeDependentLOS), &PY_TYPE_DEF(TimeDependentLOS), module, "TimeDependentLOS", 0);
        }

        void t_TimeDependentLOS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "class_", make_descriptor(TimeDependentLOS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "wrapfn_", make_descriptor(t_TimeDependentLOS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeDependentLOS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeDependentLOS::initializeClass, 1)))
            return NULL;
          return t_TimeDependentLOS::wrap_Object(TimeDependentLOS(((t_TimeDependentLOS *) arg)->object.this$));
        }
        static PyObject *t_TimeDependentLOS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeDependentLOS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeDependentLOS_getLOS(t_TimeDependentLOS *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "Ik", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getLOS(a0, a1));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLOS", args);
          return NULL;
        }

        static PyObject *t_TimeDependentLOS_getLOSDerivatives(t_TimeDependentLOS *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

          if (!parseArgs(args, "IkK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLOSDerivatives", args);
          return NULL;
        }

        static PyObject *t_TimeDependentLOS_getNbPixels(t_TimeDependentLOS *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixels());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TimeDependentLOS_getParametersDrivers(t_TimeDependentLOS *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeDependentLOS_get__nbPixels(t_TimeDependentLOS *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixels());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TimeDependentLOS_get__parametersDrivers(t_TimeDependentLOS *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/PythonScheduler.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonScheduler::class$ = NULL;
          jmethodID *PythonScheduler::mids$ = NULL;
          bool PythonScheduler::live$ = false;

          jclass PythonScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_generate_fda3d30bd0463b72] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_aa32975499e048dd] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_init_ce7d94fe97fdcf55] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonScheduler::PythonScheduler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonScheduler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonScheduler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonScheduler::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        namespace generation {
          static PyObject *t_PythonScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonScheduler_of_(t_PythonScheduler *self, PyObject *args);
          static int t_PythonScheduler_init_(t_PythonScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonScheduler_finalize(t_PythonScheduler *self);
          static PyObject *t_PythonScheduler_pythonExtension(t_PythonScheduler *self, PyObject *args);
          static jobject JNICALL t_PythonScheduler_generate0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonScheduler_getBuilder1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonScheduler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonScheduler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonScheduler_get__self(t_PythonScheduler *self, void *data);
          static PyObject *t_PythonScheduler_get__parameters_(t_PythonScheduler *self, void *data);
          static PyGetSetDef t_PythonScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonScheduler, self),
            DECLARE_GET_FIELD(t_PythonScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonScheduler__methods_[] = {
            DECLARE_METHOD(t_PythonScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonScheduler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonScheduler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonScheduler)[] = {
            { Py_tp_methods, t_PythonScheduler__methods_ },
            { Py_tp_init, (void *) t_PythonScheduler_init_ },
            { Py_tp_getset, t_PythonScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonScheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonScheduler, t_PythonScheduler, PythonScheduler);
          PyObject *t_PythonScheduler::wrap_Object(const PythonScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonScheduler *self = (t_PythonScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonScheduler *self = (t_PythonScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonScheduler), &PY_TYPE_DEF(PythonScheduler), module, "PythonScheduler", 1);
          }

          void t_PythonScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "class_", make_descriptor(PythonScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "wrapfn_", make_descriptor(t_PythonScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonScheduler::initializeClass);
            JNINativeMethod methods[] = {
              { "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;", (void *) t_PythonScheduler_generate0 },
              { "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;", (void *) t_PythonScheduler_getBuilder1 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonScheduler_init2 },
              { "pythonDecRef", "()V", (void *) t_PythonScheduler_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonScheduler::initializeClass, 1)))
              return NULL;
            return t_PythonScheduler::wrap_Object(PythonScheduler(((t_PythonScheduler *) arg)->object.this$));
          }
          static PyObject *t_PythonScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonScheduler_of_(t_PythonScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonScheduler_init_(t_PythonScheduler *self, PyObject *args, PyObject *kwds)
          {
            PythonScheduler object((jobject) NULL);

            INT_CALL(object = PythonScheduler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonScheduler_finalize(t_PythonScheduler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonScheduler_pythonExtension(t_PythonScheduler *self, PyObject *args)
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

          static jobject JNICALL t_PythonScheduler_generate0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::SortedSet value((jobject) NULL);
            PyObject *o0 = ::java::util::t_Map::wrap_Object(::java::util::Map(a0));
            PyObject *result = PyObject_CallMethod(obj, "generate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::SortedSet::initializeClass, &value))
            {
              throwTypeError("generate", result);
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

          static jobject JNICALL t_PythonScheduler_getBuilder1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getBuilder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, &value))
            {
              throwTypeError("getBuilder", result);
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

          static void JNICALL t_PythonScheduler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonScheduler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonScheduler_get__self(t_PythonScheduler *self, void *data)
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
          static PyObject *t_PythonScheduler_get__parameters_(t_PythonScheduler *self, void *data)
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
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEStateAndDerivative::class$ = NULL;
      jmethodID *FieldODEStateAndDerivative::mids$ = NULL;
      bool FieldODEStateAndDerivative::live$ = false;

      jclass FieldODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6ccff14226b7983c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_6e76e864bfe7f2f8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getCompleteDerivative_94ed2e0620f8833d] = env->getMethodID(cls, "getCompleteDerivative", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPrimaryDerivative_94ed2e0620f8833d] = env->getMethodID(cls, "getPrimaryDerivative", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSecondaryDerivative_15c819004b045aca] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldODEStateAndDerivative::FieldODEStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) : ::org::hipparchus::ode::FieldODEState(env->newObject(initializeClass, &mids$, mid_init$_6ccff14226b7983c, a0.this$, a1.this$, a2.this$)) {}

      FieldODEStateAndDerivative::FieldODEStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a3, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a4) : ::org::hipparchus::ode::FieldODEState(env->newObject(initializeClass, &mids$, mid_init$_6e76e864bfe7f2f8, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_94ed2e0620f8833d]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_94ed2e0620f8833d]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_15c819004b045aca], a0));
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
      static PyObject *t_FieldODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_of_(t_FieldODEStateAndDerivative *self, PyObject *args);
      static int t_FieldODEStateAndDerivative_init_(t_FieldODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldODEStateAndDerivative_getCompleteDerivative(t_FieldODEStateAndDerivative *self);
      static PyObject *t_FieldODEStateAndDerivative_getPrimaryDerivative(t_FieldODEStateAndDerivative *self);
      static PyObject *t_FieldODEStateAndDerivative_getSecondaryDerivative(t_FieldODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_get__completeDerivative(t_FieldODEStateAndDerivative *self, void *data);
      static PyObject *t_FieldODEStateAndDerivative_get__primaryDerivative(t_FieldODEStateAndDerivative *self, void *data);
      static PyObject *t_FieldODEStateAndDerivative_get__parameters_(t_FieldODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_FieldODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, primaryDerivative),
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_FieldODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEStateAndDerivative)[] = {
        { Py_tp_methods, t_FieldODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_FieldODEStateAndDerivative_init_ },
        { Py_tp_getset, t_FieldODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::FieldODEState),
        NULL
      };

      DEFINE_TYPE(FieldODEStateAndDerivative, t_FieldODEStateAndDerivative, FieldODEStateAndDerivative);
      PyObject *t_FieldODEStateAndDerivative::wrap_Object(const FieldODEStateAndDerivative& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEStateAndDerivative::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEStateAndDerivative *self = (t_FieldODEStateAndDerivative *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEStateAndDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEStateAndDerivative::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEStateAndDerivative *self = (t_FieldODEStateAndDerivative *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEStateAndDerivative), &PY_TYPE_DEF(FieldODEStateAndDerivative), module, "FieldODEStateAndDerivative", 0);
      }

      void t_FieldODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "class_", make_descriptor(FieldODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "wrapfn_", make_descriptor(t_FieldODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_FieldODEStateAndDerivative::wrap_Object(FieldODEStateAndDerivative(((t_FieldODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_FieldODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEStateAndDerivative_of_(t_FieldODEStateAndDerivative *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldODEStateAndDerivative_init_(t_FieldODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            FieldODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a3((jobject) NULL);
            PyTypeObject **p3;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a4((jobject) NULL);
            PyTypeObject **p4;
            FieldODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "K[K[K[[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEStateAndDerivative(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldODEStateAndDerivative_getCompleteDerivative(t_FieldODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_getPrimaryDerivative(t_FieldODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_getSecondaryDerivative(t_FieldODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }
      static PyObject *t_FieldODEStateAndDerivative_get__parameters_(t_FieldODEStateAndDerivative *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEStateAndDerivative_get__completeDerivative(t_FieldODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_get__primaryDerivative(t_FieldODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Logit.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logit::class$ = NULL;
        jmethodID *Logit::mids$ = NULL;
        bool Logit::live$ = false;

        jclass Logit::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logit");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logit::Logit() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        Logit::Logit(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble Logit::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Logit::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Logit$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Logit_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logit_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logit_init_(t_Logit *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logit_value(t_Logit *self, PyObject *args);

        static PyMethodDef t_Logit__methods_[] = {
          DECLARE_METHOD(t_Logit, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logit)[] = {
          { Py_tp_methods, t_Logit__methods_ },
          { Py_tp_init, (void *) t_Logit_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logit)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logit, t_Logit, Logit);

        void t_Logit::install(PyObject *module)
        {
          installType(&PY_TYPE(Logit), &PY_TYPE_DEF(Logit), module, "Logit", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "Parametric", make_descriptor(&PY_TYPE_DEF(Logit$Parametric)));
        }

        void t_Logit::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "class_", make_descriptor(Logit::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "wrapfn_", make_descriptor(t_Logit::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logit_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logit::initializeClass, 1)))
            return NULL;
          return t_Logit::wrap_Object(Logit(((t_Logit *) arg)->object.this$));
        }
        static PyObject *t_Logit_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logit::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logit_init_(t_Logit *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Logit object((jobject) NULL);

              INT_CALL(object = Logit());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Logit object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Logit(a0, a1));
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

        static PyObject *t_Logit_value(t_Logit *self, PyObject *args)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *CenterName::class$ = NULL;
          jmethodID *CenterName::mids$ = NULL;
          bool CenterName::live$ = false;
          CenterName *CenterName::EARTH = NULL;
          CenterName *CenterName::EARTH_MOON = NULL;
          CenterName *CenterName::JUPITER = NULL;
          CenterName *CenterName::MARS = NULL;
          CenterName *CenterName::MERCURY = NULL;
          CenterName *CenterName::MOON = NULL;
          CenterName *CenterName::NEPTUNE = NULL;
          CenterName *CenterName::PLUTO = NULL;
          CenterName *CenterName::SATURN = NULL;
          CenterName *CenterName::SOLAR_SYSTEM_BARYCENTER = NULL;
          CenterName *CenterName::SUN = NULL;
          CenterName *CenterName::URANUS = NULL;
          CenterName *CenterName::VENUS = NULL;

          jclass CenterName::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/CenterName");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCelestialBody_a1474f5cfab89b5e] = env->getMethodID(cls, "getCelestialBody", "()Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_getCelestialBody_70278b782473875c] = env->getMethodID(cls, "getCelestialBody", "(Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_guessCenter_cfd059ac9cccd443] = env->getStaticMethodID(cls, "guessCenter", "(Lorg/orekit/frames/Frame;)Ljava/lang/String;");
              mids$[mid_map_7d437ce0095d1086] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/CenterName;");
              mids$[mid_valueOf_c5d06a44a8dcb21b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CenterName;");
              mids$[mid_values_af9ebd92c077b71c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/CenterName;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EARTH = new CenterName(env->getStaticObjectField(cls, "EARTH", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              EARTH_MOON = new CenterName(env->getStaticObjectField(cls, "EARTH_MOON", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              JUPITER = new CenterName(env->getStaticObjectField(cls, "JUPITER", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MARS = new CenterName(env->getStaticObjectField(cls, "MARS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MERCURY = new CenterName(env->getStaticObjectField(cls, "MERCURY", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              MOON = new CenterName(env->getStaticObjectField(cls, "MOON", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              NEPTUNE = new CenterName(env->getStaticObjectField(cls, "NEPTUNE", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              PLUTO = new CenterName(env->getStaticObjectField(cls, "PLUTO", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SATURN = new CenterName(env->getStaticObjectField(cls, "SATURN", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SOLAR_SYSTEM_BARYCENTER = new CenterName(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              SUN = new CenterName(env->getStaticObjectField(cls, "SUN", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              URANUS = new CenterName(env->getStaticObjectField(cls, "URANUS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              VENUS = new CenterName(env->getStaticObjectField(cls, "VENUS", "Lorg/orekit/files/ccsds/definitions/CenterName;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::bodies::CelestialBody CenterName::getCelestialBody() const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getCelestialBody_a1474f5cfab89b5e]));
          }

          ::org::orekit::bodies::CelestialBody CenterName::getCelestialBody(const ::org::orekit::bodies::CelestialBodies & a0) const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getCelestialBody_70278b782473875c], a0.this$));
          }

          ::java::lang::String CenterName::guessCenter(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_guessCenter_cfd059ac9cccd443], a0.this$));
          }

          CenterName CenterName::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CenterName(env->callStaticObjectMethod(cls, mids$[mid_map_7d437ce0095d1086], a0.this$));
          }

          CenterName CenterName::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CenterName(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c5d06a44a8dcb21b], a0.this$));
          }

          JArray< CenterName > CenterName::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CenterName >(env->callStaticObjectMethod(cls, mids$[mid_values_af9ebd92c077b71c]));
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
        namespace definitions {
          static PyObject *t_CenterName_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_of_(t_CenterName *self, PyObject *args);
          static PyObject *t_CenterName_getCelestialBody(t_CenterName *self, PyObject *args);
          static PyObject *t_CenterName_guessCenter(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CenterName_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CenterName_values(PyTypeObject *type);
          static PyObject *t_CenterName_get__celestialBody(t_CenterName *self, void *data);
          static PyObject *t_CenterName_get__parameters_(t_CenterName *self, void *data);
          static PyGetSetDef t_CenterName__fields_[] = {
            DECLARE_GET_FIELD(t_CenterName, celestialBody),
            DECLARE_GET_FIELD(t_CenterName, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CenterName__methods_[] = {
            DECLARE_METHOD(t_CenterName, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, of_, METH_VARARGS),
            DECLARE_METHOD(t_CenterName, getCelestialBody, METH_VARARGS),
            DECLARE_METHOD(t_CenterName, guessCenter, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CenterName, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CenterName, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CenterName)[] = {
            { Py_tp_methods, t_CenterName__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CenterName__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CenterName)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CenterName, t_CenterName, CenterName);
          PyObject *t_CenterName::wrap_Object(const CenterName& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CenterName::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CenterName *self = (t_CenterName *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CenterName::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CenterName::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CenterName *self = (t_CenterName *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CenterName::install(PyObject *module)
          {
            installType(&PY_TYPE(CenterName), &PY_TYPE_DEF(CenterName), module, "CenterName", 0);
          }

          void t_CenterName::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "class_", make_descriptor(CenterName::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "wrapfn_", make_descriptor(t_CenterName::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "boxfn_", make_descriptor(boxObject));
            env->getClass(CenterName::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "EARTH", make_descriptor(t_CenterName::wrap_Object(*CenterName::EARTH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "EARTH_MOON", make_descriptor(t_CenterName::wrap_Object(*CenterName::EARTH_MOON)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "JUPITER", make_descriptor(t_CenterName::wrap_Object(*CenterName::JUPITER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MARS", make_descriptor(t_CenterName::wrap_Object(*CenterName::MARS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MERCURY", make_descriptor(t_CenterName::wrap_Object(*CenterName::MERCURY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "MOON", make_descriptor(t_CenterName::wrap_Object(*CenterName::MOON)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "NEPTUNE", make_descriptor(t_CenterName::wrap_Object(*CenterName::NEPTUNE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "PLUTO", make_descriptor(t_CenterName::wrap_Object(*CenterName::PLUTO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SATURN", make_descriptor(t_CenterName::wrap_Object(*CenterName::SATURN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(t_CenterName::wrap_Object(*CenterName::SOLAR_SYSTEM_BARYCENTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "SUN", make_descriptor(t_CenterName::wrap_Object(*CenterName::SUN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "URANUS", make_descriptor(t_CenterName::wrap_Object(*CenterName::URANUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CenterName), "VENUS", make_descriptor(t_CenterName::wrap_Object(*CenterName::VENUS)));
          }

          static PyObject *t_CenterName_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CenterName::initializeClass, 1)))
              return NULL;
            return t_CenterName::wrap_Object(CenterName(((t_CenterName *) arg)->object.this$));
          }
          static PyObject *t_CenterName_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CenterName::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CenterName_of_(t_CenterName *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CenterName_getCelestialBody(t_CenterName *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::orekit::bodies::CelestialBody result((jobject) NULL);
                OBJ_CALL(result = self->object.getCelestialBody());
                return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::bodies::CelestialBodies a0((jobject) NULL);
                ::org::orekit::bodies::CelestialBody result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getCelestialBody(a0));
                  return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getCelestialBody", args);
            return NULL;
          }

          static PyObject *t_CenterName_guessCenter(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::guessCenter(a0));
              return j2p(result);
            }

            PyErr_SetArgsError(type, "guessCenter", arg);
            return NULL;
          }

          static PyObject *t_CenterName_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            CenterName result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::map(a0));
              return t_CenterName::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_CenterName_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CenterName result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::valueOf(a0));
              return t_CenterName::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CenterName_values(PyTypeObject *type)
          {
            JArray< CenterName > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CenterName::values());
            return JArray<jobject>(result.this$).wrap(t_CenterName::wrap_jobject);
          }
          static PyObject *t_CenterName_get__parameters_(t_CenterName *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CenterName_get__celestialBody(t_CenterName *self, void *data)
          {
            ::org::orekit::bodies::CelestialBody value((jobject) NULL);
            OBJ_CALL(value = self->object.getCelestialBody());
            return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$CalibrationDetail::class$ = NULL;
        jmethodID *CRD$CalibrationDetail::mids$ = NULL;
        bool CRD$CalibrationDetail::live$ = false;

        jclass CRD$CalibrationDetail::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$CalibrationDetail");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6c7b9069bc71a9b1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;ILjava/lang/String;IIDDDDDDDIIIID)V");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$CalibrationDetail::CRD$CalibrationDetail(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::java::lang::String & a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12, jint a13, jint a14, jint a15, jdouble a16) : ::org::orekit::files::ilrs::CRD$Calibration(env->newObject(initializeClass, &mids$, mid_init$_6c7b9069bc71a9b1, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16)) {}

        ::java::lang::String CRD$CalibrationDetail::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
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
        static PyObject *t_CRD$CalibrationDetail_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$CalibrationDetail_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$CalibrationDetail_init_(t_CRD$CalibrationDetail *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$CalibrationDetail_toCrdString(t_CRD$CalibrationDetail *self, PyObject *args);

        static PyMethodDef t_CRD$CalibrationDetail__methods_[] = {
          DECLARE_METHOD(t_CRD$CalibrationDetail, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CalibrationDetail, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CalibrationDetail, toCrdString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$CalibrationDetail)[] = {
          { Py_tp_methods, t_CRD$CalibrationDetail__methods_ },
          { Py_tp_init, (void *) t_CRD$CalibrationDetail_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$CalibrationDetail)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$Calibration),
          NULL
        };

        DEFINE_TYPE(CRD$CalibrationDetail, t_CRD$CalibrationDetail, CRD$CalibrationDetail);

        void t_CRD$CalibrationDetail::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$CalibrationDetail), &PY_TYPE_DEF(CRD$CalibrationDetail), module, "CRD$CalibrationDetail", 0);
        }

        void t_CRD$CalibrationDetail::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CalibrationDetail), "class_", make_descriptor(CRD$CalibrationDetail::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CalibrationDetail), "wrapfn_", make_descriptor(t_CRD$CalibrationDetail::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CalibrationDetail), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$CalibrationDetail_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$CalibrationDetail::initializeClass, 1)))
            return NULL;
          return t_CRD$CalibrationDetail::wrap_Object(CRD$CalibrationDetail(((t_CRD$CalibrationDetail *) arg)->object.this$));
        }
        static PyObject *t_CRD$CalibrationDetail_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$CalibrationDetail::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$CalibrationDetail_init_(t_CRD$CalibrationDetail *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jint a1;
          ::java::lang::String a2((jobject) NULL);
          jint a3;
          jint a4;
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jdouble a8;
          jdouble a9;
          jdouble a10;
          jdouble a11;
          jint a12;
          jint a13;
          jint a14;
          jint a15;
          jdouble a16;
          CRD$CalibrationDetail object((jobject) NULL);

          if (!parseArgs(args, "kIsIIDDDDDDDIIIID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16))
          {
            INT_CALL(object = CRD$CalibrationDetail(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$CalibrationDetail_toCrdString(t_CRD$CalibrationDetail *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$CalibrationDetail), (PyObject *) self, "toCrdString", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/Ephemeris.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "java/util/Optional.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *Ephemeris::class$ = NULL;
        jmethodID *Ephemeris::mids$ = NULL;
        bool Ephemeris::live$ = false;

        jclass Ephemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/Ephemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_26a46e5a5c0ee345] = env->getMethodID(cls, "<init>", "(Ljava/util/List;I)V");
            mids$[mid_init$_a87fec2ffab2c1fc] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_e8a5aea010c0672d] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_c346a54c93891220] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_082ed74cc9efab42] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_basicPropagate_1e982279849c3b65] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_checkInputConsistency_c346a54c93891220] = env->getStaticMethodID(cls, "checkInputConsistency", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_checkStatesAndCovariancesConsistency_a7e27987d82c9ab2] = env->getStaticMethodID(cls, "checkStatesAndCovariancesConsistency", "(Ljava/util/List;Ljava/util/List;)V");
            mids$[mid_getCovariance_0a5b62f83fd7b8a6] = env->getMethodID(cls, "getCovariance", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/Optional;");
            mids$[mid_getCovarianceInterpolator_aa56605e3771f379] = env->getMethodID(cls, "getCovarianceInterpolator", "()Ljava/util/Optional;");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_8fbfa58855031235] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getManagedAdditionalStates_f81c0644d57ae495] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStateInterpolator_73c4976bc58cb3ff] = env->getMethodID(cls, "getStateInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
            mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getMass_209f08246d708042] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_createHarvester_d0aee1b2c15f4d53] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
            mids$[mid_propagateOrbit_776cca2e85dfe61d] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_resetIntermediateState_b69b5541e48d21c0] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ephemeris::Ephemeris(const ::java::util::List & a0, jint a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_26a46e5a5c0ee345, a0.this$, a1)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a87fec2ffab2c1fc, a0.this$, a1.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e8a5aea010c0672d, a0.this$, a1.this$, a2.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c346a54c93891220, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_082ed74cc9efab42, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::propagation::SpacecraftState Ephemeris::basicPropagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_basicPropagate_1e982279849c3b65], a0.this$));
        }

        void Ephemeris::checkInputConsistency(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkInputConsistency_c346a54c93891220], a0.this$, a1.this$, a2.this$, a3.this$);
        }

        void Ephemeris::checkStatesAndCovariancesConsistency(const ::java::util::List & a0, const ::java::util::List & a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkStatesAndCovariancesConsistency_a7e27987d82c9ab2], a0.this$, a1.this$);
        }

        ::java::util::Optional Ephemeris::getCovariance(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getCovariance_0a5b62f83fd7b8a6], a0.this$));
        }

        ::java::util::Optional Ephemeris::getCovarianceInterpolator() const
        {
          return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getCovarianceInterpolator_aa56605e3771f379]));
        }

        ::org::orekit::frames::Frame Ephemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
        }

        ::org::orekit::propagation::SpacecraftState Ephemeris::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_8fbfa58855031235]));
        }

        JArray< ::java::lang::String > Ephemeris::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_f81c0644d57ae495]));
        }

        ::org::orekit::time::AbsoluteDate Ephemeris::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate Ephemeris::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
        }

        ::org::orekit::time::TimeInterpolator Ephemeris::getStateInterpolator() const
        {
          return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getStateInterpolator_73c4976bc58cb3ff]));
        }

        jboolean Ephemeris::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41], a0.this$);
        }

        void Ephemeris::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
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
        static PyObject *t_Ephemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ephemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ephemeris_init_(t_Ephemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ephemeris_basicPropagate(t_Ephemeris *self, PyObject *arg);
        static PyObject *t_Ephemeris_checkInputConsistency(PyTypeObject *type, PyObject *args);
        static PyObject *t_Ephemeris_checkStatesAndCovariancesConsistency(PyTypeObject *type, PyObject *args);
        static PyObject *t_Ephemeris_getCovariance(t_Ephemeris *self, PyObject *arg);
        static PyObject *t_Ephemeris_getCovarianceInterpolator(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getFrame(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getInitialState(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getManagedAdditionalStates(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getMaxDate(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getMinDate(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getStateInterpolator(t_Ephemeris *self);
        static PyObject *t_Ephemeris_isAdditionalStateManaged(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_resetInitialState(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_get__covarianceInterpolator(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__frame(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__initialState(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__managedAdditionalStates(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__maxDate(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__minDate(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__stateInterpolator(t_Ephemeris *self, void *data);
        static PyGetSetDef t_Ephemeris__fields_[] = {
          DECLARE_GET_FIELD(t_Ephemeris, covarianceInterpolator),
          DECLARE_GET_FIELD(t_Ephemeris, frame),
          DECLARE_GET_FIELD(t_Ephemeris, initialState),
          DECLARE_GET_FIELD(t_Ephemeris, managedAdditionalStates),
          DECLARE_GET_FIELD(t_Ephemeris, maxDate),
          DECLARE_GET_FIELD(t_Ephemeris, minDate),
          DECLARE_GET_FIELD(t_Ephemeris, stateInterpolator),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Ephemeris__methods_[] = {
          DECLARE_METHOD(t_Ephemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, basicPropagate, METH_O),
          DECLARE_METHOD(t_Ephemeris, checkInputConsistency, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, checkStatesAndCovariancesConsistency, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, getCovariance, METH_O),
          DECLARE_METHOD(t_Ephemeris, getCovarianceInterpolator, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getStateInterpolator, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ephemeris)[] = {
          { Py_tp_methods, t_Ephemeris__methods_ },
          { Py_tp_init, (void *) t_Ephemeris_init_ },
          { Py_tp_getset, t_Ephemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ephemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(Ephemeris, t_Ephemeris, Ephemeris);

        void t_Ephemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(Ephemeris), &PY_TYPE_DEF(Ephemeris), module, "Ephemeris", 0);
        }

        void t_Ephemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "class_", make_descriptor(Ephemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "wrapfn_", make_descriptor(t_Ephemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ephemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ephemeris::initializeClass, 1)))
            return NULL;
          return t_Ephemeris::wrap_Object(Ephemeris(((t_Ephemeris *) arg)->object.this$));
        }
        static PyObject *t_Ephemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ephemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ephemeris_init_(t_Ephemeris *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
              {
                INT_CALL(object = Ephemeris(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = Ephemeris(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKKKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2, a3, a4));
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

        static PyObject *t_Ephemeris_basicPropagate(t_Ephemeris *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.basicPropagate(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "basicPropagate", arg);
          return NULL;
        }

        static PyObject *t_Ephemeris_checkInputConsistency(PyTypeObject *type, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
          {
            OBJ_CALL(::org::orekit::propagation::analytical::Ephemeris::checkInputConsistency(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkInputConsistency", args);
          return NULL;
        }

        static PyObject *t_Ephemeris_checkStatesAndCovariancesConsistency(PyTypeObject *type, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::org::orekit::propagation::analytical::Ephemeris::checkStatesAndCovariancesConsistency(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkStatesAndCovariancesConsistency", args);
          return NULL;
        }

        static PyObject *t_Ephemeris_getCovariance(t_Ephemeris *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::util::Optional result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getCovariance(a0));
            return ::java::util::t_Optional::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(StateCovariance));
          }

          PyErr_SetArgsError((PyObject *) self, "getCovariance", arg);
          return NULL;
        }

        static PyObject *t_Ephemeris_getCovarianceInterpolator(t_Ephemeris *self)
        {
          ::java::util::Optional result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceInterpolator());
          return ::java::util::t_Optional::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getFrame(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_Ephemeris_getInitialState(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_Ephemeris_getManagedAdditionalStates(t_Ephemeris *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_Ephemeris_getMaxDate(t_Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getMinDate(t_Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getStateInterpolator(t_Ephemeris *self)
        {
          ::org::orekit::time::TimeInterpolator result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateInterpolator());
          return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
        }

        static PyObject *t_Ephemeris_isAdditionalStateManaged(t_Ephemeris *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_Ephemeris_resetInitialState(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_Ephemeris_get__covarianceInterpolator(t_Ephemeris *self, void *data)
        {
          ::java::util::Optional value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceInterpolator());
          return ::java::util::t_Optional::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__frame(t_Ephemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__initialState(t_Ephemeris *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__managedAdditionalStates(t_Ephemeris *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_Ephemeris_get__maxDate(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__minDate(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__stateInterpolator(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::TimeInterpolator value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateInterpolator());
          return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitException::class$ = NULL;
      jmethodID *OrekitException::mids$ = NULL;
      bool OrekitException::live$ = false;

      jclass OrekitException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_23bc72a529164bda] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/MathRuntimeException;)V");
          mids$[mid_init$_2436a4119ba97d87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_e22deb623183f3dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;Ljava/lang/Throwable;)V");
          mids$[mid_init$_db158649d786c484] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_5969ecf7afac3dba] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_2ab86268ef7a6631] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_667bcd34994d9d31] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");
          mids$[mid_unwrap_1ca98ec22fa4cc2a] = env->getStaticMethodID(cls, "unwrap", "(Lorg/hipparchus/exception/MathRuntimeException;)Lorg/orekit/errors/OrekitException;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitException::OrekitException(const ::org::hipparchus::exception::MathRuntimeException & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_23bc72a529164bda, a0.this$)) {}

      OrekitException::OrekitException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_2436a4119ba97d87, a0.this$, a1.this$)) {}

      OrekitException::OrekitException(const ::org::hipparchus::exception::Localizable & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e22deb623183f3dc, a0.this$, a1.this$)) {}

      OrekitException::OrekitException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_db158649d786c484, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::String OrekitException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String OrekitException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String OrekitException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_5969ecf7afac3dba], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_2ab86268ef7a6631]));
      }

      ::org::hipparchus::exception::Localizable OrekitException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_667bcd34994d9d31]));
      }

      OrekitException OrekitException::unwrap(const ::org::hipparchus::exception::MathRuntimeException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrekitException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_1ca98ec22fa4cc2a], a0.this$));
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
      static PyObject *t_OrekitException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitException_init_(t_OrekitException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitException_getLocalizedMessage(t_OrekitException *self, PyObject *args);
      static PyObject *t_OrekitException_getMessage(t_OrekitException *self, PyObject *args);
      static PyObject *t_OrekitException_getParts(t_OrekitException *self);
      static PyObject *t_OrekitException_getSpecifier(t_OrekitException *self);
      static PyObject *t_OrekitException_unwrap(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitException_get__localizedMessage(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__message(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__parts(t_OrekitException *self, void *data);
      static PyObject *t_OrekitException_get__specifier(t_OrekitException *self, void *data);
      static PyGetSetDef t_OrekitException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitException, message),
        DECLARE_GET_FIELD(t_OrekitException, parts),
        DECLARE_GET_FIELD(t_OrekitException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitException__methods_[] = {
        DECLARE_METHOD(t_OrekitException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitException, getSpecifier, METH_NOARGS),
        DECLARE_METHOD(t_OrekitException, unwrap, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitException)[] = {
        { Py_tp_methods, t_OrekitException__methods_ },
        { Py_tp_init, (void *) t_OrekitException_init_ },
        { Py_tp_getset, t_OrekitException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitException)[] = {
        &PY_TYPE_DEF(::java::lang::RuntimeException),
        NULL
      };

      DEFINE_TYPE(OrekitException, t_OrekitException, OrekitException);

      void t_OrekitException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitException), &PY_TYPE_DEF(OrekitException), module, "OrekitException", 0);
      }

      void t_OrekitException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "class_", make_descriptor(OrekitException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "wrapfn_", make_descriptor(t_OrekitException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitException::initializeClass, 1)))
          return NULL;
        return t_OrekitException::wrap_Object(OrekitException(((t_OrekitException *) arg)->object.this$));
      }
      static PyObject *t_OrekitException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitException_init_(t_OrekitException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              INT_CALL(object = OrekitException(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrekitException(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            ::java::lang::Throwable a1((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::exception::Localizable::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrekitException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            OrekitException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OrekitException(a0, a1, a2));
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

      static PyObject *t_OrekitException_getLocalizedMessage(t_OrekitException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitException_getMessage(t_OrekitException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitException_getParts(t_OrekitException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitException_getSpecifier(t_OrekitException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitException_unwrap(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
        OrekitException result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::errors::OrekitException::unwrap(a0));
          return t_OrekitException::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unwrap", arg);
        return NULL;
      }

      static PyObject *t_OrekitException_get__localizedMessage(t_OrekitException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitException_get__message(t_OrekitException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitException_get__parts(t_OrekitException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitException_get__specifier(t_OrekitException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmData.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmData::class$ = NULL;
              jmethodID *ApmData::mids$ = NULL;
              bool ApmData::live$ = false;

              jclass ApmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_abbb4aa8bb4f8a57] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;)V");
                  mids$[mid_addManeuver_14bdf6dc3919ab18] = env->getMethodID(cls, "addManeuver", "(Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;)V");
                  mids$[mid_getAngularVelocityBlock_34c3506af9d52146] = env->getMethodID(cls, "getAngularVelocityBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;");
                  mids$[mid_getAttitude_0a584a2048d30c01] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/attitudes/Attitude;");
                  mids$[mid_getComments_d751c1a57012b438] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
                  mids$[mid_getEpoch_80e11148db499dda] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getEulerBlock_c67a0a2484d37758] = env->getMethodID(cls, "getEulerBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;");
                  mids$[mid_getInertiaBlock_b71face14f681398] = env->getMethodID(cls, "getInertiaBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;");
                  mids$[mid_getManeuver_ea5eebdbf9aca7df] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/adm/apm/Maneuver;");
                  mids$[mid_getManeuvers_d751c1a57012b438] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getNbManeuvers_d6ab429752e7c267] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getQuaternionBlock_776042c45e9edc02] = env->getMethodID(cls, "getQuaternionBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;");
                  mids$[mid_getSpinStabilizedBlock_fa9613ab3e0993aa] = env->getMethodID(cls, "getSpinStabilizedBlock", "()Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;");
                  mids$[mid_hasManeuvers_eee3de00fe971136] = env->getMethodID(cls, "hasManeuvers", "()Z");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ApmData::ApmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion & a2, const ::org::orekit::files::ccsds::ndm::adm::apm::Euler & a3, const ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity & a4, const ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized & a5, const ::org::orekit::files::ccsds::ndm::adm::apm::Inertia & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_abbb4aa8bb4f8a57, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

              void ApmData::addManeuver(const ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addManeuver_14bdf6dc3919ab18], a0.this$);
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity ApmData::getAngularVelocityBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity(env->callObjectMethod(this$, mids$[mid_getAngularVelocityBlock_34c3506af9d52146]));
              }

              ::org::orekit::attitudes::Attitude ApmData::getAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) const
              {
                return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_0a584a2048d30c01], a0.this$, a1.this$));
              }

              ::java::util::List ApmData::getComments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_d751c1a57012b438]));
              }

              ::org::orekit::time::AbsoluteDate ApmData::getEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_80e11148db499dda]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Euler ApmData::getEulerBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Euler(env->callObjectMethod(this$, mids$[mid_getEulerBlock_c67a0a2484d37758]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Inertia ApmData::getInertiaBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Inertia(env->callObjectMethod(this$, mids$[mid_getInertiaBlock_b71face14f681398]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver ApmData::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_ea5eebdbf9aca7df], a0));
              }

              ::java::util::List ApmData::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_d751c1a57012b438]));
              }

              jint ApmData::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_d6ab429752e7c267]);
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion ApmData::getQuaternionBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion(env->callObjectMethod(this$, mids$[mid_getQuaternionBlock_776042c45e9edc02]));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized ApmData::getSpinStabilizedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized(env->callObjectMethod(this$, mids$[mid_getSpinStabilizedBlock_fa9613ab3e0993aa]));
              }

              jboolean ApmData::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_eee3de00fe971136]);
              }

              void ApmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
            namespace apm {
              static PyObject *t_ApmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ApmData_init_(t_ApmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ApmData_addManeuver(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_getAngularVelocityBlock(t_ApmData *self);
              static PyObject *t_ApmData_getAttitude(t_ApmData *self, PyObject *args);
              static PyObject *t_ApmData_getComments(t_ApmData *self);
              static PyObject *t_ApmData_getEpoch(t_ApmData *self);
              static PyObject *t_ApmData_getEulerBlock(t_ApmData *self);
              static PyObject *t_ApmData_getInertiaBlock(t_ApmData *self);
              static PyObject *t_ApmData_getManeuver(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_getManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_getNbManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_getQuaternionBlock(t_ApmData *self);
              static PyObject *t_ApmData_getSpinStabilizedBlock(t_ApmData *self);
              static PyObject *t_ApmData_hasManeuvers(t_ApmData *self);
              static PyObject *t_ApmData_validate(t_ApmData *self, PyObject *arg);
              static PyObject *t_ApmData_get__angularVelocityBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__comments(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__epoch(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__eulerBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__inertiaBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__maneuvers(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__nbManeuvers(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__quaternionBlock(t_ApmData *self, void *data);
              static PyObject *t_ApmData_get__spinStabilizedBlock(t_ApmData *self, void *data);
              static PyGetSetDef t_ApmData__fields_[] = {
                DECLARE_GET_FIELD(t_ApmData, angularVelocityBlock),
                DECLARE_GET_FIELD(t_ApmData, comments),
                DECLARE_GET_FIELD(t_ApmData, epoch),
                DECLARE_GET_FIELD(t_ApmData, eulerBlock),
                DECLARE_GET_FIELD(t_ApmData, inertiaBlock),
                DECLARE_GET_FIELD(t_ApmData, maneuvers),
                DECLARE_GET_FIELD(t_ApmData, nbManeuvers),
                DECLARE_GET_FIELD(t_ApmData, quaternionBlock),
                DECLARE_GET_FIELD(t_ApmData, spinStabilizedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmData__methods_[] = {
                DECLARE_METHOD(t_ApmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmData, addManeuver, METH_O),
                DECLARE_METHOD(t_ApmData, getAngularVelocityBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getAttitude, METH_VARARGS),
                DECLARE_METHOD(t_ApmData, getComments, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getEpoch, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getEulerBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getInertiaBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getManeuver, METH_O),
                DECLARE_METHOD(t_ApmData, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getQuaternionBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, getSpinStabilizedBlock, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, hasManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_ApmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmData)[] = {
                { Py_tp_methods, t_ApmData__methods_ },
                { Py_tp_init, (void *) t_ApmData_init_ },
                { Py_tp_getset, t_ApmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ApmData, t_ApmData, ApmData);

              void t_ApmData::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmData), &PY_TYPE_DEF(ApmData), module, "ApmData", 0);
              }

              void t_ApmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "class_", make_descriptor(ApmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "wrapfn_", make_descriptor(t_ApmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmData::initializeClass, 1)))
                  return NULL;
                return t_ApmData::wrap_Object(ApmData(((t_ApmData *) arg)->object.this$));
              }
              static PyObject *t_ApmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ApmData_init_(t_ApmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler a3((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity a4((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized a5((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia a6((jobject) NULL);
                ApmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Euler::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Inertia::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                {
                  INT_CALL(object = ApmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_ApmData_addManeuver(t_ApmData *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addManeuver(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addManeuver", arg);
                return NULL;
              }

              static PyObject *t_ApmData_getAngularVelocityBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularVelocityBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_AngularVelocity::wrap_Object(result);
              }

              static PyObject *t_ApmData_getAttitude(t_ApmData *self, PyObject *args)
              {
                ::org::orekit::frames::Frame a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::attitudes::Attitude result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getAttitude(a0, a1));
                  return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
                return NULL;
              }

              static PyObject *t_ApmData_getComments(t_ApmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getComments());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_ApmData_getEpoch(t_ApmData *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_ApmData_getEulerBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Euler::wrap_Object(result);
              }

              static PyObject *t_ApmData_getInertiaBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Inertia::wrap_Object(result);
              }

              static PyObject *t_ApmData_getManeuver(t_ApmData *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::files::ccsds::ndm::adm::apm::Maneuver result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getManeuver(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::apm::t_Maneuver::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getManeuver", arg);
                return NULL;
              }

              static PyObject *t_ApmData_getManeuvers(t_ApmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::apm::PY_TYPE(Maneuver));
              }

              static PyObject *t_ApmData_getNbManeuvers(t_ApmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_ApmData_getQuaternionBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion result((jobject) NULL);
                OBJ_CALL(result = self->object.getQuaternionBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmQuaternion::wrap_Object(result);
              }

              static PyObject *t_ApmData_getSpinStabilizedBlock(t_ApmData *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpinStabilizedBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_SpinStabilized::wrap_Object(result);
              }

              static PyObject *t_ApmData_hasManeuvers(t_ApmData *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ApmData_validate(t_ApmData *self, PyObject *arg)
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

              static PyObject *t_ApmData_get__angularVelocityBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularVelocityBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_AngularVelocity::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__comments(t_ApmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getComments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__epoch(t_ApmData *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__eulerBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Euler::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__inertiaBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_Inertia::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__maneuvers(t_ApmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__nbManeuvers(t_ApmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_ApmData_get__quaternionBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion value((jobject) NULL);
                OBJ_CALL(value = self->object.getQuaternionBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmQuaternion::wrap_Object(value);
              }

              static PyObject *t_ApmData_get__spinStabilizedBlock(t_ApmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpinStabilizedBlock());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_SpinStabilized::wrap_Object(value);
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/AbstractSimplex.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *AbstractSimplex::class$ = NULL;
            jmethodID *AbstractSimplex::mids$ = NULL;
            bool AbstractSimplex::live$ = false;

            jclass AbstractSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/AbstractSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_a71c45509eaf92d1] = env->getMethodID(cls, "build", "([D)V");
                mids$[mid_evaluate_db1894c33fb140cf] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");
                mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
                mids$[mid_getPoint_89e226ebb8c2b780] = env->getMethodID(cls, "getPoint", "(I)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_getPoints_44a4932cc723b5fb] = env->getMethodID(cls, "getPoints", "()[Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_getSize_d6ab429752e7c267] = env->getMethodID(cls, "getSize", "()I");
                mids$[mid_iterate_db1894c33fb140cf] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");
                mids$[mid_replaceWorstPoint_02d3a1dbbbd007e4] = env->getMethodID(cls, "replaceWorstPoint", "(Lorg/hipparchus/optim/PointValuePair;Ljava/util/Comparator;)V");
                mids$[mid_setPoint_595f0545bc83500b] = env->getMethodID(cls, "setPoint", "(ILorg/hipparchus/optim/PointValuePair;)V");
                mids$[mid_setPoints_1e8d66e1b71abcd9] = env->getMethodID(cls, "setPoints", "([Lorg/hipparchus/optim/PointValuePair;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void AbstractSimplex::build(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_build_a71c45509eaf92d1], a0.this$);
            }

            void AbstractSimplex::evaluate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_evaluate_db1894c33fb140cf], a0.this$, a1.this$);
            }

            jint AbstractSimplex::getDimension() const
            {
              return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
            }

            ::org::hipparchus::optim::PointValuePair AbstractSimplex::getPoint(jint a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_getPoint_89e226ebb8c2b780], a0));
            }

            JArray< ::org::hipparchus::optim::PointValuePair > AbstractSimplex::getPoints() const
            {
              return JArray< ::org::hipparchus::optim::PointValuePair >(env->callObjectMethod(this$, mids$[mid_getPoints_44a4932cc723b5fb]));
            }

            jint AbstractSimplex::getSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getSize_d6ab429752e7c267]);
            }

            void AbstractSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_db1894c33fb140cf], a0.this$, a1.this$);
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
            static PyObject *t_AbstractSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSimplex_build(t_AbstractSimplex *self, PyObject *arg);
            static PyObject *t_AbstractSimplex_evaluate(t_AbstractSimplex *self, PyObject *args);
            static PyObject *t_AbstractSimplex_getDimension(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_getPoint(t_AbstractSimplex *self, PyObject *arg);
            static PyObject *t_AbstractSimplex_getPoints(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_getSize(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_iterate(t_AbstractSimplex *self, PyObject *args);
            static PyObject *t_AbstractSimplex_get__dimension(t_AbstractSimplex *self, void *data);
            static PyObject *t_AbstractSimplex_get__points(t_AbstractSimplex *self, void *data);
            static PyObject *t_AbstractSimplex_get__size(t_AbstractSimplex *self, void *data);
            static PyGetSetDef t_AbstractSimplex__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSimplex, dimension),
              DECLARE_GET_FIELD(t_AbstractSimplex, points),
              DECLARE_GET_FIELD(t_AbstractSimplex, size),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSimplex__methods_[] = {
              DECLARE_METHOD(t_AbstractSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSimplex, build, METH_O),
              DECLARE_METHOD(t_AbstractSimplex, evaluate, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSimplex, getDimension, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, getPoint, METH_O),
              DECLARE_METHOD(t_AbstractSimplex, getPoints, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, getSize, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSimplex)[] = {
              { Py_tp_methods, t_AbstractSimplex__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSimplex__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSimplex)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSimplex, t_AbstractSimplex, AbstractSimplex);

            void t_AbstractSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSimplex), &PY_TYPE_DEF(AbstractSimplex), module, "AbstractSimplex", 0);
            }

            void t_AbstractSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "class_", make_descriptor(AbstractSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "wrapfn_", make_descriptor(t_AbstractSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSimplex::initializeClass, 1)))
                return NULL;
              return t_AbstractSimplex::wrap_Object(AbstractSimplex(((t_AbstractSimplex *) arg)->object.this$));
            }
            static PyObject *t_AbstractSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSimplex_build(t_AbstractSimplex *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.build(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "build", arg);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_evaluate(t_AbstractSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.evaluate(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", args);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_getDimension(t_AbstractSimplex *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDimension());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractSimplex_getPoint(t_AbstractSimplex *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPoint(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_getPoints(t_AbstractSimplex *self)
            {
              JArray< ::org::hipparchus::optim::PointValuePair > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPoints());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            static PyObject *t_AbstractSimplex_getSize(t_AbstractSimplex *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractSimplex_iterate(t_AbstractSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "iterate", args);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_get__dimension(t_AbstractSimplex *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDimension());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AbstractSimplex_get__points(t_AbstractSimplex *self, void *data)
            {
              JArray< ::org::hipparchus::optim::PointValuePair > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPoints());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            static PyObject *t_AbstractSimplex_get__size(t_AbstractSimplex *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSize());
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
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *FrequencyPattern::class$ = NULL;
        jmethodID *FrequencyPattern::mids$ = NULL;
        bool FrequencyPattern::live$ = false;
        FrequencyPattern *FrequencyPattern::ZERO_CORRECTION = NULL;

        jclass FrequencyPattern::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/FrequencyPattern");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e4d430173d4a8562] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/gnss/antenna/PhaseCenterVariationFunction;)V");
            mids$[mid_getEccentricities_032312bdeb3f2f93] = env->getMethodID(cls, "getEccentricities", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getPhaseCenterVariation_78c2296af19efe37] = env->getMethodID(cls, "getPhaseCenterVariation", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_getPhaseCenterVariationFunction_09e90a57b5d4a7d6] = env->getMethodID(cls, "getPhaseCenterVariationFunction", "()Lorg/orekit/gnss/antenna/PhaseCenterVariationFunction;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ZERO_CORRECTION = new FrequencyPattern(env->getStaticObjectField(cls, "ZERO_CORRECTION", "Lorg/orekit/gnss/antenna/FrequencyPattern;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FrequencyPattern::FrequencyPattern(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::gnss::antenna::PhaseCenterVariationFunction & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e4d430173d4a8562, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FrequencyPattern::getEccentricities() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_032312bdeb3f2f93]));
        }

        jdouble FrequencyPattern::getPhaseCenterVariation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPhaseCenterVariation_78c2296af19efe37], a0.this$);
        }

        ::org::orekit::gnss::antenna::PhaseCenterVariationFunction FrequencyPattern::getPhaseCenterVariationFunction() const
        {
          return ::org::orekit::gnss::antenna::PhaseCenterVariationFunction(env->callObjectMethod(this$, mids$[mid_getPhaseCenterVariationFunction_09e90a57b5d4a7d6]));
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
        static PyObject *t_FrequencyPattern_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FrequencyPattern_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FrequencyPattern_init_(t_FrequencyPattern *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FrequencyPattern_getEccentricities(t_FrequencyPattern *self);
        static PyObject *t_FrequencyPattern_getPhaseCenterVariation(t_FrequencyPattern *self, PyObject *arg);
        static PyObject *t_FrequencyPattern_getPhaseCenterVariationFunction(t_FrequencyPattern *self);
        static PyObject *t_FrequencyPattern_get__eccentricities(t_FrequencyPattern *self, void *data);
        static PyObject *t_FrequencyPattern_get__phaseCenterVariationFunction(t_FrequencyPattern *self, void *data);
        static PyGetSetDef t_FrequencyPattern__fields_[] = {
          DECLARE_GET_FIELD(t_FrequencyPattern, eccentricities),
          DECLARE_GET_FIELD(t_FrequencyPattern, phaseCenterVariationFunction),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FrequencyPattern__methods_[] = {
          DECLARE_METHOD(t_FrequencyPattern, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FrequencyPattern, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FrequencyPattern, getEccentricities, METH_NOARGS),
          DECLARE_METHOD(t_FrequencyPattern, getPhaseCenterVariation, METH_O),
          DECLARE_METHOD(t_FrequencyPattern, getPhaseCenterVariationFunction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FrequencyPattern)[] = {
          { Py_tp_methods, t_FrequencyPattern__methods_ },
          { Py_tp_init, (void *) t_FrequencyPattern_init_ },
          { Py_tp_getset, t_FrequencyPattern__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FrequencyPattern)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FrequencyPattern, t_FrequencyPattern, FrequencyPattern);

        void t_FrequencyPattern::install(PyObject *module)
        {
          installType(&PY_TYPE(FrequencyPattern), &PY_TYPE_DEF(FrequencyPattern), module, "FrequencyPattern", 0);
        }

        void t_FrequencyPattern::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "class_", make_descriptor(FrequencyPattern::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "wrapfn_", make_descriptor(t_FrequencyPattern::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "boxfn_", make_descriptor(boxObject));
          env->getClass(FrequencyPattern::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "ZERO_CORRECTION", make_descriptor(t_FrequencyPattern::wrap_Object(*FrequencyPattern::ZERO_CORRECTION)));
        }

        static PyObject *t_FrequencyPattern_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FrequencyPattern::initializeClass, 1)))
            return NULL;
          return t_FrequencyPattern::wrap_Object(FrequencyPattern(((t_FrequencyPattern *) arg)->object.this$));
        }
        static PyObject *t_FrequencyPattern_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FrequencyPattern::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FrequencyPattern_init_(t_FrequencyPattern *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction a1((jobject) NULL);
          FrequencyPattern object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::gnss::antenna::PhaseCenterVariationFunction::initializeClass, &a0, &a1))
          {
            INT_CALL(object = FrequencyPattern(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FrequencyPattern_getEccentricities(t_FrequencyPattern *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccentricities());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_FrequencyPattern_getPhaseCenterVariation(t_FrequencyPattern *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getPhaseCenterVariation(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhaseCenterVariation", arg);
          return NULL;
        }

        static PyObject *t_FrequencyPattern_getPhaseCenterVariationFunction(t_FrequencyPattern *self)
        {
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhaseCenterVariationFunction());
          return ::org::orekit::gnss::antenna::t_PhaseCenterVariationFunction::wrap_Object(result);
        }

        static PyObject *t_FrequencyPattern_get__eccentricities(t_FrequencyPattern *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccentricities());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_FrequencyPattern_get__phaseCenterVariationFunction(t_FrequencyPattern *self, void *data)
        {
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhaseCenterVariationFunction());
          return ::org::orekit::gnss::antenna::t_PhaseCenterVariationFunction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "java/util/Map.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmSatelliteEphemeris.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmData.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *Acm::class$ = NULL;
              jmethodID *Acm::mids$ = NULL;
              bool Acm::live$ = false;
              ::java::lang::String *Acm::ATT_LINE = NULL;
              ::java::lang::String *Acm::COV_LINE = NULL;
              ::java::lang::String *Acm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Acm::ROOT = NULL;
              ::java::lang::String *Acm::UNKNOWN_OBJECT = NULL;

              jclass Acm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/Acm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8e67c3c744d320a9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getData_2c161a7d030b81cd] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmData;");
                  mids$[mid_getMetadata_0d0c5aea49e5906e] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadata;");
                  mids$[mid_getSatellites_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ATT_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "ATT_LINE", "Ljava/lang/String;"));
                  COV_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "COV_LINE", "Ljava/lang/String;"));
                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  UNKNOWN_OBJECT = new ::java::lang::String(env->getStaticObjectField(cls, "UNKNOWN_OBJECT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Acm::Acm(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_8e67c3c744d320a9, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::files::ccsds::ndm::adm::acm::AcmData Acm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AcmData(env->callObjectMethod(this$, mids$[mid_getData_2c161a7d030b81cd]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata Acm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_0d0c5aea49e5906e]));
              }

              ::java::util::Map Acm::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_dbcb8bbac6b35e0d]));
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
              static PyObject *t_Acm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Acm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Acm_of_(t_Acm *self, PyObject *args);
              static int t_Acm_init_(t_Acm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Acm_getData(t_Acm *self);
              static PyObject *t_Acm_getMetadata(t_Acm *self);
              static PyObject *t_Acm_getSatellites(t_Acm *self);
              static PyObject *t_Acm_get__data(t_Acm *self, void *data);
              static PyObject *t_Acm_get__metadata(t_Acm *self, void *data);
              static PyObject *t_Acm_get__satellites(t_Acm *self, void *data);
              static PyObject *t_Acm_get__parameters_(t_Acm *self, void *data);
              static PyGetSetDef t_Acm__fields_[] = {
                DECLARE_GET_FIELD(t_Acm, data),
                DECLARE_GET_FIELD(t_Acm, metadata),
                DECLARE_GET_FIELD(t_Acm, satellites),
                DECLARE_GET_FIELD(t_Acm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Acm__methods_[] = {
                DECLARE_METHOD(t_Acm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Acm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Acm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Acm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Acm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Acm, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Acm)[] = {
                { Py_tp_methods, t_Acm__methods_ },
                { Py_tp_init, (void *) t_Acm_init_ },
                { Py_tp_getset, t_Acm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Acm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Acm, t_Acm, Acm);
              PyObject *t_Acm::wrap_Object(const Acm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Acm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Acm *self = (t_Acm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Acm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Acm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Acm *self = (t_Acm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Acm::install(PyObject *module)
              {
                installType(&PY_TYPE(Acm), &PY_TYPE_DEF(Acm), module, "Acm", 0);
              }

              void t_Acm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "class_", make_descriptor(Acm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "wrapfn_", make_descriptor(t_Acm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Acm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "ATT_LINE", make_descriptor(j2p(*Acm::ATT_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "COV_LINE", make_descriptor(j2p(*Acm::COV_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Acm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "ROOT", make_descriptor(j2p(*Acm::ROOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Acm), "UNKNOWN_OBJECT", make_descriptor(j2p(*Acm::UNKNOWN_OBJECT)));
              }

              static PyObject *t_Acm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Acm::initializeClass, 1)))
                  return NULL;
                return t_Acm::wrap_Object(Acm(((t_Acm *) arg)->object.this$));
              }
              static PyObject *t_Acm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Acm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Acm_of_(t_Acm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Acm_init_(t_Acm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Acm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Acm(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Acm_getData(t_Acm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmData::wrap_Object(result);
              }

              static PyObject *t_Acm_getMetadata(t_Acm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmMetadata::wrap_Object(result);
              }

              static PyObject *t_Acm_getSatellites(t_Acm *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AcmSatelliteEphemeris));
              }
              static PyObject *t_Acm_get__parameters_(t_Acm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Acm_get__data(t_Acm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmData::wrap_Object(value);
              }

              static PyObject *t_Acm_get__metadata(t_Acm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmMetadata::wrap_Object(value);
              }

              static PyObject *t_Acm_get__satellites(t_Acm *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphericCorrectionType::class$ = NULL;
          jmethodID *IonosphericCorrectionType::mids$ = NULL;
          bool IonosphericCorrectionType::live$ = false;
          IonosphericCorrectionType *IonosphericCorrectionType::BDS = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::GAL = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::GPS = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::IRN = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::QZS = NULL;

          jclass IonosphericCorrectionType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphericCorrectionType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_52e2989b5b291c27] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");
              mids$[mid_values_68c9b59c91d6ea63] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BDS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "BDS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              GAL = new IonosphericCorrectionType(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              GPS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              IRN = new IonosphericCorrectionType(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              QZS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphericCorrectionType IonosphericCorrectionType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IonosphericCorrectionType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_52e2989b5b291c27], a0.this$));
          }

          JArray< IonosphericCorrectionType > IonosphericCorrectionType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IonosphericCorrectionType >(env->callStaticObjectMethod(cls, mids$[mid_values_68c9b59c91d6ea63]));
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
          static PyObject *t_IonosphericCorrectionType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericCorrectionType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericCorrectionType_of_(t_IonosphericCorrectionType *self, PyObject *args);
          static PyObject *t_IonosphericCorrectionType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IonosphericCorrectionType_values(PyTypeObject *type);
          static PyObject *t_IonosphericCorrectionType_get__parameters_(t_IonosphericCorrectionType *self, void *data);
          static PyGetSetDef t_IonosphericCorrectionType__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphericCorrectionType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphericCorrectionType__methods_[] = {
            DECLARE_METHOD(t_IonosphericCorrectionType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, of_, METH_VARARGS),
            DECLARE_METHOD(t_IonosphericCorrectionType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphericCorrectionType)[] = {
            { Py_tp_methods, t_IonosphericCorrectionType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IonosphericCorrectionType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphericCorrectionType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IonosphericCorrectionType, t_IonosphericCorrectionType, IonosphericCorrectionType);
          PyObject *t_IonosphericCorrectionType::wrap_Object(const IonosphericCorrectionType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IonosphericCorrectionType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IonosphericCorrectionType *self = (t_IonosphericCorrectionType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IonosphericCorrectionType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IonosphericCorrectionType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IonosphericCorrectionType *self = (t_IonosphericCorrectionType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IonosphericCorrectionType::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphericCorrectionType), &PY_TYPE_DEF(IonosphericCorrectionType), module, "IonosphericCorrectionType", 0);
          }

          void t_IonosphericCorrectionType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "class_", make_descriptor(IonosphericCorrectionType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "wrapfn_", make_descriptor(t_IonosphericCorrectionType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphericCorrectionType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "BDS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::BDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "GAL", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "GPS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "IRN", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::IRN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "QZS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::QZS)));
          }

          static PyObject *t_IonosphericCorrectionType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphericCorrectionType::initializeClass, 1)))
              return NULL;
            return t_IonosphericCorrectionType::wrap_Object(IonosphericCorrectionType(((t_IonosphericCorrectionType *) arg)->object.this$));
          }
          static PyObject *t_IonosphericCorrectionType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphericCorrectionType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IonosphericCorrectionType_of_(t_IonosphericCorrectionType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IonosphericCorrectionType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IonosphericCorrectionType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::valueOf(a0));
              return t_IonosphericCorrectionType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IonosphericCorrectionType_values(PyTypeObject *type)
          {
            JArray< IonosphericCorrectionType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::values());
            return JArray<jobject>(result.this$).wrap(t_IonosphericCorrectionType::wrap_jobject);
          }
          static PyObject *t_IonosphericCorrectionType_get__parameters_(t_IonosphericCorrectionType *self, void *data)
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
#include "org/orekit/gnss/antenna/TwoDVariation.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *TwoDVariation::class$ = NULL;
        jmethodID *TwoDVariation::mids$ = NULL;
        bool TwoDVariation::live$ = false;

        jclass TwoDVariation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/TwoDVariation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_757350bdabd3a681] = env->getMethodID(cls, "<init>", "(DDD[[D)V");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TwoDVariation::TwoDVariation(jdouble a0, jdouble a1, jdouble a2, const JArray< JArray< jdouble > > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_757350bdabd3a681, a0, a1, a2, a3.this$)) {}

        jdouble TwoDVariation::value(jdouble a0, jdouble a1) const
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
  namespace orekit {
    namespace gnss {
      namespace antenna {
        static PyObject *t_TwoDVariation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TwoDVariation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TwoDVariation_init_(t_TwoDVariation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TwoDVariation_value(t_TwoDVariation *self, PyObject *args);

        static PyMethodDef t_TwoDVariation__methods_[] = {
          DECLARE_METHOD(t_TwoDVariation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TwoDVariation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TwoDVariation, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TwoDVariation)[] = {
          { Py_tp_methods, t_TwoDVariation__methods_ },
          { Py_tp_init, (void *) t_TwoDVariation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TwoDVariation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TwoDVariation, t_TwoDVariation, TwoDVariation);

        void t_TwoDVariation::install(PyObject *module)
        {
          installType(&PY_TYPE(TwoDVariation), &PY_TYPE_DEF(TwoDVariation), module, "TwoDVariation", 0);
        }

        void t_TwoDVariation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "class_", make_descriptor(TwoDVariation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "wrapfn_", make_descriptor(t_TwoDVariation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TwoDVariation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TwoDVariation::initializeClass, 1)))
            return NULL;
          return t_TwoDVariation::wrap_Object(TwoDVariation(((t_TwoDVariation *) arg)->object.this$));
        }
        static PyObject *t_TwoDVariation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TwoDVariation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TwoDVariation_init_(t_TwoDVariation *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          JArray< JArray< jdouble > > a3((jobject) NULL);
          TwoDVariation object((jobject) NULL);

          if (!parseArgs(args, "DDD[[D", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = TwoDVariation(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TwoDVariation_value(t_TwoDVariation *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *IntegrationReference::class$ = NULL;
            jmethodID *IntegrationReference::mids$ = NULL;
            bool IntegrationReference::live$ = false;
            IntegrationReference *IntegrationReference::END = NULL;
            IntegrationReference *IntegrationReference::MIDDLE = NULL;
            IntegrationReference *IntegrationReference::START = NULL;

            jclass IntegrationReference::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/IntegrationReference");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_e06d33fa39ff841a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");
                mids$[mid_values_0e667ff5024cd6f2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                END = new IntegrationReference(env->getStaticObjectField(cls, "END", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                MIDDLE = new IntegrationReference(env->getStaticObjectField(cls, "MIDDLE", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                START = new IntegrationReference(env->getStaticObjectField(cls, "START", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IntegrationReference IntegrationReference::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return IntegrationReference(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e06d33fa39ff841a], a0.this$));
            }

            JArray< IntegrationReference > IntegrationReference::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< IntegrationReference >(env->callStaticObjectMethod(cls, mids$[mid_values_0e667ff5024cd6f2]));
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
            static PyObject *t_IntegrationReference_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IntegrationReference_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IntegrationReference_of_(t_IntegrationReference *self, PyObject *args);
            static PyObject *t_IntegrationReference_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_IntegrationReference_values(PyTypeObject *type);
            static PyObject *t_IntegrationReference_get__parameters_(t_IntegrationReference *self, void *data);
            static PyGetSetDef t_IntegrationReference__fields_[] = {
              DECLARE_GET_FIELD(t_IntegrationReference, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_IntegrationReference__methods_[] = {
              DECLARE_METHOD(t_IntegrationReference, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, of_, METH_VARARGS),
              DECLARE_METHOD(t_IntegrationReference, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IntegrationReference)[] = {
              { Py_tp_methods, t_IntegrationReference__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_IntegrationReference__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IntegrationReference)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(IntegrationReference, t_IntegrationReference, IntegrationReference);
            PyObject *t_IntegrationReference::wrap_Object(const IntegrationReference& object, PyTypeObject *p0)
            {
              PyObject *obj = t_IntegrationReference::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_IntegrationReference *self = (t_IntegrationReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_IntegrationReference::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_IntegrationReference::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_IntegrationReference *self = (t_IntegrationReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_IntegrationReference::install(PyObject *module)
            {
              installType(&PY_TYPE(IntegrationReference), &PY_TYPE_DEF(IntegrationReference), module, "IntegrationReference", 0);
            }

            void t_IntegrationReference::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "class_", make_descriptor(IntegrationReference::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "wrapfn_", make_descriptor(t_IntegrationReference::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "boxfn_", make_descriptor(boxObject));
              env->getClass(IntegrationReference::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "END", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::END)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "MIDDLE", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::MIDDLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "START", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::START)));
            }

            static PyObject *t_IntegrationReference_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IntegrationReference::initializeClass, 1)))
                return NULL;
              return t_IntegrationReference::wrap_Object(IntegrationReference(((t_IntegrationReference *) arg)->object.this$));
            }
            static PyObject *t_IntegrationReference_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IntegrationReference::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_IntegrationReference_of_(t_IntegrationReference *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_IntegrationReference_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              IntegrationReference result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::valueOf(a0));
                return t_IntegrationReference::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_IntegrationReference_values(PyTypeObject *type)
            {
              JArray< IntegrationReference > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::values());
              return JArray<jobject>(result.this$).wrap(t_IntegrationReference::wrap_jobject);
            }
            static PyObject *t_IntegrationReference_get__parameters_(t_IntegrationReference *self, void *data)
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
#include "org/orekit/rugged/adjustment/measurements/SensorToGroundMapping.h"
#include "java/util/Map$Entry.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorToGroundMapping::class$ = NULL;
          jmethodID *SensorToGroundMapping::mids$ = NULL;
          bool SensorToGroundMapping::live$ = false;

          jclass SensorToGroundMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorToGroundMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_771aee6c143cc92a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_addMapping_9bc51464dd5f4881] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/bodies/GeodeticPoint;)V");
              mids$[mid_getMapping_6b191a9b12c1004b] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedName_d2c8eb4129821f0e] = env->getMethodID(cls, "getRuggedName", "()Ljava/lang/String;");
              mids$[mid_getSensorName_d2c8eb4129821f0e] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorToGroundMapping::SensorToGroundMapping(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

          SensorToGroundMapping::SensorToGroundMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_771aee6c143cc92a, a0.this$, a1.this$)) {}

          void SensorToGroundMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_9bc51464dd5f4881], a0.this$, a1.this$);
          }

          ::java::util::Set SensorToGroundMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_6b191a9b12c1004b]));
          }

          ::java::lang::String SensorToGroundMapping::getRuggedName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedName_d2c8eb4129821f0e]));
          }

          ::java::lang::String SensorToGroundMapping::getSensorName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_d2c8eb4129821f0e]));
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
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorToGroundMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorToGroundMapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SensorToGroundMapping_init_(t_SensorToGroundMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorToGroundMapping_addMapping(t_SensorToGroundMapping *self, PyObject *args);
          static PyObject *t_SensorToGroundMapping_getMapping(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_getRuggedName(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_getSensorName(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_get__mapping(t_SensorToGroundMapping *self, void *data);
          static PyObject *t_SensorToGroundMapping_get__ruggedName(t_SensorToGroundMapping *self, void *data);
          static PyObject *t_SensorToGroundMapping_get__sensorName(t_SensorToGroundMapping *self, void *data);
          static PyGetSetDef t_SensorToGroundMapping__fields_[] = {
            DECLARE_GET_FIELD(t_SensorToGroundMapping, mapping),
            DECLARE_GET_FIELD(t_SensorToGroundMapping, ruggedName),
            DECLARE_GET_FIELD(t_SensorToGroundMapping, sensorName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorToGroundMapping__methods_[] = {
            DECLARE_METHOD(t_SensorToGroundMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToGroundMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToGroundMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getRuggedName, METH_NOARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getSensorName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorToGroundMapping)[] = {
            { Py_tp_methods, t_SensorToGroundMapping__methods_ },
            { Py_tp_init, (void *) t_SensorToGroundMapping_init_ },
            { Py_tp_getset, t_SensorToGroundMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorToGroundMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorToGroundMapping, t_SensorToGroundMapping, SensorToGroundMapping);

          void t_SensorToGroundMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorToGroundMapping), &PY_TYPE_DEF(SensorToGroundMapping), module, "SensorToGroundMapping", 0);
          }

          void t_SensorToGroundMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "class_", make_descriptor(SensorToGroundMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "wrapfn_", make_descriptor(t_SensorToGroundMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorToGroundMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorToGroundMapping::initializeClass, 1)))
              return NULL;
            return t_SensorToGroundMapping::wrap_Object(SensorToGroundMapping(((t_SensorToGroundMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorToGroundMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorToGroundMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SensorToGroundMapping_init_(t_SensorToGroundMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                SensorToGroundMapping object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = SensorToGroundMapping(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorToGroundMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorToGroundMapping(a0, a1));
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

          static PyObject *t_SensorToGroundMapping_addMapping(t_SensorToGroundMapping *self, PyObject *args)
          {
            ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addMapping(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorToGroundMapping_getMapping(t_SensorToGroundMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorToGroundMapping_getRuggedName(t_SensorToGroundMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedName());
            return j2p(result);
          }

          static PyObject *t_SensorToGroundMapping_getSensorName(t_SensorToGroundMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorName());
            return j2p(result);
          }

          static PyObject *t_SensorToGroundMapping_get__mapping(t_SensorToGroundMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorToGroundMapping_get__ruggedName(t_SensorToGroundMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedName());
            return j2p(value);
          }

          static PyObject *t_SensorToGroundMapping_get__sensorName(t_SensorToGroundMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ShiftingTransformProvider.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ShiftingTransformProvider::class$ = NULL;
      jmethodID *ShiftingTransformProvider::mids$ = NULL;
      bool ShiftingTransformProvider::live$ = false;

      jclass ShiftingTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ShiftingTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f96a885f66859d5c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;IDIDD)V");
          mids$[mid_getGridPoints_d6ab429752e7c267] = env->getMethodID(cls, "getGridPoints", "()I");
          mids$[mid_getRawProvider_fd7cd467d992431a] = env->getMethodID(cls, "getRawProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getStaticTransform_6e492420312934f1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_3b5ee2ab7cc035a5] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getStep_9981f74b2d109da6] = env->getMethodID(cls, "getStep", "()D");
          mids$[mid_getTransform_02ca17ac51b6a4b2] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_286745ef54e0a7f6] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ShiftingTransformProvider::ShiftingTransformProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, jint a3, jdouble a4, jint a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f96a885f66859d5c, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

      jint ShiftingTransformProvider::getGridPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getGridPoints_d6ab429752e7c267]);
      }

      ::org::orekit::frames::TransformProvider ShiftingTransformProvider::getRawProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getRawProvider_fd7cd467d992431a]));
      }

      ::org::orekit::frames::StaticTransform ShiftingTransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_6e492420312934f1], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform ShiftingTransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_3b5ee2ab7cc035a5], a0.this$));
      }

      jdouble ShiftingTransformProvider::getStep() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getStep_9981f74b2d109da6]);
      }

      ::org::orekit::frames::Transform ShiftingTransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_02ca17ac51b6a4b2], a0.this$));
      }

      ::org::orekit::frames::FieldTransform ShiftingTransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_286745ef54e0a7f6], a0.this$));
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
      static PyObject *t_ShiftingTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ShiftingTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ShiftingTransformProvider_init_(t_ShiftingTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ShiftingTransformProvider_getGridPoints(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getRawProvider(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getStaticTransform(t_ShiftingTransformProvider *self, PyObject *args);
      static PyObject *t_ShiftingTransformProvider_getStep(t_ShiftingTransformProvider *self);
      static PyObject *t_ShiftingTransformProvider_getTransform(t_ShiftingTransformProvider *self, PyObject *args);
      static PyObject *t_ShiftingTransformProvider_get__gridPoints(t_ShiftingTransformProvider *self, void *data);
      static PyObject *t_ShiftingTransformProvider_get__rawProvider(t_ShiftingTransformProvider *self, void *data);
      static PyObject *t_ShiftingTransformProvider_get__step(t_ShiftingTransformProvider *self, void *data);
      static PyGetSetDef t_ShiftingTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, gridPoints),
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, rawProvider),
        DECLARE_GET_FIELD(t_ShiftingTransformProvider, step),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ShiftingTransformProvider__methods_[] = {
        DECLARE_METHOD(t_ShiftingTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ShiftingTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getGridPoints, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getRawProvider, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getStep, METH_NOARGS),
        DECLARE_METHOD(t_ShiftingTransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ShiftingTransformProvider)[] = {
        { Py_tp_methods, t_ShiftingTransformProvider__methods_ },
        { Py_tp_init, (void *) t_ShiftingTransformProvider_init_ },
        { Py_tp_getset, t_ShiftingTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ShiftingTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ShiftingTransformProvider, t_ShiftingTransformProvider, ShiftingTransformProvider);

      void t_ShiftingTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ShiftingTransformProvider), &PY_TYPE_DEF(ShiftingTransformProvider), module, "ShiftingTransformProvider", 0);
      }

      void t_ShiftingTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "class_", make_descriptor(ShiftingTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "wrapfn_", make_descriptor(t_ShiftingTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ShiftingTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ShiftingTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ShiftingTransformProvider::initializeClass, 1)))
          return NULL;
        return t_ShiftingTransformProvider::wrap_Object(ShiftingTransformProvider(((t_ShiftingTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_ShiftingTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ShiftingTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ShiftingTransformProvider_init_(t_ShiftingTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        jint a3;
        jdouble a4;
        jint a5;
        jdouble a6;
        jdouble a7;
        ShiftingTransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kKKIDIDD", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5, &a6, &a7))
        {
          INT_CALL(object = ShiftingTransformProvider(a0, a1, a2, a3, a4, a5, a6, a7));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ShiftingTransformProvider_getGridPoints(t_ShiftingTransformProvider *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGridPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ShiftingTransformProvider_getRawProvider(t_ShiftingTransformProvider *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_ShiftingTransformProvider_getStaticTransform(t_ShiftingTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_ShiftingTransformProvider_getStep(t_ShiftingTransformProvider *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getStep());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ShiftingTransformProvider_getTransform(t_ShiftingTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }

      static PyObject *t_ShiftingTransformProvider_get__gridPoints(t_ShiftingTransformProvider *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGridPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ShiftingTransformProvider_get__rawProvider(t_ShiftingTransformProvider *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }

      static PyObject *t_ShiftingTransformProvider_get__step(t_ShiftingTransformProvider *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getStep());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *RuntimeException::class$ = NULL;
    jmethodID *RuntimeException::mids$ = NULL;
    bool RuntimeException::live$ = false;

    jclass RuntimeException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/RuntimeException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0a70d77e3c5fdad0] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_e6096d9f5fb551a3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    RuntimeException::RuntimeException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    RuntimeException::RuntimeException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    RuntimeException::RuntimeException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0a70d77e3c5fdad0, a0.this$)) {}

    RuntimeException::RuntimeException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_e6096d9f5fb551a3, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_RuntimeException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_RuntimeException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_RuntimeException_init_(t_RuntimeException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_RuntimeException__methods_[] = {
      DECLARE_METHOD(t_RuntimeException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_RuntimeException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(RuntimeException)[] = {
      { Py_tp_methods, t_RuntimeException__methods_ },
      { Py_tp_init, (void *) t_RuntimeException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(RuntimeException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(RuntimeException, t_RuntimeException, RuntimeException);

    void t_RuntimeException::install(PyObject *module)
    {
      installType(&PY_TYPE(RuntimeException), &PY_TYPE_DEF(RuntimeException), module, "RuntimeException", 0);
    }

    void t_RuntimeException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "class_", make_descriptor(RuntimeException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "wrapfn_", make_descriptor(t_RuntimeException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_RuntimeException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, RuntimeException::initializeClass, 1)))
        return NULL;
      return t_RuntimeException::wrap_Object(RuntimeException(((t_RuntimeException *) arg)->object.this$));
    }
    static PyObject *t_RuntimeException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, RuntimeException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_RuntimeException_init_(t_RuntimeException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          RuntimeException object((jobject) NULL);

          INT_CALL(object = RuntimeException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = RuntimeException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = RuntimeException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = RuntimeException(a0, a1));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Sphere1D::class$ = NULL;
          jmethodID *Sphere1D::mids$ = NULL;
          bool Sphere1D::live$ = false;
          jdouble Sphere1D::SMALLEST_TOLERANCE = (jdouble) 0;

          jclass Sphere1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Sphere1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkTolerance_1ad26e8c8c0cd65b] = env->getStaticMethodID(cls, "checkTolerance", "(D)V");
              mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_19e97269a1512723] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/spherical/oned/Sphere1D;");
              mids$[mid_getSubSpace_a30bf0b437744017] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SMALLEST_TOLERANCE = env->getStaticDoubleField(cls, "SMALLEST_TOLERANCE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Sphere1D::checkTolerance(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_checkTolerance_1ad26e8c8c0cd65b], a0);
          }

          jint Sphere1D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
          }

          Sphere1D Sphere1D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Sphere1D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_19e97269a1512723]));
          }

          ::org::hipparchus::geometry::Space Sphere1D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_a30bf0b437744017]));
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
      namespace spherical {
        namespace oned {
          static PyObject *t_Sphere1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_checkTolerance(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_getDimension(t_Sphere1D *self);
          static PyObject *t_Sphere1D_getInstance(PyTypeObject *type);
          static PyObject *t_Sphere1D_getSubSpace(t_Sphere1D *self);
          static PyObject *t_Sphere1D_get__dimension(t_Sphere1D *self, void *data);
          static PyObject *t_Sphere1D_get__instance(t_Sphere1D *self, void *data);
          static PyObject *t_Sphere1D_get__subSpace(t_Sphere1D *self, void *data);
          static PyGetSetDef t_Sphere1D__fields_[] = {
            DECLARE_GET_FIELD(t_Sphere1D, dimension),
            DECLARE_GET_FIELD(t_Sphere1D, instance),
            DECLARE_GET_FIELD(t_Sphere1D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sphere1D__methods_[] = {
            DECLARE_METHOD(t_Sphere1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, checkTolerance, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Sphere1D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere1D)[] = {
            { Py_tp_methods, t_Sphere1D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Sphere1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Sphere1D, t_Sphere1D, Sphere1D);

          void t_Sphere1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere1D), &PY_TYPE_DEF(Sphere1D), module, "Sphere1D", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "NoSubSpaceException", make_descriptor(&PY_TYPE_DEF(Sphere1D$NoSubSpaceException)));
          }

          void t_Sphere1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "class_", make_descriptor(Sphere1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "wrapfn_", make_descriptor(t_Sphere1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Sphere1D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "SMALLEST_TOLERANCE", make_descriptor(Sphere1D::SMALLEST_TOLERANCE));
          }

          static PyObject *t_Sphere1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere1D::initializeClass, 1)))
              return NULL;
            return t_Sphere1D::wrap_Object(Sphere1D(((t_Sphere1D *) arg)->object.this$));
          }
          static PyObject *t_Sphere1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Sphere1D_checkTolerance(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::geometry::spherical::oned::Sphere1D::checkTolerance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "checkTolerance", arg);
            return NULL;
          }

          static PyObject *t_Sphere1D_getDimension(t_Sphere1D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Sphere1D_getInstance(PyTypeObject *type)
          {
            Sphere1D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::spherical::oned::Sphere1D::getInstance());
            return t_Sphere1D::wrap_Object(result);
          }

          static PyObject *t_Sphere1D_getSubSpace(t_Sphere1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Sphere1D_get__dimension(t_Sphere1D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Sphere1D_get__instance(t_Sphere1D *self, void *data)
          {
            Sphere1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Sphere1D::wrap_Object(value);
          }

          static PyObject *t_Sphere1D_get__subSpace(t_Sphere1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Log1p.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Log1p::class$ = NULL;
        jmethodID *Log1p::mids$ = NULL;
        bool Log1p::live$ = false;

        jclass Log1p::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Log1p");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log1p::Log1p() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Log1p::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log1p::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Log1p_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Log1p_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Log1p_init_(t_Log1p *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Log1p_value(t_Log1p *self, PyObject *args);

        static PyMethodDef t_Log1p__methods_[] = {
          DECLARE_METHOD(t_Log1p, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log1p, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log1p, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Log1p)[] = {
          { Py_tp_methods, t_Log1p__methods_ },
          { Py_tp_init, (void *) t_Log1p_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Log1p)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Log1p, t_Log1p, Log1p);

        void t_Log1p::install(PyObject *module)
        {
          installType(&PY_TYPE(Log1p), &PY_TYPE_DEF(Log1p), module, "Log1p", 0);
        }

        void t_Log1p::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log1p), "class_", make_descriptor(Log1p::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log1p), "wrapfn_", make_descriptor(t_Log1p::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log1p), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Log1p_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Log1p::initializeClass, 1)))
            return NULL;
          return t_Log1p::wrap_Object(Log1p(((t_Log1p *) arg)->object.this$));
        }
        static PyObject *t_Log1p_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Log1p::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Log1p_init_(t_Log1p *self, PyObject *args, PyObject *kwds)
        {
          Log1p object((jobject) NULL);

          INT_CALL(object = Log1p());
          self->object = object;

          return 0;
        }

        static PyObject *t_Log1p_value(t_Log1p *self, PyObject *args)
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
                mids$[mid_accept_e735d7ae22b75d14] = env->getMethodID(cls, "accept", "(Ljava/lang/Enum;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$EnumConsumer::accept(const ::java::lang::Enum & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_e735d7ae22b75d14], a0.this$);
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfano2005.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Alfano2005::class$ = NULL;
              jmethodID *Alfano2005::mids$ = NULL;
              bool Alfano2005::live$ = false;

              jclass Alfano2005::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfano2005");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_7eae8d8112e983e4] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8edb355cf7d54cf6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_592990a91429410c] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfano2005::Alfano2005() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Alfano2005::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_7eae8d8112e983e4], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Alfano2005::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8edb355cf7d54cf6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfano2005::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_592990a91429410c]));
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_Alfano2005_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfano2005_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfano2005_init_(t_Alfano2005 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfano2005_compute(t_Alfano2005 *self, PyObject *args);
              static PyObject *t_Alfano2005_getType(t_Alfano2005 *self, PyObject *args);
              static PyObject *t_Alfano2005_get__type(t_Alfano2005 *self, void *data);
              static PyGetSetDef t_Alfano2005__fields_[] = {
                DECLARE_GET_FIELD(t_Alfano2005, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfano2005__methods_[] = {
                DECLARE_METHOD(t_Alfano2005, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfano2005, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfano2005, compute, METH_VARARGS),
                DECLARE_METHOD(t_Alfano2005, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfano2005)[] = {
                { Py_tp_methods, t_Alfano2005__methods_ },
                { Py_tp_init, (void *) t_Alfano2005_init_ },
                { Py_tp_getset, t_Alfano2005__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfano2005)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Alfano2005, t_Alfano2005, Alfano2005);

              void t_Alfano2005::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfano2005), &PY_TYPE_DEF(Alfano2005), module, "Alfano2005", 0);
              }

              void t_Alfano2005::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfano2005), "class_", make_descriptor(Alfano2005::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfano2005), "wrapfn_", make_descriptor(t_Alfano2005::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfano2005), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfano2005_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfano2005::initializeClass, 1)))
                  return NULL;
                return t_Alfano2005::wrap_Object(Alfano2005(((t_Alfano2005 *) arg)->object.this$));
              }
              static PyObject *t_Alfano2005_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfano2005::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfano2005_init_(t_Alfano2005 *self, PyObject *args, PyObject *kwds)
              {
                Alfano2005 object((jobject) NULL);

                INT_CALL(object = Alfano2005());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfano2005_compute(t_Alfano2005 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(Alfano2005), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Alfano2005_getType(t_Alfano2005 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfano2005), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfano2005_get__type(t_Alfano2005 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/orekit/forces/gravity/potential/ICGEMFormatReader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *ICGEMFormatReader::class$ = NULL;
          jmethodID *ICGEMFormatReader::mids$ = NULL;
          bool ICGEMFormatReader::live$ = false;

          jclass ICGEMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/ICGEMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c5d48f261709aa3e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_13b6194a2a01ad07] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_0c94c2344ee8a0fa] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ICGEMFormatReader::ICGEMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_c5d48f261709aa3e, a0.this$, a1)) {}

          ICGEMFormatReader::ICGEMFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_13b6194a2a01ad07, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider ICGEMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_0c94c2344ee8a0fa], a0, a1, a2));
          }

          void ICGEMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
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
      namespace gravity {
        namespace potential {
          static PyObject *t_ICGEMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ICGEMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ICGEMFormatReader_init_(t_ICGEMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ICGEMFormatReader_getProvider(t_ICGEMFormatReader *self, PyObject *args);
          static PyObject *t_ICGEMFormatReader_loadData(t_ICGEMFormatReader *self, PyObject *args);

          static PyMethodDef t_ICGEMFormatReader__methods_[] = {
            DECLARE_METHOD(t_ICGEMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ICGEMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ICGEMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_ICGEMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ICGEMFormatReader)[] = {
            { Py_tp_methods, t_ICGEMFormatReader__methods_ },
            { Py_tp_init, (void *) t_ICGEMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ICGEMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(ICGEMFormatReader, t_ICGEMFormatReader, ICGEMFormatReader);

          void t_ICGEMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(ICGEMFormatReader), &PY_TYPE_DEF(ICGEMFormatReader), module, "ICGEMFormatReader", 0);
          }

          void t_ICGEMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "class_", make_descriptor(ICGEMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "wrapfn_", make_descriptor(t_ICGEMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ICGEMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ICGEMFormatReader::initializeClass, 1)))
              return NULL;
            return t_ICGEMFormatReader::wrap_Object(ICGEMFormatReader(((t_ICGEMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_ICGEMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ICGEMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ICGEMFormatReader_init_(t_ICGEMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ICGEMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = ICGEMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                ICGEMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ICGEMFormatReader(a0, a1, a2));
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

          static PyObject *t_ICGEMFormatReader_getProvider(t_ICGEMFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ICGEMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_ICGEMFormatReader_loadData(t_ICGEMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(ICGEMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/HolmesFeatherstoneAttractionModel.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/ForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *HolmesFeatherstoneAttractionModel::class$ = NULL;
        jmethodID *HolmesFeatherstoneAttractionModel::mids$ = NULL;
        bool HolmesFeatherstoneAttractionModel::live$ = false;

        jclass HolmesFeatherstoneAttractionModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/HolmesFeatherstoneAttractionModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5d920aa6f3a7a368] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getMu_209f08246d708042] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getTideSystem_1e0f912623cd4841] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
            mids$[mid_gradient_e8d042e044715b4f] = env->getMethodID(cls, "gradient", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)[D");
            mids$[mid_gradient_84cf09340692b7fd] = env->getMethodID(cls, "gradient", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_nonCentralPart_07ed88f88bd9659c] = env->getMethodID(cls, "nonCentralPart", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)D");
            mids$[mid_value_07ed88f88bd9659c] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HolmesFeatherstoneAttractionModel::HolmesFeatherstoneAttractionModel(const ::org::orekit::frames::Frame & a0, const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d920aa6f3a7a368, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D HolmesFeatherstoneAttractionModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D HolmesFeatherstoneAttractionModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        jboolean HolmesFeatherstoneAttractionModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        jdouble HolmesFeatherstoneAttractionModel::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        jdouble HolmesFeatherstoneAttractionModel::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_209f08246d708042], a0.this$);
        }

        ::java::util::List HolmesFeatherstoneAttractionModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        ::org::orekit::forces::gravity::potential::TideSystem HolmesFeatherstoneAttractionModel::getTideSystem() const
        {
          return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_1e0f912623cd4841]));
        }

        JArray< jdouble > HolmesFeatherstoneAttractionModel::gradient(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_e8d042e044715b4f], a0.this$, a1.this$, a2));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HolmesFeatherstoneAttractionModel::gradient(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_gradient_84cf09340692b7fd], a0.this$, a1.this$, a2.this$));
        }

        jdouble HolmesFeatherstoneAttractionModel::nonCentralPart(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_nonCentralPart_07ed88f88bd9659c], a0.this$, a1.this$, a2);
        }

        jdouble HolmesFeatherstoneAttractionModel::value(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_07ed88f88bd9659c], a0.this$, a1.this$, a2);
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
      namespace gravity {
        static PyObject *t_HolmesFeatherstoneAttractionModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HolmesFeatherstoneAttractionModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HolmesFeatherstoneAttractionModel_init_(t_HolmesFeatherstoneAttractionModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HolmesFeatherstoneAttractionModel_acceleration(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_dependsOnPositionOnly(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getMu(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getParametersDrivers(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_getTideSystem(t_HolmesFeatherstoneAttractionModel *self);
        static PyObject *t_HolmesFeatherstoneAttractionModel_gradient(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_nonCentralPart(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_value(t_HolmesFeatherstoneAttractionModel *self, PyObject *args);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__mu(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__parametersDrivers(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyObject *t_HolmesFeatherstoneAttractionModel_get__tideSystem(t_HolmesFeatherstoneAttractionModel *self, void *data);
        static PyGetSetDef t_HolmesFeatherstoneAttractionModel__fields_[] = {
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, mu),
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, parametersDrivers),
          DECLARE_GET_FIELD(t_HolmesFeatherstoneAttractionModel, tideSystem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HolmesFeatherstoneAttractionModel__methods_[] = {
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getMu, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, getTideSystem, METH_NOARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, gradient, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, nonCentralPart, METH_VARARGS),
          DECLARE_METHOD(t_HolmesFeatherstoneAttractionModel, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HolmesFeatherstoneAttractionModel)[] = {
          { Py_tp_methods, t_HolmesFeatherstoneAttractionModel__methods_ },
          { Py_tp_init, (void *) t_HolmesFeatherstoneAttractionModel_init_ },
          { Py_tp_getset, t_HolmesFeatherstoneAttractionModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HolmesFeatherstoneAttractionModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HolmesFeatherstoneAttractionModel, t_HolmesFeatherstoneAttractionModel, HolmesFeatherstoneAttractionModel);

        void t_HolmesFeatherstoneAttractionModel::install(PyObject *module)
        {
          installType(&PY_TYPE(HolmesFeatherstoneAttractionModel), &PY_TYPE_DEF(HolmesFeatherstoneAttractionModel), module, "HolmesFeatherstoneAttractionModel", 0);
        }

        void t_HolmesFeatherstoneAttractionModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "class_", make_descriptor(HolmesFeatherstoneAttractionModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "wrapfn_", make_descriptor(t_HolmesFeatherstoneAttractionModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HolmesFeatherstoneAttractionModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HolmesFeatherstoneAttractionModel::initializeClass, 1)))
            return NULL;
          return t_HolmesFeatherstoneAttractionModel::wrap_Object(HolmesFeatherstoneAttractionModel(((t_HolmesFeatherstoneAttractionModel *) arg)->object.this$));
        }
        static PyObject *t_HolmesFeatherstoneAttractionModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HolmesFeatherstoneAttractionModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HolmesFeatherstoneAttractionModel_init_(t_HolmesFeatherstoneAttractionModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a1((jobject) NULL);
          HolmesFeatherstoneAttractionModel object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
          {
            INT_CALL(object = HolmesFeatherstoneAttractionModel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_acceleration(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
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

        static PyObject *t_HolmesFeatherstoneAttractionModel_dependsOnPositionOnly(t_HolmesFeatherstoneAttractionModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getMu(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMu(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMu", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getParametersDrivers(t_HolmesFeatherstoneAttractionModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_getTideSystem(t_HolmesFeatherstoneAttractionModel *self)
        {
          ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTideSystem());
          return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_gradient(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.gradient(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.gradient(a0, a1, a2));
                return result.wrap();
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_nonCentralPart(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.nonCentralPart(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "nonCentralPart", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_value(t_HolmesFeatherstoneAttractionModel *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble result;

          if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.value(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__mu(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__parametersDrivers(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_HolmesFeatherstoneAttractionModel_get__tideSystem(t_HolmesFeatherstoneAttractionModel *self, void *data)
        {
          ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTideSystem());
          return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultRealMatrixChangingVisitor.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultRealMatrixChangingVisitor::class$ = NULL;
      jmethodID *DefaultRealMatrixChangingVisitor::mids$ = NULL;
      bool DefaultRealMatrixChangingVisitor::live$ = false;

      jclass DefaultRealMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultRealMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_end_9981f74b2d109da6] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_ee5da648d666a7a9] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_72f52bd4c5831a13] = env->getMethodID(cls, "visit", "(IID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultRealMatrixChangingVisitor::DefaultRealMatrixChangingVisitor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      jdouble DefaultRealMatrixChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_9981f74b2d109da6]);
      }

      void DefaultRealMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ee5da648d666a7a9], a0, a1, a2, a3, a4, a5);
      }

      jdouble DefaultRealMatrixChangingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_72f52bd4c5831a13], a0, a1, a2);
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
      static PyObject *t_DefaultRealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultRealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultRealMatrixChangingVisitor_init_(t_DefaultRealMatrixChangingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultRealMatrixChangingVisitor_end(t_DefaultRealMatrixChangingVisitor *self);
      static PyObject *t_DefaultRealMatrixChangingVisitor_start(t_DefaultRealMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultRealMatrixChangingVisitor_visit(t_DefaultRealMatrixChangingVisitor *self, PyObject *args);

      static PyMethodDef t_DefaultRealMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultRealMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_DefaultRealMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultRealMatrixChangingVisitor_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultRealMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultRealMatrixChangingVisitor, t_DefaultRealMatrixChangingVisitor, DefaultRealMatrixChangingVisitor);

      void t_DefaultRealMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultRealMatrixChangingVisitor), &PY_TYPE_DEF(DefaultRealMatrixChangingVisitor), module, "DefaultRealMatrixChangingVisitor", 0);
      }

      void t_DefaultRealMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "class_", make_descriptor(DefaultRealMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "wrapfn_", make_descriptor(t_DefaultRealMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultRealMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultRealMatrixChangingVisitor::wrap_Object(DefaultRealMatrixChangingVisitor(((t_DefaultRealMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultRealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultRealMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultRealMatrixChangingVisitor_init_(t_DefaultRealMatrixChangingVisitor *self, PyObject *args, PyObject *kwds)
      {
        DefaultRealMatrixChangingVisitor object((jobject) NULL);

        INT_CALL(object = DefaultRealMatrixChangingVisitor());
        self->object = object;

        return 0;
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_end(t_DefaultRealMatrixChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_start(t_DefaultRealMatrixChangingVisitor *self, PyObject *args)
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

      static PyObject *t_DefaultRealMatrixChangingVisitor_visit(t_DefaultRealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GNSSPropagatorBuilder::class$ = NULL;
          jmethodID *GNSSPropagatorBuilder::mids$ = NULL;
          bool GNSSPropagatorBuilder::live$ = false;

          jclass GNSSPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e486afe640c27b3f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;)V");
              mids$[mid_init$_d621175428643f32] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;Lorg/orekit/frames/Frames;)V");
              mids$[mid_attitudeProvider_c9da922fc0601232] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_build_75cb4356e458488d] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/GNSSPropagator;");
              mids$[mid_ecef_61ac2d2d8a5b0c9c] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_eci_61ac2d2d8a5b0c9c] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");
              mids$[mid_mass_34f40b3c62a1649f] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GNSSPropagatorBuilder::GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e486afe640c27b3f, a0.this$)) {}

          GNSSPropagatorBuilder::GNSSPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements & a0, const ::org::orekit::frames::Frames & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d621175428643f32, a0.this$, a1.this$)) {}

          GNSSPropagatorBuilder GNSSPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_c9da922fc0601232], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::GNSSPropagator GNSSPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::GNSSPropagator(env->callObjectMethod(this$, mids$[mid_build_75cb4356e458488d]));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_61ac2d2d8a5b0c9c], a0.this$));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_61ac2d2d8a5b0c9c], a0.this$));
          }

          GNSSPropagatorBuilder GNSSPropagatorBuilder::mass(jdouble a0) const
          {
            return GNSSPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_34f40b3c62a1649f], a0));
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
          static PyObject *t_GNSSPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GNSSPropagatorBuilder_init_(t_GNSSPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GNSSPropagatorBuilder_attitudeProvider(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_build(t_GNSSPropagatorBuilder *self);
          static PyObject *t_GNSSPropagatorBuilder_ecef(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_eci(t_GNSSPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GNSSPropagatorBuilder_mass(t_GNSSPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_GNSSPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_GNSSPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_GNSSPropagatorBuilder, mass, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GNSSPropagatorBuilder)[] = {
            { Py_tp_methods, t_GNSSPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_GNSSPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GNSSPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GNSSPropagatorBuilder, t_GNSSPropagatorBuilder, GNSSPropagatorBuilder);

          void t_GNSSPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(GNSSPropagatorBuilder), &PY_TYPE_DEF(GNSSPropagatorBuilder), module, "GNSSPropagatorBuilder", 0);
          }

          void t_GNSSPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "class_", make_descriptor(GNSSPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "wrapfn_", make_descriptor(t_GNSSPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GNSSPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GNSSPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_GNSSPropagatorBuilder::wrap_Object(GNSSPropagatorBuilder(((t_GNSSPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_GNSSPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GNSSPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GNSSPropagatorBuilder_init_(t_GNSSPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements a0((jobject) NULL);
                GNSSPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = GNSSPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements a0((jobject) NULL);
                ::org::orekit::frames::Frames a1((jobject) NULL);
                GNSSPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GNSSPropagatorBuilder(a0, a1));
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

          static PyObject *t_GNSSPropagatorBuilder_attitudeProvider(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_build(t_GNSSPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::GNSSPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_GNSSPropagator::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagatorBuilder_ecef(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_eci(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagatorBuilder_mass(t_GNSSPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            GNSSPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_GNSSPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mass", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldPVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldPVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldPVCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldPVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_cbfa9adbb41a32ed] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_e6d8cb34a3bf8c82] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_b9dfc27d8c56b5de] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_62c7fdfb71a896b9] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_cbfa9adbb41a32ed, a0, a1.this$)) {}

      TimeStampedFieldPVCoordinatesHermiteInterpolator::TimeStampedFieldPVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_e6d8cb34a3bf8c82, a0, a1, a2.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter TimeStampedFieldPVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_b9dfc27d8c56b5de]));
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
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldPVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldPVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldPVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldPVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldPVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldPVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldPVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator, t_TimeStampedFieldPVCoordinatesHermiteInterpolator, TimeStampedFieldPVCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedFieldPVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldPVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldPVCoordinatesHermiteInterpolator), module, "TimeStampedFieldPVCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldPVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldPVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldPVCoordinatesHermiteInterpolator::wrap_Object(TimeStampedFieldPVCoordinatesHermiteInterpolator(((t_TimeStampedFieldPVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldPVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldPVCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldPVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldPVCoordinatesHermiteInterpolator(a0, a1, a2));
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

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldPVCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldPVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
