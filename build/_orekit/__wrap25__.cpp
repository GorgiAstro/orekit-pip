#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/EulerKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/EulerKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *EulerKey::class$ = NULL;
              jmethodID *EulerKey::mids$ = NULL;
              bool EulerKey::live$ = false;
              EulerKey *EulerKey::ANGLE_1 = NULL;
              EulerKey *EulerKey::ANGLE_1_DOT = NULL;
              EulerKey *EulerKey::ANGLE_2 = NULL;
              EulerKey *EulerKey::ANGLE_2_DOT = NULL;
              EulerKey *EulerKey::ANGLE_3 = NULL;
              EulerKey *EulerKey::ANGLE_3_DOT = NULL;
              EulerKey *EulerKey::COMMENT = NULL;
              EulerKey *EulerKey::EULER_DIR = NULL;
              EulerKey *EulerKey::EULER_FRAME_A = NULL;
              EulerKey *EulerKey::EULER_FRAME_B = NULL;
              EulerKey *EulerKey::EULER_ROT_SEQ = NULL;
              EulerKey *EulerKey::RATE_FRAME = NULL;
              EulerKey *EulerKey::REF_FRAME_A = NULL;
              EulerKey *EulerKey::REF_FRAME_B = NULL;
              EulerKey *EulerKey::X_ANGLE = NULL;
              EulerKey *EulerKey::X_RATE = NULL;
              EulerKey *EulerKey::Y_ANGLE = NULL;
              EulerKey *EulerKey::Y_RATE = NULL;
              EulerKey *EulerKey::Z_ANGLE = NULL;
              EulerKey *EulerKey::Z_RATE = NULL;
              EulerKey *EulerKey::rotationAngles = NULL;
              EulerKey *EulerKey::rotationRates = NULL;

              jclass EulerKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/EulerKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_edca3ce10006d9d7] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;)Z");
                  mids$[mid_valueOf_a372fd184268197f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;");
                  mids$[mid_values_636282abfaa6e72d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGLE_1 = new EulerKey(env->getStaticObjectField(cls, "ANGLE_1", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_1_DOT = new EulerKey(env->getStaticObjectField(cls, "ANGLE_1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_2 = new EulerKey(env->getStaticObjectField(cls, "ANGLE_2", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_2_DOT = new EulerKey(env->getStaticObjectField(cls, "ANGLE_2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_3 = new EulerKey(env->getStaticObjectField(cls, "ANGLE_3", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_3_DOT = new EulerKey(env->getStaticObjectField(cls, "ANGLE_3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  COMMENT = new EulerKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_DIR = new EulerKey(env->getStaticObjectField(cls, "EULER_DIR", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_FRAME_A = new EulerKey(env->getStaticObjectField(cls, "EULER_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_FRAME_B = new EulerKey(env->getStaticObjectField(cls, "EULER_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_ROT_SEQ = new EulerKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  RATE_FRAME = new EulerKey(env->getStaticObjectField(cls, "RATE_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  REF_FRAME_A = new EulerKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  REF_FRAME_B = new EulerKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  X_ANGLE = new EulerKey(env->getStaticObjectField(cls, "X_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  X_RATE = new EulerKey(env->getStaticObjectField(cls, "X_RATE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Y_ANGLE = new EulerKey(env->getStaticObjectField(cls, "Y_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Y_RATE = new EulerKey(env->getStaticObjectField(cls, "Y_RATE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Z_ANGLE = new EulerKey(env->getStaticObjectField(cls, "Z_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Z_RATE = new EulerKey(env->getStaticObjectField(cls, "Z_RATE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  rotationAngles = new EulerKey(env->getStaticObjectField(cls, "rotationAngles", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  rotationRates = new EulerKey(env->getStaticObjectField(cls, "rotationRates", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean EulerKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Euler & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_edca3ce10006d9d7], a0.this$, a1.this$, a2.this$);
              }

              EulerKey EulerKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return EulerKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a372fd184268197f], a0.this$));
              }

              JArray< EulerKey > EulerKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< EulerKey >(env->callStaticObjectMethod(cls, mids$[mid_values_636282abfaa6e72d]));
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
              static PyObject *t_EulerKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EulerKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EulerKey_of_(t_EulerKey *self, PyObject *args);
              static PyObject *t_EulerKey_process(t_EulerKey *self, PyObject *args);
              static PyObject *t_EulerKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_EulerKey_values(PyTypeObject *type);
              static PyObject *t_EulerKey_get__parameters_(t_EulerKey *self, void *data);
              static PyGetSetDef t_EulerKey__fields_[] = {
                DECLARE_GET_FIELD(t_EulerKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_EulerKey__methods_[] = {
                DECLARE_METHOD(t_EulerKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EulerKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EulerKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_EulerKey, process, METH_VARARGS),
                DECLARE_METHOD(t_EulerKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_EulerKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EulerKey)[] = {
                { Py_tp_methods, t_EulerKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_EulerKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EulerKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(EulerKey, t_EulerKey, EulerKey);
              PyObject *t_EulerKey::wrap_Object(const EulerKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_EulerKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_EulerKey *self = (t_EulerKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_EulerKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_EulerKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_EulerKey *self = (t_EulerKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_EulerKey::install(PyObject *module)
              {
                installType(&PY_TYPE(EulerKey), &PY_TYPE_DEF(EulerKey), module, "EulerKey", 0);
              }

              void t_EulerKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "class_", make_descriptor(EulerKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "wrapfn_", make_descriptor(t_EulerKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(EulerKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_1", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_1_DOT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_2", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_2_DOT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_3", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_3_DOT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "COMMENT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_DIR", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_FRAME_A", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_FRAME_B", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_ROT_SEQ", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "RATE_FRAME", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::RATE_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "REF_FRAME_A", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "REF_FRAME_B", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "X_ANGLE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::X_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "X_RATE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::X_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Y_ANGLE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Y_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Y_RATE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Y_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Z_ANGLE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Z_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Z_RATE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Z_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "rotationAngles", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::rotationAngles)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "rotationRates", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::rotationRates)));
              }

              static PyObject *t_EulerKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EulerKey::initializeClass, 1)))
                  return NULL;
                return t_EulerKey::wrap_Object(EulerKey(((t_EulerKey *) arg)->object.this$));
              }
              static PyObject *t_EulerKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EulerKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_EulerKey_of_(t_EulerKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_EulerKey_process(t_EulerKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Euler::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_EulerKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                EulerKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::EulerKey::valueOf(a0));
                  return t_EulerKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_EulerKey_values(PyTypeObject *type)
              {
                JArray< EulerKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::EulerKey::values());
                return JArray<jobject>(result.this$).wrap(t_EulerKey::wrap_jobject);
              }
              static PyObject *t_EulerKey_get__parameters_(t_EulerKey *self, void *data)
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
#include "org/orekit/gnss/rflink/gps/SubFrame.h"
#include "org/orekit/gnss/rflink/gps/SubFrame.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame::class$ = NULL;
          jmethodID *SubFrame::mids$ = NULL;
          bool SubFrame::live$ = false;
          jint SubFrame::PREAMBLE_VALUE = (jint) 0;

          jclass SubFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkParity_1e0f61f59fdd7111] = env->getStaticMethodID(cls, "checkParity", "(II)Z");
              mids$[mid_getAlert_412668abc8d889e9] = env->getMethodID(cls, "getAlert", "()I");
              mids$[mid_getAntiSpoofing_412668abc8d889e9] = env->getMethodID(cls, "getAntiSpoofing", "()I");
              mids$[mid_getId_412668abc8d889e9] = env->getMethodID(cls, "getId", "()I");
              mids$[mid_getIntegrityStatus_412668abc8d889e9] = env->getMethodID(cls, "getIntegrityStatus", "()I");
              mids$[mid_getMessage_412668abc8d889e9] = env->getMethodID(cls, "getMessage", "()I");
              mids$[mid_getPreamble_412668abc8d889e9] = env->getMethodID(cls, "getPreamble", "()I");
              mids$[mid_getTow_412668abc8d889e9] = env->getMethodID(cls, "getTow", "()I");
              mids$[mid_hasParityErrors_89b302893bdbe1f1] = env->getMethodID(cls, "hasParityErrors", "()Z");
              mids$[mid_parse_80def97abbda8bbb] = env->getStaticMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Lorg/orekit/gnss/rflink/gps/SubFrame;");
              mids$[mid_setField_95509ae0fa83b970] = env->getMethodID(cls, "setField", "(IIII[I)V");
              mids$[mid_setField_a9571382e1de1e93] = env->getMethodID(cls, "setField", "(IIIIIII[I)V");
              mids$[mid_getField_0092017e99012694] = env->getMethodID(cls, "getField", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              PREAMBLE_VALUE = env->getStaticIntField(cls, "PREAMBLE_VALUE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean SubFrame::checkParity(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_checkParity_1e0f61f59fdd7111], a0, a1);
          }

          jint SubFrame::getAlert() const
          {
            return env->callIntMethod(this$, mids$[mid_getAlert_412668abc8d889e9]);
          }

          jint SubFrame::getAntiSpoofing() const
          {
            return env->callIntMethod(this$, mids$[mid_getAntiSpoofing_412668abc8d889e9]);
          }

          jint SubFrame::getId() const
          {
            return env->callIntMethod(this$, mids$[mid_getId_412668abc8d889e9]);
          }

          jint SubFrame::getIntegrityStatus() const
          {
            return env->callIntMethod(this$, mids$[mid_getIntegrityStatus_412668abc8d889e9]);
          }

          jint SubFrame::getMessage() const
          {
            return env->callIntMethod(this$, mids$[mid_getMessage_412668abc8d889e9]);
          }

          jint SubFrame::getPreamble() const
          {
            return env->callIntMethod(this$, mids$[mid_getPreamble_412668abc8d889e9]);
          }

          jint SubFrame::getTow() const
          {
            return env->callIntMethod(this$, mids$[mid_getTow_412668abc8d889e9]);
          }

          jboolean SubFrame::hasParityErrors() const
          {
            return env->callBooleanMethod(this$, mids$[mid_hasParityErrors_89b302893bdbe1f1]);
          }

          SubFrame SubFrame::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SubFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_80def97abbda8bbb], a0.this$));
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
          static PyObject *t_SubFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_checkParity(PyTypeObject *type, PyObject *args);
          static PyObject *t_SubFrame_getAlert(t_SubFrame *self);
          static PyObject *t_SubFrame_getAntiSpoofing(t_SubFrame *self);
          static PyObject *t_SubFrame_getId(t_SubFrame *self);
          static PyObject *t_SubFrame_getIntegrityStatus(t_SubFrame *self);
          static PyObject *t_SubFrame_getMessage(t_SubFrame *self);
          static PyObject *t_SubFrame_getPreamble(t_SubFrame *self);
          static PyObject *t_SubFrame_getTow(t_SubFrame *self);
          static PyObject *t_SubFrame_hasParityErrors(t_SubFrame *self);
          static PyObject *t_SubFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_get__alert(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__antiSpoofing(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__id(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__integrityStatus(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__message(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__preamble(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__tow(t_SubFrame *self, void *data);
          static PyGetSetDef t_SubFrame__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame, alert),
            DECLARE_GET_FIELD(t_SubFrame, antiSpoofing),
            DECLARE_GET_FIELD(t_SubFrame, id),
            DECLARE_GET_FIELD(t_SubFrame, integrityStatus),
            DECLARE_GET_FIELD(t_SubFrame, message),
            DECLARE_GET_FIELD(t_SubFrame, preamble),
            DECLARE_GET_FIELD(t_SubFrame, tow),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame__methods_[] = {
            DECLARE_METHOD(t_SubFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, checkParity, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, getAlert, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getAntiSpoofing, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getId, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getIntegrityStatus, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getMessage, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getPreamble, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getTow, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, hasParityErrors, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame)[] = {
            { Py_tp_methods, t_SubFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SubFrame, t_SubFrame, SubFrame);

          void t_SubFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame), &PY_TYPE_DEF(SubFrame), module, "SubFrame", 0);
          }

          void t_SubFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "class_", make_descriptor(SubFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "wrapfn_", make_descriptor(t_SubFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "PREAMBLE_VALUE", make_descriptor(SubFrame::PREAMBLE_VALUE));
          }

          static PyObject *t_SubFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame::initializeClass, 1)))
              return NULL;
            return t_SubFrame::wrap_Object(SubFrame(((t_SubFrame *) arg)->object.this$));
          }
          static PyObject *t_SubFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame_checkParity(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            jboolean result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::gnss::rflink::gps::SubFrame::checkParity(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "checkParity", args);
            return NULL;
          }

          static PyObject *t_SubFrame_getAlert(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAlert());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getAntiSpoofing(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAntiSpoofing());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getId(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getIntegrityStatus(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIntegrityStatus());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getMessage(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMessage());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getPreamble(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPreamble());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getTow(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTow());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_hasParityErrors(t_SubFrame *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.hasParityErrors());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_SubFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            SubFrame result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::rflink::gps::SubFrame::parse(a0));
              return t_SubFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_SubFrame_get__alert(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAlert());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__antiSpoofing(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAntiSpoofing());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__id(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getId());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__integrityStatus(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIntegrityStatus());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__message(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMessage());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__preamble(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPreamble());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__tow(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTow());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/ExponentialDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ExponentialDistribution::class$ = NULL;
        jmethodID *ExponentialDistribution::mids$ = NULL;
        bool ExponentialDistribution::live$ = false;

        jclass ExponentialDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ExponentialDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMean_557b8123390d8d0c] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_7e960cd6eee376d8] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExponentialDistribution::ExponentialDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        jdouble ExponentialDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble ExponentialDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble ExponentialDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_557b8123390d8d0c]);
        }

        jdouble ExponentialDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble ExponentialDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble ExponentialDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble ExponentialDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jdouble ExponentialDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jboolean ExponentialDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble ExponentialDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_7e960cd6eee376d8], a0);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_ExponentialDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExponentialDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ExponentialDistribution_init_(t_ExponentialDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExponentialDistribution_cumulativeProbability(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_density(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getMean(t_ExponentialDistribution *self);
        static PyObject *t_ExponentialDistribution_getNumericalMean(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getNumericalVariance(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getSupportLowerBound(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getSupportUpperBound(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_inverseCumulativeProbability(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_isSupportConnected(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_logDensity(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_get__mean(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__numericalMean(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__numericalVariance(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportConnected(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportLowerBound(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportUpperBound(t_ExponentialDistribution *self, void *data);
        static PyGetSetDef t_ExponentialDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ExponentialDistribution, mean),
          DECLARE_GET_FIELD(t_ExponentialDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ExponentialDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ExponentialDistribution__methods_[] = {
          DECLARE_METHOD(t_ExponentialDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExponentialDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExponentialDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExponentialDistribution)[] = {
          { Py_tp_methods, t_ExponentialDistribution__methods_ },
          { Py_tp_init, (void *) t_ExponentialDistribution_init_ },
          { Py_tp_getset, t_ExponentialDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExponentialDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ExponentialDistribution, t_ExponentialDistribution, ExponentialDistribution);

        void t_ExponentialDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ExponentialDistribution), &PY_TYPE_DEF(ExponentialDistribution), module, "ExponentialDistribution", 0);
        }

        void t_ExponentialDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "class_", make_descriptor(ExponentialDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "wrapfn_", make_descriptor(t_ExponentialDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExponentialDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExponentialDistribution::initializeClass, 1)))
            return NULL;
          return t_ExponentialDistribution::wrap_Object(ExponentialDistribution(((t_ExponentialDistribution *) arg)->object.this$));
        }
        static PyObject *t_ExponentialDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExponentialDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ExponentialDistribution_init_(t_ExponentialDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ExponentialDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ExponentialDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExponentialDistribution_cumulativeProbability(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ExponentialDistribution_density(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getMean(t_ExponentialDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ExponentialDistribution_getNumericalMean(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getNumericalVariance(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getSupportLowerBound(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getSupportUpperBound(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ExponentialDistribution_inverseCumulativeProbability(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_ExponentialDistribution_isSupportConnected(t_ExponentialDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ExponentialDistribution_logDensity(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ExponentialDistribution_get__mean(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__numericalMean(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__numericalVariance(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__supportConnected(t_ExponentialDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ExponentialDistribution_get__supportLowerBound(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__supportUpperBound(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/ObjectiveFunction.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *ObjectiveFunction::class$ = NULL;
          jmethodID *ObjectiveFunction::mids$ = NULL;
          bool ObjectiveFunction::live$ = false;

          jclass ObjectiveFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/ObjectiveFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_340593e5d648b757] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;)V");
              mids$[mid_getObjectiveFunction_9677e7d77366ec50] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateFunction;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObjectiveFunction::ObjectiveFunction(const ::org::hipparchus::analysis::MultivariateFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_340593e5d648b757, a0.this$)) {}

          ::org::hipparchus::analysis::MultivariateFunction ObjectiveFunction::getObjectiveFunction() const
          {
            return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunction_9677e7d77366ec50]));
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
          static PyObject *t_ObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObjectiveFunction_init_(t_ObjectiveFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObjectiveFunction_getObjectiveFunction(t_ObjectiveFunction *self);
          static PyObject *t_ObjectiveFunction_get__objectiveFunction(t_ObjectiveFunction *self, void *data);
          static PyGetSetDef t_ObjectiveFunction__fields_[] = {
            DECLARE_GET_FIELD(t_ObjectiveFunction, objectiveFunction),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObjectiveFunction__methods_[] = {
            DECLARE_METHOD(t_ObjectiveFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunction, getObjectiveFunction, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObjectiveFunction)[] = {
            { Py_tp_methods, t_ObjectiveFunction__methods_ },
            { Py_tp_init, (void *) t_ObjectiveFunction_init_ },
            { Py_tp_getset, t_ObjectiveFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObjectiveFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObjectiveFunction, t_ObjectiveFunction, ObjectiveFunction);

          void t_ObjectiveFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(ObjectiveFunction), &PY_TYPE_DEF(ObjectiveFunction), module, "ObjectiveFunction", 0);
          }

          void t_ObjectiveFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunction), "class_", make_descriptor(ObjectiveFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunction), "wrapfn_", make_descriptor(t_ObjectiveFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObjectiveFunction::initializeClass, 1)))
              return NULL;
            return t_ObjectiveFunction::wrap_Object(ObjectiveFunction(((t_ObjectiveFunction *) arg)->object.this$));
          }
          static PyObject *t_ObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObjectiveFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObjectiveFunction_init_(t_ObjectiveFunction *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            ObjectiveFunction object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, &a0))
            {
              INT_CALL(object = ObjectiveFunction(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObjectiveFunction_getObjectiveFunction(t_ObjectiveFunction *self)
          {
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getObjectiveFunction());
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
          }

          static PyObject *t_ObjectiveFunction_get__objectiveFunction(t_ObjectiveFunction *self, void *data)
          {
            ::org::hipparchus::analysis::MultivariateFunction value((jobject) NULL);
            OBJ_CALL(value = self->object.getObjectiveFunction());
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$MeteorologicalMeasurement::class$ = NULL;
        jmethodID *CRD$MeteorologicalMeasurement::mids$ = NULL;
        bool CRD$MeteorologicalMeasurement::live$ = false;

        jclass CRD$MeteorologicalMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$MeteorologicalMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8509f4f9f0fe609c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDD)V");
            mids$[mid_init$_6c8b9bcd18b0a073] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDI)V");
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getHumidity_557b8123390d8d0c] = env->getMethodID(cls, "getHumidity", "()D");
            mids$[mid_getOriginOfValues_412668abc8d889e9] = env->getMethodID(cls, "getOriginOfValues", "()I");
            mids$[mid_getPressure_557b8123390d8d0c] = env->getMethodID(cls, "getPressure", "()D");
            mids$[mid_getTemperature_557b8123390d8d0c] = env->getMethodID(cls, "getTemperature", "()D");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$MeteorologicalMeasurement::CRD$MeteorologicalMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8509f4f9f0fe609c, a0.this$, a1, a2, a3)) {}

        CRD$MeteorologicalMeasurement::CRD$MeteorologicalMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6c8b9bcd18b0a073, a0.this$, a1, a2, a3, a4)) {}

        ::org::orekit::time::AbsoluteDate CRD$MeteorologicalMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
        }

        jdouble CRD$MeteorologicalMeasurement::getHumidity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHumidity_557b8123390d8d0c]);
        }

        jint CRD$MeteorologicalMeasurement::getOriginOfValues() const
        {
          return env->callIntMethod(this$, mids$[mid_getOriginOfValues_412668abc8d889e9]);
        }

        jdouble CRD$MeteorologicalMeasurement::getPressure() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPressure_557b8123390d8d0c]);
        }

        jdouble CRD$MeteorologicalMeasurement::getTemperature() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTemperature_557b8123390d8d0c]);
        }

        ::java::lang::String CRD$MeteorologicalMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRD$MeteorologicalMeasurement::toString() const
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
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRD$MeteorologicalMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$MeteorologicalMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$MeteorologicalMeasurement_init_(t_CRD$MeteorologicalMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$MeteorologicalMeasurement_getDate(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getHumidity(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getOriginOfValues(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getPressure(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getTemperature(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_toCrdString(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_toString(t_CRD$MeteorologicalMeasurement *self, PyObject *args);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__date(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__humidity(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__originOfValues(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__pressure(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__temperature(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyGetSetDef t_CRD$MeteorologicalMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, humidity),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, originOfValues),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, pressure),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, temperature),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$MeteorologicalMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getHumidity, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getOriginOfValues, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getPressure, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getTemperature, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$MeteorologicalMeasurement)[] = {
          { Py_tp_methods, t_CRD$MeteorologicalMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$MeteorologicalMeasurement_init_ },
          { Py_tp_getset, t_CRD$MeteorologicalMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$MeteorologicalMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$MeteorologicalMeasurement, t_CRD$MeteorologicalMeasurement, CRD$MeteorologicalMeasurement);

        void t_CRD$MeteorologicalMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$MeteorologicalMeasurement), &PY_TYPE_DEF(CRD$MeteorologicalMeasurement), module, "CRD$MeteorologicalMeasurement", 0);
        }

        void t_CRD$MeteorologicalMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "class_", make_descriptor(CRD$MeteorologicalMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "wrapfn_", make_descriptor(t_CRD$MeteorologicalMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$MeteorologicalMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$MeteorologicalMeasurement::wrap_Object(CRD$MeteorologicalMeasurement(((t_CRD$MeteorologicalMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$MeteorologicalMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$MeteorologicalMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$MeteorologicalMeasurement_init_(t_CRD$MeteorologicalMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              CRD$MeteorologicalMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CRD$MeteorologicalMeasurement(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              CRD$MeteorologicalMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDDDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$MeteorologicalMeasurement(a0, a1, a2, a3, a4));
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

        static PyObject *t_CRD$MeteorologicalMeasurement_getDate(t_CRD$MeteorologicalMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getHumidity(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHumidity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getOriginOfValues(t_CRD$MeteorologicalMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOriginOfValues());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getPressure(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPressure());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getTemperature(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTemperature());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_toCrdString(t_CRD$MeteorologicalMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_toString(t_CRD$MeteorologicalMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$MeteorologicalMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__date(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__humidity(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHumidity());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__originOfValues(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOriginOfValues());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__pressure(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPressure());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__temperature(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTemperature());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/OrphanFrame.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/OrphanFrame.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *OrphanFrame::class$ = NULL;
      jmethodID *OrphanFrame::mids$ = NULL;
      bool OrphanFrame::live$ = false;

      jclass OrphanFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/OrphanFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_addChild_d14538095eb65eb2] = env->getMethodID(cls, "addChild", "(Lorg/orekit/frames/OrphanFrame;Lorg/orekit/frames/Transform;Z)V");
          mids$[mid_addChild_fe4747d99aba0941] = env->getMethodID(cls, "addChild", "(Lorg/orekit/frames/OrphanFrame;Lorg/orekit/frames/TransformProvider;Z)V");
          mids$[mid_attachTo_aa22850365ea11c9] = env->getMethodID(cls, "attachTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Z)V");
          mids$[mid_attachTo_d01074a86371b1f2] = env->getMethodID(cls, "attachTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Z)V");
          mids$[mid_getChildren_0d9551367f7ecdef] = env->getMethodID(cls, "getChildren", "()Ljava/util/List;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrphanFrame::OrphanFrame(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

      void OrphanFrame::addChild(const OrphanFrame & a0, const ::org::orekit::frames::Transform & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addChild_d14538095eb65eb2], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::addChild(const OrphanFrame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addChild_fe4747d99aba0941], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::attachTo(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_attachTo_aa22850365ea11c9], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::attachTo(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_attachTo_d01074a86371b1f2], a0.this$, a1.this$, a2);
      }

      ::java::util::List OrphanFrame::getChildren() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getChildren_0d9551367f7ecdef]));
      }

      ::org::orekit::frames::Frame OrphanFrame::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::java::lang::String OrphanFrame::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_OrphanFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrphanFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrphanFrame_init_(t_OrphanFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrphanFrame_addChild(t_OrphanFrame *self, PyObject *args);
      static PyObject *t_OrphanFrame_attachTo(t_OrphanFrame *self, PyObject *args);
      static PyObject *t_OrphanFrame_getChildren(t_OrphanFrame *self);
      static PyObject *t_OrphanFrame_getFrame(t_OrphanFrame *self);
      static PyObject *t_OrphanFrame_toString(t_OrphanFrame *self, PyObject *args);
      static PyObject *t_OrphanFrame_get__children(t_OrphanFrame *self, void *data);
      static PyObject *t_OrphanFrame_get__frame(t_OrphanFrame *self, void *data);
      static PyGetSetDef t_OrphanFrame__fields_[] = {
        DECLARE_GET_FIELD(t_OrphanFrame, children),
        DECLARE_GET_FIELD(t_OrphanFrame, frame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrphanFrame__methods_[] = {
        DECLARE_METHOD(t_OrphanFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrphanFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrphanFrame, addChild, METH_VARARGS),
        DECLARE_METHOD(t_OrphanFrame, attachTo, METH_VARARGS),
        DECLARE_METHOD(t_OrphanFrame, getChildren, METH_NOARGS),
        DECLARE_METHOD(t_OrphanFrame, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_OrphanFrame, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrphanFrame)[] = {
        { Py_tp_methods, t_OrphanFrame__methods_ },
        { Py_tp_init, (void *) t_OrphanFrame_init_ },
        { Py_tp_getset, t_OrphanFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrphanFrame)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OrphanFrame, t_OrphanFrame, OrphanFrame);

      void t_OrphanFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(OrphanFrame), &PY_TYPE_DEF(OrphanFrame), module, "OrphanFrame", 0);
      }

      void t_OrphanFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrphanFrame), "class_", make_descriptor(OrphanFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrphanFrame), "wrapfn_", make_descriptor(t_OrphanFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrphanFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrphanFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrphanFrame::initializeClass, 1)))
          return NULL;
        return t_OrphanFrame::wrap_Object(OrphanFrame(((t_OrphanFrame *) arg)->object.this$));
      }
      static PyObject *t_OrphanFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrphanFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrphanFrame_init_(t_OrphanFrame *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        OrphanFrame object((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          INT_CALL(object = OrphanFrame(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrphanFrame_addChild(t_OrphanFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            OrphanFrame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            jboolean a2;

            if (!parseArgs(args, "kkZ", OrphanFrame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addChild(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            OrphanFrame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            jboolean a2;

            if (!parseArgs(args, "kkZ", OrphanFrame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addChild(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "addChild", args);
        return NULL;
      }

      static PyObject *t_OrphanFrame_attachTo(t_OrphanFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            jboolean a2;

            if (!parseArgs(args, "kkZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.attachTo(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            jboolean a2;

            if (!parseArgs(args, "kkZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.attachTo(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "attachTo", args);
        return NULL;
      }

      static PyObject *t_OrphanFrame_getChildren(t_OrphanFrame *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getChildren());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::frames::PY_TYPE(OrphanFrame));
      }

      static PyObject *t_OrphanFrame_getFrame(t_OrphanFrame *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_OrphanFrame_toString(t_OrphanFrame *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrphanFrame), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_OrphanFrame_get__children(t_OrphanFrame *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getChildren());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_OrphanFrame_get__frame(t_OrphanFrame *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/lang/CharSequence.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *Generator::class$ = NULL;
            jmethodID *Generator::mids$ = NULL;
            bool Generator::live$ = false;

            jclass Generator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/Generator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
                mids$[mid_dateToCalendarString_53bb79ba03b156ff] = env->getMethodID(cls, "dateToCalendarString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_53bb79ba03b156ff] = env->getMethodID(cls, "dateToString", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
                mids$[mid_dateToString_26917e8002e2fe0e] = env->getMethodID(cls, "dateToString", "(IIIIID)Ljava/lang/String;");
                mids$[mid_doubleToString_c03a7791f2fcb1f1] = env->getMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
                mids$[mid_endMessage_f5ffdf29129ef90a] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_f5ffdf29129ef90a] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_3cffd47377eca18a] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_c3a4c5f37e67a25e] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getOutputName_3cffd47377eca18a] = env->getMethodID(cls, "getOutputName", "()Ljava/lang/String;");
                mids$[mid_newLine_0640e6acf969ed28] = env->getMethodID(cls, "newLine", "()V");
                mids$[mid_siToCcsdsName_60bb1b490b673cbf] = env->getMethodID(cls, "siToCcsdsName", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_startMessage_9547058464ed819e] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_unitsListToString_efa2aa6df7244612] = env->getMethodID(cls, "unitsListToString", "(Ljava/util/List;)Ljava/lang/String;");
                mids$[mid_writeComments_4ccaedadb068bdeb] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_a576ec9025591acc] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Enum;Z)V");
                mids$[mid_writeEntry_93ab992976af83e7] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;CZ)V");
                mids$[mid_writeEntry_011f5c0c4346496d] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;IZ)V");
                mids$[mid_writeEntry_134df300ac33b05f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/util/List;Z)V");
                mids$[mid_writeEntry_23e19e02040a2cc2] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/Double;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_a717407bcf2f477f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_8e286bd988c33b7f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;DLorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeEntry_f678851e8742cc77] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/time/AbsoluteDate;ZZ)V");
                mids$[mid_writeRawData_102587d250c3217b] = env->getMethodID(cls, "writeRawData", "(C)V");
                mids$[mid_writeRawData_01ce980d49cb2b81] = env->getMethodID(cls, "writeRawData", "(Ljava/lang/CharSequence;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void Generator::close() const
            {
              env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
            }

            ::java::lang::String Generator::dateToCalendarString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToCalendarString_53bb79ba03b156ff], a0.this$, a1.this$));
            }

            ::java::lang::String Generator::dateToString(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_53bb79ba03b156ff], a0.this$, a1.this$));
            }

            ::java::lang::String Generator::dateToString(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_dateToString_26917e8002e2fe0e], a0, a1, a2, a3, a4, a5));
            }

            ::java::lang::String Generator::doubleToString(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_doubleToString_c03a7791f2fcb1f1], a0));
            }

            void Generator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_f5ffdf29129ef90a], a0.this$);
            }

            void Generator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_f5ffdf29129ef90a], a0.this$);
            }

            ::java::lang::String Generator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_3cffd47377eca18a]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat Generator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_c3a4c5f37e67a25e]));
            }

            ::java::lang::String Generator::getOutputName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputName_3cffd47377eca18a]));
            }

            void Generator::newLine() const
            {
              env->callVoidMethod(this$, mids$[mid_newLine_0640e6acf969ed28]);
            }

            ::java::lang::String Generator::siToCcsdsName(const ::java::lang::String & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_siToCcsdsName_60bb1b490b673cbf], a0.this$));
            }

            void Generator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_9547058464ed819e], a0.this$, a1.this$, a2);
            }

            ::java::lang::String Generator::unitsListToString(const ::java::util::List & a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_unitsListToString_efa2aa6df7244612], a0.this$));
            }

            void Generator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_4ccaedadb068bdeb], a0.this$);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Enum & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_a576ec9025591acc], a0.this$, a1.this$, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jchar a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_93ab992976af83e7], a0.this$, a1, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jint a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_011f5c0c4346496d], a0.this$, a1, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::util::List & a1, jboolean a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_134df300ac33b05f], a0.this$, a1.this$, a2);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::Double & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_23e19e02040a2cc2], a0.this$, a1.this$, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_a717407bcf2f477f], a0.this$, a1.this$, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_8e286bd988c33b7f], a0.this$, a1, a2.this$, a3);
            }

            void Generator::writeEntry(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1, const ::org::orekit::time::AbsoluteDate & a2, jboolean a3, jboolean a4) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_f678851e8742cc77], a0.this$, a1.this$, a2.this$, a3, a4);
            }

            void Generator::writeRawData(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_102587d250c3217b], a0);
            }

            void Generator::writeRawData(const ::java::lang::CharSequence & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRawData_01ce980d49cb2b81], a0.this$);
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
            static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Generator_close(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_dateToCalendarString(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_dateToString(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_doubleToString(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_endMessage(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_enterSection(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_exitSection(t_Generator *self);
            static PyObject *t_Generator_getFormat(t_Generator *self);
            static PyObject *t_Generator_getOutputName(t_Generator *self);
            static PyObject *t_Generator_newLine(t_Generator *self);
            static PyObject *t_Generator_siToCcsdsName(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_startMessage(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_unitsListToString(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_writeComments(t_Generator *self, PyObject *arg);
            static PyObject *t_Generator_writeEntry(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_writeRawData(t_Generator *self, PyObject *args);
            static PyObject *t_Generator_get__format(t_Generator *self, void *data);
            static PyObject *t_Generator_get__outputName(t_Generator *self, void *data);
            static PyGetSetDef t_Generator__fields_[] = {
              DECLARE_GET_FIELD(t_Generator, format),
              DECLARE_GET_FIELD(t_Generator, outputName),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Generator__methods_[] = {
              DECLARE_METHOD(t_Generator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Generator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Generator, close, METH_VARARGS),
              DECLARE_METHOD(t_Generator, dateToCalendarString, METH_VARARGS),
              DECLARE_METHOD(t_Generator, dateToString, METH_VARARGS),
              DECLARE_METHOD(t_Generator, doubleToString, METH_O),
              DECLARE_METHOD(t_Generator, endMessage, METH_O),
              DECLARE_METHOD(t_Generator, enterSection, METH_O),
              DECLARE_METHOD(t_Generator, exitSection, METH_NOARGS),
              DECLARE_METHOD(t_Generator, getFormat, METH_NOARGS),
              DECLARE_METHOD(t_Generator, getOutputName, METH_NOARGS),
              DECLARE_METHOD(t_Generator, newLine, METH_NOARGS),
              DECLARE_METHOD(t_Generator, siToCcsdsName, METH_O),
              DECLARE_METHOD(t_Generator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_Generator, unitsListToString, METH_O),
              DECLARE_METHOD(t_Generator, writeComments, METH_O),
              DECLARE_METHOD(t_Generator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_Generator, writeRawData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Generator)[] = {
              { Py_tp_methods, t_Generator__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_Generator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Generator)[] = {
              &PY_TYPE_DEF(::java::lang::AutoCloseable),
              NULL
            };

            DEFINE_TYPE(Generator, t_Generator, Generator);

            void t_Generator::install(PyObject *module)
            {
              installType(&PY_TYPE(Generator), &PY_TYPE_DEF(Generator), module, "Generator", 0);
            }

            void t_Generator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "class_", make_descriptor(Generator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "wrapfn_", make_descriptor(t_Generator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Generator::initializeClass, 1)))
                return NULL;
              return t_Generator::wrap_Object(Generator(((t_Generator *) arg)->object.this$));
            }
            static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Generator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Generator_close(t_Generator *self, PyObject *args)
            {

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(Generator), (PyObject *) self, "close", args, 2);
            }

            static PyObject *t_Generator_dateToCalendarString(t_Generator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.dateToCalendarString(a0, a1));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "dateToCalendarString", args);
              return NULL;
            }

            static PyObject *t_Generator_dateToString(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1));
                    return j2p(result);
                  }
                }
                break;
               case 6:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  ::java::lang::String result((jobject) NULL);

                  if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.dateToString(a0, a1, a2, a3, a4, a5));
                    return j2p(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "dateToString", args);
              return NULL;
            }

            static PyObject *t_Generator_doubleToString(t_Generator *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.doubleToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "doubleToString", arg);
              return NULL;
            }

            static PyObject *t_Generator_endMessage(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "endMessage", arg);
              return NULL;
            }

            static PyObject *t_Generator_enterSection(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
              return NULL;
            }

            static PyObject *t_Generator_exitSection(t_Generator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.exitSection());
              return j2p(result);
            }

            static PyObject *t_Generator_getFormat(t_Generator *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_Generator_getOutputName(t_Generator *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOutputName());
              return j2p(result);
            }

            static PyObject *t_Generator_newLine(t_Generator *self)
            {
              OBJ_CALL(self->object.newLine());
              Py_RETURN_NONE;
            }

            static PyObject *t_Generator_siToCcsdsName(t_Generator *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = self->object.siToCcsdsName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "siToCcsdsName", arg);
              return NULL;
            }

            static PyObject *t_Generator_startMessage(t_Generator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "startMessage", args);
              return NULL;
            }

            static PyObject *t_Generator_unitsListToString(t_Generator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.unitsListToString(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "unitsListToString", arg);
              return NULL;
            }

            static PyObject *t_Generator_writeComments(t_Generator *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeComments", arg);
              return NULL;
            }

            static PyObject *t_Generator_writeEntry(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Enum a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jchar a1;
                  jboolean a2;

                  if (!parseArgs(args, "sCZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jint a1;
                  jboolean a2;

                  if (!parseArgs(args, "sIZ", &a0, &a1, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::util::List a1((jobject) NULL);
                  PyTypeObject **p1;
                  jboolean a2;

                  if (!parseArgs(args, "sKZ", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::Double a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sOkZ", ::java::lang::PY_TYPE(Double), ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::String a1((jobject) NULL);
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sskZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::utils::units::Unit a2((jobject) NULL);
                  jboolean a3;

                  if (!parseArgs(args, "sDkZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 5:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                  jboolean a3;
                  jboolean a4;

                  if (!parseArgs(args, "skkZZ", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3, a4));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeEntry", args);
              return NULL;
            }

            static PyObject *t_Generator_writeRawData(t_Generator *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jchar a0;

                  if (!parseArgs(args, "C", &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
                {
                  ::java::lang::CharSequence a0((jobject) NULL);

                  if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
                  {
                    OBJ_CALL(self->object.writeRawData(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "writeRawData", args);
              return NULL;
            }

            static PyObject *t_Generator_get__format(t_Generator *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_Generator_get__outputName(t_Generator *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOutputName());
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
#include "org/orekit/estimation/measurements/gnss/SimpleRatioAmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *SimpleRatioAmbiguityAcceptance::class$ = NULL;
          jmethodID *SimpleRatioAmbiguityAcceptance::mids$ = NULL;
          bool SimpleRatioAmbiguityAcceptance::live$ = false;

          jclass SimpleRatioAmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/SimpleRatioAmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_accept_21ad48006d2406de] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_numberOfCandidates_412668abc8d889e9] = env->getMethodID(cls, "numberOfCandidates", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SimpleRatioAmbiguityAcceptance::SimpleRatioAmbiguityAcceptance(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution SimpleRatioAmbiguityAcceptance::accept(const JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution(env->callObjectMethod(this$, mids$[mid_accept_21ad48006d2406de], a0.this$));
          }

          jint SimpleRatioAmbiguityAcceptance::numberOfCandidates() const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfCandidates_412668abc8d889e9]);
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
          static PyObject *t_SimpleRatioAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SimpleRatioAmbiguityAcceptance_init_(t_SimpleRatioAmbiguityAcceptance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_accept(t_SimpleRatioAmbiguityAcceptance *self, PyObject *arg);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_numberOfCandidates(t_SimpleRatioAmbiguityAcceptance *self);

          static PyMethodDef t_SimpleRatioAmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, accept, METH_O),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, numberOfCandidates, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SimpleRatioAmbiguityAcceptance)[] = {
            { Py_tp_methods, t_SimpleRatioAmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) t_SimpleRatioAmbiguityAcceptance_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SimpleRatioAmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SimpleRatioAmbiguityAcceptance, t_SimpleRatioAmbiguityAcceptance, SimpleRatioAmbiguityAcceptance);

          void t_SimpleRatioAmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(SimpleRatioAmbiguityAcceptance), &PY_TYPE_DEF(SimpleRatioAmbiguityAcceptance), module, "SimpleRatioAmbiguityAcceptance", 0);
          }

          void t_SimpleRatioAmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "class_", make_descriptor(SimpleRatioAmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "wrapfn_", make_descriptor(t_SimpleRatioAmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SimpleRatioAmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_SimpleRatioAmbiguityAcceptance::wrap_Object(SimpleRatioAmbiguityAcceptance(((t_SimpleRatioAmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_SimpleRatioAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SimpleRatioAmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SimpleRatioAmbiguityAcceptance_init_(t_SimpleRatioAmbiguityAcceptance *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            SimpleRatioAmbiguityAcceptance object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = SimpleRatioAmbiguityAcceptance(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_accept(t_SimpleRatioAmbiguityAcceptance *self, PyObject *arg)
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

          static PyObject *t_SimpleRatioAmbiguityAcceptance_numberOfCandidates(t_SimpleRatioAmbiguityAcceptance *self)
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
#include "org/hipparchus/linear/EigenDecompositionNonSymmetric.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *EigenDecompositionNonSymmetric::class$ = NULL;
      jmethodID *EigenDecompositionNonSymmetric::mids$ = NULL;
      bool EigenDecompositionNonSymmetric::live$ = false;
      jdouble EigenDecompositionNonSymmetric::DEFAULT_EPSILON = (jdouble) 0;

      jclass EigenDecompositionNonSymmetric::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/EigenDecompositionNonSymmetric");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_08eaf415db10314f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getD_70a207fcbc031df2] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getDeterminant_921a2f30ecc499e5] = env->getMethodID(cls, "getDeterminant", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvalue_49c3af23f72848c1] = env->getMethodID(cls, "getEigenvalue", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvalues_cdf70bdb2a575f18] = env->getMethodID(cls, "getEigenvalues", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvector_6f1c886add96d5a0] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getEpsilon_557b8123390d8d0c] = env->getMethodID(cls, "getEpsilon", "()D");
          mids$[mid_getV_70a207fcbc031df2] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVInv_70a207fcbc031df2] = env->getMethodID(cls, "getVInv", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EigenDecompositionNonSymmetric::EigenDecompositionNonSymmetric(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

      EigenDecompositionNonSymmetric::EigenDecompositionNonSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08eaf415db10314f, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getD() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getD_70a207fcbc031df2]));
      }

      ::org::hipparchus::complex::Complex EigenDecompositionNonSymmetric::getDeterminant() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getDeterminant_921a2f30ecc499e5]));
      }

      ::org::hipparchus::complex::Complex EigenDecompositionNonSymmetric::getEigenvalue(jint a0) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getEigenvalue_49c3af23f72848c1], a0));
      }

      JArray< ::org::hipparchus::complex::Complex > EigenDecompositionNonSymmetric::getEigenvalues() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_cdf70bdb2a575f18]));
      }

      ::org::hipparchus::linear::FieldVector EigenDecompositionNonSymmetric::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_6f1c886add96d5a0], a0));
      }

      jdouble EigenDecompositionNonSymmetric::getEpsilon() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEpsilon_557b8123390d8d0c]);
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionNonSymmetric::getVInv() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVInv_70a207fcbc031df2]));
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
      static PyObject *t_EigenDecompositionNonSymmetric_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EigenDecompositionNonSymmetric_init_(t_EigenDecompositionNonSymmetric *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EigenDecompositionNonSymmetric_getD(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getDeterminant(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalue(t_EigenDecompositionNonSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalues(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvector(t_EigenDecompositionNonSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionNonSymmetric_getEpsilon(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getV(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_getVInv(t_EigenDecompositionNonSymmetric *self);
      static PyObject *t_EigenDecompositionNonSymmetric_get__d(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__determinant(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__eigenvalues(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__epsilon(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__v(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionNonSymmetric_get__vInv(t_EigenDecompositionNonSymmetric *self, void *data);
      static PyGetSetDef t_EigenDecompositionNonSymmetric__fields_[] = {
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, d),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, determinant),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, eigenvalues),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, epsilon),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, v),
        DECLARE_GET_FIELD(t_EigenDecompositionNonSymmetric, vInv),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EigenDecompositionNonSymmetric__methods_[] = {
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getD, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvalue, METH_O),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEigenvector, METH_O),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getEpsilon, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getV, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionNonSymmetric, getVInv, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EigenDecompositionNonSymmetric)[] = {
        { Py_tp_methods, t_EigenDecompositionNonSymmetric__methods_ },
        { Py_tp_init, (void *) t_EigenDecompositionNonSymmetric_init_ },
        { Py_tp_getset, t_EigenDecompositionNonSymmetric__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EigenDecompositionNonSymmetric)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EigenDecompositionNonSymmetric, t_EigenDecompositionNonSymmetric, EigenDecompositionNonSymmetric);

      void t_EigenDecompositionNonSymmetric::install(PyObject *module)
      {
        installType(&PY_TYPE(EigenDecompositionNonSymmetric), &PY_TYPE_DEF(EigenDecompositionNonSymmetric), module, "EigenDecompositionNonSymmetric", 0);
      }

      void t_EigenDecompositionNonSymmetric::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "class_", make_descriptor(EigenDecompositionNonSymmetric::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "wrapfn_", make_descriptor(t_EigenDecompositionNonSymmetric::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "boxfn_", make_descriptor(boxObject));
        env->getClass(EigenDecompositionNonSymmetric::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionNonSymmetric), "DEFAULT_EPSILON", make_descriptor(EigenDecompositionNonSymmetric::DEFAULT_EPSILON));
      }

      static PyObject *t_EigenDecompositionNonSymmetric_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EigenDecompositionNonSymmetric::initializeClass, 1)))
          return NULL;
        return t_EigenDecompositionNonSymmetric::wrap_Object(EigenDecompositionNonSymmetric(((t_EigenDecompositionNonSymmetric *) arg)->object.this$));
      }
      static PyObject *t_EigenDecompositionNonSymmetric_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EigenDecompositionNonSymmetric::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EigenDecompositionNonSymmetric_init_(t_EigenDecompositionNonSymmetric *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            EigenDecompositionNonSymmetric object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = EigenDecompositionNonSymmetric(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            EigenDecompositionNonSymmetric object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = EigenDecompositionNonSymmetric(a0, a1));
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

      static PyObject *t_EigenDecompositionNonSymmetric_getD(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getDeterminant(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getDeterminant());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalue(t_EigenDecompositionNonSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::complex::Complex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvalue(a0));
          return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvalue", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvalues(t_EigenDecompositionNonSymmetric *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEigenvector(t_EigenDecompositionNonSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getEpsilon(t_EigenDecompositionNonSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEpsilon());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getV(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_getVInv(t_EigenDecompositionNonSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVInv());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__d(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__determinant(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getDeterminant());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__eigenvalues(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__epsilon(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEpsilon());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__v(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionNonSymmetric_get__vInv(t_EigenDecompositionNonSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVInv());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PVBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PVBuilder::class$ = NULL;
          jmethodID *PVBuilder::mids$ = NULL;
          bool PVBuilder::live$ = false;

          jclass PVBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PVBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2d62f87042236ab6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_b7a095bbb9aad293] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/PV;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PVBuilder::PVBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_2d62f87042236ab6, a0.this$, a1, a2, a3, a4.this$)) {}

          ::org::orekit::estimation::measurements::PV PVBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::PV(env->callObjectMethod(this$, mids$[mid_build_b7a095bbb9aad293], a0.this$, a1.this$));
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
          static PyObject *t_PVBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PVBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PVBuilder_of_(t_PVBuilder *self, PyObject *args);
          static int t_PVBuilder_init_(t_PVBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PVBuilder_build(t_PVBuilder *self, PyObject *args);
          static PyObject *t_PVBuilder_get__parameters_(t_PVBuilder *self, void *data);
          static PyGetSetDef t_PVBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PVBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PVBuilder__methods_[] = {
            DECLARE_METHOD(t_PVBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PVBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PVBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PVBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PVBuilder)[] = {
            { Py_tp_methods, t_PVBuilder__methods_ },
            { Py_tp_init, (void *) t_PVBuilder_init_ },
            { Py_tp_getset, t_PVBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PVBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PVBuilder, t_PVBuilder, PVBuilder);
          PyObject *t_PVBuilder::wrap_Object(const PVBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PVBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PVBuilder *self = (t_PVBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PVBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PVBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PVBuilder *self = (t_PVBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PVBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PVBuilder), &PY_TYPE_DEF(PVBuilder), module, "PVBuilder", 0);
          }

          void t_PVBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "class_", make_descriptor(PVBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "wrapfn_", make_descriptor(t_PVBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PVBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PVBuilder::initializeClass, 1)))
              return NULL;
            return t_PVBuilder::wrap_Object(PVBuilder(((t_PVBuilder *) arg)->object.this$));
          }
          static PyObject *t_PVBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PVBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PVBuilder_of_(t_PVBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PVBuilder_init_(t_PVBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
            PVBuilder object((jobject) NULL);

            if (!parseArgs(args, "kDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = PVBuilder(a0, a1, a2, a3, a4));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PVBuilder_build(t_PVBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::PV result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_PV::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PVBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PVBuilder_get__parameters_(t_PVBuilder *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1066.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1066::class$ = NULL;
              jmethodID *Rtcm1066::mids$ = NULL;
              bool Rtcm1066::live$ = false;

              jclass Rtcm1066::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1066");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e429337ce34e6c7c] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1066::Rtcm1066(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_e429337ce34e6c7c, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1066_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1066_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1066_of_(t_Rtcm1066 *self, PyObject *args);
              static int t_Rtcm1066_init_(t_Rtcm1066 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1066_get__parameters_(t_Rtcm1066 *self, void *data);
              static PyGetSetDef t_Rtcm1066__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1066, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1066__methods_[] = {
                DECLARE_METHOD(t_Rtcm1066, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1066, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1066, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1066)[] = {
                { Py_tp_methods, t_Rtcm1066__methods_ },
                { Py_tp_init, (void *) t_Rtcm1066_init_ },
                { Py_tp_getset, t_Rtcm1066__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1066)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1066, t_Rtcm1066, Rtcm1066);
              PyObject *t_Rtcm1066::wrap_Object(const Rtcm1066& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1066::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1066 *self = (t_Rtcm1066 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1066::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1066::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1066 *self = (t_Rtcm1066 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1066::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1066), &PY_TYPE_DEF(Rtcm1066), module, "Rtcm1066", 0);
              }

              void t_Rtcm1066::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "class_", make_descriptor(Rtcm1066::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "wrapfn_", make_descriptor(t_Rtcm1066::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1066), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1066_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1066::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1066::wrap_Object(Rtcm1066(((t_Rtcm1066 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1066_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1066::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1066_of_(t_Rtcm1066 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1066_init_(t_Rtcm1066 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1066 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1066(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCombinedCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1066_get__parameters_(t_Rtcm1066 *self, void *data)
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
#include "org/orekit/forces/drag/PythonDragSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *PythonDragSensitive::class$ = NULL;
        jmethodID *PythonDragSensitive::mids$ = NULL;
        bool PythonDragSensitive::live$ = false;

        jclass PythonDragSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/PythonDragSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_dragAcceleration_59d392869e8fa633] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dragAcceleration_bc16b30ecfb3a4cc] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDragParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonDragSensitive::PythonDragSensitive() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonDragSensitive::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonDragSensitive::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonDragSensitive::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      namespace drag {
        static PyObject *t_PythonDragSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonDragSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonDragSensitive_init_(t_PythonDragSensitive *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonDragSensitive_finalize(t_PythonDragSensitive *self);
        static PyObject *t_PythonDragSensitive_pythonExtension(t_PythonDragSensitive *self, PyObject *args);
        static jobject JNICALL t_PythonDragSensitive_dragAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonDragSensitive_dragAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonDragSensitive_getDragParametersDrivers2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonDragSensitive_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonDragSensitive_get__self(t_PythonDragSensitive *self, void *data);
        static PyGetSetDef t_PythonDragSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_PythonDragSensitive, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonDragSensitive__methods_[] = {
          DECLARE_METHOD(t_PythonDragSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonDragSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonDragSensitive, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonDragSensitive, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonDragSensitive)[] = {
          { Py_tp_methods, t_PythonDragSensitive__methods_ },
          { Py_tp_init, (void *) t_PythonDragSensitive_init_ },
          { Py_tp_getset, t_PythonDragSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonDragSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonDragSensitive, t_PythonDragSensitive, PythonDragSensitive);

        void t_PythonDragSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonDragSensitive), &PY_TYPE_DEF(PythonDragSensitive), module, "PythonDragSensitive", 1);
        }

        void t_PythonDragSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDragSensitive), "class_", make_descriptor(PythonDragSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDragSensitive), "wrapfn_", make_descriptor(t_PythonDragSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDragSensitive), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonDragSensitive::initializeClass);
          JNINativeMethod methods[] = {
            { "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonDragSensitive_dragAcceleration0 },
            { "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonDragSensitive_dragAcceleration1 },
            { "getDragParametersDrivers", "()Ljava/util/List;", (void *) t_PythonDragSensitive_getDragParametersDrivers2 },
            { "pythonDecRef", "()V", (void *) t_PythonDragSensitive_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonDragSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonDragSensitive::initializeClass, 1)))
            return NULL;
          return t_PythonDragSensitive::wrap_Object(PythonDragSensitive(((t_PythonDragSensitive *) arg)->object.this$));
        }
        static PyObject *t_PythonDragSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonDragSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonDragSensitive_init_(t_PythonDragSensitive *self, PyObject *args, PyObject *kwds)
        {
          PythonDragSensitive object((jobject) NULL);

          INT_CALL(object = PythonDragSensitive());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonDragSensitive_finalize(t_PythonDragSensitive *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonDragSensitive_pythonExtension(t_PythonDragSensitive *self, PyObject *args)
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

        static jobject JNICALL t_PythonDragSensitive_dragAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a2));
          PyObject *o3 = JArray<jdouble>(a3).wrap();
          PyObject *result = PyObject_CallMethod(obj, "dragAcceleration", "OdOO", o0, (double) a1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("dragAcceleration", result);
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

        static jobject JNICALL t_PythonDragSensitive_dragAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a2));
          PyObject *o3 = JArray<jobject>(a3).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "dragAcceleration", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("dragAcceleration", result);
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

        static jobject JNICALL t_PythonDragSensitive_getDragParametersDrivers2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getDragParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getDragParametersDrivers", result);
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

        static void JNICALL t_PythonDragSensitive_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonDragSensitive::mids$[PythonDragSensitive::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonDragSensitive_get__self(t_PythonDragSensitive *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateFunctionDifferentiator::mids$ = NULL;
        bool UnivariateFunctionDifferentiator::live$ = false;

        jclass UnivariateFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_8233aa57faace755] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction UnivariateFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callObjectMethod(this$, mids$[mid_differentiate_8233aa57faace755], a0.this$));
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
        static PyObject *t_UnivariateFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateFunctionDifferentiator_differentiate(t_UnivariateFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateFunctionDifferentiator, t_UnivariateFunctionDifferentiator, UnivariateFunctionDifferentiator);

        void t_UnivariateFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateFunctionDifferentiator), &PY_TYPE_DEF(UnivariateFunctionDifferentiator), module, "UnivariateFunctionDifferentiator", 0);
        }

        void t_UnivariateFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "class_", make_descriptor(UnivariateFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateFunctionDifferentiator::wrap_Object(UnivariateFunctionDifferentiator(((t_UnivariateFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateFunctionDifferentiator_differentiate(t_UnivariateFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/PythonAccuracyProvider.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *PythonAccuracyProvider::class$ = NULL;
            jmethodID *PythonAccuracyProvider::mids$ = NULL;
            bool PythonAccuracyProvider::live$ = false;

            jclass PythonAccuracyProvider::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/PythonAccuracyProvider");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAccuracy", "()D");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAccuracyProvider::PythonAccuracyProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonAccuracyProvider::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonAccuracyProvider::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonAccuracyProvider::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
            static PyObject *t_PythonAccuracyProvider_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAccuracyProvider_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAccuracyProvider_init_(t_PythonAccuracyProvider *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAccuracyProvider_finalize(t_PythonAccuracyProvider *self);
            static PyObject *t_PythonAccuracyProvider_pythonExtension(t_PythonAccuracyProvider *self, PyObject *args);
            static jdouble JNICALL t_PythonAccuracyProvider_getAccuracy0(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAccuracyProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAccuracyProvider_get__self(t_PythonAccuracyProvider *self, void *data);
            static PyGetSetDef t_PythonAccuracyProvider__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAccuracyProvider, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAccuracyProvider__methods_[] = {
              DECLARE_METHOD(t_PythonAccuracyProvider, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAccuracyProvider, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAccuracyProvider, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAccuracyProvider, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAccuracyProvider)[] = {
              { Py_tp_methods, t_PythonAccuracyProvider__methods_ },
              { Py_tp_init, (void *) t_PythonAccuracyProvider_init_ },
              { Py_tp_getset, t_PythonAccuracyProvider__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAccuracyProvider)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonAccuracyProvider, t_PythonAccuracyProvider, PythonAccuracyProvider);

            void t_PythonAccuracyProvider::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAccuracyProvider), &PY_TYPE_DEF(PythonAccuracyProvider), module, "PythonAccuracyProvider", 1);
            }

            void t_PythonAccuracyProvider::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccuracyProvider), "class_", make_descriptor(PythonAccuracyProvider::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccuracyProvider), "wrapfn_", make_descriptor(t_PythonAccuracyProvider::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccuracyProvider), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAccuracyProvider::initializeClass);
              JNINativeMethod methods[] = {
                { "getAccuracy", "()D", (void *) t_PythonAccuracyProvider_getAccuracy0 },
                { "pythonDecRef", "()V", (void *) t_PythonAccuracyProvider_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonAccuracyProvider_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAccuracyProvider::initializeClass, 1)))
                return NULL;
              return t_PythonAccuracyProvider::wrap_Object(PythonAccuracyProvider(((t_PythonAccuracyProvider *) arg)->object.this$));
            }
            static PyObject *t_PythonAccuracyProvider_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAccuracyProvider::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAccuracyProvider_init_(t_PythonAccuracyProvider *self, PyObject *args, PyObject *kwds)
            {
              PythonAccuracyProvider object((jobject) NULL);

              INT_CALL(object = PythonAccuracyProvider());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonAccuracyProvider_finalize(t_PythonAccuracyProvider *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAccuracyProvider_pythonExtension(t_PythonAccuracyProvider *self, PyObject *args)
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

            static jdouble JNICALL t_PythonAccuracyProvider_getAccuracy0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAccuracy", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAccuracy", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonAccuracyProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAccuracyProvider::mids$[PythonAccuracyProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAccuracyProvider_get__self(t_PythonAccuracyProvider *self, void *data)
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
#include "org/orekit/frames/PythonStaticTransform.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonStaticTransform::class$ = NULL;
      jmethodID *PythonStaticTransform::mids$ = NULL;
      bool PythonStaticTransform::live$ = false;

      jclass PythonStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_f798b00aed778de3] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getRotation_1e0dc1a6788897b9] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTranslation_f88961cca75a2c0a] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStaticTransform::PythonStaticTransform() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonStaticTransform::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonStaticTransform::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonStaticTransform::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStaticTransform_init_(t_PythonStaticTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStaticTransform_finalize(t_PythonStaticTransform *self);
      static PyObject *t_PythonStaticTransform_pythonExtension(t_PythonStaticTransform *self, PyObject *args);
      static jobject JNICALL t_PythonStaticTransform_getDate0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonStaticTransform_get__self(t_PythonStaticTransform *self, void *data);
      static PyGetSetDef t_PythonStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStaticTransform, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStaticTransform__methods_[] = {
        DECLARE_METHOD(t_PythonStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStaticTransform, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStaticTransform, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStaticTransform)[] = {
        { Py_tp_methods, t_PythonStaticTransform__methods_ },
        { Py_tp_init, (void *) t_PythonStaticTransform_init_ },
        { Py_tp_getset, t_PythonStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStaticTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStaticTransform, t_PythonStaticTransform, PythonStaticTransform);

      void t_PythonStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStaticTransform), &PY_TYPE_DEF(PythonStaticTransform), module, "PythonStaticTransform", 1);
      }

      void t_PythonStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "class_", make_descriptor(PythonStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "wrapfn_", make_descriptor(t_PythonStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStaticTransform::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonStaticTransform_getDate0 },
          { "getInverse", "()Lorg/orekit/frames/StaticTransform;", (void *) t_PythonStaticTransform_getInverse1 },
          { "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonStaticTransform_getRotation2 },
          { "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonStaticTransform_getTranslation3 },
          { "pythonDecRef", "()V", (void *) t_PythonStaticTransform_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStaticTransform::initializeClass, 1)))
          return NULL;
        return t_PythonStaticTransform::wrap_Object(PythonStaticTransform(((t_PythonStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_PythonStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStaticTransform_init_(t_PythonStaticTransform *self, PyObject *args, PyObject *kwds)
      {
        PythonStaticTransform object((jobject) NULL);

        INT_CALL(object = PythonStaticTransform());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStaticTransform_finalize(t_PythonStaticTransform *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStaticTransform_pythonExtension(t_PythonStaticTransform *self, PyObject *args)
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

      static jobject JNICALL t_PythonStaticTransform_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_9e26256fb0d384a2]);
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

      static jobject JNICALL t_PythonStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::StaticTransform value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInverse", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::StaticTransform::initializeClass, &value))
        {
          throwTypeError("getInverse", result);
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

      static jobject JNICALL t_PythonStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getRotation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
        {
          throwTypeError("getRotation", result);
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

      static jobject JNICALL t_PythonStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTranslation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getTranslation", result);
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

      static void JNICALL t_PythonStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonStaticTransform_get__self(t_PythonStaticTransform *self, void *data)
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
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CR3BPSystem::class$ = NULL;
      jmethodID *CR3BPSystem::mids$ = NULL;
      bool CR3BPSystem::live$ = false;

      jclass CR3BPSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CR3BPSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ae9fd1f5c4d53442] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;D)V");
          mids$[mid_init$_afa7dd171d632b48] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;DD)V");
          mids$[mid_getDdim_557b8123390d8d0c] = env->getMethodID(cls, "getDdim", "()D");
          mids$[mid_getGamma_31acf4e2286f460f] = env->getMethodID(cls, "getGamma", "(Lorg/orekit/utils/LagrangianPoints;)D");
          mids$[mid_getLPosition_deb1609876453761] = env->getMethodID(cls, "getLPosition", "(Lorg/orekit/utils/LagrangianPoints;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getMassRatio_557b8123390d8d0c] = env->getMethodID(cls, "getMassRatio", "()D");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getPrimary_40e74583267ad550] = env->getMethodID(cls, "getPrimary", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getRealAPV_6d3d97b7bab0cbad] = env->getMethodID(cls, "getRealAPV", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_getRotatingFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getRotatingFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSecondary_40e74583267ad550] = env->getMethodID(cls, "getSecondary", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getTdim_557b8123390d8d0c] = env->getMethodID(cls, "getTdim", "()D");
          mids$[mid_getVdim_557b8123390d8d0c] = env->getMethodID(cls, "getVdim", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPSystem::CR3BPSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae9fd1f5c4d53442, a0.this$, a1.this$, a2)) {}

      CR3BPSystem::CR3BPSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_afa7dd171d632b48, a0.this$, a1.this$, a2, a3)) {}

      jdouble CR3BPSystem::getDdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdim_557b8123390d8d0c]);
      }

      jdouble CR3BPSystem::getGamma(const ::org::orekit::utils::LagrangianPoints & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGamma_31acf4e2286f460f], a0.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D CR3BPSystem::getLPosition(const ::org::orekit::utils::LagrangianPoints & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLPosition_deb1609876453761], a0.this$));
      }

      jdouble CR3BPSystem::getMassRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMassRatio_557b8123390d8d0c]);
      }

      ::java::lang::String CR3BPSystem::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      ::org::orekit::bodies::CelestialBody CR3BPSystem::getPrimary() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPrimary_40e74583267ad550]));
      }

      ::org::orekit::utils::AbsolutePVCoordinates CR3BPSystem::getRealAPV(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getRealAPV_6d3d97b7bab0cbad], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Frame CR3BPSystem::getRotatingFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getRotatingFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::bodies::CelestialBody CR3BPSystem::getSecondary() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSecondary_40e74583267ad550]));
      }

      jdouble CR3BPSystem::getTdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTdim_557b8123390d8d0c]);
      }

      jdouble CR3BPSystem::getVdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getVdim_557b8123390d8d0c]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_CR3BPSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPSystem_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPSystem_init_(t_CR3BPSystem *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CR3BPSystem_getDdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getGamma(t_CR3BPSystem *self, PyObject *arg);
      static PyObject *t_CR3BPSystem_getLPosition(t_CR3BPSystem *self, PyObject *arg);
      static PyObject *t_CR3BPSystem_getMassRatio(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getName(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getPrimary(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getRealAPV(t_CR3BPSystem *self, PyObject *args);
      static PyObject *t_CR3BPSystem_getRotatingFrame(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getSecondary(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getTdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getVdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_get__ddim(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__massRatio(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__name(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__primary(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__rotatingFrame(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__secondary(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__tdim(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__vdim(t_CR3BPSystem *self, void *data);
      static PyGetSetDef t_CR3BPSystem__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPSystem, ddim),
        DECLARE_GET_FIELD(t_CR3BPSystem, massRatio),
        DECLARE_GET_FIELD(t_CR3BPSystem, name),
        DECLARE_GET_FIELD(t_CR3BPSystem, primary),
        DECLARE_GET_FIELD(t_CR3BPSystem, rotatingFrame),
        DECLARE_GET_FIELD(t_CR3BPSystem, secondary),
        DECLARE_GET_FIELD(t_CR3BPSystem, tdim),
        DECLARE_GET_FIELD(t_CR3BPSystem, vdim),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPSystem__methods_[] = {
        DECLARE_METHOD(t_CR3BPSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPSystem, getDdim, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getGamma, METH_O),
        DECLARE_METHOD(t_CR3BPSystem, getLPosition, METH_O),
        DECLARE_METHOD(t_CR3BPSystem, getMassRatio, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getName, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getRealAPV, METH_VARARGS),
        DECLARE_METHOD(t_CR3BPSystem, getRotatingFrame, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getSecondary, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getTdim, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getVdim, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPSystem)[] = {
        { Py_tp_methods, t_CR3BPSystem__methods_ },
        { Py_tp_init, (void *) t_CR3BPSystem_init_ },
        { Py_tp_getset, t_CR3BPSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPSystem, t_CR3BPSystem, CR3BPSystem);

      void t_CR3BPSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPSystem), &PY_TYPE_DEF(CR3BPSystem), module, "CR3BPSystem", 0);
      }

      void t_CR3BPSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "class_", make_descriptor(CR3BPSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "wrapfn_", make_descriptor(t_CR3BPSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPSystem::initializeClass, 1)))
          return NULL;
        return t_CR3BPSystem::wrap_Object(CR3BPSystem(((t_CR3BPSystem *) arg)->object.this$));
      }
      static PyObject *t_CR3BPSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPSystem_init_(t_CR3BPSystem *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            jdouble a2;
            CR3BPSystem object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CR3BPSystem(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            CR3BPSystem object((jobject) NULL);

            if (!parseArgs(args, "kkDD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CR3BPSystem(a0, a1, a2, a3));
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

      static PyObject *t_CR3BPSystem_getDdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getGamma(t_CR3BPSystem *self, PyObject *arg)
      {
        ::org::orekit::utils::LagrangianPoints a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::utils::LagrangianPoints::initializeClass, &a0, &p0, ::org::orekit::utils::t_LagrangianPoints::parameters_))
        {
          OBJ_CALL(result = self->object.getGamma(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGamma", arg);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getLPosition(t_CR3BPSystem *self, PyObject *arg)
      {
        ::org::orekit::utils::LagrangianPoints a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::LagrangianPoints::initializeClass, &a0, &p0, ::org::orekit::utils::t_LagrangianPoints::parameters_))
        {
          OBJ_CALL(result = self->object.getLPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLPosition", arg);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getMassRatio(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMassRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getName(t_CR3BPSystem *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_CR3BPSystem_getPrimary(t_CR3BPSystem *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getRealAPV(t_CR3BPSystem *self, PyObject *args)
      {
        ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getRealAPV(a0, a1, a2));
          return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRealAPV", args);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getRotatingFrame(t_CR3BPSystem *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotatingFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getSecondary(t_CR3BPSystem *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecondary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getTdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getVdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getVdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_get__ddim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdim());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__massRatio(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMassRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__name(t_CR3BPSystem *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_CR3BPSystem_get__primary(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__rotatingFrame(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotatingFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__secondary(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecondary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__tdim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTdim());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__vdim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getVdim());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SingularValueDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SingularValueDecomposition::class$ = NULL;
      jmethodID *SingularValueDecomposition::mids$ = NULL;
      bool SingularValueDecomposition::live$ = false;

      jclass SingularValueDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SingularValueDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getConditionNumber_557b8123390d8d0c] = env->getMethodID(cls, "getConditionNumber", "()D");
          mids$[mid_getCovariance_e95e381257af03e9] = env->getMethodID(cls, "getCovariance", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getInverseConditionNumber_557b8123390d8d0c] = env->getMethodID(cls, "getInverseConditionNumber", "()D");
          mids$[mid_getNorm_557b8123390d8d0c] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getRank_412668abc8d889e9] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getS_70a207fcbc031df2] = env->getMethodID(cls, "getS", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSingularValues_a53a7513ecedada2] = env->getMethodID(cls, "getSingularValues", "()[D");
          mids$[mid_getSolver_ccd666b17ae2e6eb] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getU_70a207fcbc031df2] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getUT_70a207fcbc031df2] = env->getMethodID(cls, "getUT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getV_70a207fcbc031df2] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVT_70a207fcbc031df2] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingularValueDecomposition::SingularValueDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

      jdouble SingularValueDecomposition::getConditionNumber() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getConditionNumber_557b8123390d8d0c]);
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getCovariance(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_e95e381257af03e9], a0));
      }

      jdouble SingularValueDecomposition::getInverseConditionNumber() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getInverseConditionNumber_557b8123390d8d0c]);
      }

      jdouble SingularValueDecomposition::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_557b8123390d8d0c]);
      }

      jint SingularValueDecomposition::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getS() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getS_70a207fcbc031df2]));
      }

      JArray< jdouble > SingularValueDecomposition::getSingularValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSingularValues_a53a7513ecedada2]));
      }

      ::org::hipparchus::linear::DecompositionSolver SingularValueDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_ccd666b17ae2e6eb]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getU() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getU_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getUT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getUT_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVT_70a207fcbc031df2]));
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
      static PyObject *t_SingularValueDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingularValueDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingularValueDecomposition_init_(t_SingularValueDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingularValueDecomposition_getConditionNumber(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getCovariance(t_SingularValueDecomposition *self, PyObject *arg);
      static PyObject *t_SingularValueDecomposition_getInverseConditionNumber(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getNorm(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getRank(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getS(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getSingularValues(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getSolver(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getU(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getUT(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getV(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getVT(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_get__conditionNumber(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__inverseConditionNumber(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__norm(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__rank(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__s(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__singularValues(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__solver(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__u(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__uT(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__v(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__vT(t_SingularValueDecomposition *self, void *data);
      static PyGetSetDef t_SingularValueDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_SingularValueDecomposition, conditionNumber),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, inverseConditionNumber),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, norm),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, rank),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, s),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, singularValues),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, solver),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, u),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, uT),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, v),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SingularValueDecomposition__methods_[] = {
        DECLARE_METHOD(t_SingularValueDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposition, getConditionNumber, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getCovariance, METH_O),
        DECLARE_METHOD(t_SingularValueDecomposition, getInverseConditionNumber, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getRank, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getS, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getSingularValues, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getU, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getUT, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getV, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getVT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingularValueDecomposition)[] = {
        { Py_tp_methods, t_SingularValueDecomposition__methods_ },
        { Py_tp_init, (void *) t_SingularValueDecomposition_init_ },
        { Py_tp_getset, t_SingularValueDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingularValueDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingularValueDecomposition, t_SingularValueDecomposition, SingularValueDecomposition);

      void t_SingularValueDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(SingularValueDecomposition), &PY_TYPE_DEF(SingularValueDecomposition), module, "SingularValueDecomposition", 0);
      }

      void t_SingularValueDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposition), "class_", make_descriptor(SingularValueDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposition), "wrapfn_", make_descriptor(t_SingularValueDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SingularValueDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingularValueDecomposition::initializeClass, 1)))
          return NULL;
        return t_SingularValueDecomposition::wrap_Object(SingularValueDecomposition(((t_SingularValueDecomposition *) arg)->object.this$));
      }
      static PyObject *t_SingularValueDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingularValueDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingularValueDecomposition_init_(t_SingularValueDecomposition *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        SingularValueDecomposition object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          INT_CALL(object = SingularValueDecomposition(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SingularValueDecomposition_getConditionNumber(t_SingularValueDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getConditionNumber());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SingularValueDecomposition_getCovariance(t_SingularValueDecomposition *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getCovariance(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCovariance", arg);
        return NULL;
      }

      static PyObject *t_SingularValueDecomposition_getInverseConditionNumber(t_SingularValueDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getInverseConditionNumber());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SingularValueDecomposition_getNorm(t_SingularValueDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SingularValueDecomposition_getRank(t_SingularValueDecomposition *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRank());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SingularValueDecomposition_getS(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getS());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getSingularValues(t_SingularValueDecomposition *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSingularValues());
        return result.wrap();
      }

      static PyObject *t_SingularValueDecomposition_getSolver(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getU(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getUT(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getUT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getV(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getVT(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_get__conditionNumber(t_SingularValueDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getConditionNumber());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SingularValueDecomposition_get__inverseConditionNumber(t_SingularValueDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getInverseConditionNumber());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SingularValueDecomposition_get__norm(t_SingularValueDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SingularValueDecomposition_get__rank(t_SingularValueDecomposition *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRank());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SingularValueDecomposition_get__s(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getS());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__singularValues(t_SingularValueDecomposition *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSingularValues());
        return value.wrap();
      }

      static PyObject *t_SingularValueDecomposition_get__solver(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__u(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__uT(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getUT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__v(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__vT(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *BodyFacade::class$ = NULL;
          jmethodID *BodyFacade::mids$ = NULL;
          bool BodyFacade::live$ = false;

          jclass BodyFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/BodyFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b8d85b160e35dea0] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBody;)V");
              mids$[mid_create_8350318c3f6a35fa] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_create_6a724a5aaeb66912] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_create_66495be5ac120ead] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;Lorg/orekit/data/DataContext;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_getBody_40e74583267ad550] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BodyFacade::BodyFacade(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b8d85b160e35dea0, a0.this$, a1.this$)) {}

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_8350318c3f6a35fa], a0.this$));
          }

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0, const ::org::orekit::bodies::CelestialBodies & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_6a724a5aaeb66912], a0.this$, a1.this$));
          }

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0, const ::org::orekit::data::DataContext & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_66495be5ac120ead], a0.this$, a1.this$));
          }

          ::org::orekit::bodies::CelestialBody BodyFacade::getBody() const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_40e74583267ad550]));
          }

          ::java::lang::String BodyFacade::getName() const
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
    namespace files {
      namespace ccsds {
        namespace definitions {
          static PyObject *t_BodyFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BodyFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BodyFacade_init_(t_BodyFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BodyFacade_create(PyTypeObject *type, PyObject *args);
          static PyObject *t_BodyFacade_getBody(t_BodyFacade *self);
          static PyObject *t_BodyFacade_getName(t_BodyFacade *self);
          static PyObject *t_BodyFacade_get__body(t_BodyFacade *self, void *data);
          static PyObject *t_BodyFacade_get__name(t_BodyFacade *self, void *data);
          static PyGetSetDef t_BodyFacade__fields_[] = {
            DECLARE_GET_FIELD(t_BodyFacade, body),
            DECLARE_GET_FIELD(t_BodyFacade, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BodyFacade__methods_[] = {
            DECLARE_METHOD(t_BodyFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BodyFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BodyFacade, create, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_BodyFacade, getBody, METH_NOARGS),
            DECLARE_METHOD(t_BodyFacade, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BodyFacade)[] = {
            { Py_tp_methods, t_BodyFacade__methods_ },
            { Py_tp_init, (void *) t_BodyFacade_init_ },
            { Py_tp_getset, t_BodyFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BodyFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BodyFacade, t_BodyFacade, BodyFacade);

          void t_BodyFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(BodyFacade), &PY_TYPE_DEF(BodyFacade), module, "BodyFacade", 0);
          }

          void t_BodyFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BodyFacade), "class_", make_descriptor(BodyFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BodyFacade), "wrapfn_", make_descriptor(t_BodyFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BodyFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BodyFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BodyFacade::initializeClass, 1)))
              return NULL;
            return t_BodyFacade::wrap_Object(BodyFacade(((t_BodyFacade *) arg)->object.this$));
          }
          static PyObject *t_BodyFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BodyFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BodyFacade_init_(t_BodyFacade *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            BodyFacade object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BodyFacade(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BodyFacade_create(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::files::ccsds::definitions::CenterName a0((jobject) NULL);
                PyTypeObject **p0;
                BodyFacade result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::definitions::CenterName::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_CenterName::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::BodyFacade::create(a0));
                  return t_BodyFacade::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::files::ccsds::definitions::CenterName a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
                BodyFacade result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::orekit::files::ccsds::definitions::CenterName::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_CenterName::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::BodyFacade::create(a0, a1));
                  return t_BodyFacade::wrap_Object(result);
                }
              }
              {
                ::org::orekit::files::ccsds::definitions::CenterName a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                BodyFacade result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::orekit::files::ccsds::definitions::CenterName::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_CenterName::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::BodyFacade::create(a0, a1));
                  return t_BodyFacade::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "create", args);
            return NULL;
          }

          static PyObject *t_BodyFacade_getBody(t_BodyFacade *self)
          {
            ::org::orekit::bodies::CelestialBody result((jobject) NULL);
            OBJ_CALL(result = self->object.getBody());
            return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
          }

          static PyObject *t_BodyFacade_getName(t_BodyFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_BodyFacade_get__body(t_BodyFacade *self, void *data)
          {
            ::org::orekit::bodies::CelestialBody value((jobject) NULL);
            OBJ_CALL(value = self->object.getBody());
            return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
          }

          static PyObject *t_BodyFacade_get__name(t_BodyFacade *self, void *data)
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
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKEphemeris::class$ = NULL;
        jmethodID *STKEphemerisFile$STKEphemeris::mids$ = NULL;
        bool STKEphemerisFile$STKEphemeris::live$ = false;

        jclass STKEphemerisFile$STKEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f5014c1d3796dec5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
            mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKEphemeris::STKEphemerisFile$STKEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5014c1d3796dec5, a0.this$, a1, a2.this$)) {}

        ::java::lang::String STKEphemerisFile$STKEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
        }

        jdouble STKEphemerisFile$STKEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::java::util::List STKEphemerisFile$STKEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
      namespace stk {
        static PyObject *t_STKEphemerisFile$STKEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFile$STKEphemeris_init_(t_STKEphemerisFile$STKEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getId(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getMu(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getSegments(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getStart(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_getStop(t_STKEphemerisFile$STKEphemeris *self);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__id(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__mu(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__segments(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__start(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemeris_get__stop(t_STKEphemerisFile$STKEphemeris *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, id),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, mu),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, segments),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, start),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKEphemeris__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKEphemeris)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKEphemeris__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFile$STKEphemeris_init_ },
          { Py_tp_getset, t_STKEphemerisFile$STKEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKEphemeris, t_STKEphemerisFile$STKEphemeris, STKEphemerisFile$STKEphemeris);

        void t_STKEphemerisFile$STKEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKEphemeris), &PY_TYPE_DEF(STKEphemerisFile$STKEphemeris), module, "STKEphemerisFile$STKEphemeris", 0);
        }

        void t_STKEphemerisFile$STKEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemeris), "class_", make_descriptor(STKEphemerisFile$STKEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemeris), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKEphemeris::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKEphemeris::wrap_Object(STKEphemerisFile$STKEphemeris(((t_STKEphemerisFile$STKEphemeris *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFile$STKEphemeris_init_(t_STKEphemerisFile$STKEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          STKEphemerisFile$STKEphemeris object((jobject) NULL);

          if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = STKEphemerisFile$STKEphemeris(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getId(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getMu(t_STKEphemerisFile$STKEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getSegments(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::stk::PY_TYPE(STKEphemerisFile$STKEphemerisSegment));
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getStart(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_getStop(t_STKEphemerisFile$STKEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__id(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__mu(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__segments(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__start(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemeris_get__stop(t_STKEphemerisFile$STKEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$NptRangeMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$NptRangeMeasurement::class$ = NULL;
        jmethodID *CRD$NptRangeMeasurement::mids$ = NULL;
        bool CRD$NptRangeMeasurement::live$ = false;

        jclass CRD$NptRangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$NptRangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8cc469ee0a9203d0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;)V");
            mids$[mid_init$_602a63585f6f07eb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;DIDDDDDI)V");
            mids$[mid_getBinKurtosis_557b8123390d8d0c] = env->getMethodID(cls, "getBinKurtosis", "()D");
            mids$[mid_getBinPeakMinusMean_557b8123390d8d0c] = env->getMethodID(cls, "getBinPeakMinusMean", "()D");
            mids$[mid_getBinRms_557b8123390d8d0c] = env->getMethodID(cls, "getBinRms", "()D");
            mids$[mid_getBinSkew_557b8123390d8d0c] = env->getMethodID(cls, "getBinSkew", "()D");
            mids$[mid_getDetectorChannel_412668abc8d889e9] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getNumberOfRawRanges_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfRawRanges", "()I");
            mids$[mid_getReturnRate_557b8123390d8d0c] = env->getMethodID(cls, "getReturnRate", "()D");
            mids$[mid_getWindowLength_557b8123390d8d0c] = env->getMethodID(cls, "getWindowLength", "()D");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$NptRangeMeasurement::CRD$NptRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_8cc469ee0a9203d0, a0.this$, a1, a2, a3, a4.this$)) {}

        CRD$NptRangeMeasurement::CRD$NptRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4, jdouble a5, jint a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_602a63585f6f07eb, a0.this$, a1, a2, a3, a4.this$, a5, a6, a7, a8, a9, a10, a11, a12)) {}

        jdouble CRD$NptRangeMeasurement::getBinKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinKurtosis_557b8123390d8d0c]);
        }

        jdouble CRD$NptRangeMeasurement::getBinPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinPeakMinusMean_557b8123390d8d0c]);
        }

        jdouble CRD$NptRangeMeasurement::getBinRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinRms_557b8123390d8d0c]);
        }

        jdouble CRD$NptRangeMeasurement::getBinSkew() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBinSkew_557b8123390d8d0c]);
        }

        jint CRD$NptRangeMeasurement::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_412668abc8d889e9]);
        }

        jint CRD$NptRangeMeasurement::getNumberOfRawRanges() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfRawRanges_412668abc8d889e9]);
        }

        jdouble CRD$NptRangeMeasurement::getReturnRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReturnRate_557b8123390d8d0c]);
        }

        jdouble CRD$NptRangeMeasurement::getWindowLength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWindowLength_557b8123390d8d0c]);
        }

        ::java::lang::String CRD$NptRangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRD$NptRangeMeasurement::toString() const
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
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRD$NptRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$NptRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$NptRangeMeasurement_init_(t_CRD$NptRangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$NptRangeMeasurement_getBinKurtosis(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinPeakMinusMean(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinRms(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getBinSkew(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getDetectorChannel(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getNumberOfRawRanges(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getReturnRate(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_getWindowLength(t_CRD$NptRangeMeasurement *self);
        static PyObject *t_CRD$NptRangeMeasurement_toCrdString(t_CRD$NptRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$NptRangeMeasurement_toString(t_CRD$NptRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$NptRangeMeasurement_get__binKurtosis(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binPeakMinusMean(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binRms(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__binSkew(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__detectorChannel(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__numberOfRawRanges(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__returnRate(t_CRD$NptRangeMeasurement *self, void *data);
        static PyObject *t_CRD$NptRangeMeasurement_get__windowLength(t_CRD$NptRangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$NptRangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binKurtosis),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binPeakMinusMean),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binRms),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, binSkew),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, numberOfRawRanges),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, returnRate),
          DECLARE_GET_FIELD(t_CRD$NptRangeMeasurement, windowLength),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$NptRangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getBinSkew, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getNumberOfRawRanges, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getReturnRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, getWindowLength, METH_NOARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRD$NptRangeMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$NptRangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$NptRangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$NptRangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$NptRangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$NptRangeMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$RangeMeasurement),
          NULL
        };

        DEFINE_TYPE(CRD$NptRangeMeasurement, t_CRD$NptRangeMeasurement, CRD$NptRangeMeasurement);

        void t_CRD$NptRangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$NptRangeMeasurement), &PY_TYPE_DEF(CRD$NptRangeMeasurement), module, "CRD$NptRangeMeasurement", 0);
        }

        void t_CRD$NptRangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "class_", make_descriptor(CRD$NptRangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "wrapfn_", make_descriptor(t_CRD$NptRangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$NptRangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$NptRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$NptRangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$NptRangeMeasurement::wrap_Object(CRD$NptRangeMeasurement(((t_CRD$NptRangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$NptRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$NptRangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$NptRangeMeasurement_init_(t_CRD$NptRangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              CRD$NptRangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDs", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$NptRangeMeasurement(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              jdouble a5;
              jint a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              jdouble a10;
              jdouble a11;
              jint a12;
              CRD$NptRangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDsDIDDDDDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
              {
                INT_CALL(object = CRD$NptRangeMeasurement(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_CRD$NptRangeMeasurement_getBinKurtosis(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinPeakMinusMean(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinRms(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getBinSkew(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBinSkew());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getDetectorChannel(t_CRD$NptRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getNumberOfRawRanges(t_CRD$NptRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfRawRanges());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getReturnRate(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReturnRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_getWindowLength(t_CRD$NptRangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getWindowLength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$NptRangeMeasurement_toCrdString(t_CRD$NptRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$NptRangeMeasurement), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRD$NptRangeMeasurement_toString(t_CRD$NptRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$NptRangeMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binKurtosis(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binPeakMinusMean(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binRms(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__binSkew(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBinSkew());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__detectorChannel(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__numberOfRawRanges(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfRawRanges());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__returnRate(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReturnRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$NptRangeMeasurement_get__windowLength(t_CRD$NptRangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getWindowLength());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/ECOM2.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *ECOM2::class$ = NULL;
        jmethodID *ECOM2::mids$ = NULL;
        bool ECOM2::live$ = false;
        ::java::lang::String *ECOM2::ECOM_COEFFICIENT = NULL;

        jclass ECOM2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/ECOM2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ffb568c54ba36991] = env->getMethodID(cls, "<init>", "(IIDLorg/orekit/utils/ExtendedPVCoordinatesProvider;D)V");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ECOM_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ECOM_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ECOM2::ECOM2(jint a0, jint a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_ffb568c54ba36991, a0, a1, a2, a3.this$, a4)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ECOM2::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ECOM2::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::java::util::List ECOM2::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
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
      namespace radiation {
        static PyObject *t_ECOM2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ECOM2_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ECOM2_init_(t_ECOM2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ECOM2_acceleration(t_ECOM2 *self, PyObject *args);
        static PyObject *t_ECOM2_getParametersDrivers(t_ECOM2 *self, PyObject *args);
        static PyObject *t_ECOM2_get__parametersDrivers(t_ECOM2 *self, void *data);
        static PyGetSetDef t_ECOM2__fields_[] = {
          DECLARE_GET_FIELD(t_ECOM2, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ECOM2__methods_[] = {
          DECLARE_METHOD(t_ECOM2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ECOM2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ECOM2, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ECOM2, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ECOM2)[] = {
          { Py_tp_methods, t_ECOM2__methods_ },
          { Py_tp_init, (void *) t_ECOM2_init_ },
          { Py_tp_getset, t_ECOM2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ECOM2)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(ECOM2, t_ECOM2, ECOM2);

        void t_ECOM2::install(PyObject *module)
        {
          installType(&PY_TYPE(ECOM2), &PY_TYPE_DEF(ECOM2), module, "ECOM2", 0);
        }

        void t_ECOM2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "class_", make_descriptor(ECOM2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "wrapfn_", make_descriptor(t_ECOM2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "boxfn_", make_descriptor(boxObject));
          env->getClass(ECOM2::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "ECOM_COEFFICIENT", make_descriptor(j2p(*ECOM2::ECOM_COEFFICIENT)));
        }

        static PyObject *t_ECOM2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ECOM2::initializeClass, 1)))
            return NULL;
          return t_ECOM2::wrap_Object(ECOM2(((t_ECOM2 *) arg)->object.this$));
        }
        static PyObject *t_ECOM2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ECOM2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ECOM2_init_(t_ECOM2 *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jdouble a2;
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          jdouble a4;
          ECOM2 object((jobject) NULL);

          if (!parseArgs(args, "IIDkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = ECOM2(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ECOM2_acceleration(t_ECOM2 *self, PyObject *args)
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

          return callSuper(PY_TYPE(ECOM2), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_ECOM2_getParametersDrivers(t_ECOM2 *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(ECOM2), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_ECOM2_get__parametersDrivers(t_ECOM2 *self, void *data)
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
#include "org/orekit/rugged/refraction/MultiLayerModel.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/util/List.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/refraction/ConstantRefractionLayer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *MultiLayerModel::class$ = NULL;
        jmethodID *MultiLayerModel::mids$ = NULL;
        bool MultiLayerModel::live$ = false;

        jclass MultiLayerModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/MultiLayerModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_224b23f8eb5eaad9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;)V");
            mids$[mid_init$_c11240812b3a0202] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Ljava/util/List;)V");
            mids$[mid_applyCorrection_981eb3dc755df9fc] = env->getMethodID(cls, "applyCorrection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/orekit/rugged/intersection/IntersectionAlgorithm;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiLayerModel::MultiLayerModel(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0) : ::org::orekit::rugged::refraction::AtmosphericRefraction(env->newObject(initializeClass, &mids$, mid_init$_224b23f8eb5eaad9, a0.this$)) {}

        MultiLayerModel::MultiLayerModel(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::java::util::List & a1) : ::org::orekit::rugged::refraction::AtmosphericRefraction(env->newObject(initializeClass, &mids$, mid_init$_c11240812b3a0202, a0.this$, a1.this$)) {}

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint MultiLayerModel::applyCorrection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a2, const ::org::orekit::rugged::intersection::IntersectionAlgorithm & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_applyCorrection_981eb3dc755df9fc], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace refraction {
        static PyObject *t_MultiLayerModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiLayerModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultiLayerModel_init_(t_MultiLayerModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultiLayerModel_applyCorrection(t_MultiLayerModel *self, PyObject *args);

        static PyMethodDef t_MultiLayerModel__methods_[] = {
          DECLARE_METHOD(t_MultiLayerModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiLayerModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiLayerModel, applyCorrection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiLayerModel)[] = {
          { Py_tp_methods, t_MultiLayerModel__methods_ },
          { Py_tp_init, (void *) t_MultiLayerModel_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiLayerModel)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::refraction::AtmosphericRefraction),
          NULL
        };

        DEFINE_TYPE(MultiLayerModel, t_MultiLayerModel, MultiLayerModel);

        void t_MultiLayerModel::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiLayerModel), &PY_TYPE_DEF(MultiLayerModel), module, "MultiLayerModel", 0);
        }

        void t_MultiLayerModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiLayerModel), "class_", make_descriptor(MultiLayerModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiLayerModel), "wrapfn_", make_descriptor(t_MultiLayerModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiLayerModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiLayerModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiLayerModel::initializeClass, 1)))
            return NULL;
          return t_MultiLayerModel::wrap_Object(MultiLayerModel(((t_MultiLayerModel *) arg)->object.this$));
        }
        static PyObject *t_MultiLayerModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiLayerModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultiLayerModel_init_(t_MultiLayerModel *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
              MultiLayerModel object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0))
              {
                INT_CALL(object = MultiLayerModel(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MultiLayerModel object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MultiLayerModel(a0, a1));
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

        static PyObject *t_MultiLayerModel_applyCorrection(t_MultiLayerModel *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a2((jobject) NULL);
          ::org::orekit::rugged::intersection::IntersectionAlgorithm a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::orekit::rugged::intersection::IntersectionAlgorithm::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.applyCorrection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          return callSuper(PY_TYPE(MultiLayerModel), (PyObject *) self, "applyCorrection", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/CircularFieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *CircularFieldOfView::class$ = NULL;
        jmethodID *CircularFieldOfView::mids$ = NULL;
        bool CircularFieldOfView::live$ = false;

        jclass CircularFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/CircularFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_52e0f31b55ec2394] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DD)V");
            mids$[mid_getHalfAperture_557b8123390d8d0c] = env->getMethodID(cls, "getHalfAperture", "()D");
            mids$[mid_offsetFromBoundary_d0bb3aecf00cc465] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_b48aa9aef740fa79] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_20de5f9d51c6611f] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CircularFieldOfView::CircularFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, jdouble a2) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_52e0f31b55ec2394, a0.this$, a1, a2)) {}

        jdouble CircularFieldOfView::getHalfAperture() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfAperture_557b8123390d8d0c]);
        }

        jdouble CircularFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_d0bb3aecf00cc465], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D CircularFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_b48aa9aef740fa79], a0.this$));
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
        static PyObject *t_CircularFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CircularFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CircularFieldOfView_init_(t_CircularFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CircularFieldOfView_getHalfAperture(t_CircularFieldOfView *self);
        static PyObject *t_CircularFieldOfView_offsetFromBoundary(t_CircularFieldOfView *self, PyObject *args);
        static PyObject *t_CircularFieldOfView_projectToBoundary(t_CircularFieldOfView *self, PyObject *args);
        static PyObject *t_CircularFieldOfView_get__halfAperture(t_CircularFieldOfView *self, void *data);
        static PyGetSetDef t_CircularFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_CircularFieldOfView, halfAperture),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CircularFieldOfView__methods_[] = {
          DECLARE_METHOD(t_CircularFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CircularFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CircularFieldOfView, getHalfAperture, METH_NOARGS),
          DECLARE_METHOD(t_CircularFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_CircularFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CircularFieldOfView)[] = {
          { Py_tp_methods, t_CircularFieldOfView__methods_ },
          { Py_tp_init, (void *) t_CircularFieldOfView_init_ },
          { Py_tp_getset, t_CircularFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CircularFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(CircularFieldOfView, t_CircularFieldOfView, CircularFieldOfView);

        void t_CircularFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(CircularFieldOfView), &PY_TYPE_DEF(CircularFieldOfView), module, "CircularFieldOfView", 0);
        }

        void t_CircularFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "class_", make_descriptor(CircularFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "wrapfn_", make_descriptor(t_CircularFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CircularFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CircularFieldOfView::initializeClass, 1)))
            return NULL;
          return t_CircularFieldOfView::wrap_Object(CircularFieldOfView(((t_CircularFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_CircularFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CircularFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CircularFieldOfView_init_(t_CircularFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          CircularFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = CircularFieldOfView(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CircularFieldOfView_getHalfAperture(t_CircularFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfAperture());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CircularFieldOfView_offsetFromBoundary(t_CircularFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CircularFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_CircularFieldOfView_projectToBoundary(t_CircularFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(CircularFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_CircularFieldOfView_get__halfAperture(t_CircularFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfAperture());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventDetector::class$ = NULL;
        jmethodID *FieldEventDetector::mids$ = NULL;
        bool FieldEventDetector::live$ = false;

        jclass FieldEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_ae75cc14adc9e750] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_24041a63d01af092] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_613c8f46c659f636] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldEventDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldEventDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_ae75cc14adc9e750]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldEventDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_24041a63d01af092]));
        }

        jint FieldEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_412668abc8d889e9]);
        }

        ::org::hipparchus::CalculusFieldElement FieldEventDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_613c8f46c659f636]));
        }

        void FieldEventDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventDetector_of_(t_FieldEventDetector *self, PyObject *args);
        static PyObject *t_FieldEventDetector_g(t_FieldEventDetector *self, PyObject *arg);
        static PyObject *t_FieldEventDetector_getHandler(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getMaxCheckInterval(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getMaxIterationCount(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getThreshold(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_init(t_FieldEventDetector *self, PyObject *args);
        static PyObject *t_FieldEventDetector_get__handler(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__maxCheckInterval(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__maxIterationCount(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__threshold(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__parameters_(t_FieldEventDetector *self, void *data);
        static PyGetSetDef t_FieldEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventDetector, handler),
          DECLARE_GET_FIELD(t_FieldEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldEventDetector, threshold),
          DECLARE_GET_FIELD(t_FieldEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventDetector__methods_[] = {
          DECLARE_METHOD(t_FieldEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventDetector, g, METH_O),
          DECLARE_METHOD(t_FieldEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventDetector)[] = {
          { Py_tp_methods, t_FieldEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventDetector, t_FieldEventDetector, FieldEventDetector);
        PyObject *t_FieldEventDetector::wrap_Object(const FieldEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventDetector *self = (t_FieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventDetector *self = (t_FieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventDetector), &PY_TYPE_DEF(FieldEventDetector), module, "FieldEventDetector", 0);
        }

        void t_FieldEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "class_", make_descriptor(FieldEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "wrapfn_", make_descriptor(t_FieldEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventDetector::initializeClass, 1)))
            return NULL;
          return t_FieldEventDetector::wrap_Object(FieldEventDetector(((t_FieldEventDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventDetector_of_(t_FieldEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventDetector_g(t_FieldEventDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldEventDetector_getHandler(t_FieldEventDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventDetector_getMaxCheckInterval(t_FieldEventDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventDetector_getMaxIterationCount(t_FieldEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldEventDetector_getThreshold(t_FieldEventDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEventDetector_init(t_FieldEventDetector *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldEventDetector_get__parameters_(t_FieldEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventDetector_get__handler(t_FieldEventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldEventDetector_get__maxCheckInterval(t_FieldEventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldEventDetector_get__maxIterationCount(t_FieldEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldEventDetector_get__threshold(t_FieldEventDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getThreshold());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVectorFormat.h"
#include "java/text/ParsePosition.h"
#include "java/util/Locale.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealVectorFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorFormat::class$ = NULL;
      jmethodID *RealVectorFormat::mids$ = NULL;
      bool RealVectorFormat::live$ = false;

      jclass RealVectorFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d53859bd7ba1b247] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_f5c244a0f15376be] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_init$_5f051ed7add2b099] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_format_c0171abb3ba0b023] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealVector;)Ljava/lang/String;");
          mids$[mid_format_a6e853369bf753b4] = env->getMethodID(cls, "format", "(Lorg/hipparchus/linear/RealVector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_85ff0d07ca843902] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getFormat_001645e916bd626d] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_3cffd47377eca18a] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getRealVectorFormat_f6c83731ab02792b] = env->getStaticMethodID(cls, "getRealVectorFormat", "()Lorg/hipparchus/linear/RealVectorFormat;");
          mids$[mid_getRealVectorFormat_dd3046636f0c2838] = env->getStaticMethodID(cls, "getRealVectorFormat", "(Ljava/util/Locale;)Lorg/hipparchus/linear/RealVectorFormat;");
          mids$[mid_getSeparator_3cffd47377eca18a] = env->getMethodID(cls, "getSeparator", "()Ljava/lang/String;");
          mids$[mid_getSuffix_3cffd47377eca18a] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_f3a541aea0c3b97f] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/linear/ArrayRealVector;");
          mids$[mid_parse_26152c0fd0d0312a] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/linear/ArrayRealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVectorFormat::RealVectorFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      RealVectorFormat::RealVectorFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d53859bd7ba1b247, a0.this$)) {}

      RealVectorFormat::RealVectorFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5c244a0f15376be, a0.this$, a1.this$, a2.this$)) {}

      RealVectorFormat::RealVectorFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f051ed7add2b099, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::java::lang::String RealVectorFormat::format(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_c0171abb3ba0b023], a0.this$));
      }

      ::java::lang::StringBuffer RealVectorFormat::format(const ::org::hipparchus::linear::RealVector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_a6e853369bf753b4], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > RealVectorFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_85ff0d07ca843902]));
      }

      ::java::text::NumberFormat RealVectorFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_001645e916bd626d]));
      }

      ::java::lang::String RealVectorFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_3cffd47377eca18a]));
      }

      RealVectorFormat RealVectorFormat::getRealVectorFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return RealVectorFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealVectorFormat_f6c83731ab02792b]));
      }

      RealVectorFormat RealVectorFormat::getRealVectorFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealVectorFormat(env->callStaticObjectMethod(cls, mids$[mid_getRealVectorFormat_dd3046636f0c2838], a0.this$));
      }

      ::java::lang::String RealVectorFormat::getSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSeparator_3cffd47377eca18a]));
      }

      ::java::lang::String RealVectorFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_3cffd47377eca18a]));
      }

      ::org::hipparchus::linear::ArrayRealVector RealVectorFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::linear::ArrayRealVector(env->callObjectMethod(this$, mids$[mid_parse_f3a541aea0c3b97f], a0.this$));
      }

      ::org::hipparchus::linear::ArrayRealVector RealVectorFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::linear::ArrayRealVector(env->callObjectMethod(this$, mids$[mid_parse_26152c0fd0d0312a], a0.this$, a1.this$));
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
      static PyObject *t_RealVectorFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVectorFormat_init_(t_RealVectorFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVectorFormat_format(t_RealVectorFormat *self, PyObject *args);
      static PyObject *t_RealVectorFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_RealVectorFormat_getFormat(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getPrefix(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getRealVectorFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_RealVectorFormat_getSeparator(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_getSuffix(t_RealVectorFormat *self);
      static PyObject *t_RealVectorFormat_parse(t_RealVectorFormat *self, PyObject *args);
      static PyObject *t_RealVectorFormat_get__availableLocales(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__prefix(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__realVectorFormat(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__separator(t_RealVectorFormat *self, void *data);
      static PyObject *t_RealVectorFormat_get__suffix(t_RealVectorFormat *self, void *data);
      static PyGetSetDef t_RealVectorFormat__fields_[] = {
        DECLARE_GET_FIELD(t_RealVectorFormat, availableLocales),
        DECLARE_GET_FIELD(t_RealVectorFormat, prefix),
        DECLARE_GET_FIELD(t_RealVectorFormat, realVectorFormat),
        DECLARE_GET_FIELD(t_RealVectorFormat, separator),
        DECLARE_GET_FIELD(t_RealVectorFormat, suffix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVectorFormat__methods_[] = {
        DECLARE_METHOD(t_RealVectorFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getRealVectorFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_RealVectorFormat, getSeparator, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorFormat)[] = {
        { Py_tp_methods, t_RealVectorFormat__methods_ },
        { Py_tp_init, (void *) t_RealVectorFormat_init_ },
        { Py_tp_getset, t_RealVectorFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorFormat, t_RealVectorFormat, RealVectorFormat);

      void t_RealVectorFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorFormat), &PY_TYPE_DEF(RealVectorFormat), module, "RealVectorFormat", 0);
      }

      void t_RealVectorFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "class_", make_descriptor(RealVectorFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "wrapfn_", make_descriptor(t_RealVectorFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorFormat::initializeClass, 1)))
          return NULL;
        return t_RealVectorFormat::wrap_Object(RealVectorFormat(((t_RealVectorFormat *) arg)->object.this$));
      }
      static PyObject *t_RealVectorFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVectorFormat_init_(t_RealVectorFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealVectorFormat object((jobject) NULL);

            INT_CALL(object = RealVectorFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = RealVectorFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = RealVectorFormat(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::text::NumberFormat a3((jobject) NULL);
            RealVectorFormat object((jobject) NULL);

            if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = RealVectorFormat(a0, a1, a2, a3));
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

      static PyObject *t_RealVectorFormat_format(t_RealVectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealVector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealVectorFormat_getFormat(t_RealVectorFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_RealVectorFormat_getPrefix(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_getRealVectorFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            RealVectorFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getRealVectorFormat());
            return t_RealVectorFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            RealVectorFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::RealVectorFormat::getRealVectorFormat(a0));
              return t_RealVectorFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getRealVectorFormat", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_getSeparator(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparator());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_getSuffix(t_RealVectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_RealVectorFormat_parse(t_RealVectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::linear::ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::linear::t_ArrayRealVector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::linear::ArrayRealVector result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::linear::t_ArrayRealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_RealVectorFormat_get__availableLocales(t_RealVectorFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_RealVectorFormat_get__prefix(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_RealVectorFormat_get__realVectorFormat(t_RealVectorFormat *self, void *data)
      {
        RealVectorFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealVectorFormat());
        return t_RealVectorFormat::wrap_Object(value);
      }

      static PyObject *t_RealVectorFormat_get__separator(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparator());
        return j2p(value);
      }

      static PyObject *t_RealVectorFormat_get__suffix(t_RealVectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/ClasspathCrawler.h"
#include "java/lang/ClassLoader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ClasspathCrawler::class$ = NULL;
      jmethodID *ClasspathCrawler::mids$ = NULL;
      bool ClasspathCrawler::live$ = false;

      jclass ClasspathCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ClasspathCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cb4082327a3ebdc5] = env->getMethodID(cls, "<init>", "([Ljava/lang/String;)V");
          mids$[mid_init$_0ffe18e62f27ddd9] = env->getMethodID(cls, "<init>", "(Ljava/lang/ClassLoader;[Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ClasspathCrawler::ClasspathCrawler(const JArray< ::java::lang::String > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cb4082327a3ebdc5, a0.this$)) {}

      ClasspathCrawler::ClasspathCrawler(const ::java::lang::ClassLoader & a0, const JArray< ::java::lang::String > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0ffe18e62f27ddd9, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_ClasspathCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ClasspathCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ClasspathCrawler_init_(t_ClasspathCrawler *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_ClasspathCrawler__methods_[] = {
        DECLARE_METHOD(t_ClasspathCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ClasspathCrawler, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ClasspathCrawler)[] = {
        { Py_tp_methods, t_ClasspathCrawler__methods_ },
        { Py_tp_init, (void *) t_ClasspathCrawler_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ClasspathCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ClasspathCrawler, t_ClasspathCrawler, ClasspathCrawler);

      void t_ClasspathCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(ClasspathCrawler), &PY_TYPE_DEF(ClasspathCrawler), module, "ClasspathCrawler", 0);
      }

      void t_ClasspathCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ClasspathCrawler), "class_", make_descriptor(ClasspathCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ClasspathCrawler), "wrapfn_", make_descriptor(t_ClasspathCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ClasspathCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ClasspathCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ClasspathCrawler::initializeClass, 1)))
          return NULL;
        return t_ClasspathCrawler::wrap_Object(ClasspathCrawler(((t_ClasspathCrawler *) arg)->object.this$));
      }
      static PyObject *t_ClasspathCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ClasspathCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ClasspathCrawler_init_(t_ClasspathCrawler *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::java::lang::String > a0((jobject) NULL);
            ClasspathCrawler object((jobject) NULL);

            if (!parseArgs(args, "[s", &a0))
            {
              INT_CALL(object = ClasspathCrawler(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::ClassLoader a0((jobject) NULL);
            JArray< ::java::lang::String > a1((jobject) NULL);
            ClasspathCrawler object((jobject) NULL);

            if (!parseArgs(args, "k[s", ::java::lang::ClassLoader::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ClasspathCrawler(a0, a1));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenUtilities.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenUtilities::class$ = NULL;
              jmethodID *HansenUtilities::mids$ = NULL;
              bool HansenUtilities::live$ = false;
              ::org::hipparchus::analysis::polynomials::PolynomialFunction *HansenUtilities::ONE = NULL;
              ::org::hipparchus::analysis::polynomials::PolynomialFunction *HansenUtilities::ZERO = NULL;

              jclass HansenUtilities::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenUtilities");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_buildIdentityMatrix2_ef135d501ad62bfc] = env->getStaticMethodID(cls, "buildIdentityMatrix2", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildIdentityMatrix4_ef135d501ad62bfc] = env->getStaticMethodID(cls, "buildIdentityMatrix4", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildZeroMatrix2_ef135d501ad62bfc] = env->getStaticMethodID(cls, "buildZeroMatrix2", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_buildZeroMatrix4_ef135d501ad62bfc] = env->getStaticMethodID(cls, "buildZeroMatrix4", "()Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ONE = new ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/analysis/polynomials/PolynomialFunction;"));
                  ZERO = new ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/analysis/polynomials/PolynomialFunction;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildIdentityMatrix2()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildIdentityMatrix2_ef135d501ad62bfc]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildIdentityMatrix4()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildIdentityMatrix4_ef135d501ad62bfc]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildZeroMatrix2()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildZeroMatrix2_ef135d501ad62bfc]));
              }

              ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix HansenUtilities::buildZeroMatrix4()
              {
                jclass cls = env->getClass(initializeClass);
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix(env->callStaticObjectMethod(cls, mids$[mid_buildZeroMatrix4_ef135d501ad62bfc]));
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
              static PyObject *t_HansenUtilities_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenUtilities_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenUtilities_buildIdentityMatrix2(PyTypeObject *type);
              static PyObject *t_HansenUtilities_buildIdentityMatrix4(PyTypeObject *type);
              static PyObject *t_HansenUtilities_buildZeroMatrix2(PyTypeObject *type);
              static PyObject *t_HansenUtilities_buildZeroMatrix4(PyTypeObject *type);

              static PyMethodDef t_HansenUtilities__methods_[] = {
                DECLARE_METHOD(t_HansenUtilities, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildIdentityMatrix2, METH_NOARGS | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildIdentityMatrix4, METH_NOARGS | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildZeroMatrix2, METH_NOARGS | METH_CLASS),
                DECLARE_METHOD(t_HansenUtilities, buildZeroMatrix4, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenUtilities)[] = {
                { Py_tp_methods, t_HansenUtilities__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenUtilities)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenUtilities, t_HansenUtilities, HansenUtilities);

              void t_HansenUtilities::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenUtilities), &PY_TYPE_DEF(HansenUtilities), module, "HansenUtilities", 0);
              }

              void t_HansenUtilities::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "class_", make_descriptor(HansenUtilities::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "wrapfn_", make_descriptor(t_HansenUtilities::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "boxfn_", make_descriptor(boxObject));
                env->getClass(HansenUtilities::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "ONE", make_descriptor(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(*HansenUtilities::ONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenUtilities), "ZERO", make_descriptor(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(*HansenUtilities::ZERO)));
              }

              static PyObject *t_HansenUtilities_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenUtilities::initializeClass, 1)))
                  return NULL;
                return t_HansenUtilities::wrap_Object(HansenUtilities(((t_HansenUtilities *) arg)->object.this$));
              }
              static PyObject *t_HansenUtilities_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenUtilities::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_HansenUtilities_buildIdentityMatrix2(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildIdentityMatrix2());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
              }

              static PyObject *t_HansenUtilities_buildIdentityMatrix4(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildIdentityMatrix4());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
              }

              static PyObject *t_HansenUtilities_buildZeroMatrix2(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildZeroMatrix2());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
              }

              static PyObject *t_HansenUtilities_buildZeroMatrix4(PyTypeObject *type)
              {
                ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::PolynomialFunctionMatrix result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::HansenUtilities::buildZeroMatrix4());
                return ::org::orekit::propagation::semianalytical::dsst::utilities::hansen::t_PolynomialFunctionMatrix::wrap_Object(result);
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
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Inertia::class$ = NULL;
              jmethodID *Inertia::mids$ = NULL;
              bool Inertia::live$ = false;

              jclass Inertia::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Inertia");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getInertiaMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_setFrame_f55eee1236275bb1] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setInertiaMatrixEntry_754312f3734d6e2f] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Inertia::Inertia() : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::orekit::files::ccsds::definitions::FrameFacade Inertia::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_98f5fcaff3e3f9d2]));
              }

              ::org::hipparchus::linear::RealMatrix Inertia::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_70a207fcbc031df2]));
              }

              void Inertia::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_f55eee1236275bb1], a0.this$);
              }

              void Inertia::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_754312f3734d6e2f], a0, a1, a2);
              }

              void Inertia::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
              static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Inertia_init_(t_Inertia *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Inertia_getFrame(t_Inertia *self);
              static PyObject *t_Inertia_getInertiaMatrix(t_Inertia *self);
              static PyObject *t_Inertia_setFrame(t_Inertia *self, PyObject *arg);
              static PyObject *t_Inertia_setInertiaMatrixEntry(t_Inertia *self, PyObject *args);
              static PyObject *t_Inertia_validate(t_Inertia *self, PyObject *args);
              static PyObject *t_Inertia_get__frame(t_Inertia *self, void *data);
              static int t_Inertia_set__frame(t_Inertia *self, PyObject *arg, void *data);
              static PyObject *t_Inertia_get__inertiaMatrix(t_Inertia *self, void *data);
              static PyGetSetDef t_Inertia__fields_[] = {
                DECLARE_GETSET_FIELD(t_Inertia, frame),
                DECLARE_GET_FIELD(t_Inertia, inertiaMatrix),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Inertia__methods_[] = {
                DECLARE_METHOD(t_Inertia, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Inertia, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Inertia, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_Inertia, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_Inertia, setFrame, METH_O),
                DECLARE_METHOD(t_Inertia, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_Inertia, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Inertia)[] = {
                { Py_tp_methods, t_Inertia__methods_ },
                { Py_tp_init, (void *) t_Inertia_init_ },
                { Py_tp_getset, t_Inertia__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Inertia)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
                NULL
              };

              DEFINE_TYPE(Inertia, t_Inertia, Inertia);

              void t_Inertia::install(PyObject *module)
              {
                installType(&PY_TYPE(Inertia), &PY_TYPE_DEF(Inertia), module, "Inertia", 0);
              }

              void t_Inertia::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "class_", make_descriptor(Inertia::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "wrapfn_", make_descriptor(t_Inertia::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Inertia::initializeClass, 1)))
                  return NULL;
                return t_Inertia::wrap_Object(Inertia(((t_Inertia *) arg)->object.this$));
              }
              static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Inertia::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Inertia_init_(t_Inertia *self, PyObject *args, PyObject *kwds)
              {
                Inertia object((jobject) NULL);

                INT_CALL(object = Inertia());
                self->object = object;

                return 0;
              }

              static PyObject *t_Inertia_getFrame(t_Inertia *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_Inertia_getInertiaMatrix(t_Inertia *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_Inertia_setFrame(t_Inertia *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFrame", arg);
                return NULL;
              }

              static PyObject *t_Inertia_setInertiaMatrixEntry(t_Inertia *self, PyObject *args)
              {
                jint a0;
                jint a1;
                jdouble a2;

                if (!parseArgs(args, "IID", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setInertiaMatrixEntry(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaMatrixEntry", args);
                return NULL;
              }

              static PyObject *t_Inertia_validate(t_Inertia *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Inertia), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Inertia_get__frame(t_Inertia *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_Inertia_set__frame(t_Inertia *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "frame", arg);
                return -1;
              }

              static PyObject *t_Inertia_get__inertiaMatrix(t_Inertia *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *PolynomialFunctionMatrix::class$ = NULL;
              jmethodID *PolynomialFunctionMatrix::mids$ = NULL;
              bool PolynomialFunctionMatrix::live$ = false;

              jclass PolynomialFunctionMatrix::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_add_d5dba227734de1ab] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;)Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_getElem_c17187d79038303e] = env->getMethodID(cls, "getElem", "(II)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
                  mids$[mid_getMatrixLine_7238282f5fa90587] = env->getMethodID(cls, "getMatrixLine", "(I)[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
                  mids$[mid_multiply_d5dba227734de1ab] = env->getMethodID(cls, "multiply", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;)Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_setElem_1299f9d62272d65e] = env->getMethodID(cls, "setElem", "(IILorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
                  mids$[mid_setMatrix_347d88ac68f04342] = env->getMethodID(cls, "setMatrix", "([[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
                  mids$[mid_setMatrixLine_7d70cb2c0bdbd9a1] = env->getMethodID(cls, "setMatrixLine", "(I[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PolynomialFunctionMatrix PolynomialFunctionMatrix::add(const PolynomialFunctionMatrix & a0) const
              {
                return PolynomialFunctionMatrix(env->callObjectMethod(this$, mids$[mid_add_d5dba227734de1ab], a0.this$));
              }

              ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialFunctionMatrix::getElem(jint a0, jint a1) const
              {
                return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callObjectMethod(this$, mids$[mid_getElem_c17187d79038303e], a0, a1));
              }

              JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > PolynomialFunctionMatrix::getMatrixLine(jint a0) const
              {
                return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getMatrixLine_7238282f5fa90587], a0));
              }

              PolynomialFunctionMatrix PolynomialFunctionMatrix::multiply(const PolynomialFunctionMatrix & a0) const
              {
                return PolynomialFunctionMatrix(env->callObjectMethod(this$, mids$[mid_multiply_d5dba227734de1ab], a0.this$));
              }

              void PolynomialFunctionMatrix::setElem(jint a0, jint a1, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setElem_1299f9d62272d65e], a0, a1, a2.this$);
              }

              void PolynomialFunctionMatrix::setMatrix(const JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMatrix_347d88ac68f04342], a0.this$);
              }

              void PolynomialFunctionMatrix::setMatrixLine(jint a0, const JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setMatrixLine_7d70cb2c0bdbd9a1], a0, a1.this$);
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
              static PyObject *t_PolynomialFunctionMatrix_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_add(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_getElem(t_PolynomialFunctionMatrix *self, PyObject *args);
              static PyObject *t_PolynomialFunctionMatrix_getMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_multiply(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_setElem(t_PolynomialFunctionMatrix *self, PyObject *args);
              static PyObject *t_PolynomialFunctionMatrix_setMatrix(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_setMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *args);
              static int t_PolynomialFunctionMatrix_set__matrix(t_PolynomialFunctionMatrix *self, PyObject *arg, void *data);
              static PyGetSetDef t_PolynomialFunctionMatrix__fields_[] = {
                DECLARE_SET_FIELD(t_PolynomialFunctionMatrix, matrix),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PolynomialFunctionMatrix__methods_[] = {
                DECLARE_METHOD(t_PolynomialFunctionMatrix, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, add, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, getElem, METH_VARARGS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, getMatrixLine, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, multiply, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, setElem, METH_VARARGS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, setMatrix, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, setMatrixLine, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionMatrix)[] = {
                { Py_tp_methods, t_PolynomialFunctionMatrix__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_PolynomialFunctionMatrix__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PolynomialFunctionMatrix)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(PolynomialFunctionMatrix, t_PolynomialFunctionMatrix, PolynomialFunctionMatrix);

              void t_PolynomialFunctionMatrix::install(PyObject *module)
              {
                installType(&PY_TYPE(PolynomialFunctionMatrix), &PY_TYPE_DEF(PolynomialFunctionMatrix), module, "PolynomialFunctionMatrix", 0);
              }

              void t_PolynomialFunctionMatrix::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionMatrix), "class_", make_descriptor(PolynomialFunctionMatrix::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionMatrix), "wrapfn_", make_descriptor(t_PolynomialFunctionMatrix::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionMatrix), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_PolynomialFunctionMatrix_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PolynomialFunctionMatrix::initializeClass, 1)))
                  return NULL;
                return t_PolynomialFunctionMatrix::wrap_Object(PolynomialFunctionMatrix(((t_PolynomialFunctionMatrix *) arg)->object.this$));
              }
              static PyObject *t_PolynomialFunctionMatrix_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PolynomialFunctionMatrix::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_PolynomialFunctionMatrix_add(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                PolynomialFunctionMatrix a0((jobject) NULL);
                PolynomialFunctionMatrix result((jobject) NULL);

                if (!parseArg(arg, "k", PolynomialFunctionMatrix::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_PolynomialFunctionMatrix::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "add", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_getElem(t_PolynomialFunctionMatrix *self, PyObject *args)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getElem(a0, a1));
                  return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getElem", args);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_getMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                jint a0;
                JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getMatrixLine(a0));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
                }

                PyErr_SetArgsError((PyObject *) self, "getMatrixLine", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_multiply(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                PolynomialFunctionMatrix a0((jobject) NULL);
                PolynomialFunctionMatrix result((jobject) NULL);

                if (!parseArg(arg, "k", PolynomialFunctionMatrix::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.multiply(a0));
                  return t_PolynomialFunctionMatrix::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "multiply", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_setElem(t_PolynomialFunctionMatrix *self, PyObject *args)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::analysis::polynomials::PolynomialFunction a2((jobject) NULL);

                if (!parseArgs(args, "IIk", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setElem(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setElem", args);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_setMatrix(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > a0((jobject) NULL);

                if (!parseArg(arg, "[[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setMatrix(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMatrix", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_setMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *args)
              {
                jint a0;
                JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > a1((jobject) NULL);

                if (!parseArgs(args, "I[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.setMatrixLine(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMatrixLine", args);
                return NULL;
              }

              static int t_PolynomialFunctionMatrix_set__matrix(t_PolynomialFunctionMatrix *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > value((jobject) NULL);
                  if (!parseArg(arg, "[[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &value))
                  {
                    INT_CALL(self->object.setMatrix(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "matrix", arg);
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
#include "org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser.h"
#include "java/util/Collection.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *HarmonicCurveFitter$ParameterGuesser::class$ = NULL;
      jmethodID *HarmonicCurveFitter$ParameterGuesser::mids$ = NULL;
      bool HarmonicCurveFitter$ParameterGuesser::live$ = false;

      jclass HarmonicCurveFitter$ParameterGuesser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3abde0be9b9c9773] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_guess_a53a7513ecedada2] = env->getMethodID(cls, "guess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HarmonicCurveFitter$ParameterGuesser::HarmonicCurveFitter$ParameterGuesser(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3abde0be9b9c9773, a0.this$)) {}

      JArray< jdouble > HarmonicCurveFitter$ParameterGuesser::guess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_guess_a53a7513ecedada2]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HarmonicCurveFitter$ParameterGuesser_init_(t_HarmonicCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_guess(t_HarmonicCurveFitter$ParameterGuesser *self);

      static PyMethodDef t_HarmonicCurveFitter$ParameterGuesser__methods_[] = {
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, guess, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HarmonicCurveFitter$ParameterGuesser)[] = {
        { Py_tp_methods, t_HarmonicCurveFitter$ParameterGuesser__methods_ },
        { Py_tp_init, (void *) t_HarmonicCurveFitter$ParameterGuesser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HarmonicCurveFitter$ParameterGuesser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HarmonicCurveFitter$ParameterGuesser, t_HarmonicCurveFitter$ParameterGuesser, HarmonicCurveFitter$ParameterGuesser);

      void t_HarmonicCurveFitter$ParameterGuesser::install(PyObject *module)
      {
        installType(&PY_TYPE(HarmonicCurveFitter$ParameterGuesser), &PY_TYPE_DEF(HarmonicCurveFitter$ParameterGuesser), module, "HarmonicCurveFitter$ParameterGuesser", 0);
      }

      void t_HarmonicCurveFitter$ParameterGuesser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "class_", make_descriptor(HarmonicCurveFitter$ParameterGuesser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "wrapfn_", make_descriptor(t_HarmonicCurveFitter$ParameterGuesser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HarmonicCurveFitter$ParameterGuesser::initializeClass, 1)))
          return NULL;
        return t_HarmonicCurveFitter$ParameterGuesser::wrap_Object(HarmonicCurveFitter$ParameterGuesser(((t_HarmonicCurveFitter$ParameterGuesser *) arg)->object.this$));
      }
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HarmonicCurveFitter$ParameterGuesser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HarmonicCurveFitter$ParameterGuesser_init_(t_HarmonicCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        HarmonicCurveFitter$ParameterGuesser object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = HarmonicCurveFitter$ParameterGuesser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_guess(t_HarmonicCurveFitter$ParameterGuesser *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.guess());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
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
          mids$[mid_init$_7b30734ae83ea0af] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/LagrangianPoints;)V");
          mids$[mid_computeHaloFirstGuess_a94765ced70351f0] = env->getMethodID(cls, "computeHaloFirstGuess", "(DLorg/orekit/orbits/LibrationOrbitFamily;DD)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_computeLyapunovFirstGuess_1333e079d8988adc] = env->getMethodID(cls, "computeLyapunovFirstGuess", "(DDD)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getCr3bpSystem_846281b3daba3578] = env->getMethodID(cls, "getCr3bpSystem", "()Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getHaloOrbitalPeriod_7e960cd6eee376d8] = env->getMethodID(cls, "getHaloOrbitalPeriod", "(D)D");
          mids$[mid_getLagrangianPoint_d1c207a98448c759] = env->getMethodID(cls, "getLagrangianPoint", "()Lorg/orekit/utils/LagrangianPoints;");
          mids$[mid_getLyapunovOrbitalPeriod_7e960cd6eee376d8] = env->getMethodID(cls, "getLyapunovOrbitalPeriod", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RichardsonExpansion::RichardsonExpansion(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::LagrangianPoints & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b30734ae83ea0af, a0.this$, a1.this$)) {}

      ::org::orekit::utils::PVCoordinates RichardsonExpansion::computeHaloFirstGuess(jdouble a0, const ::org::orekit::orbits::LibrationOrbitFamily & a1, jdouble a2, jdouble a3) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeHaloFirstGuess_a94765ced70351f0], a0, a1.this$, a2, a3));
      }

      ::org::orekit::utils::PVCoordinates RichardsonExpansion::computeLyapunovFirstGuess(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeLyapunovFirstGuess_1333e079d8988adc], a0, a1, a2));
      }

      ::org::orekit::bodies::CR3BPSystem RichardsonExpansion::getCr3bpSystem() const
      {
        return ::org::orekit::bodies::CR3BPSystem(env->callObjectMethod(this$, mids$[mid_getCr3bpSystem_846281b3daba3578]));
      }

      jdouble RichardsonExpansion::getHaloOrbitalPeriod(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHaloOrbitalPeriod_7e960cd6eee376d8], a0);
      }

      ::org::orekit::utils::LagrangianPoints RichardsonExpansion::getLagrangianPoint() const
      {
        return ::org::orekit::utils::LagrangianPoints(env->callObjectMethod(this$, mids$[mid_getLagrangianPoint_d1c207a98448c759]));
      }

      jdouble RichardsonExpansion::getLyapunovOrbitalPeriod(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLyapunovOrbitalPeriod_7e960cd6eee376d8], a0);
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
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorMeanPlaneCrossing::class$ = NULL;
        jmethodID *SensorMeanPlaneCrossing::mids$ = NULL;
        bool SensorMeanPlaneCrossing::live$ = false;

        jclass SensorMeanPlaneCrossing::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorMeanPlaneCrossing");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c3cd7c6e36f5c757] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/rugged/utils/SpacecraftToObservedBody;IIZZID)V");
            mids$[mid_init$_fb8b53d59399f140] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/rugged/utils/SpacecraftToObservedBody;IIZZIDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/util/stream/Stream;)V");
            mids$[mid_find_51639cab485e188e] = env->getMethodID(cls, "find", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult;");
            mids$[mid_getAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAccuracy", "()D");
            mids$[mid_getCachedResults_d7cce92225eb0db2] = env->getMethodID(cls, "getCachedResults", "()Ljava/util/stream/Stream;");
            mids$[mid_getMaxEval_412668abc8d889e9] = env->getMethodID(cls, "getMaxEval", "()I");
            mids$[mid_getMaxLine_412668abc8d889e9] = env->getMethodID(cls, "getMaxLine", "()I");
            mids$[mid_getMeanPlaneNormal_f88961cca75a2c0a] = env->getMethodID(cls, "getMeanPlaneNormal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getMinLine_412668abc8d889e9] = env->getMethodID(cls, "getMinLine", "()I");
            mids$[mid_getScToBody_90cfcff71c037e63] = env->getMethodID(cls, "getScToBody", "()Lorg/orekit/rugged/utils/SpacecraftToObservedBody;");
            mids$[mid_getSensor_a33204662c4e4444] = env->getMethodID(cls, "getSensor", "()Lorg/orekit/rugged/linesensor/LineSensor;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorMeanPlaneCrossing::SensorMeanPlaneCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a1, jint a2, jint a3, jboolean a4, jboolean a5, jint a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3cd7c6e36f5c757, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

        SensorMeanPlaneCrossing::SensorMeanPlaneCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a1, jint a2, jint a3, jboolean a4, jboolean a5, jint a6, jdouble a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::java::util::stream::Stream & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb8b53d59399f140, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$)) {}

        ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult SensorMeanPlaneCrossing::find(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult(env->callObjectMethod(this$, mids$[mid_find_51639cab485e188e], a0.this$));
        }

        jdouble SensorMeanPlaneCrossing::getAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAccuracy_557b8123390d8d0c]);
        }

        ::java::util::stream::Stream SensorMeanPlaneCrossing::getCachedResults() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getCachedResults_d7cce92225eb0db2]));
        }

        jint SensorMeanPlaneCrossing::getMaxEval() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEval_412668abc8d889e9]);
        }

        jint SensorMeanPlaneCrossing::getMaxLine() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxLine_412668abc8d889e9]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing::getMeanPlaneNormal() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getMeanPlaneNormal_f88961cca75a2c0a]));
        }

        jint SensorMeanPlaneCrossing::getMinLine() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinLine_412668abc8d889e9]);
        }

        ::org::orekit::rugged::utils::SpacecraftToObservedBody SensorMeanPlaneCrossing::getScToBody() const
        {
          return ::org::orekit::rugged::utils::SpacecraftToObservedBody(env->callObjectMethod(this$, mids$[mid_getScToBody_90cfcff71c037e63]));
        }

        ::org::orekit::rugged::linesensor::LineSensor SensorMeanPlaneCrossing::getSensor() const
        {
          return ::org::orekit::rugged::linesensor::LineSensor(env->callObjectMethod(this$, mids$[mid_getSensor_a33204662c4e4444]));
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
      namespace linesensor {
        static PyObject *t_SensorMeanPlaneCrossing_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorMeanPlaneCrossing_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorMeanPlaneCrossing_init_(t_SensorMeanPlaneCrossing *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorMeanPlaneCrossing_find(t_SensorMeanPlaneCrossing *self, PyObject *arg);
        static PyObject *t_SensorMeanPlaneCrossing_getAccuracy(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getCachedResults(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMaxEval(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMaxLine(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMeanPlaneNormal(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMinLine(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getScToBody(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getSensor(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_get__accuracy(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__cachedResults(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__maxEval(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__maxLine(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__meanPlaneNormal(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__minLine(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__scToBody(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__sensor(t_SensorMeanPlaneCrossing *self, void *data);
        static PyGetSetDef t_SensorMeanPlaneCrossing__fields_[] = {
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, accuracy),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, cachedResults),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, maxEval),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, maxLine),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, meanPlaneNormal),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, minLine),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, scToBody),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, sensor),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SensorMeanPlaneCrossing__methods_[] = {
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, find, METH_O),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getCachedResults, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMaxEval, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMaxLine, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMeanPlaneNormal, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMinLine, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getScToBody, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getSensor, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorMeanPlaneCrossing)[] = {
          { Py_tp_methods, t_SensorMeanPlaneCrossing__methods_ },
          { Py_tp_init, (void *) t_SensorMeanPlaneCrossing_init_ },
          { Py_tp_getset, t_SensorMeanPlaneCrossing__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorMeanPlaneCrossing)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorMeanPlaneCrossing, t_SensorMeanPlaneCrossing, SensorMeanPlaneCrossing);

        void t_SensorMeanPlaneCrossing::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorMeanPlaneCrossing), &PY_TYPE_DEF(SensorMeanPlaneCrossing), module, "SensorMeanPlaneCrossing", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "CrossingResult", make_descriptor(&PY_TYPE_DEF(SensorMeanPlaneCrossing$CrossingResult)));
        }

        void t_SensorMeanPlaneCrossing::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "class_", make_descriptor(SensorMeanPlaneCrossing::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "wrapfn_", make_descriptor(t_SensorMeanPlaneCrossing::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorMeanPlaneCrossing_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorMeanPlaneCrossing::initializeClass, 1)))
            return NULL;
          return t_SensorMeanPlaneCrossing::wrap_Object(SensorMeanPlaneCrossing(((t_SensorMeanPlaneCrossing *) arg)->object.this$));
        }
        static PyObject *t_SensorMeanPlaneCrossing_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorMeanPlaneCrossing::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorMeanPlaneCrossing_init_(t_SensorMeanPlaneCrossing *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
              ::org::orekit::rugged::utils::SpacecraftToObservedBody a1((jobject) NULL);
              jint a2;
              jint a3;
              jboolean a4;
              jboolean a5;
              jint a6;
              jdouble a7;
              SensorMeanPlaneCrossing object((jobject) NULL);

              if (!parseArgs(args, "kkIIZZID", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = SensorMeanPlaneCrossing(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
              ::org::orekit::rugged::utils::SpacecraftToObservedBody a1((jobject) NULL);
              jint a2;
              jint a3;
              jboolean a4;
              jboolean a5;
              jint a6;
              jdouble a7;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::java::util::stream::Stream a9((jobject) NULL);
              PyTypeObject **p9;
              SensorMeanPlaneCrossing object((jobject) NULL);

              if (!parseArgs(args, "kkIIZZIDkK", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::java::util::stream::t_Stream::parameters_))
              {
                INT_CALL(object = SensorMeanPlaneCrossing(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

        static PyObject *t_SensorMeanPlaneCrossing_find(t_SensorMeanPlaneCrossing *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.find(a0));
            return ::org::orekit::rugged::linesensor::t_SensorMeanPlaneCrossing$CrossingResult::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "find", arg);
          return NULL;
        }

        static PyObject *t_SensorMeanPlaneCrossing_getAccuracy(t_SensorMeanPlaneCrossing *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getCachedResults(t_SensorMeanPlaneCrossing *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getCachedResults());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::rugged::linesensor::PY_TYPE(SensorMeanPlaneCrossing$CrossingResult));
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMaxEval(t_SensorMeanPlaneCrossing *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEval());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMaxLine(t_SensorMeanPlaneCrossing *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxLine());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMeanPlaneNormal(t_SensorMeanPlaneCrossing *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeanPlaneNormal());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMinLine(t_SensorMeanPlaneCrossing *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinLine());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getScToBody(t_SensorMeanPlaneCrossing *self)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getSensor(t_SensorMeanPlaneCrossing *self)
        {
          ::org::orekit::rugged::linesensor::LineSensor result((jobject) NULL);
          OBJ_CALL(result = self->object.getSensor());
          return ::org::orekit::rugged::linesensor::t_LineSensor::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__accuracy(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__cachedResults(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getCachedResults());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__maxEval(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEval());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__maxLine(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxLine());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__meanPlaneNormal(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeanPlaneNormal());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__minLine(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinLine());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__scToBody(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__sensor(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::org::orekit::rugged::linesensor::LineSensor value((jobject) NULL);
          OBJ_CALL(value = self->object.getSensor());
          return ::org::orekit::rugged::linesensor::t_LineSensor::wrap_Object(value);
        }
      }
    }
  }
}
