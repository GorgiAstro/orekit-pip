#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Euclidean1D$NoSubSpaceException::class$ = NULL;
          jmethodID *Euclidean1D$NoSubSpaceException::mids$ = NULL;
          bool Euclidean1D$NoSubSpaceException::live$ = false;

          jclass Euclidean1D$NoSubSpaceException::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Euclidean1D$NoSubSpaceException::Euclidean1D$NoSubSpaceException() : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
        namespace oned {
          static PyObject *t_Euclidean1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Euclidean1D$NoSubSpaceException_init_(t_Euclidean1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_Euclidean1D$NoSubSpaceException__methods_[] = {
            DECLARE_METHOD(t_Euclidean1D$NoSubSpaceException, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D$NoSubSpaceException, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean1D$NoSubSpaceException)[] = {
            { Py_tp_methods, t_Euclidean1D$NoSubSpaceException__methods_ },
            { Py_tp_init, (void *) t_Euclidean1D$NoSubSpaceException_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean1D$NoSubSpaceException)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
            NULL
          };

          DEFINE_TYPE(Euclidean1D$NoSubSpaceException, t_Euclidean1D$NoSubSpaceException, Euclidean1D$NoSubSpaceException);

          void t_Euclidean1D$NoSubSpaceException::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean1D$NoSubSpaceException), &PY_TYPE_DEF(Euclidean1D$NoSubSpaceException), module, "Euclidean1D$NoSubSpaceException", 0);
          }

          void t_Euclidean1D$NoSubSpaceException::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "class_", make_descriptor(Euclidean1D$NoSubSpaceException::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "wrapfn_", make_descriptor(t_Euclidean1D$NoSubSpaceException::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D$NoSubSpaceException), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean1D$NoSubSpaceException_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean1D$NoSubSpaceException::initializeClass, 1)))
              return NULL;
            return t_Euclidean1D$NoSubSpaceException::wrap_Object(Euclidean1D$NoSubSpaceException(((t_Euclidean1D$NoSubSpaceException *) arg)->object.this$));
          }
          static PyObject *t_Euclidean1D$NoSubSpaceException_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean1D$NoSubSpaceException::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Euclidean1D$NoSubSpaceException_init_(t_Euclidean1D$NoSubSpaceException *self, PyObject *args, PyObject *kwds)
          {
            Euclidean1D$NoSubSpaceException object((jobject) NULL);

            INT_CALL(object = Euclidean1D$NoSubSpaceException());
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmQuaternionKey::class$ = NULL;
              jmethodID *ApmQuaternionKey::mids$ = NULL;
              bool ApmQuaternionKey::live$ = false;
              ApmQuaternionKey *ApmQuaternionKey::COMMENT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::EPOCH = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q1 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q1_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q2 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q2_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q3 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q3_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::QC = NULL;
              ApmQuaternionKey *ApmQuaternionKey::QC_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_DIR = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_FRAME_A = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_FRAME_B = NULL;
              ApmQuaternionKey *ApmQuaternionKey::REF_FRAME_A = NULL;
              ApmQuaternionKey *ApmQuaternionKey::REF_FRAME_B = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternion = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternionDot = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternionRate = NULL;

              jclass ApmQuaternionKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_cdd21d2aff25c10c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer;)Z");
                  mids$[mid_valueOf_2c96281b843345ce] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;");
                  mids$[mid_values_0299707d41b404bf] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ApmQuaternionKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  EPOCH = new ApmQuaternionKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q1 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q1", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q1_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q2 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q2", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q2_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q3 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q3", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q3_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  QC = new ApmQuaternionKey(env->getStaticObjectField(cls, "QC", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  QC_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "QC_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_DIR = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_DIR", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_FRAME_A = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_FRAME_B = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  REF_FRAME_A = new ApmQuaternionKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  REF_FRAME_B = new ApmQuaternionKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternion = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternion", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternionDot = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternionDot", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternionRate = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternionRate", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ApmQuaternionKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer & a3) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_cdd21d2aff25c10c], a0.this$, a1.this$, a2.this$, a3.this$);
              }

              ApmQuaternionKey ApmQuaternionKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ApmQuaternionKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2c96281b843345ce], a0.this$));
              }

              JArray< ApmQuaternionKey > ApmQuaternionKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ApmQuaternionKey >(env->callStaticObjectMethod(cls, mids$[mid_values_0299707d41b404bf]));
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
              static PyObject *t_ApmQuaternionKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternionKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternionKey_of_(t_ApmQuaternionKey *self, PyObject *args);
              static PyObject *t_ApmQuaternionKey_process(t_ApmQuaternionKey *self, PyObject *args);
              static PyObject *t_ApmQuaternionKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ApmQuaternionKey_values(PyTypeObject *type);
              static PyObject *t_ApmQuaternionKey_get__parameters_(t_ApmQuaternionKey *self, void *data);
              static PyGetSetDef t_ApmQuaternionKey__fields_[] = {
                DECLARE_GET_FIELD(t_ApmQuaternionKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmQuaternionKey__methods_[] = {
                DECLARE_METHOD(t_ApmQuaternionKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternionKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternionKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmQuaternionKey)[] = {
                { Py_tp_methods, t_ApmQuaternionKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ApmQuaternionKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmQuaternionKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ApmQuaternionKey, t_ApmQuaternionKey, ApmQuaternionKey);
              PyObject *t_ApmQuaternionKey::wrap_Object(const ApmQuaternionKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ApmQuaternionKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmQuaternionKey *self = (t_ApmQuaternionKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ApmQuaternionKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ApmQuaternionKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmQuaternionKey *self = (t_ApmQuaternionKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ApmQuaternionKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmQuaternionKey), &PY_TYPE_DEF(ApmQuaternionKey), module, "ApmQuaternionKey", 0);
              }

              void t_ApmQuaternionKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "class_", make_descriptor(ApmQuaternionKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "wrapfn_", make_descriptor(t_ApmQuaternionKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ApmQuaternionKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "COMMENT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "EPOCH", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q1", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q1_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q2", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q2_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q3", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q3_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "QC", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::QC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "QC_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::QC_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_DIR", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_FRAME_A", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_FRAME_B", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "REF_FRAME_A", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "REF_FRAME_B", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternion", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternion)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternionDot", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternionDot)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternionRate", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternionRate)));
              }

              static PyObject *t_ApmQuaternionKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmQuaternionKey::initializeClass, 1)))
                  return NULL;
                return t_ApmQuaternionKey::wrap_Object(ApmQuaternionKey(((t_ApmQuaternionKey *) arg)->object.this$));
              }
              static PyObject *t_ApmQuaternionKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmQuaternionKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmQuaternionKey_of_(t_ApmQuaternionKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ApmQuaternionKey_process(t_ApmQuaternionKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer a3((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2, a3));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternionKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ApmQuaternionKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternionKey::valueOf(a0));
                  return t_ApmQuaternionKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ApmQuaternionKey_values(PyTypeObject *type)
              {
                JArray< ApmQuaternionKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternionKey::values());
                return JArray<jobject>(result.this$).wrap(t_ApmQuaternionKey::wrap_jobject);
              }
              static PyObject *t_ApmQuaternionKey_get__parameters_(t_ApmQuaternionKey *self, void *data)
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
#include "org/orekit/time/TAIUTCDatFilesLoader$Parser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/String.h"
#include "org/orekit/time/OffsetModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TAIUTCDatFilesLoader$Parser::class$ = NULL;
      jmethodID *TAIUTCDatFilesLoader$Parser::mids$ = NULL;
      bool TAIUTCDatFilesLoader$Parser::live$ = false;

      jclass TAIUTCDatFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TAIUTCDatFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_cf69cc549132f899] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TAIUTCDatFilesLoader$Parser::TAIUTCDatFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ::java::util::List TAIUTCDatFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_cf69cc549132f899], a0.this$, a1.this$));
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
      static PyObject *t_TAIUTCDatFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIUTCDatFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TAIUTCDatFilesLoader$Parser_init_(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TAIUTCDatFilesLoader$Parser_parse(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_TAIUTCDatFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIUTCDatFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TAIUTCDatFilesLoader$Parser)[] = {
        { Py_tp_methods, t_TAIUTCDatFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_TAIUTCDatFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TAIUTCDatFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TAIUTCDatFilesLoader$Parser, t_TAIUTCDatFilesLoader$Parser, TAIUTCDatFilesLoader$Parser);

      void t_TAIUTCDatFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(TAIUTCDatFilesLoader$Parser), &PY_TYPE_DEF(TAIUTCDatFilesLoader$Parser), module, "TAIUTCDatFilesLoader$Parser", 0);
      }

      void t_TAIUTCDatFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "class_", make_descriptor(TAIUTCDatFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "wrapfn_", make_descriptor(t_TAIUTCDatFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIUTCDatFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TAIUTCDatFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TAIUTCDatFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_TAIUTCDatFilesLoader$Parser::wrap_Object(TAIUTCDatFilesLoader$Parser(((t_TAIUTCDatFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_TAIUTCDatFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TAIUTCDatFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TAIUTCDatFilesLoader$Parser_init_(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        TAIUTCDatFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = TAIUTCDatFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_TAIUTCDatFilesLoader$Parser_parse(t_TAIUTCDatFilesLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/SimpleExponentialAtmosphere.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *SimpleExponentialAtmosphere::class$ = NULL;
          jmethodID *SimpleExponentialAtmosphere::mids$ = NULL;
          bool SimpleExponentialAtmosphere::live$ = false;

          jclass SimpleExponentialAtmosphere::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/SimpleExponentialAtmosphere");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c088c92448e957e8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;DDD)V");
              mids$[mid_getDensity_65e73ef68b3713d0] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_0c5821935d445848] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SimpleExponentialAtmosphere::SimpleExponentialAtmosphere(const ::org::orekit::bodies::BodyShape & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c088c92448e957e8, a0.this$, a1, a2, a3)) {}

          jdouble SimpleExponentialAtmosphere::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_65e73ef68b3713d0], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement SimpleExponentialAtmosphere::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_0c5821935d445848], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::frames::Frame SimpleExponentialAtmosphere::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
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
          static PyObject *t_SimpleExponentialAtmosphere_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SimpleExponentialAtmosphere_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SimpleExponentialAtmosphere_init_(t_SimpleExponentialAtmosphere *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SimpleExponentialAtmosphere_getDensity(t_SimpleExponentialAtmosphere *self, PyObject *args);
          static PyObject *t_SimpleExponentialAtmosphere_getFrame(t_SimpleExponentialAtmosphere *self);
          static PyObject *t_SimpleExponentialAtmosphere_get__frame(t_SimpleExponentialAtmosphere *self, void *data);
          static PyGetSetDef t_SimpleExponentialAtmosphere__fields_[] = {
            DECLARE_GET_FIELD(t_SimpleExponentialAtmosphere, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SimpleExponentialAtmosphere__methods_[] = {
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_SimpleExponentialAtmosphere, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SimpleExponentialAtmosphere)[] = {
            { Py_tp_methods, t_SimpleExponentialAtmosphere__methods_ },
            { Py_tp_init, (void *) t_SimpleExponentialAtmosphere_init_ },
            { Py_tp_getset, t_SimpleExponentialAtmosphere__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SimpleExponentialAtmosphere)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SimpleExponentialAtmosphere, t_SimpleExponentialAtmosphere, SimpleExponentialAtmosphere);

          void t_SimpleExponentialAtmosphere::install(PyObject *module)
          {
            installType(&PY_TYPE(SimpleExponentialAtmosphere), &PY_TYPE_DEF(SimpleExponentialAtmosphere), module, "SimpleExponentialAtmosphere", 0);
          }

          void t_SimpleExponentialAtmosphere::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleExponentialAtmosphere), "class_", make_descriptor(SimpleExponentialAtmosphere::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleExponentialAtmosphere), "wrapfn_", make_descriptor(t_SimpleExponentialAtmosphere::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleExponentialAtmosphere), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SimpleExponentialAtmosphere_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SimpleExponentialAtmosphere::initializeClass, 1)))
              return NULL;
            return t_SimpleExponentialAtmosphere::wrap_Object(SimpleExponentialAtmosphere(((t_SimpleExponentialAtmosphere *) arg)->object.this$));
          }
          static PyObject *t_SimpleExponentialAtmosphere_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SimpleExponentialAtmosphere::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SimpleExponentialAtmosphere_init_(t_SimpleExponentialAtmosphere *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::BodyShape a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            SimpleExponentialAtmosphere object((jobject) NULL);

            if (!parseArgs(args, "kDDD", ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SimpleExponentialAtmosphere(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SimpleExponentialAtmosphere_getDensity(t_SimpleExponentialAtmosphere *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
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
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_SimpleExponentialAtmosphere_getFrame(t_SimpleExponentialAtmosphere *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_SimpleExponentialAtmosphere_get__frame(t_SimpleExponentialAtmosphere *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *Tdm::class$ = NULL;
            jmethodID *Tdm::mids$ = NULL;
            bool Tdm::live$ = false;
            ::java::lang::String *Tdm::FORMAT_VERSION_KEY = NULL;
            ::java::lang::String *Tdm::ROOT = NULL;

            jclass Tdm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/Tdm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_5951d78914a837be] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Tdm::Tdm(const ::org::orekit::files::ccsds::ndm::tdm::TdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_5951d78914a837be, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
            static PyObject *t_Tdm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Tdm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Tdm_of_(t_Tdm *self, PyObject *args);
            static int t_Tdm_init_(t_Tdm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Tdm_get__parameters_(t_Tdm *self, void *data);
            static PyGetSetDef t_Tdm__fields_[] = {
              DECLARE_GET_FIELD(t_Tdm, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Tdm__methods_[] = {
              DECLARE_METHOD(t_Tdm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Tdm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Tdm, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Tdm)[] = {
              { Py_tp_methods, t_Tdm__methods_ },
              { Py_tp_init, (void *) t_Tdm_init_ },
              { Py_tp_getset, t_Tdm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Tdm)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
              NULL
            };

            DEFINE_TYPE(Tdm, t_Tdm, Tdm);
            PyObject *t_Tdm::wrap_Object(const Tdm& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Tdm::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Tdm *self = (t_Tdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_Tdm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Tdm::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Tdm *self = (t_Tdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_Tdm::install(PyObject *module)
            {
              installType(&PY_TYPE(Tdm), &PY_TYPE_DEF(Tdm), module, "Tdm", 0);
            }

            void t_Tdm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "class_", make_descriptor(Tdm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "wrapfn_", make_descriptor(t_Tdm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "boxfn_", make_descriptor(boxObject));
              env->getClass(Tdm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Tdm::FORMAT_VERSION_KEY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "ROOT", make_descriptor(j2p(*Tdm::ROOT)));
            }

            static PyObject *t_Tdm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Tdm::initializeClass, 1)))
                return NULL;
              return t_Tdm::wrap_Object(Tdm(((t_Tdm *) arg)->object.this$));
            }
            static PyObject *t_Tdm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Tdm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Tdm_of_(t_Tdm *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_Tdm_init_(t_Tdm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              Tdm object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::tdm::TdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
              {
                INT_CALL(object = Tdm(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(TdmHeader);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_Tdm_get__parameters_(t_Tdm *self, void *data)
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
#include "org/hipparchus/util/JulierUnscentedTransform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *JulierUnscentedTransform::class$ = NULL;
      jmethodID *JulierUnscentedTransform::mids$ = NULL;
      bool JulierUnscentedTransform::live$ = false;
      jdouble JulierUnscentedTransform::DEFAULT_KAPPA = (jdouble) 0;

      jclass JulierUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/JulierUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_getWc_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_9981f74b2d109da6] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_KAPPA = env->getStaticDoubleField(cls, "DEFAULT_KAPPA");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JulierUnscentedTransform::JulierUnscentedTransform(jint a0) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      JulierUnscentedTransform::JulierUnscentedTransform(jint a0, jdouble a1) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

      ::org::hipparchus::linear::RealVector JulierUnscentedTransform::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_92d7e8d8d3f1dfcf]));
      }

      ::org::hipparchus::linear::RealVector JulierUnscentedTransform::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_92d7e8d8d3f1dfcf]));
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
      static PyObject *t_JulierUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JulierUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JulierUnscentedTransform_init_(t_JulierUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JulierUnscentedTransform_getWc(t_JulierUnscentedTransform *self, PyObject *args);
      static PyObject *t_JulierUnscentedTransform_getWm(t_JulierUnscentedTransform *self, PyObject *args);
      static PyObject *t_JulierUnscentedTransform_get__wc(t_JulierUnscentedTransform *self, void *data);
      static PyObject *t_JulierUnscentedTransform_get__wm(t_JulierUnscentedTransform *self, void *data);
      static PyGetSetDef t_JulierUnscentedTransform__fields_[] = {
        DECLARE_GET_FIELD(t_JulierUnscentedTransform, wc),
        DECLARE_GET_FIELD(t_JulierUnscentedTransform, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JulierUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_JulierUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JulierUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JulierUnscentedTransform, getWc, METH_VARARGS),
        DECLARE_METHOD(t_JulierUnscentedTransform, getWm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JulierUnscentedTransform)[] = {
        { Py_tp_methods, t_JulierUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_JulierUnscentedTransform_init_ },
        { Py_tp_getset, t_JulierUnscentedTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JulierUnscentedTransform)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::AbstractUnscentedTransform),
        NULL
      };

      DEFINE_TYPE(JulierUnscentedTransform, t_JulierUnscentedTransform, JulierUnscentedTransform);

      void t_JulierUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(JulierUnscentedTransform), &PY_TYPE_DEF(JulierUnscentedTransform), module, "JulierUnscentedTransform", 0);
      }

      void t_JulierUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "class_", make_descriptor(JulierUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "wrapfn_", make_descriptor(t_JulierUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "boxfn_", make_descriptor(boxObject));
        env->getClass(JulierUnscentedTransform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "DEFAULT_KAPPA", make_descriptor(JulierUnscentedTransform::DEFAULT_KAPPA));
      }

      static PyObject *t_JulierUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JulierUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_JulierUnscentedTransform::wrap_Object(JulierUnscentedTransform(((t_JulierUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_JulierUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JulierUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JulierUnscentedTransform_init_(t_JulierUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            JulierUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = JulierUnscentedTransform(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            JulierUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = JulierUnscentedTransform(a0, a1));
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

      static PyObject *t_JulierUnscentedTransform_getWc(t_JulierUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWc());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(JulierUnscentedTransform), (PyObject *) self, "getWc", args, 2);
      }

      static PyObject *t_JulierUnscentedTransform_getWm(t_JulierUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWm());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(JulierUnscentedTransform), (PyObject *) self, "getWm", args, 2);
      }

      static PyObject *t_JulierUnscentedTransform_get__wc(t_JulierUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_JulierUnscentedTransform_get__wm(t_JulierUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyDynamicContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBodyDynamicContext::class$ = NULL;
            jmethodID *DSSTThirdBodyDynamicContext::mids$ = NULL;
            bool DSSTThirdBodyDynamicContext::live$ = false;

            jclass DSSTThirdBodyDynamicContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyDynamicContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_747a861def72ab1c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/bodies/CelestialBody;[D)V");
                mids$[mid_getA_9981f74b2d109da6] = env->getMethodID(cls, "getA", "()D");
                mids$[mid_getAlpha_9981f74b2d109da6] = env->getMethodID(cls, "getAlpha", "()D");
                mids$[mid_getBB_9981f74b2d109da6] = env->getMethodID(cls, "getBB", "()D");
                mids$[mid_getBBB_9981f74b2d109da6] = env->getMethodID(cls, "getBBB", "()D");
                mids$[mid_getBeta_9981f74b2d109da6] = env->getMethodID(cls, "getBeta", "()D");
                mids$[mid_getBoA_9981f74b2d109da6] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_9981f74b2d109da6] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getGamma_9981f74b2d109da6] = env->getMethodID(cls, "getGamma", "()D");
                mids$[mid_getHXXX_9981f74b2d109da6] = env->getMethodID(cls, "getHXXX", "()D");
                mids$[mid_getKXXX_9981f74b2d109da6] = env->getMethodID(cls, "getKXXX", "()D");
                mids$[mid_getM2aoA_9981f74b2d109da6] = env->getMethodID(cls, "getM2aoA", "()D");
                mids$[mid_getMCo2AB_9981f74b2d109da6] = env->getMethodID(cls, "getMCo2AB", "()D");
                mids$[mid_getMeanMotion_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMuoR3_9981f74b2d109da6] = env->getMethodID(cls, "getMuoR3", "()D");
                mids$[mid_getOoAB_9981f74b2d109da6] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getR3_9981f74b2d109da6] = env->getMethodID(cls, "getR3", "()D");
                mids$[mid_getX_9981f74b2d109da6] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXX_9981f74b2d109da6] = env->getMethodID(cls, "getXX", "()D");
                mids$[mid_getb_9981f74b2d109da6] = env->getMethodID(cls, "getb", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBodyDynamicContext::DSSTThirdBodyDynamicContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::bodies::CelestialBody & a1, const JArray< jdouble > & a2) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_747a861def72ab1c, a0.this$, a1.this$, a2.this$)) {}

            jdouble DSSTThirdBodyDynamicContext::getA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getAlpha() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBB_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBBB_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBeta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBeta_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getGamma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGamma_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getHXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHXXX_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getKXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKXXX_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getM2aoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM2aoA_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMCo2AB_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMuoR3() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuoR3_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getR3() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getR3_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXX_9981f74b2d109da6]);
            }

            jdouble DSSTThirdBodyDynamicContext::getb() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getb_9981f74b2d109da6]);
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
            static PyObject *t_DSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBodyDynamicContext_init_(t_DSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBodyDynamicContext_getA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getAlpha(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBBB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBeta(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBoA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBoABpo(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getGamma(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getHXXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getKXXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getM2aoA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMCo2AB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMeanMotion(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMuoR3(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getOoAB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getR3(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getb(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__a(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__alpha(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__b(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__bB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__bBB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__beta(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__boA(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__boABpo(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__gamma(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__hXXX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__kXXX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__m2aoA(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__mCo2AB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__meanMotion(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__muoR3(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__ooAB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__r3(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__x(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__xX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyGetSetDef t_DSSTThirdBodyDynamicContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, a),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, alpha),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, b),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, bB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, bBB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, beta),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, boA),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, gamma),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, hXXX),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, kXXX),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, m2aoA),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, mCo2AB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, muoR3),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, r3),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, x),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, xX),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBodyDynamicContext__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getHXXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getKXXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMuoR3, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getR3, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getb, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBodyDynamicContext)[] = {
              { Py_tp_methods, t_DSSTThirdBodyDynamicContext__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBodyDynamicContext_init_ },
              { Py_tp_getset, t_DSSTThirdBodyDynamicContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBodyDynamicContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBodyDynamicContext, t_DSSTThirdBodyDynamicContext, DSSTThirdBodyDynamicContext);

            void t_DSSTThirdBodyDynamicContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBodyDynamicContext), &PY_TYPE_DEF(DSSTThirdBodyDynamicContext), module, "DSSTThirdBodyDynamicContext", 0);
            }

            void t_DSSTThirdBodyDynamicContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "class_", make_descriptor(DSSTThirdBodyDynamicContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "wrapfn_", make_descriptor(t_DSSTThirdBodyDynamicContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBodyDynamicContext::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBodyDynamicContext::wrap_Object(DSSTThirdBodyDynamicContext(((t_DSSTThirdBodyDynamicContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBodyDynamicContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBodyDynamicContext_init_(t_DSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              DSSTThirdBodyDynamicContext object((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = DSSTThirdBodyDynamicContext(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getAlpha(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBBB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBeta(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBeta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBoA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBoABpo(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getGamma(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGamma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getHXXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getKXXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getM2aoA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2aoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMCo2AB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMeanMotion(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMuoR3(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuoR3());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getOoAB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getR3(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getR3());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getb(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getb());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__a(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__alpha(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__b(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getb());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__bB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__bBB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__beta(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBeta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__boA(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__boABpo(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__gamma(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGamma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__hXXX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHXXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__kXXX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKXXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__m2aoA(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM2aoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__mCo2AB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__meanMotion(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__muoR3(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuoR3());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__ooAB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__r3(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getR3());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__x(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__xX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXX());
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
#include "org/orekit/propagation/PythonFieldBoundedPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
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
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_546488029ed6e282] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_bb8991c4a46cf56d] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_d751c1a57012b438] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_96c2c30a0b0ad9e4] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_3bfef5c77ceb081a] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_a74be2e38786f3b6] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_f81c0644d57ae495] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMaxDate_1fea28374011eef5] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMinDate_1fea28374011eef5] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMultiplexer_8da2e06aa361bf03] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_fb689a9c0f30b938] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_bcf793a6168805e3] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_8062511934471166] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldBoundedPropagator::PythonFieldBoundedPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFieldBoundedPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFieldBoundedPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFieldBoundedPropagator::pythonExtension(jlong a0) const
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonFieldBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldBoundedPropagator::mids$[PythonFieldBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitDetermination::class$ = NULL;
              jmethodID *OrbitDetermination::mids$ = NULL;
              bool OrbitDetermination::live$ = false;

              jclass OrbitDetermination::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getActualOdSpan_9981f74b2d109da6] = env->getMethodID(cls, "getActualOdSpan", "()D");
                  mids$[mid_getConfidence_9981f74b2d109da6] = env->getMethodID(cls, "getConfidence", "()D");
                  mids$[mid_getConsiderN_d6ab429752e7c267] = env->getMethodID(cls, "getConsiderN", "()I");
                  mids$[mid_getConsiderParameters_d751c1a57012b438] = env->getMethodID(cls, "getConsiderParameters", "()Ljava/util/List;");
                  mids$[mid_getDataTypes_d751c1a57012b438] = env->getMethodID(cls, "getDataTypes", "()Ljava/util/List;");
                  mids$[mid_getEpoch_80e11148db499dda] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getEpochEigenInt_9981f74b2d109da6] = env->getMethodID(cls, "getEpochEigenInt", "()D");
                  mids$[mid_getEpochEigenMaj_9981f74b2d109da6] = env->getMethodID(cls, "getEpochEigenMaj", "()D");
                  mids$[mid_getEpochEigenMin_9981f74b2d109da6] = env->getMethodID(cls, "getEpochEigenMin", "()D");
                  mids$[mid_getGdop_9981f74b2d109da6] = env->getMethodID(cls, "getGdop", "()D");
                  mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMaxPredictedEigenMaj_9981f74b2d109da6] = env->getMethodID(cls, "getMaxPredictedEigenMaj", "()D");
                  mids$[mid_getMaximumObsGap_9981f74b2d109da6] = env->getMethodID(cls, "getMaximumObsGap", "()D");
                  mids$[mid_getMethod_fe70e48f0b8fd382] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/files/ccsds/definitions/OdMethodFacade;");
                  mids$[mid_getMinPredictedEigenMin_9981f74b2d109da6] = env->getMethodID(cls, "getMinPredictedEigenMin", "()D");
                  mids$[mid_getObsAvailable_d6ab429752e7c267] = env->getMethodID(cls, "getObsAvailable", "()I");
                  mids$[mid_getObsUsed_d6ab429752e7c267] = env->getMethodID(cls, "getObsUsed", "()I");
                  mids$[mid_getPrevId_d2c8eb4129821f0e] = env->getMethodID(cls, "getPrevId", "()Ljava/lang/String;");
                  mids$[mid_getRecommendedOdSpan_9981f74b2d109da6] = env->getMethodID(cls, "getRecommendedOdSpan", "()D");
                  mids$[mid_getSedr_9981f74b2d109da6] = env->getMethodID(cls, "getSedr", "()D");
                  mids$[mid_getSensors_d751c1a57012b438] = env->getMethodID(cls, "getSensors", "()Ljava/util/List;");
                  mids$[mid_getSensorsN_d6ab429752e7c267] = env->getMethodID(cls, "getSensorsN", "()I");
                  mids$[mid_getSolveN_d6ab429752e7c267] = env->getMethodID(cls, "getSolveN", "()I");
                  mids$[mid_getSolveStates_d751c1a57012b438] = env->getMethodID(cls, "getSolveStates", "()Ljava/util/List;");
                  mids$[mid_getTimeSinceFirstObservation_9981f74b2d109da6] = env->getMethodID(cls, "getTimeSinceFirstObservation", "()D");
                  mids$[mid_getTimeSinceLastObservation_9981f74b2d109da6] = env->getMethodID(cls, "getTimeSinceLastObservation", "()D");
                  mids$[mid_getTracksAvailable_d6ab429752e7c267] = env->getMethodID(cls, "getTracksAvailable", "()I");
                  mids$[mid_getTracksUsed_d6ab429752e7c267] = env->getMethodID(cls, "getTracksUsed", "()I");
                  mids$[mid_getWeightedRms_9981f74b2d109da6] = env->getMethodID(cls, "getWeightedRms", "()D");
                  mids$[mid_setActualOdSpan_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setActualOdSpan", "(D)V");
                  mids$[mid_setConfidence_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setConfidence", "(D)V");
                  mids$[mid_setConsiderN_8fd427ab23829bf5] = env->getMethodID(cls, "setConsiderN", "(I)V");
                  mids$[mid_setConsiderParameters_aa335fea495d60e0] = env->getMethodID(cls, "setConsiderParameters", "(Ljava/util/List;)V");
                  mids$[mid_setDataTypes_aa335fea495d60e0] = env->getMethodID(cls, "setDataTypes", "(Ljava/util/List;)V");
                  mids$[mid_setEpoch_8497861b879c83f7] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setEpochEigenInt_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setEpochEigenInt", "(D)V");
                  mids$[mid_setEpochEigenMaj_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setEpochEigenMaj", "(D)V");
                  mids$[mid_setEpochEigenMin_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setEpochEigenMin", "(D)V");
                  mids$[mid_setGdop_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setGdop", "(D)V");
                  mids$[mid_setId_105e1eadb709d9ac] = env->getMethodID(cls, "setId", "(Ljava/lang/String;)V");
                  mids$[mid_setMaxPredictedEigenMaj_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMaxPredictedEigenMaj", "(D)V");
                  mids$[mid_setMaximumObsGap_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMaximumObsGap", "(D)V");
                  mids$[mid_setMethod_37ce467d38827aa0] = env->getMethodID(cls, "setMethod", "(Lorg/orekit/files/ccsds/definitions/OdMethodFacade;)V");
                  mids$[mid_setMinPredictedEigenMin_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMinPredictedEigenMin", "(D)V");
                  mids$[mid_setObsAvailable_8fd427ab23829bf5] = env->getMethodID(cls, "setObsAvailable", "(I)V");
                  mids$[mid_setObsUsed_8fd427ab23829bf5] = env->getMethodID(cls, "setObsUsed", "(I)V");
                  mids$[mid_setPrevId_105e1eadb709d9ac] = env->getMethodID(cls, "setPrevId", "(Ljava/lang/String;)V");
                  mids$[mid_setRecommendedOdSpan_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRecommendedOdSpan", "(D)V");
                  mids$[mid_setSedr_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSedr", "(D)V");
                  mids$[mid_setSensors_aa335fea495d60e0] = env->getMethodID(cls, "setSensors", "(Ljava/util/List;)V");
                  mids$[mid_setSensorsN_8fd427ab23829bf5] = env->getMethodID(cls, "setSensorsN", "(I)V");
                  mids$[mid_setSolveN_8fd427ab23829bf5] = env->getMethodID(cls, "setSolveN", "(I)V");
                  mids$[mid_setSolveStates_aa335fea495d60e0] = env->getMethodID(cls, "setSolveStates", "(Ljava/util/List;)V");
                  mids$[mid_setTimeSinceFirstObservation_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTimeSinceFirstObservation", "(D)V");
                  mids$[mid_setTimeSinceLastObservation_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTimeSinceLastObservation", "(D)V");
                  mids$[mid_setTracksAvailable_8fd427ab23829bf5] = env->getMethodID(cls, "setTracksAvailable", "(I)V");
                  mids$[mid_setTracksUsed_8fd427ab23829bf5] = env->getMethodID(cls, "setTracksUsed", "(I)V");
                  mids$[mid_setWeightedRms_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setWeightedRms", "(D)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitDetermination::OrbitDetermination() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jdouble OrbitDetermination::getActualOdSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getActualOdSpan_9981f74b2d109da6]);
              }

              jdouble OrbitDetermination::getConfidence() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getConfidence_9981f74b2d109da6]);
              }

              jint OrbitDetermination::getConsiderN() const
              {
                return env->callIntMethod(this$, mids$[mid_getConsiderN_d6ab429752e7c267]);
              }

              ::java::util::List OrbitDetermination::getConsiderParameters() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getConsiderParameters_d751c1a57012b438]));
              }

              ::java::util::List OrbitDetermination::getDataTypes() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataTypes_d751c1a57012b438]));
              }

              ::org::orekit::time::AbsoluteDate OrbitDetermination::getEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_80e11148db499dda]));
              }

              jdouble OrbitDetermination::getEpochEigenInt() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenInt_9981f74b2d109da6]);
              }

              jdouble OrbitDetermination::getEpochEigenMaj() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenMaj_9981f74b2d109da6]);
              }

              jdouble OrbitDetermination::getEpochEigenMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenMin_9981f74b2d109da6]);
              }

              jdouble OrbitDetermination::getGdop() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGdop_9981f74b2d109da6]);
              }

              ::java::lang::String OrbitDetermination::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
              }

              jdouble OrbitDetermination::getMaxPredictedEigenMaj() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxPredictedEigenMaj_9981f74b2d109da6]);
              }

              jdouble OrbitDetermination::getMaximumObsGap() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaximumObsGap_9981f74b2d109da6]);
              }

              ::org::orekit::files::ccsds::definitions::OdMethodFacade OrbitDetermination::getMethod() const
              {
                return ::org::orekit::files::ccsds::definitions::OdMethodFacade(env->callObjectMethod(this$, mids$[mid_getMethod_fe70e48f0b8fd382]));
              }

              jdouble OrbitDetermination::getMinPredictedEigenMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMinPredictedEigenMin_9981f74b2d109da6]);
              }

              jint OrbitDetermination::getObsAvailable() const
              {
                return env->callIntMethod(this$, mids$[mid_getObsAvailable_d6ab429752e7c267]);
              }

              jint OrbitDetermination::getObsUsed() const
              {
                return env->callIntMethod(this$, mids$[mid_getObsUsed_d6ab429752e7c267]);
              }

              ::java::lang::String OrbitDetermination::getPrevId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevId_d2c8eb4129821f0e]));
              }

              jdouble OrbitDetermination::getRecommendedOdSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRecommendedOdSpan_9981f74b2d109da6]);
              }

              jdouble OrbitDetermination::getSedr() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSedr_9981f74b2d109da6]);
              }

              ::java::util::List OrbitDetermination::getSensors() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSensors_d751c1a57012b438]));
              }

              jint OrbitDetermination::getSensorsN() const
              {
                return env->callIntMethod(this$, mids$[mid_getSensorsN_d6ab429752e7c267]);
              }

              jint OrbitDetermination::getSolveN() const
              {
                return env->callIntMethod(this$, mids$[mid_getSolveN_d6ab429752e7c267]);
              }

              ::java::util::List OrbitDetermination::getSolveStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSolveStates_d751c1a57012b438]));
              }

              jdouble OrbitDetermination::getTimeSinceFirstObservation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSinceFirstObservation_9981f74b2d109da6]);
              }

              jdouble OrbitDetermination::getTimeSinceLastObservation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSinceLastObservation_9981f74b2d109da6]);
              }

              jint OrbitDetermination::getTracksAvailable() const
              {
                return env->callIntMethod(this$, mids$[mid_getTracksAvailable_d6ab429752e7c267]);
              }

              jint OrbitDetermination::getTracksUsed() const
              {
                return env->callIntMethod(this$, mids$[mid_getTracksUsed_d6ab429752e7c267]);
              }

              jdouble OrbitDetermination::getWeightedRms() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWeightedRms_9981f74b2d109da6]);
              }

              void OrbitDetermination::setActualOdSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setActualOdSpan_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::setConfidence(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConfidence_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::setConsiderN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConsiderN_8fd427ab23829bf5], a0);
              }

              void OrbitDetermination::setConsiderParameters(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConsiderParameters_aa335fea495d60e0], a0.this$);
              }

              void OrbitDetermination::setDataTypes(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDataTypes_aa335fea495d60e0], a0.this$);
              }

              void OrbitDetermination::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpoch_8497861b879c83f7], a0.this$);
              }

              void OrbitDetermination::setEpochEigenInt(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenInt_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::setEpochEigenMaj(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenMaj_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::setEpochEigenMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenMin_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::setGdop(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGdop_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::setId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setId_105e1eadb709d9ac], a0.this$);
              }

              void OrbitDetermination::setMaxPredictedEigenMaj(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxPredictedEigenMaj_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::setMaximumObsGap(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaximumObsGap_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::setMethod(const ::org::orekit::files::ccsds::definitions::OdMethodFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMethod_37ce467d38827aa0], a0.this$);
              }

              void OrbitDetermination::setMinPredictedEigenMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMinPredictedEigenMin_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::setObsAvailable(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObsAvailable_8fd427ab23829bf5], a0);
              }

              void OrbitDetermination::setObsUsed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObsUsed_8fd427ab23829bf5], a0);
              }

              void OrbitDetermination::setPrevId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevId_105e1eadb709d9ac], a0.this$);
              }

              void OrbitDetermination::setRecommendedOdSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRecommendedOdSpan_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::setSedr(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSedr_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::setSensors(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensors_aa335fea495d60e0], a0.this$);
              }

              void OrbitDetermination::setSensorsN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorsN_8fd427ab23829bf5], a0);
              }

              void OrbitDetermination::setSolveN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolveN_8fd427ab23829bf5], a0);
              }

              void OrbitDetermination::setSolveStates(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolveStates_aa335fea495d60e0], a0.this$);
              }

              void OrbitDetermination::setTimeSinceFirstObservation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSinceFirstObservation_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::setTimeSinceLastObservation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSinceLastObservation_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::setTracksAvailable(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTracksAvailable_8fd427ab23829bf5], a0);
              }

              void OrbitDetermination::setTracksUsed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTracksUsed_8fd427ab23829bf5], a0);
              }

              void OrbitDetermination::setWeightedRms(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWeightedRms_1ad26e8c8c0cd65b], a0);
              }

              void OrbitDetermination::validate(jdouble a0) const
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
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitDetermination_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDetermination_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitDetermination_init_(t_OrbitDetermination *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitDetermination_getActualOdSpan(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getConfidence(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getConsiderN(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getConsiderParameters(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getDataTypes(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpoch(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpochEigenInt(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpochEigenMaj(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getEpochEigenMin(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getGdop(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getId(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMaxPredictedEigenMaj(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMaximumObsGap(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMethod(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getMinPredictedEigenMin(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getObsAvailable(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getObsUsed(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getPrevId(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getRecommendedOdSpan(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSedr(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSensors(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSensorsN(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSolveN(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getSolveStates(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTimeSinceFirstObservation(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTimeSinceLastObservation(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTracksAvailable(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getTracksUsed(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_getWeightedRms(t_OrbitDetermination *self);
              static PyObject *t_OrbitDetermination_setActualOdSpan(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setConfidence(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setConsiderN(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setConsiderParameters(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setDataTypes(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpoch(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpochEigenInt(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpochEigenMaj(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setEpochEigenMin(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setGdop(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setId(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMaxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMaximumObsGap(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMethod(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setMinPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setObsAvailable(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setObsUsed(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setPrevId(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setRecommendedOdSpan(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSedr(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSensors(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSensorsN(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSolveN(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setSolveStates(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTimeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTimeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTracksAvailable(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setTracksUsed(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_setWeightedRms(t_OrbitDetermination *self, PyObject *arg);
              static PyObject *t_OrbitDetermination_validate(t_OrbitDetermination *self, PyObject *args);
              static PyObject *t_OrbitDetermination_get__actualOdSpan(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__actualOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__confidence(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__confidence(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__considerN(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__considerN(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__considerParameters(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__considerParameters(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__dataTypes(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__dataTypes(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epoch(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epoch(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epochEigenInt(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epochEigenInt(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epochEigenMaj(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epochEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__epochEigenMin(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__epochEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__gdop(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__gdop(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__id(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__id(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__maxPredictedEigenMaj(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__maxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__maximumObsGap(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__maximumObsGap(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__method(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__method(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__minPredictedEigenMin(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__minPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__obsAvailable(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__obsAvailable(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__obsUsed(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__obsUsed(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__prevId(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__prevId(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__recommendedOdSpan(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__recommendedOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__sedr(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__sedr(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__sensors(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__sensors(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__sensorsN(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__sensorsN(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__solveN(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__solveN(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__solveStates(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__solveStates(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__timeSinceFirstObservation(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__timeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__timeSinceLastObservation(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__timeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__tracksAvailable(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__tracksAvailable(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__tracksUsed(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__tracksUsed(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyObject *t_OrbitDetermination_get__weightedRms(t_OrbitDetermination *self, void *data);
              static int t_OrbitDetermination_set__weightedRms(t_OrbitDetermination *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitDetermination__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitDetermination, actualOdSpan),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, confidence),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, considerN),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, considerParameters),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, dataTypes),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epoch),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epochEigenInt),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epochEigenMaj),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, epochEigenMin),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, gdop),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, id),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, maxPredictedEigenMaj),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, maximumObsGap),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, method),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, minPredictedEigenMin),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, obsAvailable),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, obsUsed),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, prevId),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, recommendedOdSpan),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, sedr),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, sensors),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, sensorsN),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, solveN),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, solveStates),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, timeSinceFirstObservation),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, timeSinceLastObservation),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, tracksAvailable),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, tracksUsed),
                DECLARE_GETSET_FIELD(t_OrbitDetermination, weightedRms),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitDetermination__methods_[] = {
                DECLARE_METHOD(t_OrbitDetermination, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDetermination, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDetermination, getActualOdSpan, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getConfidence, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getConsiderN, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getConsiderParameters, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getDataTypes, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpochEigenInt, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpochEigenMaj, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getEpochEigenMin, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getGdop, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getId, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMaxPredictedEigenMaj, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMaximumObsGap, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMethod, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getMinPredictedEigenMin, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getObsAvailable, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getObsUsed, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getPrevId, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getRecommendedOdSpan, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSedr, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSensors, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSensorsN, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSolveN, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getSolveStates, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTimeSinceFirstObservation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTimeSinceLastObservation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTracksAvailable, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getTracksUsed, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, getWeightedRms, METH_NOARGS),
                DECLARE_METHOD(t_OrbitDetermination, setActualOdSpan, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setConfidence, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setConsiderN, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setConsiderParameters, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setDataTypes, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpoch, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpochEigenInt, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpochEigenMaj, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setEpochEigenMin, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setGdop, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setId, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMaxPredictedEigenMaj, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMaximumObsGap, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMethod, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setMinPredictedEigenMin, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setObsAvailable, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setObsUsed, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setPrevId, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setRecommendedOdSpan, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSedr, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSensors, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSensorsN, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSolveN, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setSolveStates, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTimeSinceFirstObservation, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTimeSinceLastObservation, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTracksAvailable, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setTracksUsed, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, setWeightedRms, METH_O),
                DECLARE_METHOD(t_OrbitDetermination, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitDetermination)[] = {
                { Py_tp_methods, t_OrbitDetermination__methods_ },
                { Py_tp_init, (void *) t_OrbitDetermination_init_ },
                { Py_tp_getset, t_OrbitDetermination__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitDetermination)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitDetermination, t_OrbitDetermination, OrbitDetermination);

              void t_OrbitDetermination::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitDetermination), &PY_TYPE_DEF(OrbitDetermination), module, "OrbitDetermination", 0);
              }

              void t_OrbitDetermination::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDetermination), "class_", make_descriptor(OrbitDetermination::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDetermination), "wrapfn_", make_descriptor(t_OrbitDetermination::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDetermination), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitDetermination_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitDetermination::initializeClass, 1)))
                  return NULL;
                return t_OrbitDetermination::wrap_Object(OrbitDetermination(((t_OrbitDetermination *) arg)->object.this$));
              }
              static PyObject *t_OrbitDetermination_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitDetermination::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitDetermination_init_(t_OrbitDetermination *self, PyObject *args, PyObject *kwds)
              {
                OrbitDetermination object((jobject) NULL);

                INT_CALL(object = OrbitDetermination());
                self->object = object;

                return 0;
              }

              static PyObject *t_OrbitDetermination_getActualOdSpan(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getActualOdSpan());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getConfidence(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getConfidence());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getConsiderN(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getConsiderN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getConsiderParameters(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getConsiderParameters());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getDataTypes(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getDataTypes());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getEpoch(t_OrbitDetermination *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitDetermination_getEpochEigenInt(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochEigenInt());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getEpochEigenMaj(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochEigenMaj());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getEpochEigenMin(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEpochEigenMin());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getGdop(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGdop());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getId(t_OrbitDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OrbitDetermination_getMaxPredictedEigenMaj(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxPredictedEigenMaj());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getMaximumObsGap(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaximumObsGap());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getMethod(t_OrbitDetermination *self)
              {
                ::org::orekit::files::ccsds::definitions::OdMethodFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_OdMethodFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitDetermination_getMinPredictedEigenMin(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMinPredictedEigenMin());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getObsAvailable(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getObsAvailable());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getObsUsed(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getObsUsed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getPrevId(t_OrbitDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrevId());
                return j2p(result);
              }

              static PyObject *t_OrbitDetermination_getRecommendedOdSpan(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRecommendedOdSpan());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getSedr(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSedr());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getSensors(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensors());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getSensorsN(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSensorsN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getSolveN(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSolveN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getSolveStates(t_OrbitDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSolveStates());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitDetermination_getTimeSinceFirstObservation(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTimeSinceFirstObservation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getTimeSinceLastObservation(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTimeSinceLastObservation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_getTracksAvailable(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getTracksAvailable());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getTracksUsed(t_OrbitDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getTracksUsed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitDetermination_getWeightedRms(t_OrbitDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWeightedRms());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitDetermination_setActualOdSpan(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setActualOdSpan(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setActualOdSpan", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setConfidence(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setConfidence(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConfidence", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setConsiderN(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setConsiderN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConsiderN", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setConsiderParameters(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setConsiderParameters(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setConsiderParameters", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setDataTypes(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setDataTypes(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDataTypes", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpoch(t_OrbitDetermination *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpochEigenInt(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochEigenInt(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochEigenInt", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpochEigenMaj(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochEigenMaj(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochEigenMaj", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setEpochEigenMin(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEpochEigenMin(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochEigenMin", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setGdop(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGdop(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGdop", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setId(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setId", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMaxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxPredictedEigenMaj(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxPredictedEigenMaj", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMaximumObsGap(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaximumObsGap(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaximumObsGap", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMethod(t_OrbitDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OdMethodFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OdMethodFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMethod", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setMinPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMinPredictedEigenMin(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMinPredictedEigenMin", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setObsAvailable(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setObsAvailable(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObsAvailable", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setObsUsed(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setObsUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObsUsed", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setPrevId(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrevId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrevId", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setRecommendedOdSpan(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRecommendedOdSpan(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRecommendedOdSpan", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSedr(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSedr(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSedr", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSensors(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setSensors(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensors", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSensorsN(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSensorsN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorsN", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSolveN(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSolveN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSolveN", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setSolveStates(t_OrbitDetermination *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setSolveStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSolveStates", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTimeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTimeSinceFirstObservation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTimeSinceFirstObservation", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTimeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTimeSinceLastObservation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTimeSinceLastObservation", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTracksAvailable(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setTracksAvailable(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTracksAvailable", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setTracksUsed(t_OrbitDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setTracksUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTracksUsed", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_setWeightedRms(t_OrbitDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWeightedRms(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWeightedRms", arg);
                return NULL;
              }

              static PyObject *t_OrbitDetermination_validate(t_OrbitDetermination *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitDetermination), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitDetermination_get__actualOdSpan(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getActualOdSpan());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__actualOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setActualOdSpan(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "actualOdSpan", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__confidence(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getConfidence());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__confidence(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setConfidence(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "confidence", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__considerN(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getConsiderN());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__considerN(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setConsiderN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "considerN", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__considerParameters(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getConsiderParameters());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__considerParameters(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setConsiderParameters(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "considerParameters", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__dataTypes(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getDataTypes());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__dataTypes(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDataTypes(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dataTypes", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epoch(t_OrbitDetermination *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__epoch(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epoch", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epochEigenInt(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochEigenInt());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__epochEigenInt(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochEigenInt(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochEigenInt", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epochEigenMaj(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochEigenMaj());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__epochEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochEigenMaj(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochEigenMaj", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__epochEigenMin(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEpochEigenMin());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__epochEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEpochEigenMin(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochEigenMin", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__gdop(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGdop());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__gdop(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGdop(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gdop", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__id(t_OrbitDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }
              static int t_OrbitDetermination_set__id(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "id", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__maxPredictedEigenMaj(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxPredictedEigenMaj());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__maxPredictedEigenMaj(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxPredictedEigenMaj(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxPredictedEigenMaj", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__maximumObsGap(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaximumObsGap());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__maximumObsGap(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaximumObsGap(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maximumObsGap", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__method(t_OrbitDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OdMethodFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_OdMethodFacade::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__method(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OdMethodFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OdMethodFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "method", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__minPredictedEigenMin(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMinPredictedEigenMin());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__minPredictedEigenMin(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMinPredictedEigenMin(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "minPredictedEigenMin", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__obsAvailable(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getObsAvailable());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__obsAvailable(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setObsAvailable(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "obsAvailable", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__obsUsed(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getObsUsed());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__obsUsed(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setObsUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "obsUsed", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__prevId(t_OrbitDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrevId());
                return j2p(value);
              }
              static int t_OrbitDetermination_set__prevId(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrevId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prevId", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__recommendedOdSpan(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRecommendedOdSpan());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__recommendedOdSpan(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRecommendedOdSpan(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "recommendedOdSpan", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__sedr(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSedr());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__sedr(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSedr(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sedr", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__sensors(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensors());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__sensors(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSensors(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensors", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__sensorsN(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSensorsN());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__sensorsN(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSensorsN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorsN", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__solveN(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSolveN());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__solveN(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSolveN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "solveN", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__solveStates(t_OrbitDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSolveStates());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitDetermination_set__solveStates(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSolveStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "solveStates", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__timeSinceFirstObservation(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTimeSinceFirstObservation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__timeSinceFirstObservation(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTimeSinceFirstObservation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "timeSinceFirstObservation", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__timeSinceLastObservation(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTimeSinceLastObservation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__timeSinceLastObservation(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTimeSinceLastObservation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "timeSinceLastObservation", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__tracksAvailable(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getTracksAvailable());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__tracksAvailable(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setTracksAvailable(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tracksAvailable", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__tracksUsed(t_OrbitDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getTracksUsed());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitDetermination_set__tracksUsed(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setTracksUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tracksUsed", arg);
                return -1;
              }

              static PyObject *t_OrbitDetermination_get__weightedRms(t_OrbitDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWeightedRms());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitDetermination_set__weightedRms(t_OrbitDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWeightedRms(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "weightedRms", arg);
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
#include "org/orekit/propagation/conversion/MidpointIntegratorBuilder.h"
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

        ::java::lang::Class *MidpointIntegratorBuilder::class$ = NULL;
        jmethodID *MidpointIntegratorBuilder::mids$ = NULL;
        bool MidpointIntegratorBuilder::live$ = false;

        jclass MidpointIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/MidpointIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointIntegratorBuilder::MidpointIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator MidpointIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
        static PyObject *t_MidpointIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MidpointIntegratorBuilder_init_(t_MidpointIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointIntegratorBuilder_buildIntegrator(t_MidpointIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_MidpointIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_MidpointIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointIntegratorBuilder)[] = {
          { Py_tp_methods, t_MidpointIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_MidpointIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MidpointIntegratorBuilder, t_MidpointIntegratorBuilder, MidpointIntegratorBuilder);

        void t_MidpointIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointIntegratorBuilder), &PY_TYPE_DEF(MidpointIntegratorBuilder), module, "MidpointIntegratorBuilder", 0);
        }

        void t_MidpointIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "class_", make_descriptor(MidpointIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "wrapfn_", make_descriptor(t_MidpointIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_MidpointIntegratorBuilder::wrap_Object(MidpointIntegratorBuilder(((t_MidpointIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_MidpointIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MidpointIntegratorBuilder_init_(t_MidpointIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          MidpointIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = MidpointIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointIntegratorBuilder_buildIntegrator(t_MidpointIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/propagation/analytical/FieldBrouwerLyddanePropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldBrouwerLyddanePropagator::class$ = NULL;
        jmethodID *FieldBrouwerLyddanePropagator::mids$ = NULL;
        bool FieldBrouwerLyddanePropagator::live$ = false;

        jclass FieldBrouwerLyddanePropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldBrouwerLyddanePropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6d3e5f987a830a3b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_539acfe2e5f6ae1b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_93669897f2f7c3ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_8394801004611be0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_b3dcad27f626eef5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_50c5d81ea750571b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_c265b32b1769c9e2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)V");
            mids$[mid_init$_9627b0b9a9290bd8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_516817cd6ce61a98] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_73d8738a0663d568] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_13e083b192b89480] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_a687bf3ab3b85a69] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_042321266dc0d7a4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDLorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_7eeadcd63d1294c8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDLorg/orekit/propagation/PropagationType;DDI)V");
            mids$[mid_computeMeanOrbit_7a3143cae3046017] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_computeMeanOrbit_def5f45776007919] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DDI)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_computeMeanOrbit_1c0a31ba9556e12f] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;DDDDDDDDI)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_getM2_9981f74b2d109da6] = env->getMethodID(cls, "getM2", "()D");
            mids$[mid_getM2_209f08246d708042] = env->getMethodID(cls, "getM2", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_1f755a1c628f7fb8] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_resetInitialState_8062511934471166] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_resetInitialState_b193ef1b0d3797c6] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_ef341cfbe40e092e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_cf010978f3c5a913] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_66f0dc53586b0de6] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;ZDI)V");
            mids$[mid_resetIntermediateState_e90aea08a7a0ab5e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6d3e5f987a830a3b, a0.this$, a1.this$, a2)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_539acfe2e5f6ae1b, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_93669897f2f7c3ab, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_8394801004611be0, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, jdouble a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b3dcad27f626eef5, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4, jdouble a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_50c5d81ea750571b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, jdouble a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c265b32b1769c9e2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5, jdouble a6) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9627b0b9a9290bd8, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_516817cd6ce61a98, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_73d8738a0663d568, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_13e083b192b89480, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a687bf3ab3b85a69, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_042321266dc0d7a4, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9.this$, a10)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_7eeadcd63d1294c8, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9.this$, a10, a11, a12)) {}

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_7a3143cae3046017], a0.this$, a1.this$, a2.this$, a3));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jdouble a4, jint a5)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_def5f45776007919], a0.this$, a1.this$, a2.this$, a3, a4, a5));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_1c0a31ba9556e12f], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        jdouble FieldBrouwerLyddanePropagator::getM2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_9981f74b2d109da6]);
        }

        jdouble FieldBrouwerLyddanePropagator::getM2(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_209f08246d708042], a0.this$);
        }

        ::java::util::List FieldBrouwerLyddanePropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_1f755a1c628f7fb8], a0.this$, a1.this$));
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8062511934471166], a0.this$);
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_b193ef1b0d3797c6], a0.this$, a1.this$);
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_ef341cfbe40e092e], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_FieldBrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBrouwerLyddanePropagator_of_(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static int t_FieldBrouwerLyddanePropagator_init_(t_FieldBrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldBrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_getM2(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_getParametersDrivers(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_propagateOrbit(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_resetInitialState(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_get__m2(t_FieldBrouwerLyddanePropagator *self, void *data);
        static PyObject *t_FieldBrouwerLyddanePropagator_get__parametersDrivers(t_FieldBrouwerLyddanePropagator *self, void *data);
        static PyObject *t_FieldBrouwerLyddanePropagator_get__parameters_(t_FieldBrouwerLyddanePropagator *self, void *data);
        static PyGetSetDef t_FieldBrouwerLyddanePropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBrouwerLyddanePropagator, m2),
          DECLARE_GET_FIELD(t_FieldBrouwerLyddanePropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldBrouwerLyddanePropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBrouwerLyddanePropagator__methods_[] = {
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, getM2, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, propagateOrbit, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBrouwerLyddanePropagator)[] = {
          { Py_tp_methods, t_FieldBrouwerLyddanePropagator__methods_ },
          { Py_tp_init, (void *) t_FieldBrouwerLyddanePropagator_init_ },
          { Py_tp_getset, t_FieldBrouwerLyddanePropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBrouwerLyddanePropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldBrouwerLyddanePropagator, t_FieldBrouwerLyddanePropagator, FieldBrouwerLyddanePropagator);
        PyObject *t_FieldBrouwerLyddanePropagator::wrap_Object(const FieldBrouwerLyddanePropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBrouwerLyddanePropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBrouwerLyddanePropagator *self = (t_FieldBrouwerLyddanePropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBrouwerLyddanePropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBrouwerLyddanePropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBrouwerLyddanePropagator *self = (t_FieldBrouwerLyddanePropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBrouwerLyddanePropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBrouwerLyddanePropagator), &PY_TYPE_DEF(FieldBrouwerLyddanePropagator), module, "FieldBrouwerLyddanePropagator", 0);
        }

        void t_FieldBrouwerLyddanePropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBrouwerLyddanePropagator), "class_", make_descriptor(FieldBrouwerLyddanePropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBrouwerLyddanePropagator), "wrapfn_", make_descriptor(t_FieldBrouwerLyddanePropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBrouwerLyddanePropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBrouwerLyddanePropagator::initializeClass, 1)))
            return NULL;
          return t_FieldBrouwerLyddanePropagator::wrap_Object(FieldBrouwerLyddanePropagator(((t_FieldBrouwerLyddanePropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldBrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBrouwerLyddanePropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_of_(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldBrouwerLyddanePropagator_init_(t_FieldBrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              jdouble a2;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_, &a3))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              jdouble a3;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KKkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              jdouble a3;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              jdouble a4;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              jdouble a5;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkkKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_, &a6))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              jdouble a11;
              jint a12;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDKDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10, &a11, &a12))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_FieldBrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "KkkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldBrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jint a5;
              ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "KkkDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldBrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "KDDDDDDDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldBrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_getM2(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getM2(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getM2", args);
          return NULL;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_getParametersDrivers(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldBrouwerLyddanePropagator), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_propagateOrbit(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

          if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0, a1));
            return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_resetInitialState(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "KKDI", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(FieldBrouwerLyddanePropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldBrouwerLyddanePropagator_get__parameters_(t_FieldBrouwerLyddanePropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_get__m2(t_FieldBrouwerLyddanePropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getM2());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_get__parametersDrivers(t_FieldBrouwerLyddanePropagator *self, void *data)
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
#include "org/orekit/propagation/numerical/PythonPartialsObserver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonPartialsObserver::class$ = NULL;
        jmethodID *PythonPartialsObserver::mids$ = NULL;
        bool PythonPartialsObserver::live$ = false;

        jclass PythonPartialsObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonPartialsObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_partialsComputed_c528401cf6a8f557] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPartialsObserver::PythonPartialsObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonPartialsObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonPartialsObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonPartialsObserver::pythonExtension(jlong a0) const
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
      namespace numerical {
        static PyObject *t_PythonPartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPartialsObserver_init_(t_PythonPartialsObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPartialsObserver_finalize(t_PythonPartialsObserver *self);
        static PyObject *t_PythonPartialsObserver_pythonExtension(t_PythonPartialsObserver *self, PyObject *args);
        static void JNICALL t_PythonPartialsObserver_partialsComputed0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonPartialsObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonPartialsObserver_get__self(t_PythonPartialsObserver *self, void *data);
        static PyGetSetDef t_PythonPartialsObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPartialsObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPartialsObserver__methods_[] = {
          DECLARE_METHOD(t_PythonPartialsObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPartialsObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPartialsObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPartialsObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPartialsObserver)[] = {
          { Py_tp_methods, t_PythonPartialsObserver__methods_ },
          { Py_tp_init, (void *) t_PythonPartialsObserver_init_ },
          { Py_tp_getset, t_PythonPartialsObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPartialsObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPartialsObserver, t_PythonPartialsObserver, PythonPartialsObserver);

        void t_PythonPartialsObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPartialsObserver), &PY_TYPE_DEF(PythonPartialsObserver), module, "PythonPartialsObserver", 1);
        }

        void t_PythonPartialsObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "class_", make_descriptor(PythonPartialsObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "wrapfn_", make_descriptor(t_PythonPartialsObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPartialsObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPartialsObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V", (void *) t_PythonPartialsObserver_partialsComputed0 },
            { "pythonDecRef", "()V", (void *) t_PythonPartialsObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonPartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPartialsObserver::initializeClass, 1)))
            return NULL;
          return t_PythonPartialsObserver::wrap_Object(PythonPartialsObserver(((t_PythonPartialsObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonPartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPartialsObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPartialsObserver_init_(t_PythonPartialsObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonPartialsObserver object((jobject) NULL);

          INT_CALL(object = PythonPartialsObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPartialsObserver_finalize(t_PythonPartialsObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPartialsObserver_pythonExtension(t_PythonPartialsObserver *self, PyObject *args)
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

        static void JNICALL t_PythonPartialsObserver_partialsComputed0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "partialsComputed", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonPartialsObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPartialsObserver::mids$[PythonPartialsObserver::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonPartialsObserver_get__self(t_PythonPartialsObserver *self, void *data)
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
#include "org/orekit/attitudes/NadirPointing.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *NadirPointing::class$ = NULL;
      jmethodID *NadirPointing::mids$ = NULL;
      bool NadirPointing::live$ = false;

      jclass NadirPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/NadirPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4230f72e1ec009db] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/BodyShape;)V");
          mids$[mid_getTargetPV_19719ebf0495cd86] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_11bfbaf3cce3e66c] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NadirPointing::NadirPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::BodyShape & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_4230f72e1ec009db, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates NadirPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_19719ebf0495cd86], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates NadirPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_11bfbaf3cce3e66c], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_NadirPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NadirPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_NadirPointing_init_(t_NadirPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NadirPointing_getTargetPV(t_NadirPointing *self, PyObject *args);

      static PyMethodDef t_NadirPointing__methods_[] = {
        DECLARE_METHOD(t_NadirPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NadirPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NadirPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NadirPointing)[] = {
        { Py_tp_methods, t_NadirPointing__methods_ },
        { Py_tp_init, (void *) t_NadirPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NadirPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(NadirPointing, t_NadirPointing, NadirPointing);

      void t_NadirPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(NadirPointing), &PY_TYPE_DEF(NadirPointing), module, "NadirPointing", 0);
      }

      void t_NadirPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NadirPointing), "class_", make_descriptor(NadirPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NadirPointing), "wrapfn_", make_descriptor(t_NadirPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NadirPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NadirPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NadirPointing::initializeClass, 1)))
          return NULL;
        return t_NadirPointing::wrap_Object(NadirPointing(((t_NadirPointing *) arg)->object.this$));
      }
      static PyObject *t_NadirPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NadirPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_NadirPointing_init_(t_NadirPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::bodies::BodyShape a1((jobject) NULL);
        NadirPointing object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1))
        {
          INT_CALL(object = NadirPointing(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_NadirPointing_getTargetPV(t_NadirPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/SearchInterval.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *SearchInterval::class$ = NULL;
        jmethodID *SearchInterval::mids$ = NULL;
        bool SearchInterval::live$ = false;

        jclass SearchInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/SearchInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getMax_9981f74b2d109da6] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_9981f74b2d109da6] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getStartValue_9981f74b2d109da6] = env->getMethodID(cls, "getStartValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SearchInterval::SearchInterval(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        SearchInterval::SearchInterval(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        jdouble SearchInterval::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_9981f74b2d109da6]);
        }

        jdouble SearchInterval::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_9981f74b2d109da6]);
        }

        jdouble SearchInterval::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_9981f74b2d109da6]);
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
      namespace univariate {
        static PyObject *t_SearchInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SearchInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SearchInterval_init_(t_SearchInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SearchInterval_getMax(t_SearchInterval *self);
        static PyObject *t_SearchInterval_getMin(t_SearchInterval *self);
        static PyObject *t_SearchInterval_getStartValue(t_SearchInterval *self);
        static PyObject *t_SearchInterval_get__max(t_SearchInterval *self, void *data);
        static PyObject *t_SearchInterval_get__min(t_SearchInterval *self, void *data);
        static PyObject *t_SearchInterval_get__startValue(t_SearchInterval *self, void *data);
        static PyGetSetDef t_SearchInterval__fields_[] = {
          DECLARE_GET_FIELD(t_SearchInterval, max),
          DECLARE_GET_FIELD(t_SearchInterval, min),
          DECLARE_GET_FIELD(t_SearchInterval, startValue),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SearchInterval__methods_[] = {
          DECLARE_METHOD(t_SearchInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SearchInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SearchInterval, getMax, METH_NOARGS),
          DECLARE_METHOD(t_SearchInterval, getMin, METH_NOARGS),
          DECLARE_METHOD(t_SearchInterval, getStartValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SearchInterval)[] = {
          { Py_tp_methods, t_SearchInterval__methods_ },
          { Py_tp_init, (void *) t_SearchInterval_init_ },
          { Py_tp_getset, t_SearchInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SearchInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SearchInterval, t_SearchInterval, SearchInterval);

        void t_SearchInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(SearchInterval), &PY_TYPE_DEF(SearchInterval), module, "SearchInterval", 0);
        }

        void t_SearchInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "class_", make_descriptor(SearchInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "wrapfn_", make_descriptor(t_SearchInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SearchInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SearchInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SearchInterval::initializeClass, 1)))
            return NULL;
          return t_SearchInterval::wrap_Object(SearchInterval(((t_SearchInterval *) arg)->object.this$));
        }
        static PyObject *t_SearchInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SearchInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SearchInterval_init_(t_SearchInterval *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SearchInterval object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SearchInterval(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              SearchInterval object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = SearchInterval(a0, a1, a2));
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

        static PyObject *t_SearchInterval_getMax(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_getMin(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_getStartValue(t_SearchInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SearchInterval_get__max(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SearchInterval_get__min(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SearchInterval_get__startValue(t_SearchInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonKalmanObserver.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonKalmanObserver::class$ = NULL;
        jmethodID *PythonKalmanObserver::mids$ = NULL;
        bool PythonKalmanObserver::live$ = false;

        jclass PythonKalmanObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonKalmanObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_evaluationPerformed_f81a8169e0b8e343] = env->getMethodID(cls, "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonKalmanObserver::PythonKalmanObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonKalmanObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonKalmanObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonKalmanObserver::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_PythonKalmanObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonKalmanObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonKalmanObserver_init_(t_PythonKalmanObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonKalmanObserver_finalize(t_PythonKalmanObserver *self);
        static PyObject *t_PythonKalmanObserver_pythonExtension(t_PythonKalmanObserver *self, PyObject *args);
        static void JNICALL t_PythonKalmanObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonKalmanObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonKalmanObserver_get__self(t_PythonKalmanObserver *self, void *data);
        static PyGetSetDef t_PythonKalmanObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonKalmanObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonKalmanObserver__methods_[] = {
          DECLARE_METHOD(t_PythonKalmanObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonKalmanObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonKalmanObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonKalmanObserver)[] = {
          { Py_tp_methods, t_PythonKalmanObserver__methods_ },
          { Py_tp_init, (void *) t_PythonKalmanObserver_init_ },
          { Py_tp_getset, t_PythonKalmanObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonKalmanObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonKalmanObserver, t_PythonKalmanObserver, PythonKalmanObserver);

        void t_PythonKalmanObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonKalmanObserver), &PY_TYPE_DEF(PythonKalmanObserver), module, "PythonKalmanObserver", 1);
        }

        void t_PythonKalmanObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "class_", make_descriptor(PythonKalmanObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "wrapfn_", make_descriptor(t_PythonKalmanObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonKalmanObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonKalmanObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V", (void *) t_PythonKalmanObserver_evaluationPerformed0 },
            { "pythonDecRef", "()V", (void *) t_PythonKalmanObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonKalmanObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonKalmanObserver::initializeClass, 1)))
            return NULL;
          return t_PythonKalmanObserver::wrap_Object(PythonKalmanObserver(((t_PythonKalmanObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonKalmanObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonKalmanObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonKalmanObserver_init_(t_PythonKalmanObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonKalmanObserver object((jobject) NULL);

          INT_CALL(object = PythonKalmanObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonKalmanObserver_finalize(t_PythonKalmanObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonKalmanObserver_pythonExtension(t_PythonKalmanObserver *self, PyObject *args)
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

        static void JNICALL t_PythonKalmanObserver_evaluationPerformed0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::sequential::t_KalmanEstimation::wrap_Object(::org::orekit::estimation::sequential::KalmanEstimation(a0));
          PyObject *result = PyObject_CallMethod(obj, "evaluationPerformed", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonKalmanObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonKalmanObserver::mids$[PythonKalmanObserver::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonKalmanObserver_get__self(t_PythonKalmanObserver *self, void *data)
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
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *WeatherModel::class$ = NULL;
          jmethodID *WeatherModel::mids$ = NULL;
          bool WeatherModel::live$ = false;

          jclass WeatherModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/WeatherModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_weatherParameters_281401e03841f11f] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void WeatherModel::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_281401e03841f11f], a0, a1.this$);
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
        namespace weather {
          static PyObject *t_WeatherModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WeatherModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WeatherModel_weatherParameters(t_WeatherModel *self, PyObject *args);

          static PyMethodDef t_WeatherModel__methods_[] = {
            DECLARE_METHOD(t_WeatherModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WeatherModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WeatherModel, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WeatherModel)[] = {
            { Py_tp_methods, t_WeatherModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WeatherModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(WeatherModel, t_WeatherModel, WeatherModel);

          void t_WeatherModel::install(PyObject *module)
          {
            installType(&PY_TYPE(WeatherModel), &PY_TYPE_DEF(WeatherModel), module, "WeatherModel", 0);
          }

          void t_WeatherModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "class_", make_descriptor(WeatherModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "wrapfn_", make_descriptor(t_WeatherModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WeatherModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WeatherModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WeatherModel::initializeClass, 1)))
              return NULL;
            return t_WeatherModel::wrap_Object(WeatherModel(((t_WeatherModel *) arg)->object.this$));
          }
          static PyObject *t_WeatherModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WeatherModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_WeatherModel_weatherParameters(t_WeatherModel *self, PyObject *args)
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.weatherParameters(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "weatherParameters", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *SymmetricGaussIntegrator::class$ = NULL;
          jmethodID *SymmetricGaussIntegrator::mids$ = NULL;
          bool SymmetricGaussIntegrator::live$ = false;

          jclass SymmetricGaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b0e5b4ae04bc40a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_integrate_f4604469c090863e] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/UnivariateFunction;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SymmetricGaussIntegrator::SymmetricGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b0e5b4ae04bc40a1, a0.this$)) {}

          SymmetricGaussIntegrator::SymmetricGaussIntegrator(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

          jdouble SymmetricGaussIntegrator::integrate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_integrate_f4604469c090863e], a0.this$);
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_SymmetricGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SymmetricGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SymmetricGaussIntegrator_init_(t_SymmetricGaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SymmetricGaussIntegrator_integrate(t_SymmetricGaussIntegrator *self, PyObject *args);

          static PyMethodDef t_SymmetricGaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_SymmetricGaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricGaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricGaussIntegrator, integrate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SymmetricGaussIntegrator)[] = {
            { Py_tp_methods, t_SymmetricGaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_SymmetricGaussIntegrator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SymmetricGaussIntegrator)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::GaussIntegrator),
            NULL
          };

          DEFINE_TYPE(SymmetricGaussIntegrator, t_SymmetricGaussIntegrator, SymmetricGaussIntegrator);

          void t_SymmetricGaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(SymmetricGaussIntegrator), &PY_TYPE_DEF(SymmetricGaussIntegrator), module, "SymmetricGaussIntegrator", 0);
          }

          void t_SymmetricGaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "class_", make_descriptor(SymmetricGaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "wrapfn_", make_descriptor(t_SymmetricGaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SymmetricGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SymmetricGaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_SymmetricGaussIntegrator::wrap_Object(SymmetricGaussIntegrator(((t_SymmetricGaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_SymmetricGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SymmetricGaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SymmetricGaussIntegrator_init_(t_SymmetricGaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                SymmetricGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = SymmetricGaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                SymmetricGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = SymmetricGaussIntegrator(a0, a1));
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

          static PyObject *t_SymmetricGaussIntegrator_integrate(t_SymmetricGaussIntegrator *self, PyObject *args)
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SymmetricGaussIntegrator), (PyObject *) self, "integrate", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonBoundedPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonBoundedPropagator::class$ = NULL;
      jmethodID *PythonBoundedPropagator::mids$ = NULL;
      bool PythonBoundedPropagator::live$ = false;

      jclass PythonBoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonBoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_b928bf8cc239d256] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_d5d8be0538a03d97] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_d751c1a57012b438] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_9f3d902ece22e1af] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_3bfef5c77ceb081a] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_8fbfa58855031235] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_f81c0644d57ae495] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMultiplexer_ddcdca7ad3c7f5e9] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_1e982279849c3b65] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_aaae977c62060398] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBoundedPropagator::PythonBoundedPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonBoundedPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonBoundedPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonBoundedPropagator::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBoundedPropagator_init_(t_PythonBoundedPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBoundedPropagator_finalize(t_PythonBoundedPropagator *self);
      static PyObject *t_PythonBoundedPropagator_pythonExtension(t_PythonBoundedPropagator *self, PyObject *args);
      static void JNICALL t_PythonBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonBoundedPropagator_get__self(t_PythonBoundedPropagator *self, void *data);
      static PyGetSetDef t_PythonBoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBoundedPropagator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonBoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBoundedPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBoundedPropagator)[] = {
        { Py_tp_methods, t_PythonBoundedPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonBoundedPropagator_init_ },
        { Py_tp_getset, t_PythonBoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBoundedPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBoundedPropagator, t_PythonBoundedPropagator, PythonBoundedPropagator);

      void t_PythonBoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBoundedPropagator), &PY_TYPE_DEF(PythonBoundedPropagator), module, "PythonBoundedPropagator", 1);
      }

      void t_PythonBoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedPropagator), "class_", make_descriptor(PythonBoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedPropagator), "wrapfn_", make_descriptor(t_PythonBoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBoundedPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V", (void *) t_PythonBoundedPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonBoundedPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonBoundedPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonBoundedPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonBoundedPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;", (void *) t_PythonBoundedPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonBoundedPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonBoundedPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonBoundedPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonBoundedPropagator_getManagedAdditionalStates9 },
          { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedPropagator_getMaxDate10 },
          { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedPropagator_getMinDate11 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;", (void *) t_PythonBoundedPropagator_getMultiplexer12 },
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonBoundedPropagator_getPVCoordinates13 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonBoundedPropagator_isAdditionalStateManaged14 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonBoundedPropagator_propagate15 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonBoundedPropagator_propagate16 },
          { "pythonDecRef", "()V", (void *) t_PythonBoundedPropagator_pythonDecRef17 },
          { "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonBoundedPropagator_resetInitialState18 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonBoundedPropagator_setAttitudeProvider19 },
        };
        env->registerNatives(cls, methods, 20);
      }

      static PyObject *t_PythonBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonBoundedPropagator::wrap_Object(PythonBoundedPropagator(((t_PythonBoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBoundedPropagator_init_(t_PythonBoundedPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonBoundedPropagator object((jobject) NULL);

        INT_CALL(object = PythonBoundedPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBoundedPropagator_finalize(t_PythonBoundedPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBoundedPropagator_pythonExtension(t_PythonBoundedPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_AdditionalStateProvider::wrap_Object(::org::orekit::propagation::AdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::EphemerisGenerator::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::StepHandlerMultiplexer::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
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

      static jboolean JNICALL t_PythonBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
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

      static jobject JNICALL t_PythonBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
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

      static void JNICALL t_PythonBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static PyObject *t_PythonBoundedPropagator_get__self(t_PythonBoundedPropagator *self, void *data)
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
#include "org/orekit/utils/PythonStateFunction.h"
#include "org/orekit/utils/StateFunction.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonStateFunction::class$ = NULL;
      jmethodID *PythonStateFunction::mids$ = NULL;
      bool PythonStateFunction::live$ = false;

      jclass PythonStateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonStateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_e8a4ac02afc72623] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStateFunction::PythonStateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonStateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonStateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonStateFunction::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonStateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStateFunction_init_(t_PythonStateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStateFunction_finalize(t_PythonStateFunction *self);
      static PyObject *t_PythonStateFunction_pythonExtension(t_PythonStateFunction *self, PyObject *args);
      static void JNICALL t_PythonStateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonStateFunction_get__self(t_PythonStateFunction *self, void *data);
      static PyGetSetDef t_PythonStateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonStateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStateFunction)[] = {
        { Py_tp_methods, t_PythonStateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonStateFunction_init_ },
        { Py_tp_getset, t_PythonStateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStateFunction, t_PythonStateFunction, PythonStateFunction);

      void t_PythonStateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStateFunction), &PY_TYPE_DEF(PythonStateFunction), module, "PythonStateFunction", 1);
      }

      void t_PythonStateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "class_", make_descriptor(PythonStateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "wrapfn_", make_descriptor(t_PythonStateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonStateFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/propagation/SpacecraftState;)[D", (void *) t_PythonStateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonStateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonStateFunction::wrap_Object(PythonStateFunction(((t_PythonStateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonStateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStateFunction_init_(t_PythonStateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonStateFunction object((jobject) NULL);

        INT_CALL(object = PythonStateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStateFunction_finalize(t_PythonStateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStateFunction_pythonExtension(t_PythonStateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonStateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonStateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
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

      static PyObject *t_PythonStateFunction_get__self(t_PythonStateFunction *self, void *data)
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
#include "org/orekit/propagation/numerical/FieldNumericalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/forces/ForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *FieldNumericalPropagator::class$ = NULL;
        jmethodID *FieldNumericalPropagator::mids$ = NULL;
        bool FieldNumericalPropagator::live$ = false;

        jclass FieldNumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/FieldNumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b353d6632be7c963] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;)V");
            mids$[mid_init$_883560a039191ab2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_33ce7dbdc1ed7751] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_getAllForceModels_d751c1a57012b438] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_removeForceModels_ff7cb6c242604316] = env->getMethodID(cls, "removeForceModels", "()V");
            mids$[mid_resetInitialState_8062511934471166] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_setIgnoreCentralAttraction_b35db77cae58639e] = env->getMethodID(cls, "setIgnoreCentralAttraction", "(Z)V");
            mids$[mid_setInitialState_8062511934471166] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_setMu_f63ca9e3185c722e] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setOrbitType_faf186fbb93ad060] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_266be23fd67cbce4] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_tolerances_193db9de8c584870] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_tolerances_975f5a72b849d315] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_createMapper_ebf7e979efef9b20] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_getMainStateEquations_3bc41c7526b7eb7c] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNumericalPropagator::FieldNumericalPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_b353d6632be7c963, a0.this$, a1.this$)) {}

        FieldNumericalPropagator::FieldNumericalPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_883560a039191ab2, a0.this$, a1.this$, a2.this$)) {}

        void FieldNumericalPropagator::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_33ce7dbdc1ed7751], a0.this$);
        }

        ::java::util::List FieldNumericalPropagator::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_d751c1a57012b438]));
        }

        ::org::orekit::orbits::OrbitType FieldNumericalPropagator::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldNumericalPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_1b1a4229447f7bf7], a0.this$, a1.this$));
        }

        ::org::orekit::orbits::PositionAngleType FieldNumericalPropagator::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
        }

        void FieldNumericalPropagator::removeForceModels() const
        {
          env->callVoidMethod(this$, mids$[mid_removeForceModels_ff7cb6c242604316]);
        }

        void FieldNumericalPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8062511934471166], a0.this$);
        }

        void FieldNumericalPropagator::setIgnoreCentralAttraction(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIgnoreCentralAttraction_b35db77cae58639e], a0);
        }

        void FieldNumericalPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialState_8062511934471166], a0.this$);
        }

        void FieldNumericalPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_f63ca9e3185c722e], a0.this$);
        }

        void FieldNumericalPropagator::setOrbitType(const ::org::orekit::orbits::OrbitType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitType_faf186fbb93ad060], a0.this$);
        }

        void FieldNumericalPropagator::setPositionAngleType(const ::org::orekit::orbits::PositionAngleType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_266be23fd67cbce4], a0.this$);
        }

        JArray< JArray< jdouble > > FieldNumericalPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::orekit::orbits::OrbitType & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_193db9de8c584870], a0.this$, a1.this$, a2.this$));
        }

        JArray< JArray< jdouble > > FieldNumericalPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::orbits::OrbitType & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_975f5a72b849d315], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace numerical {
        static PyObject *t_FieldNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_of_(t_FieldNumericalPropagator *self, PyObject *args);
        static int t_FieldNumericalPropagator_init_(t_FieldNumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNumericalPropagator_addForceModel(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_getAllForceModels(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_getOrbitType(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_getPVCoordinates(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_getPositionAngleType(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_removeForceModels(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_resetInitialState(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_setIgnoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setInitialState(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setMu(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_setOrbitType(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setPositionAngleType(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_tolerances(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_get__allForceModels(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__ignoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static int t_FieldNumericalPropagator_set__initialState(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static int t_FieldNumericalPropagator_set__mu(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__orbitType(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__orbitType(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__positionAngleType(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__positionAngleType(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__parameters_(t_FieldNumericalPropagator *self, void *data);
        static PyGetSetDef t_FieldNumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNumericalPropagator, allForceModels),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, ignoreCentralAttraction),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, initialState),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, mu),
          DECLARE_GETSET_FIELD(t_FieldNumericalPropagator, orbitType),
          DECLARE_GETSET_FIELD(t_FieldNumericalPropagator, positionAngleType),
          DECLARE_GET_FIELD(t_FieldNumericalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldNumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNumericalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, addForceModel, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, removeForceModels, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, setIgnoreCentralAttraction, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setInitialState, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setMu, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, setOrbitType, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setPositionAngleType, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, tolerances, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNumericalPropagator)[] = {
          { Py_tp_methods, t_FieldNumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_FieldNumericalPropagator_init_ },
          { Py_tp_getset, t_FieldNumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(FieldNumericalPropagator, t_FieldNumericalPropagator, FieldNumericalPropagator);
        PyObject *t_FieldNumericalPropagator::wrap_Object(const FieldNumericalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNumericalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNumericalPropagator *self = (t_FieldNumericalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNumericalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNumericalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNumericalPropagator *self = (t_FieldNumericalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNumericalPropagator), &PY_TYPE_DEF(FieldNumericalPropagator), module, "FieldNumericalPropagator", 0);
        }

        void t_FieldNumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "class_", make_descriptor(FieldNumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "wrapfn_", make_descriptor(t_FieldNumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldNumericalPropagator::wrap_Object(FieldNumericalPropagator(((t_FieldNumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNumericalPropagator_of_(t_FieldNumericalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNumericalPropagator_init_(t_FieldNumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
              PyTypeObject **p1;
              FieldNumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
              {
                INT_CALL(object = FieldNumericalPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              FieldNumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2))
              {
                INT_CALL(object = FieldNumericalPropagator(a0, a1, a2));
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

        static PyObject *t_FieldNumericalPropagator_addForceModel(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_getAllForceModels(t_FieldNumericalPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_FieldNumericalPropagator_getOrbitType(t_FieldNumericalPropagator *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_FieldNumericalPropagator_getPVCoordinates(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_getPositionAngleType(t_FieldNumericalPropagator *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_FieldNumericalPropagator_removeForceModels(t_FieldNumericalPropagator *self)
        {
          OBJ_CALL(self->object.removeForceModels());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldNumericalPropagator_resetInitialState(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_setIgnoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIgnoreCentralAttraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIgnoreCentralAttraction", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setInitialState(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.setInitialState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialState", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setMu(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "setMu", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_setOrbitType(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::OrbitType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(self->object.setOrbitType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitType", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setPositionAngleType(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
          {
            OBJ_CALL(self->object.setPositionAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPositionAngleType", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_tolerances(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::FieldNumericalPropagator::tolerances(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::orbits::OrbitType a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::FieldNumericalPropagator::tolerances(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError(type, "tolerances", args);
          return NULL;
        }
        static PyObject *t_FieldNumericalPropagator_get__parameters_(t_FieldNumericalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNumericalPropagator_get__allForceModels(t_FieldNumericalPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_FieldNumericalPropagator_set__ignoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setIgnoreCentralAttraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ignoreCentralAttraction", arg);
          return -1;
        }

        static int t_FieldNumericalPropagator_set__initialState(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialState", arg);
          return -1;
        }

        static int t_FieldNumericalPropagator_set__mu(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_FieldNumericalPropagator_get__orbitType(t_FieldNumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }
        static int t_FieldNumericalPropagator_set__orbitType(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
            {
              INT_CALL(self->object.setOrbitType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitType", arg);
          return -1;
        }

        static PyObject *t_FieldNumericalPropagator_get__positionAngleType(t_FieldNumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
        static int t_FieldNumericalPropagator_set__positionAngleType(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
            {
              INT_CALL(self->object.setPositionAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "positionAngleType", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/fraction/Fraction$ConvergenceTest.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/lang/Boolean.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Object.h"
#include "org/hipparchus/fraction/FractionField.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *Fraction::class$ = NULL;
      jmethodID *Fraction::mids$ = NULL;
      bool Fraction::live$ = false;
      Fraction *Fraction::FOUR_FIFTHS = NULL;
      Fraction *Fraction::MINUS_ONE = NULL;
      Fraction *Fraction::ONE = NULL;
      Fraction *Fraction::ONE_FIFTH = NULL;
      Fraction *Fraction::ONE_HALF = NULL;
      Fraction *Fraction::ONE_QUARTER = NULL;
      Fraction *Fraction::ONE_THIRD = NULL;
      Fraction *Fraction::THREE_FIFTHS = NULL;
      Fraction *Fraction::THREE_QUARTERS = NULL;
      Fraction *Fraction::TWO = NULL;
      Fraction *Fraction::TWO_FIFTHS = NULL;
      Fraction *Fraction::TWO_QUARTERS = NULL;
      Fraction *Fraction::TWO_THIRDS = NULL;
      Fraction *Fraction::ZERO = NULL;

      jclass Fraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/Fraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_0fd8efd9eecb8663] = env->getMethodID(cls, "<init>", "(DI)V");
          mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_905e65280a4e6722] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_abs_8e8b2db4820cf02e] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_add_50b9b9b0f187c25b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_add_ef49e40a8dbc79e6] = env->getMethodID(cls, "add", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_compareTo_82b2dc26883caac1] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/fraction/Fraction;)I");
          mids$[mid_convergent_81bd681e29e7b96a] = env->getStaticMethodID(cls, "convergent", "(DILorg/hipparchus/fraction/Fraction$ConvergenceTest;)Lorg/hipparchus/util/Pair;");
          mids$[mid_convergents_df90c0ab75ef97f0] = env->getStaticMethodID(cls, "convergents", "(DI)Ljava/util/stream/Stream;");
          mids$[mid_divide_50b9b9b0f187c25b] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_divide_ef49e40a8dbc79e6] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_doubleValue_9981f74b2d109da6] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_floatValue_0e3b995f823d65ff] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_getDenominator_d6ab429752e7c267] = env->getMethodID(cls, "getDenominator", "()I");
          mids$[mid_getField_d1ee112cc568c3bb] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/fraction/FractionField;");
          mids$[mid_getNumerator_d6ab429752e7c267] = env->getMethodID(cls, "getNumerator", "()I");
          mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getReducedFraction_f6b277f2c5d432df] = env->getStaticMethodID(cls, "getReducedFraction", "(II)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_intValue_d6ab429752e7c267] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInteger_eee3de00fe971136] = env->getMethodID(cls, "isInteger", "()Z");
          mids$[mid_longValue_42c72b98e3c2e08a] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_50b9b9b0f187c25b] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_multiply_ef49e40a8dbc79e6] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_negate_8e8b2db4820cf02e] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_percentageValue_9981f74b2d109da6] = env->getMethodID(cls, "percentageValue", "()D");
          mids$[mid_reciprocal_8e8b2db4820cf02e] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_signum_d6ab429752e7c267] = env->getMethodID(cls, "signum", "()I");
          mids$[mid_subtract_50b9b9b0f187c25b] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/fraction/Fraction;)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_subtract_ef49e40a8dbc79e6] = env->getMethodID(cls, "subtract", "(I)Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FOUR_FIFTHS = new Fraction(env->getStaticObjectField(cls, "FOUR_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          MINUS_ONE = new Fraction(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/fraction/Fraction;"));
          ONE = new Fraction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_FIFTH = new Fraction(env->getStaticObjectField(cls, "ONE_FIFTH", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_HALF = new Fraction(env->getStaticObjectField(cls, "ONE_HALF", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_QUARTER = new Fraction(env->getStaticObjectField(cls, "ONE_QUARTER", "Lorg/hipparchus/fraction/Fraction;"));
          ONE_THIRD = new Fraction(env->getStaticObjectField(cls, "ONE_THIRD", "Lorg/hipparchus/fraction/Fraction;"));
          THREE_FIFTHS = new Fraction(env->getStaticObjectField(cls, "THREE_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          THREE_QUARTERS = new Fraction(env->getStaticObjectField(cls, "THREE_QUARTERS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO = new Fraction(env->getStaticObjectField(cls, "TWO", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_FIFTHS = new Fraction(env->getStaticObjectField(cls, "TWO_FIFTHS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_QUARTERS = new Fraction(env->getStaticObjectField(cls, "TWO_QUARTERS", "Lorg/hipparchus/fraction/Fraction;"));
          TWO_THIRDS = new Fraction(env->getStaticObjectField(cls, "TWO_THIRDS", "Lorg/hipparchus/fraction/Fraction;"));
          ZERO = new Fraction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/fraction/Fraction;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Fraction::Fraction(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

      Fraction::Fraction(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      Fraction::Fraction(jdouble a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_0fd8efd9eecb8663, a0, a1)) {}

      Fraction::Fraction(jint a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

      Fraction::Fraction(jdouble a0, jdouble a1, jint a2) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_905e65280a4e6722, a0, a1, a2)) {}

      Fraction Fraction::abs() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_abs_8e8b2db4820cf02e]));
      }

      Fraction Fraction::add(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_add_50b9b9b0f187c25b], a0.this$));
      }

      Fraction Fraction::add(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_add_ef49e40a8dbc79e6], a0));
      }

      jint Fraction::compareTo(const Fraction & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_82b2dc26883caac1], a0.this$);
      }

      ::org::hipparchus::util::Pair Fraction::convergent(jdouble a0, jint a1, const ::org::hipparchus::fraction::Fraction$ConvergenceTest & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::Pair(env->callStaticObjectMethod(cls, mids$[mid_convergent_81bd681e29e7b96a], a0, a1, a2.this$));
      }

      ::java::util::stream::Stream Fraction::convergents(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_convergents_df90c0ab75ef97f0], a0, a1));
      }

      Fraction Fraction::divide(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_divide_50b9b9b0f187c25b], a0.this$));
      }

      Fraction Fraction::divide(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_divide_ef49e40a8dbc79e6], a0));
      }

      jdouble Fraction::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_9981f74b2d109da6]);
      }

      jboolean Fraction::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      jfloat Fraction::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_0e3b995f823d65ff]);
      }

      jint Fraction::getDenominator() const
      {
        return env->callIntMethod(this$, mids$[mid_getDenominator_d6ab429752e7c267]);
      }

      ::org::hipparchus::fraction::FractionField Fraction::getField() const
      {
        return ::org::hipparchus::fraction::FractionField(env->callObjectMethod(this$, mids$[mid_getField_d1ee112cc568c3bb]));
      }

      jint Fraction::getNumerator() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumerator_d6ab429752e7c267]);
      }

      jdouble Fraction::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
      }

      Fraction Fraction::getReducedFraction(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Fraction(env->callStaticObjectMethod(cls, mids$[mid_getReducedFraction_f6b277f2c5d432df], a0, a1));
      }

      jint Fraction::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      jint Fraction::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_d6ab429752e7c267]);
      }

      jboolean Fraction::isInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInteger_eee3de00fe971136]);
      }

      jlong Fraction::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_42c72b98e3c2e08a]);
      }

      Fraction Fraction::multiply(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_multiply_50b9b9b0f187c25b], a0.this$));
      }

      Fraction Fraction::multiply(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_multiply_ef49e40a8dbc79e6], a0));
      }

      Fraction Fraction::negate() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_negate_8e8b2db4820cf02e]));
      }

      jdouble Fraction::percentageValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_percentageValue_9981f74b2d109da6]);
      }

      Fraction Fraction::reciprocal() const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_reciprocal_8e8b2db4820cf02e]));
      }

      jint Fraction::signum() const
      {
        return env->callIntMethod(this$, mids$[mid_signum_d6ab429752e7c267]);
      }

      Fraction Fraction::subtract(const Fraction & a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_subtract_50b9b9b0f187c25b], a0.this$));
      }

      Fraction Fraction::subtract(jint a0) const
      {
        return Fraction(env->callObjectMethod(this$, mids$[mid_subtract_ef49e40a8dbc79e6], a0));
      }

      ::java::lang::String Fraction::toString() const
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
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_Fraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Fraction_init_(t_Fraction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Fraction_abs(t_Fraction *self);
      static PyObject *t_Fraction_add(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_compareTo(t_Fraction *self, PyObject *arg);
      static PyObject *t_Fraction_convergent(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_convergents(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_divide(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_doubleValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_equals(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_floatValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_getDenominator(t_Fraction *self);
      static PyObject *t_Fraction_getField(t_Fraction *self);
      static PyObject *t_Fraction_getNumerator(t_Fraction *self);
      static PyObject *t_Fraction_getReal(t_Fraction *self);
      static PyObject *t_Fraction_getReducedFraction(PyTypeObject *type, PyObject *args);
      static PyObject *t_Fraction_hashCode(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_intValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_isInteger(t_Fraction *self);
      static PyObject *t_Fraction_longValue(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_multiply(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_negate(t_Fraction *self);
      static PyObject *t_Fraction_percentageValue(t_Fraction *self);
      static PyObject *t_Fraction_reciprocal(t_Fraction *self);
      static PyObject *t_Fraction_signum(t_Fraction *self);
      static PyObject *t_Fraction_subtract(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_toString(t_Fraction *self, PyObject *args);
      static PyObject *t_Fraction_get__denominator(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__field(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__integer(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__numerator(t_Fraction *self, void *data);
      static PyObject *t_Fraction_get__real(t_Fraction *self, void *data);
      static PyGetSetDef t_Fraction__fields_[] = {
        DECLARE_GET_FIELD(t_Fraction, denominator),
        DECLARE_GET_FIELD(t_Fraction, field),
        DECLARE_GET_FIELD(t_Fraction, integer),
        DECLARE_GET_FIELD(t_Fraction, numerator),
        DECLARE_GET_FIELD(t_Fraction, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Fraction__methods_[] = {
        DECLARE_METHOD(t_Fraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction, abs, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, add, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, compareTo, METH_O),
        DECLARE_METHOD(t_Fraction, convergent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, convergents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, divide, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, equals, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, getDenominator, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getField, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getNumerator, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, getReducedFraction, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Fraction, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, intValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, isInteger, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, longValue, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, negate, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, percentageValue, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, signum, METH_NOARGS),
        DECLARE_METHOD(t_Fraction, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Fraction, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fraction)[] = {
        { Py_tp_methods, t_Fraction__methods_ },
        { Py_tp_init, (void *) t_Fraction_init_ },
        { Py_tp_getset, t_Fraction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fraction)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(Fraction, t_Fraction, Fraction);

      void t_Fraction::install(PyObject *module)
      {
        installType(&PY_TYPE(Fraction), &PY_TYPE_DEF(Fraction), module, "Fraction", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ConvergenceTest", make_descriptor(&PY_TYPE_DEF(Fraction$ConvergenceTest)));
      }

      void t_Fraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "class_", make_descriptor(Fraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "wrapfn_", make_descriptor(t_Fraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "boxfn_", make_descriptor(boxObject));
        env->getClass(Fraction::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "FOUR_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::FOUR_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "MINUS_ONE", make_descriptor(t_Fraction::wrap_Object(*Fraction::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_FIFTH", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_FIFTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_HALF", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_HALF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_QUARTER", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_QUARTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ONE_THIRD", make_descriptor(t_Fraction::wrap_Object(*Fraction::ONE_THIRD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "THREE_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::THREE_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "THREE_QUARTERS", make_descriptor(t_Fraction::wrap_Object(*Fraction::THREE_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_FIFTHS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_QUARTERS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "TWO_THIRDS", make_descriptor(t_Fraction::wrap_Object(*Fraction::TWO_THIRDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction), "ZERO", make_descriptor(t_Fraction::wrap_Object(*Fraction::ZERO)));
      }

      static PyObject *t_Fraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fraction::initializeClass, 1)))
          return NULL;
        return t_Fraction::wrap_Object(Fraction(((t_Fraction *) arg)->object.this$));
      }
      static PyObject *t_Fraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Fraction_init_(t_Fraction *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = Fraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Fraction(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            jint a1;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              INT_CALL(object = Fraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = Fraction(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            Fraction object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = Fraction(a0, a1, a2));
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

      static PyObject *t_Fraction_abs(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_add(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Fraction_compareTo(t_Fraction *self, PyObject *arg)
      {
        Fraction a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Fraction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Fraction_convergent(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::org::hipparchus::fraction::Fraction$ConvergenceTest a2((jobject) NULL);
        ::org::hipparchus::util::Pair result((jobject) NULL);

        if (!parseArgs(args, "DIk", ::org::hipparchus::fraction::Fraction$ConvergenceTest::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::convergent(a0, a1, a2));
          return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction), ::java::lang::PY_TYPE(Boolean));
        }

        PyErr_SetArgsError(type, "convergent", args);
        return NULL;
      }

      static PyObject *t_Fraction_convergents(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "DI", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::convergents(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction));
        }

        PyErr_SetArgsError(type, "convergents", args);
        return NULL;
      }

      static PyObject *t_Fraction_divide(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Fraction_doubleValue(t_Fraction *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_Fraction_equals(t_Fraction *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Fraction_floatValue(t_Fraction *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_Fraction_getDenominator(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDenominator());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_getField(t_Fraction *self)
      {
        ::org::hipparchus::fraction::FractionField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::fraction::t_FractionField::wrap_Object(result);
      }

      static PyObject *t_Fraction_getNumerator(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumerator());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_getReal(t_Fraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Fraction_getReducedFraction(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        Fraction result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::Fraction::getReducedFraction(a0, a1));
          return t_Fraction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReducedFraction", args);
        return NULL;
      }

      static PyObject *t_Fraction_hashCode(t_Fraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Fraction_intValue(t_Fraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_Fraction_isInteger(t_Fraction *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Fraction_longValue(t_Fraction *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_Fraction_multiply(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Fraction_negate(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_percentageValue(t_Fraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.percentageValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Fraction_reciprocal(t_Fraction *self)
      {
        Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Fraction::wrap_Object(result);
      }

      static PyObject *t_Fraction_signum(t_Fraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.signum());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Fraction_subtract(t_Fraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Fraction a0((jobject) NULL);
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "k", Fraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            Fraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Fraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Fraction_toString(t_Fraction *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Fraction), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Fraction_get__denominator(t_Fraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDenominator());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Fraction_get__field(t_Fraction *self, void *data)
      {
        ::org::hipparchus::fraction::FractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::fraction::t_FractionField::wrap_Object(value);
      }

      static PyObject *t_Fraction_get__integer(t_Fraction *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Fraction_get__numerator(t_Fraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumerator());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Fraction_get__real(t_Fraction *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldGradientField::class$ = NULL;
        jmethodID *FieldGradientField::mids$ = NULL;
        bool FieldGradientField::live$ = false;

        jclass FieldGradientField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldGradientField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getField_b967e2a5ea821d90] = env->getStaticMethodID(cls, "getField", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/analysis/differentiation/FieldGradientField;");
            mids$[mid_getOne_181a8b55191d747b] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_181a8b55191d747b] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldGradientField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        FieldGradientField FieldGradientField::getField(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradientField(env->callStaticObjectMethod(cls, mids$[mid_getField_b967e2a5ea821d90], a0.this$, a1));
        }

        ::org::hipparchus::analysis::differentiation::FieldGradient FieldGradientField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callObjectMethod(this$, mids$[mid_getOne_181a8b55191d747b]));
        }

        ::java::lang::Class FieldGradientField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
        }

        ::org::hipparchus::analysis::differentiation::FieldGradient FieldGradientField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callObjectMethod(this$, mids$[mid_getZero_181a8b55191d747b]));
        }

        jint FieldGradientField::hashCode() const
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
        static PyObject *t_FieldGradientField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradientField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradientField_of_(t_FieldGradientField *self, PyObject *args);
        static PyObject *t_FieldGradientField_equals(t_FieldGradientField *self, PyObject *args);
        static PyObject *t_FieldGradientField_getField(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradientField_getOne(t_FieldGradientField *self);
        static PyObject *t_FieldGradientField_getRuntimeClass(t_FieldGradientField *self);
        static PyObject *t_FieldGradientField_getZero(t_FieldGradientField *self);
        static PyObject *t_FieldGradientField_hashCode(t_FieldGradientField *self, PyObject *args);
        static PyObject *t_FieldGradientField_get__one(t_FieldGradientField *self, void *data);
        static PyObject *t_FieldGradientField_get__runtimeClass(t_FieldGradientField *self, void *data);
        static PyObject *t_FieldGradientField_get__zero(t_FieldGradientField *self, void *data);
        static PyObject *t_FieldGradientField_get__parameters_(t_FieldGradientField *self, void *data);
        static PyGetSetDef t_FieldGradientField__fields_[] = {
          DECLARE_GET_FIELD(t_FieldGradientField, one),
          DECLARE_GET_FIELD(t_FieldGradientField, runtimeClass),
          DECLARE_GET_FIELD(t_FieldGradientField, zero),
          DECLARE_GET_FIELD(t_FieldGradientField, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldGradientField__methods_[] = {
          DECLARE_METHOD(t_FieldGradientField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradientField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradientField, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradientField, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradientField, getField, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldGradientField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradientField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradientField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradientField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldGradientField)[] = {
          { Py_tp_methods, t_FieldGradientField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldGradientField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldGradientField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldGradientField, t_FieldGradientField, FieldGradientField);
        PyObject *t_FieldGradientField::wrap_Object(const FieldGradientField& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradientField::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradientField *self = (t_FieldGradientField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldGradientField::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradientField::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradientField *self = (t_FieldGradientField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldGradientField::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldGradientField), &PY_TYPE_DEF(FieldGradientField), module, "FieldGradientField", 0);
        }

        void t_FieldGradientField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradientField), "class_", make_descriptor(FieldGradientField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradientField), "wrapfn_", make_descriptor(t_FieldGradientField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradientField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldGradientField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldGradientField::initializeClass, 1)))
            return NULL;
          return t_FieldGradientField::wrap_Object(FieldGradientField(((t_FieldGradientField *) arg)->object.this$));
        }
        static PyObject *t_FieldGradientField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldGradientField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldGradientField_of_(t_FieldGradientField *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldGradientField_equals(t_FieldGradientField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldGradientField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldGradientField_getField(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          FieldGradientField result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradientField::getField(a0, a1));
            return t_FieldGradientField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getField", args);
          return NULL;
        }

        static PyObject *t_FieldGradientField_getOne(t_FieldGradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradientField_getRuntimeClass(t_FieldGradientField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FieldGradientField_getZero(t_FieldGradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradientField_hashCode(t_FieldGradientField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldGradientField), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FieldGradientField_get__parameters_(t_FieldGradientField *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldGradientField_get__one(t_FieldGradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(value);
        }

        static PyObject *t_FieldGradientField_get__runtimeClass(t_FieldGradientField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FieldGradientField_get__zero(t_FieldGradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/ObjectiveFunctionGradient.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *ObjectiveFunctionGradient::class$ = NULL;
          jmethodID *ObjectiveFunctionGradient::mids$ = NULL;
          bool ObjectiveFunctionGradient::live$ = false;

          jclass ObjectiveFunctionGradient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/ObjectiveFunctionGradient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bf4248752a7ec4dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;)V");
              mids$[mid_getObjectiveFunctionGradient_0a4097997512db0b] = env->getMethodID(cls, "getObjectiveFunctionGradient", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObjectiveFunctionGradient::ObjectiveFunctionGradient(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bf4248752a7ec4dc, a0.this$)) {}

          ::org::hipparchus::analysis::MultivariateVectorFunction ObjectiveFunctionGradient::getObjectiveFunctionGradient() const
          {
            return ::org::hipparchus::analysis::MultivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunctionGradient_0a4097997512db0b]));
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
          static PyObject *t_ObjectiveFunctionGradient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObjectiveFunctionGradient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObjectiveFunctionGradient_init_(t_ObjectiveFunctionGradient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObjectiveFunctionGradient_getObjectiveFunctionGradient(t_ObjectiveFunctionGradient *self);
          static PyObject *t_ObjectiveFunctionGradient_get__objectiveFunctionGradient(t_ObjectiveFunctionGradient *self, void *data);
          static PyGetSetDef t_ObjectiveFunctionGradient__fields_[] = {
            DECLARE_GET_FIELD(t_ObjectiveFunctionGradient, objectiveFunctionGradient),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObjectiveFunctionGradient__methods_[] = {
            DECLARE_METHOD(t_ObjectiveFunctionGradient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunctionGradient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunctionGradient, getObjectiveFunctionGradient, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObjectiveFunctionGradient)[] = {
            { Py_tp_methods, t_ObjectiveFunctionGradient__methods_ },
            { Py_tp_init, (void *) t_ObjectiveFunctionGradient_init_ },
            { Py_tp_getset, t_ObjectiveFunctionGradient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObjectiveFunctionGradient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObjectiveFunctionGradient, t_ObjectiveFunctionGradient, ObjectiveFunctionGradient);

          void t_ObjectiveFunctionGradient::install(PyObject *module)
          {
            installType(&PY_TYPE(ObjectiveFunctionGradient), &PY_TYPE_DEF(ObjectiveFunctionGradient), module, "ObjectiveFunctionGradient", 0);
          }

          void t_ObjectiveFunctionGradient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunctionGradient), "class_", make_descriptor(ObjectiveFunctionGradient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunctionGradient), "wrapfn_", make_descriptor(t_ObjectiveFunctionGradient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunctionGradient), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObjectiveFunctionGradient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObjectiveFunctionGradient::initializeClass, 1)))
              return NULL;
            return t_ObjectiveFunctionGradient::wrap_Object(ObjectiveFunctionGradient(((t_ObjectiveFunctionGradient *) arg)->object.this$));
          }
          static PyObject *t_ObjectiveFunctionGradient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObjectiveFunctionGradient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObjectiveFunctionGradient_init_(t_ObjectiveFunctionGradient *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
            ObjectiveFunctionGradient object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0))
            {
              INT_CALL(object = ObjectiveFunctionGradient(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObjectiveFunctionGradient_getObjectiveFunctionGradient(t_ObjectiveFunctionGradient *self)
          {
            ::org::hipparchus::analysis::MultivariateVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getObjectiveFunctionGradient());
            return ::org::hipparchus::analysis::t_MultivariateVectorFunction::wrap_Object(result);
          }

          static PyObject *t_ObjectiveFunctionGradient_get__objectiveFunctionGradient(t_ObjectiveFunctionGradient *self, void *data)
          {
            ::org::hipparchus::analysis::MultivariateVectorFunction value((jobject) NULL);
            OBJ_CALL(value = self->object.getObjectiveFunctionGradient());
            return ::org::hipparchus::analysis::t_MultivariateVectorFunction::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldStepNormalizer.h"
#include "org/hipparchus/ode/sampling/FieldODEFixedStepHandler.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldStepNormalizer::class$ = NULL;
        jmethodID *FieldStepNormalizer::mids$ = NULL;
        bool FieldStepNormalizer::live$ = false;

        jclass FieldStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d1411942feae3d8b] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;)V");
            mids$[mid_init$_0ee1fc04e8e22554] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_init$_dfdf06ef65333938] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;)V");
            mids$[mid_init$_d89a930e263d6aad] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/FieldODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_finish_380a9edd05c82300] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
            mids$[mid_handleStep_d5c9193ad6d936b3] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_init_2a077928ff78cfcb] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d1411942feae3d8b, a0, a1.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0ee1fc04e8e22554, a0, a1.this$, a2.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dfdf06ef65333938, a0, a1.this$, a2.this$)) {}

        FieldStepNormalizer::FieldStepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d89a930e263d6aad, a0, a1.this$, a2.this$, a3.this$)) {}

        void FieldStepNormalizer::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_380a9edd05c82300], a0.this$);
        }

        void FieldStepNormalizer::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_d5c9193ad6d936b3], a0.this$);
        }

        void FieldStepNormalizer::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2a077928ff78cfcb], a0.this$, a1.this$);
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
      namespace sampling {
        static PyObject *t_FieldStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_of_(t_FieldStepNormalizer *self, PyObject *args);
        static int t_FieldStepNormalizer_init_(t_FieldStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldStepNormalizer_finish(t_FieldStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_handleStep(t_FieldStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldStepNormalizer_init(t_FieldStepNormalizer *self, PyObject *args);
        static PyObject *t_FieldStepNormalizer_get__parameters_(t_FieldStepNormalizer *self, void *data);
        static PyGetSetDef t_FieldStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStepNormalizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_FieldStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepNormalizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_FieldStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_FieldStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStepNormalizer)[] = {
          { Py_tp_methods, t_FieldStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_FieldStepNormalizer_init_ },
          { Py_tp_getset, t_FieldStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStepNormalizer, t_FieldStepNormalizer, FieldStepNormalizer);
        PyObject *t_FieldStepNormalizer::wrap_Object(const FieldStepNormalizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepNormalizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepNormalizer *self = (t_FieldStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStepNormalizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepNormalizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepNormalizer *self = (t_FieldStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStepNormalizer), &PY_TYPE_DEF(FieldStepNormalizer), module, "FieldStepNormalizer", 0);
        }

        void t_FieldStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "class_", make_descriptor(FieldStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "wrapfn_", make_descriptor(t_FieldStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_FieldStepNormalizer::wrap_Object(FieldStepNormalizer(((t_FieldStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_FieldStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStepNormalizer_of_(t_FieldStepNormalizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldStepNormalizer_init_(t_FieldStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a2((jobject) NULL);
              PyTypeObject **p2;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a3((jobject) NULL);
              PyTypeObject **p3;
              FieldStepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DKKK", ::org::hipparchus::ode::sampling::FieldODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEFixedStepHandler::parameters_, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_, &a3, &p3, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = FieldStepNormalizer(a0, a1, a2, a3));
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

        static PyObject *t_FieldStepNormalizer_finish(t_FieldStepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldStepNormalizer_handleStep(t_FieldStepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldStepNormalizer_init(t_FieldStepNormalizer *self, PyObject *args)
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
        static PyObject *t_FieldStepNormalizer_get__parameters_(t_FieldStepNormalizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/SimplexSolver.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *SimplexSolver::class$ = NULL;
        jmethodID *SimplexSolver::mids$ = NULL;
        bool SimplexSolver::live$ = false;

        jclass SimplexSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/SimplexSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_0fd8efd9eecb8663] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_9a2a15644952076c] = env->getMethodID(cls, "<init>", "(DID)V");
            mids$[mid_doOptimize_a812a1ba2cf9f7b4] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_optimize_1912ae5ec9cd8a6c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_parseOptimizationData_df324e640da2eeec] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
            mids$[mid_doIteration_0e6526f33c1cd2b2] = env->getMethodID(cls, "doIteration", "(Lorg/hipparchus/optim/linear/SimplexTableau;)V");
            mids$[mid_solvePhase1_0e6526f33c1cd2b2] = env->getMethodID(cls, "solvePhase1", "(Lorg/hipparchus/optim/linear/SimplexTableau;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimplexSolver::SimplexSolver() : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        SimplexSolver::SimplexSolver(jdouble a0) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        SimplexSolver::SimplexSolver(jdouble a0, jint a1) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_0fd8efd9eecb8663, a0, a1)) {}

        SimplexSolver::SimplexSolver(jdouble a0, jint a1, jdouble a2) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_9a2a15644952076c, a0, a1, a2)) {}

        ::org::hipparchus::optim::PointValuePair SimplexSolver::doOptimize() const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_doOptimize_a812a1ba2cf9f7b4]));
        }

        ::org::hipparchus::optim::PointValuePair SimplexSolver::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_1912ae5ec9cd8a6c], a0.this$));
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
        static PyObject *t_SimplexSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimplexSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimplexSolver_of_(t_SimplexSolver *self, PyObject *args);
        static int t_SimplexSolver_init_(t_SimplexSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimplexSolver_doOptimize(t_SimplexSolver *self);
        static PyObject *t_SimplexSolver_optimize(t_SimplexSolver *self, PyObject *args);
        static PyObject *t_SimplexSolver_get__parameters_(t_SimplexSolver *self, void *data);
        static PyGetSetDef t_SimplexSolver__fields_[] = {
          DECLARE_GET_FIELD(t_SimplexSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimplexSolver__methods_[] = {
          DECLARE_METHOD(t_SimplexSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimplexSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimplexSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_SimplexSolver, doOptimize, METH_NOARGS),
          DECLARE_METHOD(t_SimplexSolver, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimplexSolver)[] = {
          { Py_tp_methods, t_SimplexSolver__methods_ },
          { Py_tp_init, (void *) t_SimplexSolver_init_ },
          { Py_tp_getset, t_SimplexSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimplexSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::linear::LinearOptimizer),
          NULL
        };

        DEFINE_TYPE(SimplexSolver, t_SimplexSolver, SimplexSolver);
        PyObject *t_SimplexSolver::wrap_Object(const SimplexSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimplexSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimplexSolver *self = (t_SimplexSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SimplexSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimplexSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimplexSolver *self = (t_SimplexSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SimplexSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(SimplexSolver), &PY_TYPE_DEF(SimplexSolver), module, "SimplexSolver", 0);
        }

        void t_SimplexSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexSolver), "class_", make_descriptor(SimplexSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexSolver), "wrapfn_", make_descriptor(t_SimplexSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimplexSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimplexSolver::initializeClass, 1)))
            return NULL;
          return t_SimplexSolver::wrap_Object(SimplexSolver(((t_SimplexSolver *) arg)->object.this$));
        }
        static PyObject *t_SimplexSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimplexSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimplexSolver_of_(t_SimplexSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SimplexSolver_init_(t_SimplexSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimplexSolver object((jobject) NULL);

              INT_CALL(object = SimplexSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              break;
            }
           case 1:
            {
              jdouble a0;
              SimplexSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = SimplexSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jint a1;
              SimplexSolver object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = SimplexSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jint a1;
              jdouble a2;
              SimplexSolver object((jobject) NULL);

              if (!parseArgs(args, "DID", &a0, &a1, &a2))
              {
                INT_CALL(object = SimplexSolver(a0, a1, a2));
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

        static PyObject *t_SimplexSolver_doOptimize(t_SimplexSolver *self)
        {
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);
          OBJ_CALL(result = self->object.doOptimize());
          return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
        }

        static PyObject *t_SimplexSolver_optimize(t_SimplexSolver *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(SimplexSolver), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_SimplexSolver_get__parameters_(t_SimplexSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/interval/BinomialProportion.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/interval/ConfidenceInterval.h"
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
            mids$[mid_getAgrestiCoullInterval_ba2f715f1d18e914] = env->getStaticMethodID(cls, "getAgrestiCoullInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getClopperPearsonInterval_ba2f715f1d18e914] = env->getStaticMethodID(cls, "getClopperPearsonInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getNormalApproximationInterval_ba2f715f1d18e914] = env->getStaticMethodID(cls, "getNormalApproximationInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");
            mids$[mid_getWilsonScoreInterval_ba2f715f1d18e914] = env->getStaticMethodID(cls, "getWilsonScoreInterval", "(IDD)Lorg/hipparchus/stat/interval/ConfidenceInterval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getAgrestiCoullInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getAgrestiCoullInterval_ba2f715f1d18e914], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getClopperPearsonInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getClopperPearsonInterval_ba2f715f1d18e914], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getNormalApproximationInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getNormalApproximationInterval_ba2f715f1d18e914], a0, a1, a2));
        }

        ::org::hipparchus::stat::interval::ConfidenceInterval BinomialProportion::getWilsonScoreInterval(jint a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::interval::ConfidenceInterval(env->callStaticObjectMethod(cls, mids$[mid_getWilsonScoreInterval_ba2f715f1d18e914], a0, a1, a2));
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
#include "org/orekit/gnss/metric/parser/PythonMessageType.h"
#include "java/lang/Throwable.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonMessageType::class$ = NULL;
          jmethodID *PythonMessageType::mids$ = NULL;
          bool PythonMessageType::live$ = false;

          jclass PythonMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_parse_923958375e872406] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMessageType::PythonMessageType() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonMessageType::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonMessageType::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonMessageType::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_PythonMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMessageType_init_(t_PythonMessageType *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMessageType_finalize(t_PythonMessageType *self);
          static PyObject *t_PythonMessageType_pythonExtension(t_PythonMessageType *self, PyObject *args);
          static jobject JNICALL t_PythonMessageType_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
          static void JNICALL t_PythonMessageType_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMessageType_get__self(t_PythonMessageType *self, void *data);
          static PyGetSetDef t_PythonMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMessageType, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMessageType__methods_[] = {
            DECLARE_METHOD(t_PythonMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageType, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMessageType, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMessageType)[] = {
            { Py_tp_methods, t_PythonMessageType__methods_ },
            { Py_tp_init, (void *) t_PythonMessageType_init_ },
            { Py_tp_getset, t_PythonMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMessageType, t_PythonMessageType, PythonMessageType);

          void t_PythonMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMessageType), &PY_TYPE_DEF(PythonMessageType), module, "PythonMessageType", 1);
          }

          void t_PythonMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "class_", make_descriptor(PythonMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "wrapfn_", make_descriptor(t_PythonMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageType), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMessageType::initializeClass);
            JNINativeMethod methods[] = {
              { "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;", (void *) t_PythonMessageType_parse0 },
              { "pythonDecRef", "()V", (void *) t_PythonMessageType_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMessageType::initializeClass, 1)))
              return NULL;
            return t_PythonMessageType::wrap_Object(PythonMessageType(((t_PythonMessageType *) arg)->object.this$));
          }
          static PyObject *t_PythonMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMessageType_init_(t_PythonMessageType *self, PyObject *args, PyObject *kwds)
          {
            PythonMessageType object((jobject) NULL);

            INT_CALL(object = PythonMessageType());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMessageType_finalize(t_PythonMessageType *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMessageType_pythonExtension(t_PythonMessageType *self, PyObject *args)
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

          static jobject JNICALL t_PythonMessageType_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::gnss::metric::messages::ParsedMessage value((jobject) NULL);
            PyObject *o0 = ::org::orekit::gnss::metric::parser::t_EncodedMessage::wrap_Object(::org::orekit::gnss::metric::parser::EncodedMessage(a0));
            PyObject *result = PyObject_CallMethod(obj, "parse", "Oi", o0, (int) a1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::gnss::metric::messages::ParsedMessage::initializeClass, &value))
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

          static void JNICALL t_PythonMessageType_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMessageType::mids$[PythonMessageType::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMessageType_get__self(t_PythonMessageType *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/CompositeFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Number.h"
#include "java/text/FieldPosition.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CompositeFormat::class$ = NULL;
      jmethodID *CompositeFormat::mids$ = NULL;
      bool CompositeFormat::live$ = false;

      jclass CompositeFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CompositeFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_formatDouble_9af170d7b13de246] = env->getStaticMethodID(cls, "formatDouble", "(DLjava/text/NumberFormat;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getDefaultNumberFormat_525709eb5c5b5ea6] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_5ed382d8d7b942c5] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
          mids$[mid_parseAndIgnoreWhitespace_63c49683e3fd0aef] = env->getStaticMethodID(cls, "parseAndIgnoreWhitespace", "(Ljava/lang/String;Ljava/text/ParsePosition;)V");
          mids$[mid_parseFixedstring_cb5d9035704f8693] = env->getStaticMethodID(cls, "parseFixedstring", "(Ljava/lang/String;Ljava/lang/String;Ljava/text/ParsePosition;)Z");
          mids$[mid_parseNextCharacter_5ce3a6c37aaf3132] = env->getStaticMethodID(cls, "parseNextCharacter", "(Ljava/lang/String;Ljava/text/ParsePosition;)C");
          mids$[mid_parseNumber_61147cd9424632d0] = env->getStaticMethodID(cls, "parseNumber", "(Ljava/lang/String;Ljava/text/NumberFormat;Ljava/text/ParsePosition;)Ljava/lang/Number;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::StringBuffer CompositeFormat::formatDouble(jdouble a0, const ::java::text::NumberFormat & a1, const ::java::lang::StringBuffer & a2, const ::java::text::FieldPosition & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::StringBuffer(env->callStaticObjectMethod(cls, mids$[mid_formatDouble_9af170d7b13de246], a0, a1.this$, a2.this$, a3.this$));
      }

      ::java::text::NumberFormat CompositeFormat::getDefaultNumberFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::text::NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getDefaultNumberFormat_525709eb5c5b5ea6]));
      }

      ::java::text::NumberFormat CompositeFormat::getDefaultNumberFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::text::NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getDefaultNumberFormat_5ed382d8d7b942c5], a0.this$));
      }

      void CompositeFormat::parseAndIgnoreWhitespace(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_parseAndIgnoreWhitespace_63c49683e3fd0aef], a0.this$, a1.this$);
      }

      jboolean CompositeFormat::parseFixedstring(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::text::ParsePosition & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_parseFixedstring_cb5d9035704f8693], a0.this$, a1.this$, a2.this$);
      }

      jchar CompositeFormat::parseNextCharacter(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticCharMethod(cls, mids$[mid_parseNextCharacter_5ce3a6c37aaf3132], a0.this$, a1.this$);
      }

      ::java::lang::Number CompositeFormat::parseNumber(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1, const ::java::text::ParsePosition & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::Number(env->callStaticObjectMethod(cls, mids$[mid_parseNumber_61147cd9424632d0], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_CompositeFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeFormat_formatDouble(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_getDefaultNumberFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseAndIgnoreWhitespace(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseFixedstring(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseNextCharacter(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseNumber(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_get__defaultNumberFormat(t_CompositeFormat *self, void *data);
      static PyGetSetDef t_CompositeFormat__fields_[] = {
        DECLARE_GET_FIELD(t_CompositeFormat, defaultNumberFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CompositeFormat__methods_[] = {
        DECLARE_METHOD(t_CompositeFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, formatDouble, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, getDefaultNumberFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseAndIgnoreWhitespace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseFixedstring, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseNextCharacter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseNumber, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CompositeFormat)[] = {
        { Py_tp_methods, t_CompositeFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CompositeFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CompositeFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CompositeFormat, t_CompositeFormat, CompositeFormat);

      void t_CompositeFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(CompositeFormat), &PY_TYPE_DEF(CompositeFormat), module, "CompositeFormat", 0);
      }

      void t_CompositeFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "class_", make_descriptor(CompositeFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "wrapfn_", make_descriptor(t_CompositeFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CompositeFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CompositeFormat::initializeClass, 1)))
          return NULL;
        return t_CompositeFormat::wrap_Object(CompositeFormat(((t_CompositeFormat *) arg)->object.this$));
      }
      static PyObject *t_CompositeFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CompositeFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CompositeFormat_formatDouble(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        ::java::text::NumberFormat a1((jobject) NULL);
        ::java::lang::StringBuffer a2((jobject) NULL);
        ::java::text::FieldPosition a3((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "Dkkk", ::java::text::NumberFormat::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::formatDouble(a0, a1, a2, a3));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "formatDouble", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_getDefaultNumberFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::text::NumberFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::getDefaultNumberFormat());
            return ::java::text::t_NumberFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::text::NumberFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::getDefaultNumberFormat(a0));
              return ::java::text::t_NumberFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getDefaultNumberFormat", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseAndIgnoreWhitespace(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::CompositeFormat::parseAndIgnoreWhitespace(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "parseAndIgnoreWhitespace", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseFixedstring(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::text::ParsePosition a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "ssk", ::java::text::ParsePosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseFixedstring(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "parseFixedstring", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseNextCharacter(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        jchar result;

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseNextCharacter(a0, a1));
          return c2p(result);
        }

        PyErr_SetArgsError(type, "parseNextCharacter", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseNumber(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::NumberFormat a1((jobject) NULL);
        ::java::text::ParsePosition a2((jobject) NULL);
        ::java::lang::Number result((jobject) NULL);

        if (!parseArgs(args, "skk", ::java::text::NumberFormat::initializeClass, ::java::text::ParsePosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseNumber(a0, a1, a2));
          return ::java::lang::t_Number::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseNumber", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_get__defaultNumberFormat(t_CompositeFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getDefaultNumberFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenZonalLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenZonalLinear::class$ = NULL;
              jmethodID *HansenZonalLinear::mids$ = NULL;
              bool HansenZonalLinear::live$ = false;

              jclass HansenZonalLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenZonalLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
                  mids$[mid_computeInitValues_1ad26e8c8c0cd65b] = env->getMethodID(cls, "computeInitValues", "(D)V");
                  mids$[mid_getDerivative_5540210c7d309f18] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_5540210c7d309f18] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenZonalLinear::HansenZonalLinear(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

              void HansenZonalLinear::computeInitValues(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_1ad26e8c8c0cd65b], a0);
              }

              jdouble HansenZonalLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_5540210c7d309f18], a0, a1);
              }

              jdouble HansenZonalLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_5540210c7d309f18], a0, a1);
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
              static PyObject *t_HansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenZonalLinear_init_(t_HansenZonalLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenZonalLinear_computeInitValues(t_HansenZonalLinear *self, PyObject *arg);
              static PyObject *t_HansenZonalLinear_getDerivative(t_HansenZonalLinear *self, PyObject *args);
              static PyObject *t_HansenZonalLinear_getValue(t_HansenZonalLinear *self, PyObject *args);

              static PyMethodDef t_HansenZonalLinear__methods_[] = {
                DECLARE_METHOD(t_HansenZonalLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenZonalLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenZonalLinear, computeInitValues, METH_O),
                DECLARE_METHOD(t_HansenZonalLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenZonalLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenZonalLinear)[] = {
                { Py_tp_methods, t_HansenZonalLinear__methods_ },
                { Py_tp_init, (void *) t_HansenZonalLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenZonalLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenZonalLinear, t_HansenZonalLinear, HansenZonalLinear);

              void t_HansenZonalLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenZonalLinear), &PY_TYPE_DEF(HansenZonalLinear), module, "HansenZonalLinear", 0);
              }

              void t_HansenZonalLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "class_", make_descriptor(HansenZonalLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "wrapfn_", make_descriptor(t_HansenZonalLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenZonalLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenZonalLinear::wrap_Object(HansenZonalLinear(((t_HansenZonalLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenZonalLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenZonalLinear_init_(t_HansenZonalLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                HansenZonalLinear object((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  INT_CALL(object = HansenZonalLinear(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenZonalLinear_computeInitValues(t_HansenZonalLinear *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.computeInitValues(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", arg);
                return NULL;
              }

              static PyObject *t_HansenZonalLinear_getDerivative(t_HansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenZonalLinear_getValue(t_HansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
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
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *SpacecraftState::class$ = NULL;
      jmethodID *SpacecraftState::mids$ = NULL;
      bool SpacecraftState::live$ = false;
      jdouble SpacecraftState::DEFAULT_MASS = (jdouble) 0;

      jclass SpacecraftState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/SpacecraftState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_354ddc04cfad518e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_17534ef58ef3aaef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_ceb292b5d9c1c98b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_757f4ec5c10fd803] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_415a33e9c6726f43] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;D)V");
          mids$[mid_init$_eb477070e5713007] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_c0e4d127bbe972d9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_cd24915ef440ba23] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;D)V");
          mids$[mid_init$_ffa2bab2e6031cc9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_87220a76c6776bc7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_28d3f439f843efaf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;D)V");
          mids$[mid_init$_2d01416918cfc640] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_c0f40795bb47c5fb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;D)V");
          mids$[mid_init$_c882c08549345f11] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_46b8b1dd2155e5cd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_9e68c96d7bab630f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_a7c4cfee8a8d5fca] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_eb9a36c3f42cc0cb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_addAdditionalState_f3c76d0be5f116c0] = env->getMethodID(cls, "addAdditionalState", "(Ljava/lang/String;[D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_addAdditionalStateDerivative_f3c76d0be5f116c0] = env->getMethodID(cls, "addAdditionalStateDerivative", "(Ljava/lang/String;[D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_ensureCompatibleAdditionalStates_72b846eb87f3af9a] = env->getMethodID(cls, "ensureCompatibleAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_getA_9981f74b2d109da6] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getAbsPVA_0bbeea3cc786f34b] = env->getMethodID(cls, "getAbsPVA", "()Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_getAdditionalState_4bbf10387b1a6128] = env->getMethodID(cls, "getAdditionalState", "(Ljava/lang/String;)[D");
          mids$[mid_getAdditionalStateDerivative_4bbf10387b1a6128] = env->getMethodID(cls, "getAdditionalStateDerivative", "(Ljava/lang/String;)[D");
          mids$[mid_getAdditionalStatesDerivatives_c1165b139cc27553] = env->getMethodID(cls, "getAdditionalStatesDerivatives", "()Lorg/orekit/utils/DoubleArrayDictionary;");
          mids$[mid_getAdditionalStatesValues_c1165b139cc27553] = env->getMethodID(cls, "getAdditionalStatesValues", "()Lorg/orekit/utils/DoubleArrayDictionary;");
          mids$[mid_getAttitude_83f44b5ac6431edc] = env->getMethodID(cls, "getAttitude", "()Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEquinoctialEx_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialEy_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_9981f74b2d109da6] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHy_9981f74b2d109da6] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getI_9981f74b2d109da6] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getKeplerianMeanMotion_9981f74b2d109da6] = env->getMethodID(cls, "getKeplerianMeanMotion", "()D");
          mids$[mid_getKeplerianPeriod_9981f74b2d109da6] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
          mids$[mid_getLE_9981f74b2d109da6] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLM_9981f74b2d109da6] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLv_9981f74b2d109da6] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getMass_9981f74b2d109da6] = env->getMethodID(cls, "getMass", "()D");
          mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
          mids$[mid_getOrbit_fb241cd44f6e41bc] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/Orbit;");
          mids$[mid_getPVCoordinates_674031698a428ce8] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_76634063992a70d7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_032312bdeb3f2f93] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_5996cdbecf4f0d06] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_hasAdditionalState_df4c65b2aede5c41] = env->getMethodID(cls, "hasAdditionalState", "(Ljava/lang/String;)Z");
          mids$[mid_hasAdditionalStateDerivative_df4c65b2aede5c41] = env->getMethodID(cls, "hasAdditionalStateDerivative", "(Ljava/lang/String;)Z");
          mids$[mid_isOrbitDefined_eee3de00fe971136] = env->getMethodID(cls, "isOrbitDefined", "()Z");
          mids$[mid_shiftedBy_c119acb81fbe7ec9] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_toStaticTransform_4707295cf0323d2d] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toTransform_da06dd761109637f] = env->getMethodID(cls, "toTransform", "()Lorg/orekit/frames/Transform;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_354ddc04cfad518e, a0.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17534ef58ef3aaef, a0.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ceb292b5d9c1c98b, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::utils::DoubleArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_757f4ec5c10fd803, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_415a33e9c6726f43, a0.this$, a1)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb477070e5713007, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::utils::DoubleArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c0e4d127bbe972d9, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd24915ef440ba23, a0.this$, a1)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ffa2bab2e6031cc9, a0.this$, a1.this$, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, jdouble a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87220a76c6776bc7, a0.this$, a1, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_28d3f439f843efaf, a0.this$, a1.this$, a2)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2d01416918cfc640, a0.this$, a1.this$, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c0f40795bb47c5fb, a0.this$, a1.this$, a2)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c882c08549345f11, a0.this$, a1, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46b8b1dd2155e5cd, a0.this$, a1.this$, a2, a3.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9e68c96d7bab630f, a0.this$, a1.this$, a2, a3.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3, const ::org::orekit::utils::DoubleArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a7c4cfee8a8d5fca, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3, const ::org::orekit::utils::DoubleArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb9a36c3f42cc0cb, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

      SpacecraftState SpacecraftState::addAdditionalState(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalState_f3c76d0be5f116c0], a0.this$, a1.this$));
      }

      SpacecraftState SpacecraftState::addAdditionalStateDerivative(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalStateDerivative_f3c76d0be5f116c0], a0.this$, a1.this$));
      }

      void SpacecraftState::ensureCompatibleAdditionalStates(const SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_ensureCompatibleAdditionalStates_72b846eb87f3af9a], a0.this$);
      }

      jdouble SpacecraftState::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_9981f74b2d109da6]);
      }

      ::org::orekit::utils::AbsolutePVCoordinates SpacecraftState::getAbsPVA() const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getAbsPVA_0bbeea3cc786f34b]));
      }

      JArray< jdouble > SpacecraftState::getAdditionalState(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_4bbf10387b1a6128], a0.this$));
      }

      JArray< jdouble > SpacecraftState::getAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalStateDerivative_4bbf10387b1a6128], a0.this$));
      }

      ::org::orekit::utils::DoubleArrayDictionary SpacecraftState::getAdditionalStatesDerivatives() const
      {
        return ::org::orekit::utils::DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesDerivatives_c1165b139cc27553]));
      }

      ::org::orekit::utils::DoubleArrayDictionary SpacecraftState::getAdditionalStatesValues() const
      {
        return ::org::orekit::utils::DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesValues_c1165b139cc27553]));
      }

      ::org::orekit::attitudes::Attitude SpacecraftState::getAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_83f44b5ac6431edc]));
      }

      ::org::orekit::time::AbsoluteDate SpacecraftState::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      jdouble SpacecraftState::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
      }

      jdouble SpacecraftState::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_9981f74b2d109da6]);
      }

      jdouble SpacecraftState::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_9981f74b2d109da6]);
      }

      ::org::orekit::frames::Frame SpacecraftState::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      jdouble SpacecraftState::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_9981f74b2d109da6]);
      }

      jdouble SpacecraftState::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_9981f74b2d109da6]);
      }

      jdouble SpacecraftState::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_9981f74b2d109da6]);
      }

      jdouble SpacecraftState::getKeplerianMeanMotion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianMeanMotion_9981f74b2d109da6]);
      }

      jdouble SpacecraftState::getKeplerianPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_9981f74b2d109da6]);
      }

      jdouble SpacecraftState::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_9981f74b2d109da6]);
      }

      jdouble SpacecraftState::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_9981f74b2d109da6]);
      }

      jdouble SpacecraftState::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_9981f74b2d109da6]);
      }

      jdouble SpacecraftState::getMass() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMass_9981f74b2d109da6]);
      }

      jdouble SpacecraftState::getMu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
      }

      ::org::orekit::orbits::Orbit SpacecraftState::getOrbit() const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOrbit_fb241cd44f6e41bc]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates SpacecraftState::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_674031698a428ce8]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates SpacecraftState::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_76634063992a70d7], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SpacecraftState::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SpacecraftState::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_5996cdbecf4f0d06], a0.this$));
      }

      jboolean SpacecraftState::hasAdditionalState(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalState_df4c65b2aede5c41], a0.this$);
      }

      jboolean SpacecraftState::hasAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalStateDerivative_df4c65b2aede5c41], a0.this$);
      }

      jboolean SpacecraftState::isOrbitDefined() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isOrbitDefined_eee3de00fe971136]);
      }

      SpacecraftState SpacecraftState::shiftedBy(jdouble a0) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_c119acb81fbe7ec9], a0));
      }

      ::org::orekit::frames::StaticTransform SpacecraftState::toStaticTransform() const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_4707295cf0323d2d]));
      }

      ::java::lang::String SpacecraftState::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::org::orekit::frames::Transform SpacecraftState::toTransform() const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_toTransform_da06dd761109637f]));
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
      static PyObject *t_SpacecraftState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SpacecraftState_init_(t_SpacecraftState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SpacecraftState_addAdditionalState(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_addAdditionalStateDerivative(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_ensureCompatibleAdditionalStates(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_getA(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAbsPVA(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAdditionalState(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_getAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_getAdditionalStatesDerivatives(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAdditionalStatesValues(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAttitude(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getDate(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getE(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getEquinoctialEx(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getEquinoctialEy(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getFrame(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getHx(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getHy(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getI(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getKeplerianMeanMotion(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getKeplerianPeriod(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getLE(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getLM(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getLv(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getMass(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getMu(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getOrbit(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getPVCoordinates(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_getPosition(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_hasAdditionalState(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_hasAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_isOrbitDefined(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_shiftedBy(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_toStaticTransform(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_toString(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_toTransform(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_get__a(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__absPVA(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__additionalStatesDerivatives(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__additionalStatesValues(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__attitude(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__date(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__e(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__equinoctialEx(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__equinoctialEy(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__frame(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__hx(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__hy(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__i(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__keplerianMeanMotion(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__keplerianPeriod(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__lE(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__lM(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__lv(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__mass(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__mu(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__orbit(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__orbitDefined(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__pVCoordinates(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__position(t_SpacecraftState *self, void *data);
      static PyGetSetDef t_SpacecraftState__fields_[] = {
        DECLARE_GET_FIELD(t_SpacecraftState, a),
        DECLARE_GET_FIELD(t_SpacecraftState, absPVA),
        DECLARE_GET_FIELD(t_SpacecraftState, additionalStatesDerivatives),
        DECLARE_GET_FIELD(t_SpacecraftState, additionalStatesValues),
        DECLARE_GET_FIELD(t_SpacecraftState, attitude),
        DECLARE_GET_FIELD(t_SpacecraftState, date),
        DECLARE_GET_FIELD(t_SpacecraftState, e),
        DECLARE_GET_FIELD(t_SpacecraftState, equinoctialEx),
        DECLARE_GET_FIELD(t_SpacecraftState, equinoctialEy),
        DECLARE_GET_FIELD(t_SpacecraftState, frame),
        DECLARE_GET_FIELD(t_SpacecraftState, hx),
        DECLARE_GET_FIELD(t_SpacecraftState, hy),
        DECLARE_GET_FIELD(t_SpacecraftState, i),
        DECLARE_GET_FIELD(t_SpacecraftState, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_SpacecraftState, keplerianPeriod),
        DECLARE_GET_FIELD(t_SpacecraftState, lE),
        DECLARE_GET_FIELD(t_SpacecraftState, lM),
        DECLARE_GET_FIELD(t_SpacecraftState, lv),
        DECLARE_GET_FIELD(t_SpacecraftState, mass),
        DECLARE_GET_FIELD(t_SpacecraftState, mu),
        DECLARE_GET_FIELD(t_SpacecraftState, orbit),
        DECLARE_GET_FIELD(t_SpacecraftState, orbitDefined),
        DECLARE_GET_FIELD(t_SpacecraftState, pVCoordinates),
        DECLARE_GET_FIELD(t_SpacecraftState, position),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SpacecraftState__methods_[] = {
        DECLARE_METHOD(t_SpacecraftState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftState, addAdditionalState, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, addAdditionalStateDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, ensureCompatibleAdditionalStates, METH_O),
        DECLARE_METHOD(t_SpacecraftState, getA, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAbsPVA, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalState, METH_O),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalStatesDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalStatesValues, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAttitude, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getDate, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getE, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getHx, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getHy, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getI, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getLE, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getLM, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getLv, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getMass, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getMu, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getOrbit, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, hasAdditionalState, METH_O),
        DECLARE_METHOD(t_SpacecraftState, hasAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_SpacecraftState, isOrbitDefined, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, shiftedBy, METH_O),
        DECLARE_METHOD(t_SpacecraftState, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, toString, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, toTransform, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SpacecraftState)[] = {
        { Py_tp_methods, t_SpacecraftState__methods_ },
        { Py_tp_init, (void *) t_SpacecraftState_init_ },
        { Py_tp_getset, t_SpacecraftState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SpacecraftState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SpacecraftState, t_SpacecraftState, SpacecraftState);

      void t_SpacecraftState::install(PyObject *module)
      {
        installType(&PY_TYPE(SpacecraftState), &PY_TYPE_DEF(SpacecraftState), module, "SpacecraftState", 0);
      }

      void t_SpacecraftState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "class_", make_descriptor(SpacecraftState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "wrapfn_", make_descriptor(t_SpacecraftState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "boxfn_", make_descriptor(boxObject));
        env->getClass(SpacecraftState::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "DEFAULT_MASS", make_descriptor(SpacecraftState::DEFAULT_MASS));
      }

      static PyObject *t_SpacecraftState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SpacecraftState::initializeClass, 1)))
          return NULL;
        return t_SpacecraftState::wrap_Object(SpacecraftState(((t_SpacecraftState *) arg)->object.this$));
      }
      static PyObject *t_SpacecraftState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SpacecraftState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SpacecraftState_init_(t_SpacecraftState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, &a0))
            {
              INT_CALL(object = SpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = SpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            jdouble a1;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            jdouble a1;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a4((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDkk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a4((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3, a4));
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

      static PyObject *t_SpacecraftState_addAdditionalState(t_SpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.addAdditionalState(a0, a1));
          return t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalState", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_addAdditionalStateDerivative(t_SpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.addAdditionalStateDerivative(a0, a1));
          return t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateDerivative", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_ensureCompatibleAdditionalStates(t_SpacecraftState *self, PyObject *arg)
      {
        SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.ensureCompatibleAdditionalStates(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "ensureCompatibleAdditionalStates", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getA(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getAbsPVA(t_SpacecraftState *self)
      {
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVA());
        return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getAdditionalState(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalStateDerivative(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getAdditionalStatesDerivatives(t_SpacecraftState *self)
      {
        ::org::orekit::utils::DoubleArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getAdditionalStatesValues(t_SpacecraftState *self)
      {
        ::org::orekit::utils::DoubleArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getAttitude(t_SpacecraftState *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getDate(t_SpacecraftState *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getE(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getEquinoctialEx(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getEquinoctialEy(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getFrame(t_SpacecraftState *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getHx(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getHy(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getI(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getKeplerianMeanMotion(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getKeplerianPeriod(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getLE(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getLM(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getLv(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLv());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getMass(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMass());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getMu(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMu());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getOrbit(t_SpacecraftState *self)
      {
        ::org::orekit::orbits::Orbit result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbit());
        return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getPVCoordinates(t_SpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getPosition(t_SpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_hasAdditionalState(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalState(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_hasAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalStateDerivative(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_isOrbitDefined(t_SpacecraftState *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isOrbitDefined());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SpacecraftState_shiftedBy(t_SpacecraftState *self, PyObject *arg)
      {
        jdouble a0;
        SpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_toStaticTransform(t_SpacecraftState *self)
      {
        ::org::orekit::frames::StaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_toString(t_SpacecraftState *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(SpacecraftState), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_SpacecraftState_toTransform(t_SpacecraftState *self)
      {
        ::org::orekit::frames::Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.toTransform());
        return ::org::orekit::frames::t_Transform::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_get__a(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__absPVA(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::AbsolutePVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVA());
        return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__additionalStatesDerivatives(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::DoubleArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__additionalStatesValues(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::DoubleArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__attitude(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__date(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__e(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__equinoctialEx(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__equinoctialEy(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__frame(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__hx(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__hy(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__i(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__keplerianMeanMotion(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__keplerianPeriod(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__lE(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__lM(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__lv(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__mass(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMass());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__mu(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMu());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__orbit(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::orbits::Orbit value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbit());
        return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__orbitDefined(t_SpacecraftState *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isOrbitDefined());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_SpacecraftState_get__pVCoordinates(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__position(t_SpacecraftState *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/Tile.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *Tile::class$ = NULL;
          jmethodID *Tile::mids$ = NULL;
          bool Tile::live$ = false;

          jclass Tile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/Tile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1db1899da2877d6d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)V");
              mids$[mid_getCenter_bdca252cae79438c] = env->getMethodID(cls, "getCenter", "()Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getInterpolatedPoint_41fe83215d7519fd] = env->getMethodID(cls, "getInterpolatedPoint", "(DD)Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getVertices_d941db3d29ab8467] = env->getMethodID(cls, "getVertices", "()[Lorg/orekit/bodies/GeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Tile::Tile(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::GeodeticPoint & a2, const ::org::orekit::bodies::GeodeticPoint & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1db1899da2877d6d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::orekit::bodies::GeodeticPoint Tile::getCenter() const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getCenter_bdca252cae79438c]));
          }

          ::org::orekit::bodies::GeodeticPoint Tile::getInterpolatedPoint(jdouble a0, jdouble a1) const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getInterpolatedPoint_41fe83215d7519fd], a0, a1));
          }

          JArray< ::org::orekit::bodies::GeodeticPoint > Tile::getVertices() const
          {
            return JArray< ::org::orekit::bodies::GeodeticPoint >(env->callObjectMethod(this$, mids$[mid_getVertices_d941db3d29ab8467]));
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
        namespace tessellation {
          static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Tile_init_(t_Tile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Tile_getCenter(t_Tile *self);
          static PyObject *t_Tile_getInterpolatedPoint(t_Tile *self, PyObject *args);
          static PyObject *t_Tile_getVertices(t_Tile *self);
          static PyObject *t_Tile_get__center(t_Tile *self, void *data);
          static PyObject *t_Tile_get__vertices(t_Tile *self, void *data);
          static PyGetSetDef t_Tile__fields_[] = {
            DECLARE_GET_FIELD(t_Tile, center),
            DECLARE_GET_FIELD(t_Tile, vertices),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Tile__methods_[] = {
            DECLARE_METHOD(t_Tile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tile, getCenter, METH_NOARGS),
            DECLARE_METHOD(t_Tile, getInterpolatedPoint, METH_VARARGS),
            DECLARE_METHOD(t_Tile, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Tile)[] = {
            { Py_tp_methods, t_Tile__methods_ },
            { Py_tp_init, (void *) t_Tile_init_ },
            { Py_tp_getset, t_Tile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Tile)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Tile, t_Tile, Tile);

          void t_Tile::install(PyObject *module)
          {
            installType(&PY_TYPE(Tile), &PY_TYPE_DEF(Tile), module, "Tile", 0);
          }

          void t_Tile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "class_", make_descriptor(Tile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "wrapfn_", make_descriptor(t_Tile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Tile::initializeClass, 1)))
              return NULL;
            return t_Tile::wrap_Object(Tile(((t_Tile *) arg)->object.this$));
          }
          static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Tile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Tile_init_(t_Tile *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a2((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a3((jobject) NULL);
            Tile object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Tile(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Tile_getCenter(t_Tile *self)
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenter());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          static PyObject *t_Tile_getInterpolatedPoint(t_Tile *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getInterpolatedPoint(a0, a1));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInterpolatedPoint", args);
            return NULL;
          }

          static PyObject *t_Tile_getVertices(t_Tile *self)
          {
            JArray< ::org::orekit::bodies::GeodeticPoint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return JArray<jobject>(result.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
          }

          static PyObject *t_Tile_get__center(t_Tile *self, void *data)
          {
            ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenter());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
          }

          static PyObject *t_Tile_get__vertices(t_Tile *self, void *data)
          {
            JArray< ::org::orekit::bodies::GeodeticPoint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return JArray<jobject>(value.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
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
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getFrame_0fc1562b68204151] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getInertiaMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_setFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setInertiaMatrixEntry_e98d7b3e971b6087] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Inertia::Inertia() : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::orekit::files::ccsds::definitions::FrameFacade Inertia::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_0fc1562b68204151]));
              }

              ::org::hipparchus::linear::RealMatrix Inertia::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_b2eebabce70526d8]));
              }

              void Inertia::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_2c8b859a72c0094e], a0.this$);
              }

              void Inertia::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_e98d7b3e971b6087], a0, a1, a2);
              }

              void Inertia::validate(jdouble a0) const
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
