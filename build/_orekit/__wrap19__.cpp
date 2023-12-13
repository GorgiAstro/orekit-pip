#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonLexicalAnalyzer.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *PythonLexicalAnalyzer::class$ = NULL;
            jmethodID *PythonLexicalAnalyzer::mids$ = NULL;
            bool PythonLexicalAnalyzer::live$ = false;

            jclass PythonLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_accept_315581e8824888b8] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonLexicalAnalyzer::PythonLexicalAnalyzer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonLexicalAnalyzer::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonLexicalAnalyzer::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonLexicalAnalyzer::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
            static PyObject *t_PythonLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonLexicalAnalyzer_init_(t_PythonLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonLexicalAnalyzer_finalize(t_PythonLexicalAnalyzer *self);
            static PyObject *t_PythonLexicalAnalyzer_pythonExtension(t_PythonLexicalAnalyzer *self, PyObject *args);
            static jobject JNICALL t_PythonLexicalAnalyzer_accept0(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonLexicalAnalyzer_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonLexicalAnalyzer_get__self(t_PythonLexicalAnalyzer *self, void *data);
            static PyGetSetDef t_PythonLexicalAnalyzer__fields_[] = {
              DECLARE_GET_FIELD(t_PythonLexicalAnalyzer, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_PythonLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonLexicalAnalyzer)[] = {
              { Py_tp_methods, t_PythonLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_PythonLexicalAnalyzer_init_ },
              { Py_tp_getset, t_PythonLexicalAnalyzer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonLexicalAnalyzer, t_PythonLexicalAnalyzer, PythonLexicalAnalyzer);

            void t_PythonLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonLexicalAnalyzer), &PY_TYPE_DEF(PythonLexicalAnalyzer), module, "PythonLexicalAnalyzer", 1);
            }

            void t_PythonLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "class_", make_descriptor(PythonLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "wrapfn_", make_descriptor(t_PythonLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonLexicalAnalyzer::initializeClass);
              JNINativeMethod methods[] = {
                { "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;", (void *) t_PythonLexicalAnalyzer_accept0 },
                { "pythonDecRef", "()V", (void *) t_PythonLexicalAnalyzer_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_PythonLexicalAnalyzer::wrap_Object(PythonLexicalAnalyzer(((t_PythonLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_PythonLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonLexicalAnalyzer_init_(t_PythonLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              PythonLexicalAnalyzer object((jobject) NULL);

              INT_CALL(object = PythonLexicalAnalyzer());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonLexicalAnalyzer_finalize(t_PythonLexicalAnalyzer *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonLexicalAnalyzer_pythonExtension(t_PythonLexicalAnalyzer *self, PyObject *args)
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

            static jobject JNICALL t_PythonLexicalAnalyzer_accept0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::wrap_Object(::org::orekit::files::ccsds::utils::lexical::MessageParser(a0));
              PyObject *result = PyObject_CallMethod(obj, "accept", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("accept", result);
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

            static void JNICALL t_PythonLexicalAnalyzer_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonLexicalAnalyzer_get__self(t_PythonLexicalAnalyzer *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XmlSubStructureKey::class$ = NULL;
            jmethodID *XmlSubStructureKey::mids$ = NULL;
            bool XmlSubStructureKey::live$ = false;
            XmlSubStructureKey *XmlSubStructureKey::COMMENT = NULL;
            XmlSubStructureKey *XmlSubStructureKey::additionalParameters = NULL;
            XmlSubStructureKey *XmlSubStructureKey::covarianceMatrix = NULL;
            XmlSubStructureKey *XmlSubStructureKey::odParameters = NULL;
            XmlSubStructureKey *XmlSubStructureKey::relativeMetadataData = NULL;
            XmlSubStructureKey *XmlSubStructureKey::relativeStateVector = NULL;
            XmlSubStructureKey *XmlSubStructureKey::segment = NULL;
            XmlSubStructureKey *XmlSubStructureKey::stateVector = NULL;
            XmlSubStructureKey *XmlSubStructureKey::userDefinedParameters = NULL;

            jclass XmlSubStructureKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_30f963975530d507] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;)Z");
                mids$[mid_valueOf_b6ed3701a12d8506] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;");
                mids$[mid_values_f3628dfe8b48d95e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new XmlSubStructureKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                additionalParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "additionalParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                covarianceMatrix = new XmlSubStructureKey(env->getStaticObjectField(cls, "covarianceMatrix", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                odParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "odParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                relativeMetadataData = new XmlSubStructureKey(env->getStaticObjectField(cls, "relativeMetadataData", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                relativeStateVector = new XmlSubStructureKey(env->getStaticObjectField(cls, "relativeStateVector", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                segment = new XmlSubStructureKey(env->getStaticObjectField(cls, "segment", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                stateVector = new XmlSubStructureKey(env->getStaticObjectField(cls, "stateVector", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                userDefinedParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "userDefinedParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean XmlSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmParser & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_30f963975530d507], a0.this$, a1.this$);
            }

            XmlSubStructureKey XmlSubStructureKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return XmlSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b6ed3701a12d8506], a0.this$));
            }

            JArray< XmlSubStructureKey > XmlSubStructureKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< XmlSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_f3628dfe8b48d95e]));
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
            static PyObject *t_XmlSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlSubStructureKey_of_(t_XmlSubStructureKey *self, PyObject *args);
            static PyObject *t_XmlSubStructureKey_process(t_XmlSubStructureKey *self, PyObject *args);
            static PyObject *t_XmlSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_XmlSubStructureKey_values(PyTypeObject *type);
            static PyObject *t_XmlSubStructureKey_get__parameters_(t_XmlSubStructureKey *self, void *data);
            static PyGetSetDef t_XmlSubStructureKey__fields_[] = {
              DECLARE_GET_FIELD(t_XmlSubStructureKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XmlSubStructureKey__methods_[] = {
              DECLARE_METHOD(t_XmlSubStructureKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_XmlSubStructureKey, process, METH_VARARGS),
              DECLARE_METHOD(t_XmlSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlSubStructureKey)[] = {
              { Py_tp_methods, t_XmlSubStructureKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_XmlSubStructureKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlSubStructureKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(XmlSubStructureKey, t_XmlSubStructureKey, XmlSubStructureKey);
            PyObject *t_XmlSubStructureKey::wrap_Object(const XmlSubStructureKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XmlSubStructureKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XmlSubStructureKey *self = (t_XmlSubStructureKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_XmlSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XmlSubStructureKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XmlSubStructureKey *self = (t_XmlSubStructureKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_XmlSubStructureKey::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlSubStructureKey), &PY_TYPE_DEF(XmlSubStructureKey), module, "XmlSubStructureKey", 0);
            }

            void t_XmlSubStructureKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "class_", make_descriptor(XmlSubStructureKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "wrapfn_", make_descriptor(t_XmlSubStructureKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(XmlSubStructureKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "COMMENT", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "additionalParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::additionalParameters)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "covarianceMatrix", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::covarianceMatrix)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "odParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::odParameters)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "relativeMetadataData", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::relativeMetadataData)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "relativeStateVector", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::relativeStateVector)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "segment", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::segment)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "stateVector", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::stateVector)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "userDefinedParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::userDefinedParameters)));
            }

            static PyObject *t_XmlSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlSubStructureKey::initializeClass, 1)))
                return NULL;
              return t_XmlSubStructureKey::wrap_Object(XmlSubStructureKey(((t_XmlSubStructureKey *) arg)->object.this$));
            }
            static PyObject *t_XmlSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlSubStructureKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XmlSubStructureKey_of_(t_XmlSubStructureKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_XmlSubStructureKey_process(t_XmlSubStructureKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmParser a1((jobject) NULL);
              PyTypeObject **p1;
              jboolean result;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::parameters_))
              {
                OBJ_CALL(result = self->object.process(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_XmlSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              XmlSubStructureKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XmlSubStructureKey::valueOf(a0));
                return t_XmlSubStructureKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_XmlSubStructureKey_values(PyTypeObject *type)
            {
              JArray< XmlSubStructureKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XmlSubStructureKey::values());
              return JArray<jobject>(result.this$).wrap(t_XmlSubStructureKey::wrap_jobject);
            }
            static PyObject *t_XmlSubStructureKey_get__parameters_(t_XmlSubStructureKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *Ndm::class$ = NULL;
          jmethodID *Ndm::mids$ = NULL;
          bool Ndm::live$ = false;

          jclass Ndm::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/Ndm");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_29c3e061cbeaa98b] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;)V");
              mids$[mid_getComments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
              mids$[mid_getConstituents_e62d3bb06d56d7e3] = env->getMethodID(cls, "getConstituents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Ndm::Ndm(const ::java::util::List & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_29c3e061cbeaa98b, a0.this$, a1.this$)) {}

          ::java::util::List Ndm::getComments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_e62d3bb06d56d7e3]));
          }

          ::java::util::List Ndm::getConstituents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getConstituents_e62d3bb06d56d7e3]));
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
          static PyObject *t_Ndm_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Ndm_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Ndm_init_(t_Ndm *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Ndm_getComments(t_Ndm *self);
          static PyObject *t_Ndm_getConstituents(t_Ndm *self);
          static PyObject *t_Ndm_get__comments(t_Ndm *self, void *data);
          static PyObject *t_Ndm_get__constituents(t_Ndm *self, void *data);
          static PyGetSetDef t_Ndm__fields_[] = {
            DECLARE_GET_FIELD(t_Ndm, comments),
            DECLARE_GET_FIELD(t_Ndm, constituents),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Ndm__methods_[] = {
            DECLARE_METHOD(t_Ndm, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Ndm, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Ndm, getComments, METH_NOARGS),
            DECLARE_METHOD(t_Ndm, getConstituents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Ndm)[] = {
            { Py_tp_methods, t_Ndm__methods_ },
            { Py_tp_init, (void *) t_Ndm_init_ },
            { Py_tp_getset, t_Ndm__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Ndm)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Ndm, t_Ndm, Ndm);

          void t_Ndm::install(PyObject *module)
          {
            installType(&PY_TYPE(Ndm), &PY_TYPE_DEF(Ndm), module, "Ndm", 0);
          }

          void t_Ndm::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "class_", make_descriptor(Ndm::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "wrapfn_", make_descriptor(t_Ndm::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Ndm_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Ndm::initializeClass, 1)))
              return NULL;
            return t_Ndm::wrap_Object(Ndm(((t_Ndm *) arg)->object.this$));
          }
          static PyObject *t_Ndm_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Ndm::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Ndm_init_(t_Ndm *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            Ndm object((jobject) NULL);

            if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = Ndm(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Ndm_getComments(t_Ndm *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_Ndm_getConstituents(t_Ndm *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getConstituents());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_Ndm_get__comments(t_Ndm *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_Ndm_get__constituents(t_Ndm *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getConstituents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/UpdatableTile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TileUpdater::class$ = NULL;
        jmethodID *TileUpdater::mids$ = NULL;
        bool TileUpdater::live$ = false;

        jclass TileUpdater::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TileUpdater");

            mids$ = new jmethodID[max_mid];
            mids$[mid_updateTile_f975c8aa30d63fc3] = env->getMethodID(cls, "updateTile", "(DDLorg/orekit/rugged/raster/UpdatableTile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void TileUpdater::updateTile(jdouble a0, jdouble a1, const ::org::orekit::rugged::raster::UpdatableTile & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateTile_f975c8aa30d63fc3], a0, a1, a2.this$);
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
      namespace raster {
        static PyObject *t_TileUpdater_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileUpdater_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileUpdater_updateTile(t_TileUpdater *self, PyObject *args);

        static PyMethodDef t_TileUpdater__methods_[] = {
          DECLARE_METHOD(t_TileUpdater, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileUpdater, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileUpdater, updateTile, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TileUpdater)[] = {
          { Py_tp_methods, t_TileUpdater__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TileUpdater)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TileUpdater, t_TileUpdater, TileUpdater);

        void t_TileUpdater::install(PyObject *module)
        {
          installType(&PY_TYPE(TileUpdater), &PY_TYPE_DEF(TileUpdater), module, "TileUpdater", 0);
        }

        void t_TileUpdater::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "class_", make_descriptor(TileUpdater::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "wrapfn_", make_descriptor(t_TileUpdater::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TileUpdater_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TileUpdater::initializeClass, 1)))
            return NULL;
          return t_TileUpdater::wrap_Object(TileUpdater(((t_TileUpdater *) arg)->object.this$));
        }
        static PyObject *t_TileUpdater_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TileUpdater::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TileUpdater_updateTile(t_TileUpdater *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::UpdatableTile a2((jobject) NULL);

          if (!parseArgs(args, "DDk", ::org::orekit::rugged::raster::UpdatableTile::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateTile(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateTile", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSCompiler::class$ = NULL;
        jmethodID *DSCompiler::mids$ = NULL;
        bool DSCompiler::live$ = false;

        jclass DSCompiler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSCompiler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_acos_7f42c24ce6feebb5] = env->getMethodID(cls, "acos", "([DI[DI)V");
            mids$[mid_acos_9433cb1b29d70528] = env->getMethodID(cls, "acos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_acosh_7f42c24ce6feebb5] = env->getMethodID(cls, "acosh", "([DI[DI)V");
            mids$[mid_acosh_9433cb1b29d70528] = env->getMethodID(cls, "acosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_add_3f8fc7e3a9308c23] = env->getMethodID(cls, "add", "([DI[DI[DI)V");
            mids$[mid_add_b457dda03831e1cb] = env->getMethodID(cls, "add", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_asin_7f42c24ce6feebb5] = env->getMethodID(cls, "asin", "([DI[DI)V");
            mids$[mid_asin_9433cb1b29d70528] = env->getMethodID(cls, "asin", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_asinh_7f42c24ce6feebb5] = env->getMethodID(cls, "asinh", "([DI[DI)V");
            mids$[mid_asinh_9433cb1b29d70528] = env->getMethodID(cls, "asinh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atan_7f42c24ce6feebb5] = env->getMethodID(cls, "atan", "([DI[DI)V");
            mids$[mid_atan_9433cb1b29d70528] = env->getMethodID(cls, "atan", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atan2_3f8fc7e3a9308c23] = env->getMethodID(cls, "atan2", "([DI[DI[DI)V");
            mids$[mid_atan2_b457dda03831e1cb] = env->getMethodID(cls, "atan2", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atanh_7f42c24ce6feebb5] = env->getMethodID(cls, "atanh", "([DI[DI)V");
            mids$[mid_atanh_9433cb1b29d70528] = env->getMethodID(cls, "atanh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_checkCompatibility_99b96bda8f8ef98e] = env->getMethodID(cls, "checkCompatibility", "(Lorg/hipparchus/analysis/differentiation/DSCompiler;)V");
            mids$[mid_compose_43b010ad68ef496f] = env->getMethodID(cls, "compose", "([DI[D[DI)V");
            mids$[mid_compose_8ce5aacb072ba840] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;I[D[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_compose_a6692ca32fba1e75] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_cos_7f42c24ce6feebb5] = env->getMethodID(cls, "cos", "([DI[DI)V");
            mids$[mid_cos_9433cb1b29d70528] = env->getMethodID(cls, "cos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_cosh_7f42c24ce6feebb5] = env->getMethodID(cls, "cosh", "([DI[DI)V");
            mids$[mid_cosh_9433cb1b29d70528] = env->getMethodID(cls, "cosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_divide_3f8fc7e3a9308c23] = env->getMethodID(cls, "divide", "([DI[DI[DI)V");
            mids$[mid_divide_b457dda03831e1cb] = env->getMethodID(cls, "divide", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_exp_7f42c24ce6feebb5] = env->getMethodID(cls, "exp", "([DI[DI)V");
            mids$[mid_exp_9433cb1b29d70528] = env->getMethodID(cls, "exp", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_expm1_7f42c24ce6feebb5] = env->getMethodID(cls, "expm1", "([DI[DI)V");
            mids$[mid_expm1_9433cb1b29d70528] = env->getMethodID(cls, "expm1", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_getCompiler_e344d5ef5ac234cf] = env->getStaticMethodID(cls, "getCompiler", "(II)Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getFreeParameters_55546ef6a647f39b] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivativeIndex_d57a86117ebc55bd] = env->getMethodID(cls, "getPartialDerivativeIndex", "([I)I");
            mids$[mid_getPartialDerivativeOrders_7247c1a113e968de] = env->getMethodID(cls, "getPartialDerivativeOrders", "(I)[I");
            mids$[mid_getPartialDerivativeOrdersSum_0e7cf35192c3effe] = env->getMethodID(cls, "getPartialDerivativeOrdersSum", "(I)I");
            mids$[mid_getSize_55546ef6a647f39b] = env->getMethodID(cls, "getSize", "()I");
            mids$[mid_linearCombination_ee5aa93093742a55] = env->getMethodID(cls, "linearCombination", "(D[DID[DI[DI)V");
            mids$[mid_linearCombination_bfaa6cbe8aefc5c7] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_2beefad0ea10819e] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_2c17d1262431e391] = env->getMethodID(cls, "linearCombination", "(D[DID[DID[DI[DI)V");
            mids$[mid_linearCombination_ac1301009086907e] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_274482b2e2c10c74] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_6336f7f50e9527e4] = env->getMethodID(cls, "linearCombination", "(D[DID[DID[DID[DI[DI)V");
            mids$[mid_linearCombination_a42021a295b5530a] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_5c9005ac6da46e6b] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log_7f42c24ce6feebb5] = env->getMethodID(cls, "log", "([DI[DI)V");
            mids$[mid_log_9433cb1b29d70528] = env->getMethodID(cls, "log", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log10_7f42c24ce6feebb5] = env->getMethodID(cls, "log10", "([DI[DI)V");
            mids$[mid_log10_9433cb1b29d70528] = env->getMethodID(cls, "log10", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log1p_7f42c24ce6feebb5] = env->getMethodID(cls, "log1p", "([DI[DI)V");
            mids$[mid_log1p_9433cb1b29d70528] = env->getMethodID(cls, "log1p", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_multiply_3f8fc7e3a9308c23] = env->getMethodID(cls, "multiply", "([DI[DI[DI)V");
            mids$[mid_multiply_b457dda03831e1cb] = env->getMethodID(cls, "multiply", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_20f7af41648d0019] = env->getMethodID(cls, "pow", "([DII[DI)V");
            mids$[mid_pow_3c94e69776adcb03] = env->getMethodID(cls, "pow", "(D[DI[DI)V");
            mids$[mid_pow_cb94d18f8cc8b871] = env->getMethodID(cls, "pow", "([DID[DI)V");
            mids$[mid_pow_e21deca0387a1a8a] = env->getMethodID(cls, "pow", "(D[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_4433cdc0931d8583] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_7a9e7172478c6020] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;II[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_3f8fc7e3a9308c23] = env->getMethodID(cls, "pow", "([DI[DI[DI)V");
            mids$[mid_pow_b457dda03831e1cb] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_rebase_d403d888b24df625] = env->getMethodID(cls, "rebase", "([DILorg/hipparchus/analysis/differentiation/DSCompiler;[D[DI)V");
            mids$[mid_rebase_4adc42ee40bf44e4] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/analysis/differentiation/DSCompiler;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_reciprocal_7f42c24ce6feebb5] = env->getMethodID(cls, "reciprocal", "([DI[DI)V");
            mids$[mid_reciprocal_9433cb1b29d70528] = env->getMethodID(cls, "reciprocal", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_remainder_3f8fc7e3a9308c23] = env->getMethodID(cls, "remainder", "([DI[DI[DI)V");
            mids$[mid_remainder_b457dda03831e1cb] = env->getMethodID(cls, "remainder", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_rootN_20f7af41648d0019] = env->getMethodID(cls, "rootN", "([DII[DI)V");
            mids$[mid_rootN_7a9e7172478c6020] = env->getMethodID(cls, "rootN", "([Lorg/hipparchus/CalculusFieldElement;II[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sin_7f42c24ce6feebb5] = env->getMethodID(cls, "sin", "([DI[DI)V");
            mids$[mid_sin_9433cb1b29d70528] = env->getMethodID(cls, "sin", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinCos_3f8fc7e3a9308c23] = env->getMethodID(cls, "sinCos", "([DI[DI[DI)V");
            mids$[mid_sinCos_b457dda03831e1cb] = env->getMethodID(cls, "sinCos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinh_7f42c24ce6feebb5] = env->getMethodID(cls, "sinh", "([DI[DI)V");
            mids$[mid_sinh_9433cb1b29d70528] = env->getMethodID(cls, "sinh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinhCosh_3f8fc7e3a9308c23] = env->getMethodID(cls, "sinhCosh", "([DI[DI[DI)V");
            mids$[mid_sinhCosh_b457dda03831e1cb] = env->getMethodID(cls, "sinhCosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sqrt_7f42c24ce6feebb5] = env->getMethodID(cls, "sqrt", "([DI[DI)V");
            mids$[mid_sqrt_9433cb1b29d70528] = env->getMethodID(cls, "sqrt", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_subtract_3f8fc7e3a9308c23] = env->getMethodID(cls, "subtract", "([DI[DI[DI)V");
            mids$[mid_subtract_b457dda03831e1cb] = env->getMethodID(cls, "subtract", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_tan_7f42c24ce6feebb5] = env->getMethodID(cls, "tan", "([DI[DI)V");
            mids$[mid_tan_9433cb1b29d70528] = env->getMethodID(cls, "tan", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_tanh_7f42c24ce6feebb5] = env->getMethodID(cls, "tanh", "([DI[DI)V");
            mids$[mid_tanh_9433cb1b29d70528] = env->getMethodID(cls, "tanh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_taylor_3b5d51d5c827748c] = env->getMethodID(cls, "taylor", "([DI[D)D");
            mids$[mid_taylor_0ff8c94f9d7fab9c] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;I[D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_cbdaf04f3b997349] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void DSCompiler::acos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acos_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acos_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acosh_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acosh_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::add(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_add_3f8fc7e3a9308c23], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::add(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_add_b457dda03831e1cb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::asin(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asin_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asin(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asin_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asinh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asinh_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asinh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asinh_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atan_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atan_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan2(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_atan2_3f8fc7e3a9308c23], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::atan2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_atan2_b457dda03831e1cb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::atanh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atanh_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atanh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atanh_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::checkCompatibility(const DSCompiler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_checkCompatibility_99b96bda8f8ef98e], a0.this$);
        }

        void DSCompiler::compose(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_43b010ad68ef496f], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< jdouble > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_8ce5aacb072ba840], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_a6692ca32fba1e75], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::cos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cos_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cos_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cosh_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cosh_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::divide(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_divide_3f8fc7e3a9308c23], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::divide(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_divide_b457dda03831e1cb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::exp(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_exp_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::exp(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_exp_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::expm1(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_expm1_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::expm1(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_expm1_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        DSCompiler DSCompiler::getCompiler(jint a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DSCompiler(env->callStaticObjectMethod(cls, mids$[mid_getCompiler_e344d5ef5ac234cf], a0, a1));
        }

        jint DSCompiler::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_55546ef6a647f39b]);
        }

        jint DSCompiler::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }

        jint DSCompiler::getPartialDerivativeIndex(const JArray< jint > & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getPartialDerivativeIndex_d57a86117ebc55bd], a0.this$);
        }

        JArray< jint > DSCompiler::getPartialDerivativeOrders(jint a0) const
        {
          return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPartialDerivativeOrders_7247c1a113e968de], a0));
        }

        jint DSCompiler::getPartialDerivativeOrdersSum(jint a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getPartialDerivativeOrdersSum_0e7cf35192c3effe], a0);
        }

        jint DSCompiler::getSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSize_55546ef6a647f39b]);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, const JArray< jdouble > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_ee5aa93093742a55], a0, a1.this$, a2, a3, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const JArray< ::org::hipparchus::CalculusFieldElement > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_bfaa6cbe8aefc5c7], a0, a1.this$, a2, a3, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const JArray< ::org::hipparchus::CalculusFieldElement > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_2beefad0ea10819e], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, jdouble a6, const JArray< jdouble > & a7, jint a8, const JArray< jdouble > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_2c17d1262431e391], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, jdouble a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const JArray< ::org::hipparchus::CalculusFieldElement > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_ac1301009086907e], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const ::org::hipparchus::CalculusFieldElement & a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const JArray< ::org::hipparchus::CalculusFieldElement > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_274482b2e2c10c74], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, jdouble a6, const JArray< jdouble > & a7, jint a8, jdouble a9, const JArray< jdouble > & a10, jint a11, const JArray< jdouble > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_6336f7f50e9527e4], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, jdouble a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, jdouble a9, const JArray< ::org::hipparchus::CalculusFieldElement > & a10, jint a11, const JArray< ::org::hipparchus::CalculusFieldElement > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_a42021a295b5530a], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const ::org::hipparchus::CalculusFieldElement & a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const ::org::hipparchus::CalculusFieldElement & a9, const JArray< ::org::hipparchus::CalculusFieldElement > & a10, jint a11, const JArray< ::org::hipparchus::CalculusFieldElement > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_5c9005ac6da46e6b], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7.this$, a8, a9.this$, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::log(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log10(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log10_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log10(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log10_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log1p(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log1p_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log1p(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log1p_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::multiply(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_multiply_3f8fc7e3a9308c23], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::multiply(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_multiply_b457dda03831e1cb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_20f7af41648d0019], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(jdouble a0, const JArray< jdouble > & a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_3c94e69776adcb03], a0, a1.this$, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, jdouble a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_cb94d18f8cc8b871], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_e21deca0387a1a8a], a0, a1.this$, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_4433cdc0931d8583], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_7a9e7172478c6020], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_3f8fc7e3a9308c23], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_b457dda03831e1cb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::rebase(const JArray< jdouble > & a0, jint a1, const DSCompiler & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_rebase_d403d888b24df625], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5);
        }

        void DSCompiler::rebase(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const DSCompiler & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_rebase_4adc42ee40bf44e4], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5);
        }

        void DSCompiler::reciprocal(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_reciprocal_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::reciprocal(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_reciprocal_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::remainder(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_remainder_3f8fc7e3a9308c23], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::remainder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_remainder_b457dda03831e1cb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::rootN(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_rootN_20f7af41648d0019], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::rootN(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_rootN_7a9e7172478c6020], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::sin(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sin_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sin(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sin_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinCos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinCos_3f8fc7e3a9308c23], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinCos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinCos_b457dda03831e1cb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sinh_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sinh_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinhCosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinhCosh_3f8fc7e3a9308c23], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinhCosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinhCosh_b457dda03831e1cb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sqrt(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sqrt_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sqrt(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sqrt_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::subtract(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_subtract_3f8fc7e3a9308c23], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::subtract(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_subtract_b457dda03831e1cb], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::tan(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tan_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tan(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tan_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tanh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tanh_7f42c24ce6feebb5], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tanh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tanh_9433cb1b29d70528], a0.this$, a1, a2.this$, a3);
        }

        jdouble DSCompiler::taylor(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_3b5d51d5c827748c], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::CalculusFieldElement DSCompiler::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_0ff8c94f9d7fab9c], a0.this$, a1, a2.this$));
        }

        ::org::hipparchus::CalculusFieldElement DSCompiler::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_cbdaf04f3b997349], a0.this$, a1, a2.this$));
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
        static PyObject *t_DSCompiler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSCompiler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSCompiler_acos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_acosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_add(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_asin(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_asinh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atan(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atan2(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atanh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_checkCompatibility(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_compose(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_cos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_cosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_divide(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_exp(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_expm1(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_getCompiler(PyTypeObject *type, PyObject *args);
        static PyObject *t_DSCompiler_getFreeParameters(t_DSCompiler *self);
        static PyObject *t_DSCompiler_getOrder(t_DSCompiler *self);
        static PyObject *t_DSCompiler_getPartialDerivativeIndex(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getPartialDerivativeOrders(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getPartialDerivativeOrdersSum(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getSize(t_DSCompiler *self);
        static PyObject *t_DSCompiler_linearCombination(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log10(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log1p(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_multiply(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_pow(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_rebase(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_reciprocal(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_remainder(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_rootN(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sin(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinCos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinhCosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sqrt(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_subtract(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_tan(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_tanh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_taylor(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_get__freeParameters(t_DSCompiler *self, void *data);
        static PyObject *t_DSCompiler_get__order(t_DSCompiler *self, void *data);
        static PyObject *t_DSCompiler_get__size(t_DSCompiler *self, void *data);
        static PyGetSetDef t_DSCompiler__fields_[] = {
          DECLARE_GET_FIELD(t_DSCompiler, freeParameters),
          DECLARE_GET_FIELD(t_DSCompiler, order),
          DECLARE_GET_FIELD(t_DSCompiler, size),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSCompiler__methods_[] = {
          DECLARE_METHOD(t_DSCompiler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, acos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, acosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, add, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, asin, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, asinh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atan, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atan2, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atanh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, checkCompatibility, METH_O),
          DECLARE_METHOD(t_DSCompiler, compose, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, cos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, cosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, divide, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, exp, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, expm1, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, getCompiler, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeIndex, METH_O),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeOrders, METH_O),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeOrdersSum, METH_O),
          DECLARE_METHOD(t_DSCompiler, getSize, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log10, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log1p, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, multiply, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, pow, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, rebase, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, remainder, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, rootN, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sin, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, subtract, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, tan, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, tanh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, taylor, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSCompiler)[] = {
          { Py_tp_methods, t_DSCompiler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DSCompiler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSCompiler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSCompiler, t_DSCompiler, DSCompiler);

        void t_DSCompiler::install(PyObject *module)
        {
          installType(&PY_TYPE(DSCompiler), &PY_TYPE_DEF(DSCompiler), module, "DSCompiler", 0);
        }

        void t_DSCompiler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "class_", make_descriptor(DSCompiler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "wrapfn_", make_descriptor(t_DSCompiler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSCompiler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSCompiler::initializeClass, 1)))
            return NULL;
          return t_DSCompiler::wrap_Object(DSCompiler(((t_DSCompiler *) arg)->object.this$));
        }
        static PyObject *t_DSCompiler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSCompiler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DSCompiler_acos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.acos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.acos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_acosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.acosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.acosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_add(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.add(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.add(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_asin(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.asin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.asin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "asin", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_asinh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.asinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.asinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "asinh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atan(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.atan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.atan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atan", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atan2(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.atan2(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.atan2(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atanh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.atanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.atanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atanh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_checkCompatibility(t_DSCompiler *self, PyObject *arg)
        {
          DSCompiler a0((jobject) NULL);

          if (!parseArg(arg, "k", DSCompiler::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkCompatibility(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "checkCompatibility", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_compose(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DI[D[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KI[D[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KI[K[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_cos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.cos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.cos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_cosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.cosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.cosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_divide(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.divide(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.divide(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_exp(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.exp(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.exp(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "exp", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_expm1(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.expm1(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.expm1(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "expm1", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_getCompiler(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          DSCompiler result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DSCompiler::getCompiler(a0, a1));
            return t_DSCompiler::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getCompiler", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_getFreeParameters(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_getOrder(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_getPartialDerivativeIndex(t_DSCompiler *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jint result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeIndex", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getPartialDerivativeOrders(t_DSCompiler *self, PyObject *arg)
        {
          jint a0;
          JArray< jint > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeOrders(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeOrders", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getPartialDerivativeOrdersSum(t_DSCompiler *self, PyObject *arg)
        {
          jint a0;
          jint result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeOrdersSum(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeOrdersSum", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getSize(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_linearCombination(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              JArray< jdouble > a6((jobject) NULL);
              jint a7;

              if (!parseArgs(args, "D[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              JArray< ::org::hipparchus::CalculusFieldElement > a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;

              if (!parseArgs(args, "D[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              JArray< ::org::hipparchus::CalculusFieldElement > a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;

              if (!parseArgs(args, "K[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            break;
           case 11:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              jdouble a6;
              JArray< jdouble > a7((jobject) NULL);
              jint a8;
              JArray< jdouble > a9((jobject) NULL);
              jint a10;

              if (!parseArgs(args, "D[DID[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              jdouble a6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              JArray< ::org::hipparchus::CalculusFieldElement > a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;

              if (!parseArgs(args, "D[KID[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              JArray< ::org::hipparchus::CalculusFieldElement > a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;

              if (!parseArgs(args, "K[KIK[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            break;
           case 14:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              jdouble a6;
              JArray< jdouble > a7((jobject) NULL);
              jint a8;
              jdouble a9;
              JArray< jdouble > a10((jobject) NULL);
              jint a11;
              JArray< jdouble > a12((jobject) NULL);
              jint a13;

              if (!parseArgs(args, "D[DID[DID[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              jdouble a6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              jdouble a9;
              JArray< ::org::hipparchus::CalculusFieldElement > a10((jobject) NULL);
              PyTypeObject **p10;
              jint a11;
              JArray< ::org::hipparchus::CalculusFieldElement > a12((jobject) NULL);
              PyTypeObject **p12;
              jint a13;

              if (!parseArgs(args, "D[KID[KID[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
              PyTypeObject **p9;
              JArray< ::org::hipparchus::CalculusFieldElement > a10((jobject) NULL);
              PyTypeObject **p10;
              jint a11;
              JArray< ::org::hipparchus::CalculusFieldElement > a12((jobject) NULL);
              PyTypeObject **p12;
              jint a13;

              if (!parseArgs(args, "K[KIK[KIK[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log10(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log10(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log10(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log10", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log1p(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log1p(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log1p(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log1p", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_multiply(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.multiply(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.multiply(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_pow(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KID[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "D[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DID[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "D[DI[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DII[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KII[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            break;
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_rebase(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              DSCompiler a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DIk[D[DI", DSCompiler::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.rebase(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              DSCompiler a2((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KIk[K[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, DSCompiler::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.rebase(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_reciprocal(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.reciprocal(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.reciprocal(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "reciprocal", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_remainder(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.remainder(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.remainder(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_rootN(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DII[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.rootN(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KII[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.rootN(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sin(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sin", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinCos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.sinCos(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.sinCos(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinCos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinhCosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.sinhCosh(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.sinhCosh(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinhCosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sqrt(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sqrt(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sqrt(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sqrt", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_subtract(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.subtract(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.subtract(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_tan(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.tan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.tan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tan", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_tanh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.tanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.tanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tanh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_taylor(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[DI[D", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[KI[D", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[KI[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_get__freeParameters(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DSCompiler_get__order(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DSCompiler_get__size(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/PolynomialSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *PolynomialSolver::class$ = NULL;
        jmethodID *PolynomialSolver::mids$ = NULL;
        bool PolynomialSolver::live$ = false;

        jclass PolynomialSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/PolynomialSolver");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
      namespace solvers {
        static PyObject *t_PolynomialSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialSolver_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_PolynomialSolver__methods_[] = {
          DECLARE_METHOD(t_PolynomialSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialSolver, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialSolver)[] = {
          { Py_tp_methods, t_PolynomialSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(PolynomialSolver, t_PolynomialSolver, PolynomialSolver);

        void t_PolynomialSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialSolver), &PY_TYPE_DEF(PolynomialSolver), module, "PolynomialSolver", 0);
        }

        void t_PolynomialSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSolver), "class_", make_descriptor(PolynomialSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSolver), "wrapfn_", make_descriptor(t_PolynomialSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialSolver::initializeClass, 1)))
            return NULL;
          return t_PolynomialSolver::wrap_Object(PolynomialSolver(((t_PolynomialSolver *) arg)->object.this$));
        }
        static PyObject *t_PolynomialSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1044Data::class$ = NULL;
              jmethodID *Rtcm1044Data::mids$ = NULL;
              bool Rtcm1044Data::live$ = false;

              jclass Rtcm1044Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getQzssCodeOnL2_55546ef6a647f39b] = env->getMethodID(cls, "getQzssCodeOnL2", "()I");
                  mids$[mid_getQzssFitInterval_55546ef6a647f39b] = env->getMethodID(cls, "getQzssFitInterval", "()I");
                  mids$[mid_getQzssNavigationMessage_a5fec3268c180e7d] = env->getMethodID(cls, "getQzssNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;");
                  mids$[mid_getQzssNavigationMessage_b9fd83189482f0bf] = env->getMethodID(cls, "getQzssNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;");
                  mids$[mid_getQzssToc_b74f83833fdad017] = env->getMethodID(cls, "getQzssToc", "()D");
                  mids$[mid_setQzssCodeOnL2_44ed599e93e8a30c] = env->getMethodID(cls, "setQzssCodeOnL2", "(I)V");
                  mids$[mid_setQzssFitInterval_44ed599e93e8a30c] = env->getMethodID(cls, "setQzssFitInterval", "(I)V");
                  mids$[mid_setQzssNavigationMessage_a62013e28777a8da] = env->getMethodID(cls, "setQzssNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;)V");
                  mids$[mid_setQzssToc_8ba9fe7a847cecad] = env->getMethodID(cls, "setQzssToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1044Data::Rtcm1044Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jint Rtcm1044Data::getQzssCodeOnL2() const
              {
                return env->callIntMethod(this$, mids$[mid_getQzssCodeOnL2_55546ef6a647f39b]);
              }

              jint Rtcm1044Data::getQzssFitInterval() const
              {
                return env->callIntMethod(this$, mids$[mid_getQzssFitInterval_55546ef6a647f39b]);
              }

              ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage Rtcm1044Data::getQzssNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getQzssNavigationMessage_a5fec3268c180e7d]));
              }

              ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage Rtcm1044Data::getQzssNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getQzssNavigationMessage_b9fd83189482f0bf], a0.this$));
              }

              jdouble Rtcm1044Data::getQzssToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getQzssToc_b74f83833fdad017]);
              }

              void Rtcm1044Data::setQzssCodeOnL2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssCodeOnL2_44ed599e93e8a30c], a0);
              }

              void Rtcm1044Data::setQzssFitInterval(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssFitInterval_44ed599e93e8a30c], a0);
              }

              void Rtcm1044Data::setQzssNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssNavigationMessage_a62013e28777a8da], a0.this$);
              }

              void Rtcm1044Data::setQzssToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssToc_8ba9fe7a847cecad], a0);
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
              static PyObject *t_Rtcm1044Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1044Data_init_(t_Rtcm1044Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1044Data_getQzssCodeOnL2(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_getQzssFitInterval(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_getQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *args);
              static PyObject *t_Rtcm1044Data_getQzssToc(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_setQzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssFitInterval(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssToc(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_get__qzssCodeOnL2(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssFitInterval(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssFitInterval(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssNavigationMessage(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssToc(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssToc(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1044Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssCodeOnL2),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssFitInterval),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssToc),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1044Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1044Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssCodeOnL2, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssFitInterval, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssCodeOnL2, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssFitInterval, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssToc, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1044Data)[] = {
                { Py_tp_methods, t_Rtcm1044Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1044Data_init_ },
                { Py_tp_getset, t_Rtcm1044Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1044Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1044Data, t_Rtcm1044Data, Rtcm1044Data);

              void t_Rtcm1044Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1044Data), &PY_TYPE_DEF(Rtcm1044Data), module, "Rtcm1044Data", 0);
              }

              void t_Rtcm1044Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "class_", make_descriptor(Rtcm1044Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "wrapfn_", make_descriptor(t_Rtcm1044Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1044Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1044Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1044Data::wrap_Object(Rtcm1044Data(((t_Rtcm1044Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1044Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1044Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1044Data_init_(t_Rtcm1044Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1044Data object((jobject) NULL);

                INT_CALL(object = Rtcm1044Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1044Data_getQzssCodeOnL2(t_Rtcm1044Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getQzssCodeOnL2());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1044Data_getQzssFitInterval(t_Rtcm1044Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getQzssFitInterval());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1044Data_getQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getQzssNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getQzssNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getQzssNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_getQzssToc(t_Rtcm1044Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getQzssToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1044Data_setQzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setQzssCodeOnL2(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssCodeOnL2", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssFitInterval(t_Rtcm1044Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setQzssFitInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssFitInterval", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setQzssNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssToc(t_Rtcm1044Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setQzssToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_get__qzssCodeOnL2(t_Rtcm1044Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getQzssCodeOnL2());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1044Data_set__qzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setQzssCodeOnL2(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssCodeOnL2", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssFitInterval(t_Rtcm1044Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getQzssFitInterval());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1044Data_set__qzssFitInterval(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setQzssFitInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssFitInterval", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssNavigationMessage(t_Rtcm1044Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getQzssNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1044Data_set__qzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setQzssNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssToc(t_Rtcm1044Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getQzssToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1044Data_set__qzssToc(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setQzssToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssToc", arg);
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
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
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
            mids$[mid_init$_6c53ed6f01ef0ff8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/rugged/utils/SpacecraftToObservedBody;IIZZID)V");
            mids$[mid_init$_81e166046bd5bbc1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/rugged/utils/SpacecraftToObservedBody;IIZZIDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/util/stream/Stream;)V");
            mids$[mid_find_3adb4906e4611107] = env->getMethodID(cls, "find", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult;");
            mids$[mid_getAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAccuracy", "()D");
            mids$[mid_getCachedResults_14e21bf777ff0ccf] = env->getMethodID(cls, "getCachedResults", "()Ljava/util/stream/Stream;");
            mids$[mid_getMaxEval_55546ef6a647f39b] = env->getMethodID(cls, "getMaxEval", "()I");
            mids$[mid_getMaxLine_55546ef6a647f39b] = env->getMethodID(cls, "getMaxLine", "()I");
            mids$[mid_getMeanPlaneNormal_8b724f8b4fdad1a2] = env->getMethodID(cls, "getMeanPlaneNormal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getMinLine_55546ef6a647f39b] = env->getMethodID(cls, "getMinLine", "()I");
            mids$[mid_getScToBody_cf686ec38ae38bec] = env->getMethodID(cls, "getScToBody", "()Lorg/orekit/rugged/utils/SpacecraftToObservedBody;");
            mids$[mid_getSensor_57f8f535e0c09b7f] = env->getMethodID(cls, "getSensor", "()Lorg/orekit/rugged/linesensor/LineSensor;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorMeanPlaneCrossing::SensorMeanPlaneCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a1, jint a2, jint a3, jboolean a4, jboolean a5, jint a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6c53ed6f01ef0ff8, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

        SensorMeanPlaneCrossing::SensorMeanPlaneCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a1, jint a2, jint a3, jboolean a4, jboolean a5, jint a6, jdouble a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::java::util::stream::Stream & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_81e166046bd5bbc1, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$)) {}

        ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult SensorMeanPlaneCrossing::find(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult(env->callObjectMethod(this$, mids$[mid_find_3adb4906e4611107], a0.this$));
        }

        jdouble SensorMeanPlaneCrossing::getAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAccuracy_b74f83833fdad017]);
        }

        ::java::util::stream::Stream SensorMeanPlaneCrossing::getCachedResults() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getCachedResults_14e21bf777ff0ccf]));
        }

        jint SensorMeanPlaneCrossing::getMaxEval() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEval_55546ef6a647f39b]);
        }

        jint SensorMeanPlaneCrossing::getMaxLine() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxLine_55546ef6a647f39b]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing::getMeanPlaneNormal() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getMeanPlaneNormal_8b724f8b4fdad1a2]));
        }

        jint SensorMeanPlaneCrossing::getMinLine() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinLine_55546ef6a647f39b]);
        }

        ::org::orekit::rugged::utils::SpacecraftToObservedBody SensorMeanPlaneCrossing::getScToBody() const
        {
          return ::org::orekit::rugged::utils::SpacecraftToObservedBody(env->callObjectMethod(this$, mids$[mid_getScToBody_cf686ec38ae38bec]));
        }

        ::org::orekit::rugged::linesensor::LineSensor SensorMeanPlaneCrossing::getSensor() const
        {
          return ::org::orekit::rugged::linesensor::LineSensor(env->callObjectMethod(this$, mids$[mid_getSensor_57f8f535e0c09b7f]));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *OneWayGNSSPhase::class$ = NULL;
          jmethodID *OneWayGNSSPhase::mids$ = NULL;
          bool OneWayGNSSPhase::live$ = false;
          ::java::lang::String *OneWayGNSSPhase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *OneWayGNSSPhase::MEASUREMENT_TYPE = NULL;

          jclass OneWayGNSSPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/OneWayGNSSPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_74866ddfa1808693] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/time/AbsoluteDate;DDDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_getAmbiguityDriver_a59daa5e273117e1] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_b74f83833fdad017] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSPhase::OneWayGNSSPhase(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, const ::org::orekit::estimation::measurements::ObservableSatellite & a7) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_74866ddfa1808693, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7.this$)) {}

          ::org::orekit::utils::ParameterDriver OneWayGNSSPhase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_a59daa5e273117e1]));
          }

          jdouble OneWayGNSSPhase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_b74f83833fdad017]);
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
          static PyObject *t_OneWayGNSSPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhase_of_(t_OneWayGNSSPhase *self, PyObject *args);
          static int t_OneWayGNSSPhase_init_(t_OneWayGNSSPhase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSPhase_getAmbiguityDriver(t_OneWayGNSSPhase *self);
          static PyObject *t_OneWayGNSSPhase_getWavelength(t_OneWayGNSSPhase *self);
          static PyObject *t_OneWayGNSSPhase_get__ambiguityDriver(t_OneWayGNSSPhase *self, void *data);
          static PyObject *t_OneWayGNSSPhase_get__wavelength(t_OneWayGNSSPhase *self, void *data);
          static PyObject *t_OneWayGNSSPhase_get__parameters_(t_OneWayGNSSPhase *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhase__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, ambiguityDriver),
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, wavelength),
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhase__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSPhase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_OneWayGNSSPhase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhase)[] = {
            { Py_tp_methods, t_OneWayGNSSPhase__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSPhase_init_ },
            { Py_tp_getset, t_OneWayGNSSPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhase, t_OneWayGNSSPhase, OneWayGNSSPhase);
          PyObject *t_OneWayGNSSPhase::wrap_Object(const OneWayGNSSPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhase *self = (t_OneWayGNSSPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhase *self = (t_OneWayGNSSPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhase), &PY_TYPE_DEF(OneWayGNSSPhase), module, "OneWayGNSSPhase", 0);
          }

          void t_OneWayGNSSPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "class_", make_descriptor(OneWayGNSSPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "wrapfn_", make_descriptor(t_OneWayGNSSPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(OneWayGNSSPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "AMBIGUITY_NAME", make_descriptor(j2p(*OneWayGNSSPhase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "MEASUREMENT_TYPE", make_descriptor(j2p(*OneWayGNSSPhase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_OneWayGNSSPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhase::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhase::wrap_Object(OneWayGNSSPhase(((t_OneWayGNSSPhase *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSPhase_of_(t_OneWayGNSSPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OneWayGNSSPhase_init_(t_OneWayGNSSPhase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            ::org::orekit::estimation::measurements::ObservableSatellite a7((jobject) NULL);
            OneWayGNSSPhase object((jobject) NULL);

            if (!parseArgs(args, "kDkDDDDk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = OneWayGNSSPhase(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(OneWayGNSSPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OneWayGNSSPhase_getAmbiguityDriver(t_OneWayGNSSPhase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_OneWayGNSSPhase_getWavelength(t_OneWayGNSSPhase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_OneWayGNSSPhase_get__parameters_(t_OneWayGNSSPhase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OneWayGNSSPhase_get__ambiguityDriver(t_OneWayGNSSPhase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_OneWayGNSSPhase_get__wavelength(t_OneWayGNSSPhase *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWavelength());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/ConvertingRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *ConvertingRuleFactory::class$ = NULL;
          jmethodID *ConvertingRuleFactory::mids$ = NULL;
          bool ConvertingRuleFactory::live$ = false;

          jclass ConvertingRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/ConvertingRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b87e79b8f5c5e3f5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/gauss/FieldRuleFactory;)V");
              mids$[mid_computeRule_acde278e36767299] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConvertingRuleFactory::ConvertingRuleFactory(const ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory & a0) : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_b87e79b8f5c5e3f5, a0.this$)) {}
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
          static PyObject *t_ConvertingRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConvertingRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConvertingRuleFactory_of_(t_ConvertingRuleFactory *self, PyObject *args);
          static int t_ConvertingRuleFactory_init_(t_ConvertingRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConvertingRuleFactory_get__parameters_(t_ConvertingRuleFactory *self, void *data);
          static PyGetSetDef t_ConvertingRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_ConvertingRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ConvertingRuleFactory__methods_[] = {
            DECLARE_METHOD(t_ConvertingRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConvertingRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConvertingRuleFactory, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConvertingRuleFactory)[] = {
            { Py_tp_methods, t_ConvertingRuleFactory__methods_ },
            { Py_tp_init, (void *) t_ConvertingRuleFactory_init_ },
            { Py_tp_getset, t_ConvertingRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConvertingRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(ConvertingRuleFactory, t_ConvertingRuleFactory, ConvertingRuleFactory);
          PyObject *t_ConvertingRuleFactory::wrap_Object(const ConvertingRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ConvertingRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ConvertingRuleFactory *self = (t_ConvertingRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ConvertingRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ConvertingRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ConvertingRuleFactory *self = (t_ConvertingRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ConvertingRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(ConvertingRuleFactory), &PY_TYPE_DEF(ConvertingRuleFactory), module, "ConvertingRuleFactory", 0);
          }

          void t_ConvertingRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "class_", make_descriptor(ConvertingRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "wrapfn_", make_descriptor(t_ConvertingRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConvertingRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConvertingRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConvertingRuleFactory::initializeClass, 1)))
              return NULL;
            return t_ConvertingRuleFactory::wrap_Object(ConvertingRuleFactory(((t_ConvertingRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_ConvertingRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConvertingRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ConvertingRuleFactory_of_(t_ConvertingRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ConvertingRuleFactory_init_(t_ConvertingRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory a0((jobject) NULL);
            PyTypeObject **p0;
            ConvertingRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::analysis::integration::gauss::FieldRuleFactory::initializeClass, &a0, &p0, ::org::hipparchus::analysis::integration::gauss::t_FieldRuleFactory::parameters_))
            {
              INT_CALL(object = ConvertingRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_ConvertingRuleFactory_get__parameters_(t_ConvertingRuleFactory *self, void *data)
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
#include "org/orekit/frames/OrphanFrame.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
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
          mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_addChild_55457428e103e443] = env->getMethodID(cls, "addChild", "(Lorg/orekit/frames/OrphanFrame;Lorg/orekit/frames/Transform;Z)V");
          mids$[mid_addChild_2f2ff8e343e2ff3d] = env->getMethodID(cls, "addChild", "(Lorg/orekit/frames/OrphanFrame;Lorg/orekit/frames/TransformProvider;Z)V");
          mids$[mid_attachTo_8aedde5212fef9e7] = env->getMethodID(cls, "attachTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Z)V");
          mids$[mid_attachTo_7a4ba1fb340669bc] = env->getMethodID(cls, "attachTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Z)V");
          mids$[mid_getChildren_e62d3bb06d56d7e3] = env->getMethodID(cls, "getChildren", "()Ljava/util/List;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrphanFrame::OrphanFrame(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

      void OrphanFrame::addChild(const OrphanFrame & a0, const ::org::orekit::frames::Transform & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addChild_55457428e103e443], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::addChild(const OrphanFrame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addChild_2f2ff8e343e2ff3d], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::attachTo(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Transform & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_attachTo_8aedde5212fef9e7], a0.this$, a1.this$, a2);
      }

      void OrphanFrame::attachTo(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2) const
      {
        env->callVoidMethod(this$, mids$[mid_attachTo_7a4ba1fb340669bc], a0.this$, a1.this$, a2);
      }

      ::java::util::List OrphanFrame::getChildren() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getChildren_e62d3bb06d56d7e3]));
      }

      ::org::orekit::frames::Frame OrphanFrame::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::java::lang::String OrphanFrame::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseUnivariateSolver::class$ = NULL;
        jmethodID *BaseUnivariateSolver::mids$ = NULL;
        bool BaseUnivariateSolver::live$ = false;

        jclass BaseUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getFunctionValueAccuracy", "()D");
            mids$[mid_getRelativeAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_solve_6fb62642ce3110d4] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;D)D");
            mids$[mid_solve_076ce9f904fe1577] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_82bbd98edb095e2c] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseUnivariateSolver::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_b74f83833fdad017]);
        }

        jint BaseUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
        }

        jdouble BaseUnivariateSolver::getFunctionValueAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFunctionValueAccuracy_b74f83833fdad017]);
        }

        jdouble BaseUnivariateSolver::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_b74f83833fdad017]);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_6fb62642ce3110d4], a0, a1.this$, a2);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_076ce9f904fe1577], a0, a1.this$, a2, a3);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_82bbd98edb095e2c], a0, a1.this$, a2, a3, a4);
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
      namespace solvers {
        static PyObject *t_BaseUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseUnivariateSolver_of_(t_BaseUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseUnivariateSolver_getAbsoluteAccuracy(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_getEvaluations(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_getFunctionValueAccuracy(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_getRelativeAccuracy(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_solve(t_BaseUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseUnivariateSolver_get__absoluteAccuracy(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__evaluations(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__functionValueAccuracy(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__relativeAccuracy(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__parameters_(t_BaseUnivariateSolver *self, void *data);
        static PyGetSetDef t_BaseUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BaseUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseUnivariateSolver)[] = {
          { Py_tp_methods, t_BaseUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseUnivariateSolver, t_BaseUnivariateSolver, BaseUnivariateSolver);
        PyObject *t_BaseUnivariateSolver::wrap_Object(const BaseUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseUnivariateSolver *self = (t_BaseUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseUnivariateSolver *self = (t_BaseUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseUnivariateSolver), &PY_TYPE_DEF(BaseUnivariateSolver), module, "BaseUnivariateSolver", 0);
        }

        void t_BaseUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseUnivariateSolver), "class_", make_descriptor(BaseUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseUnivariateSolver), "wrapfn_", make_descriptor(t_BaseUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BaseUnivariateSolver::wrap_Object(BaseUnivariateSolver(((t_BaseUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseUnivariateSolver_of_(t_BaseUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseUnivariateSolver_getAbsoluteAccuracy(t_BaseUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseUnivariateSolver_getEvaluations(t_BaseUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseUnivariateSolver_getFunctionValueAccuracy(t_BaseUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseUnivariateSolver_getRelativeAccuracy(t_BaseUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseUnivariateSolver_solve(t_BaseUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "IkD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble result;

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }
        static PyObject *t_BaseUnivariateSolver_get__parameters_(t_BaseUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseUnivariateSolver_get__absoluteAccuracy(t_BaseUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseUnivariateSolver_get__evaluations(t_BaseUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseUnivariateSolver_get__functionValueAccuracy(t_BaseUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseUnivariateSolver_get__relativeAccuracy(t_BaseUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_b1d0064c4c2110eb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;)V");
                mids$[mid_writeContent_fb222e851cd27682] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMetadataWriter::CdmMetadataWriter(const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a0) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_b1d0064c4c2110eb, a0.this$)) {}
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
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Header::class$ = NULL;
          jmethodID *Header::mids$ = NULL;
          bool Header::live$ = false;

          jclass Header::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Header");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_getClassification_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getClassification", "()Ljava/lang/String;");
              mids$[mid_getCreationDate_c325492395d89b24] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getFormatVersion_b74f83833fdad017] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getMessageId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMessageId", "()Ljava/lang/String;");
              mids$[mid_getOriginator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOriginator", "()Ljava/lang/String;");
              mids$[mid_setClassification_734b91ac30d5f9b4] = env->getMethodID(cls, "setClassification", "(Ljava/lang/String;)V");
              mids$[mid_setCreationDate_02135a6ef25adb4b] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setFormatVersion_8ba9fe7a847cecad] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setMessageId_734b91ac30d5f9b4] = env->getMethodID(cls, "setMessageId", "(Ljava/lang/String;)V");
              mids$[mid_setOriginator_734b91ac30d5f9b4] = env->getMethodID(cls, "setOriginator", "(Ljava/lang/String;)V");
              mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Header::Header(jdouble a0, jdouble a1) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

          ::java::lang::String Header::getClassification() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassification_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::time::AbsoluteDate Header::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_c325492395d89b24]));
          }

          jdouble Header::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_b74f83833fdad017]);
          }

          ::java::lang::String Header::getMessageId() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessageId_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String Header::getOriginator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginator_1c1fa1e935d6cdcf]));
          }

          void Header::setClassification(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClassification_734b91ac30d5f9b4], a0.this$);
          }

          void Header::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_02135a6ef25adb4b], a0.this$);
          }

          void Header::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_8ba9fe7a847cecad], a0);
          }

          void Header::setMessageId(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMessageId_734b91ac30d5f9b4], a0.this$);
          }

          void Header::setOriginator(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOriginator_734b91ac30d5f9b4], a0.this$);
          }

          void Header::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
          static PyObject *t_Header_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Header_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Header_init_(t_Header *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Header_getClassification(t_Header *self);
          static PyObject *t_Header_getCreationDate(t_Header *self);
          static PyObject *t_Header_getFormatVersion(t_Header *self);
          static PyObject *t_Header_getMessageId(t_Header *self);
          static PyObject *t_Header_getOriginator(t_Header *self);
          static PyObject *t_Header_setClassification(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setCreationDate(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setFormatVersion(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setMessageId(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setOriginator(t_Header *self, PyObject *arg);
          static PyObject *t_Header_validate(t_Header *self, PyObject *args);
          static PyObject *t_Header_get__classification(t_Header *self, void *data);
          static int t_Header_set__classification(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__creationDate(t_Header *self, void *data);
          static int t_Header_set__creationDate(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__formatVersion(t_Header *self, void *data);
          static int t_Header_set__formatVersion(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__messageId(t_Header *self, void *data);
          static int t_Header_set__messageId(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__originator(t_Header *self, void *data);
          static int t_Header_set__originator(t_Header *self, PyObject *arg, void *data);
          static PyGetSetDef t_Header__fields_[] = {
            DECLARE_GETSET_FIELD(t_Header, classification),
            DECLARE_GETSET_FIELD(t_Header, creationDate),
            DECLARE_GETSET_FIELD(t_Header, formatVersion),
            DECLARE_GETSET_FIELD(t_Header, messageId),
            DECLARE_GETSET_FIELD(t_Header, originator),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Header__methods_[] = {
            DECLARE_METHOD(t_Header, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Header, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Header, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_Header, getCreationDate, METH_NOARGS),
            DECLARE_METHOD(t_Header, getFormatVersion, METH_NOARGS),
            DECLARE_METHOD(t_Header, getMessageId, METH_NOARGS),
            DECLARE_METHOD(t_Header, getOriginator, METH_NOARGS),
            DECLARE_METHOD(t_Header, setClassification, METH_O),
            DECLARE_METHOD(t_Header, setCreationDate, METH_O),
            DECLARE_METHOD(t_Header, setFormatVersion, METH_O),
            DECLARE_METHOD(t_Header, setMessageId, METH_O),
            DECLARE_METHOD(t_Header, setOriginator, METH_O),
            DECLARE_METHOD(t_Header, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Header)[] = {
            { Py_tp_methods, t_Header__methods_ },
            { Py_tp_init, (void *) t_Header_init_ },
            { Py_tp_getset, t_Header__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Header)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(Header, t_Header, Header);

          void t_Header::install(PyObject *module)
          {
            installType(&PY_TYPE(Header), &PY_TYPE_DEF(Header), module, "Header", 0);
          }

          void t_Header::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Header), "class_", make_descriptor(Header::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Header), "wrapfn_", make_descriptor(t_Header::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Header), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Header_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Header::initializeClass, 1)))
              return NULL;
            return t_Header::wrap_Object(Header(((t_Header *) arg)->object.this$));
          }
          static PyObject *t_Header_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Header::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Header_init_(t_Header *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            Header object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = Header(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Header_getClassification(t_Header *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getClassification());
            return j2p(result);
          }

          static PyObject *t_Header_getCreationDate(t_Header *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_Header_getFormatVersion(t_Header *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Header_getMessageId(t_Header *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessageId());
            return j2p(result);
          }

          static PyObject *t_Header_getOriginator(t_Header *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOriginator());
            return j2p(result);
          }

          static PyObject *t_Header_setClassification(t_Header *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setClassification(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClassification", arg);
            return NULL;
          }

          static PyObject *t_Header_setCreationDate(t_Header *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDate", arg);
            return NULL;
          }

          static PyObject *t_Header_setFormatVersion(t_Header *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setFormatVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFormatVersion", arg);
            return NULL;
          }

          static PyObject *t_Header_setMessageId(t_Header *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMessageId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMessageId", arg);
            return NULL;
          }

          static PyObject *t_Header_setOriginator(t_Header *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setOriginator(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOriginator", arg);
            return NULL;
          }

          static PyObject *t_Header_validate(t_Header *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Header), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_Header_get__classification(t_Header *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getClassification());
            return j2p(value);
          }
          static int t_Header_set__classification(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setClassification(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "classification", arg);
            return -1;
          }

          static PyObject *t_Header_get__creationDate(t_Header *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_Header_set__creationDate(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDate", arg);
            return -1;
          }

          static PyObject *t_Header_get__formatVersion(t_Header *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Header_set__formatVersion(t_Header *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setFormatVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "formatVersion", arg);
            return -1;
          }

          static PyObject *t_Header_get__messageId(t_Header *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMessageId());
            return j2p(value);
          }
          static int t_Header_set__messageId(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMessageId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "messageId", arg);
            return -1;
          }

          static PyObject *t_Header_get__originator(t_Header *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOriginator());
            return j2p(value);
          }
          static int t_Header_set__originator(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setOriginator(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "originator", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/TectonicsDisplacement.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
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
              mids$[mid_init$_f276cbdae45300cc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_displacement_729c7f08824f83c6] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TectonicsDisplacement::TectonicsDisplacement(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f276cbdae45300cc, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TectonicsDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_729c7f08824f83c6], a0.this$, a1.this$, a2.this$));
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
#include "org/orekit/forces/gravity/potential/PythonTideSystemProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonTideSystemProvider::class$ = NULL;
          jmethodID *PythonTideSystemProvider::mids$ = NULL;
          bool PythonTideSystemProvider::live$ = false;

          jclass PythonTideSystemProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonTideSystemProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getTideSystem_b2b14af197a8eaf6] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTideSystemProvider::PythonTideSystemProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonTideSystemProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonTideSystemProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonTideSystemProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonTideSystemProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTideSystemProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTideSystemProvider_init_(t_PythonTideSystemProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTideSystemProvider_finalize(t_PythonTideSystemProvider *self);
          static PyObject *t_PythonTideSystemProvider_pythonExtension(t_PythonTideSystemProvider *self, PyObject *args);
          static jobject JNICALL t_PythonTideSystemProvider_getTideSystem0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTideSystemProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonTideSystemProvider_get__self(t_PythonTideSystemProvider *self, void *data);
          static PyGetSetDef t_PythonTideSystemProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTideSystemProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTideSystemProvider__methods_[] = {
            DECLARE_METHOD(t_PythonTideSystemProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTideSystemProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTideSystemProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTideSystemProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTideSystemProvider)[] = {
            { Py_tp_methods, t_PythonTideSystemProvider__methods_ },
            { Py_tp_init, (void *) t_PythonTideSystemProvider_init_ },
            { Py_tp_getset, t_PythonTideSystemProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTideSystemProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonTideSystemProvider, t_PythonTideSystemProvider, PythonTideSystemProvider);

          void t_PythonTideSystemProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTideSystemProvider), &PY_TYPE_DEF(PythonTideSystemProvider), module, "PythonTideSystemProvider", 1);
          }

          void t_PythonTideSystemProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "class_", make_descriptor(PythonTideSystemProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "wrapfn_", make_descriptor(t_PythonTideSystemProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTideSystemProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTideSystemProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonTideSystemProvider_getTideSystem0 },
              { "pythonDecRef", "()V", (void *) t_PythonTideSystemProvider_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonTideSystemProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTideSystemProvider::initializeClass, 1)))
              return NULL;
            return t_PythonTideSystemProvider::wrap_Object(PythonTideSystemProvider(((t_PythonTideSystemProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonTideSystemProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTideSystemProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTideSystemProvider_init_(t_PythonTideSystemProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonTideSystemProvider object((jobject) NULL);

            INT_CALL(object = PythonTideSystemProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTideSystemProvider_finalize(t_PythonTideSystemProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTideSystemProvider_pythonExtension(t_PythonTideSystemProvider *self, PyObject *args)
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

          static jobject JNICALL t_PythonTideSystemProvider_getTideSystem0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static void JNICALL t_PythonTideSystemProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTideSystemProvider::mids$[PythonTideSystemProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonTideSystemProvider_get__self(t_PythonTideSystemProvider *self, void *data)
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
#include "org/orekit/propagation/conversion/AdamsBashforthIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AdamsBashforthIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsBashforthIntegratorBuilder::mids$ = NULL;
        bool AdamsBashforthIntegratorBuilder::live$ = false;

        jclass AdamsBashforthIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsBashforthIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_390258812740a16c] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthIntegratorBuilder::AdamsBashforthIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_390258812740a16c, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractIntegrator AdamsBashforthIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_916fa199ca08d656], a0.this$, a1.this$));
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
        static PyObject *t_AdamsBashforthIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsBashforthIntegratorBuilder_init_(t_AdamsBashforthIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthIntegratorBuilder_buildIntegrator(t_AdamsBashforthIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_AdamsBashforthIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsBashforthIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthIntegratorBuilder, t_AdamsBashforthIntegratorBuilder, AdamsBashforthIntegratorBuilder);

        void t_AdamsBashforthIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthIntegratorBuilder), &PY_TYPE_DEF(AdamsBashforthIntegratorBuilder), module, "AdamsBashforthIntegratorBuilder", 0);
        }

        void t_AdamsBashforthIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "class_", make_descriptor(AdamsBashforthIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsBashforthIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthIntegratorBuilder::wrap_Object(AdamsBashforthIntegratorBuilder(((t_AdamsBashforthIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsBashforthIntegratorBuilder_init_(t_AdamsBashforthIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsBashforthIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsBashforthIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsBashforthIntegratorBuilder_buildIntegrator(t_AdamsBashforthIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/rugged/linesensor/SensorPixelCrossing.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorPixelCrossing::class$ = NULL;
        jmethodID *SensorPixelCrossing::mids$ = NULL;
        bool SensorPixelCrossing::live$ = false;

        jclass SensorPixelCrossing::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorPixelCrossing");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_35f5a2e1ca0694c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ID)V");
            mids$[mid_locatePixel_fd347811007a6ba3] = env->getMethodID(cls, "locatePixel", "(Lorg/orekit/time/AbsoluteDate;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorPixelCrossing::SensorPixelCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_35f5a2e1ca0694c4, a0.this$, a1.this$, a2.this$, a3, a4)) {}

        jdouble SensorPixelCrossing::locatePixel(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_locatePixel_fd347811007a6ba3], a0.this$);
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
        static PyObject *t_SensorPixelCrossing_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorPixelCrossing_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorPixelCrossing_init_(t_SensorPixelCrossing *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorPixelCrossing_locatePixel(t_SensorPixelCrossing *self, PyObject *arg);

        static PyMethodDef t_SensorPixelCrossing__methods_[] = {
          DECLARE_METHOD(t_SensorPixelCrossing, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixelCrossing, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixelCrossing, locatePixel, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorPixelCrossing)[] = {
          { Py_tp_methods, t_SensorPixelCrossing__methods_ },
          { Py_tp_init, (void *) t_SensorPixelCrossing_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorPixelCrossing)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorPixelCrossing, t_SensorPixelCrossing, SensorPixelCrossing);

        void t_SensorPixelCrossing::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorPixelCrossing), &PY_TYPE_DEF(SensorPixelCrossing), module, "SensorPixelCrossing", 0);
        }

        void t_SensorPixelCrossing::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "class_", make_descriptor(SensorPixelCrossing::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "wrapfn_", make_descriptor(t_SensorPixelCrossing::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorPixelCrossing_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorPixelCrossing::initializeClass, 1)))
            return NULL;
          return t_SensorPixelCrossing::wrap_Object(SensorPixelCrossing(((t_SensorPixelCrossing *) arg)->object.this$));
        }
        static PyObject *t_SensorPixelCrossing_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorPixelCrossing::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorPixelCrossing_init_(t_SensorPixelCrossing *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          jint a3;
          jdouble a4;
          SensorPixelCrossing object((jobject) NULL);

          if (!parseArgs(args, "kkkID", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SensorPixelCrossing(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorPixelCrossing_locatePixel(t_SensorPixelCrossing *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.locatePixel(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "locatePixel", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/HermiteInterpolator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *HermiteInterpolator::class$ = NULL;
        jmethodID *HermiteInterpolator::mids$ = NULL;
        bool HermiteInterpolator::live$ = false;

        jclass HermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/HermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSamplePoint_27c11c017c2dbb54] = env->getMethodID(cls, "addSamplePoint", "(D[[D)V");
            mids$[mid_derivatives_215918e300237505] = env->getMethodID(cls, "derivatives", "(DI)[[D");
            mids$[mid_getPolynomials_6893f2a8a1a47500] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_value_e3ef0e966b8bf11e] = env->getMethodID(cls, "value", "(D)[D");
            mids$[mid_value_d068edfe0e0d0552] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HermiteInterpolator::HermiteInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void HermiteInterpolator::addSamplePoint(jdouble a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSamplePoint_27c11c017c2dbb54], a0, a1.this$);
        }

        JArray< JArray< jdouble > > HermiteInterpolator::derivatives(jdouble a0, jint a1) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_derivatives_215918e300237505], a0, a1));
        }

        JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > HermiteInterpolator::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_6893f2a8a1a47500]));
        }

        JArray< jdouble > HermiteInterpolator::value(jdouble a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_e3ef0e966b8bf11e], a0));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > HermiteInterpolator::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_value_d068edfe0e0d0552], a0.this$));
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
      namespace interpolation {
        static PyObject *t_HermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HermiteInterpolator_init_(t_HermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HermiteInterpolator_addSamplePoint(t_HermiteInterpolator *self, PyObject *args);
        static PyObject *t_HermiteInterpolator_derivatives(t_HermiteInterpolator *self, PyObject *args);
        static PyObject *t_HermiteInterpolator_getPolynomials(t_HermiteInterpolator *self);
        static PyObject *t_HermiteInterpolator_value(t_HermiteInterpolator *self, PyObject *args);
        static PyObject *t_HermiteInterpolator_get__polynomials(t_HermiteInterpolator *self, void *data);
        static PyGetSetDef t_HermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_HermiteInterpolator, polynomials),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_HermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HermiteInterpolator, addSamplePoint, METH_VARARGS),
          DECLARE_METHOD(t_HermiteInterpolator, derivatives, METH_VARARGS),
          DECLARE_METHOD(t_HermiteInterpolator, getPolynomials, METH_NOARGS),
          DECLARE_METHOD(t_HermiteInterpolator, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HermiteInterpolator)[] = {
          { Py_tp_methods, t_HermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_HermiteInterpolator_init_ },
          { Py_tp_getset, t_HermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HermiteInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HermiteInterpolator, t_HermiteInterpolator, HermiteInterpolator);

        void t_HermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(HermiteInterpolator), &PY_TYPE_DEF(HermiteInterpolator), module, "HermiteInterpolator", 0);
        }

        void t_HermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteInterpolator), "class_", make_descriptor(HermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteInterpolator), "wrapfn_", make_descriptor(t_HermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_HermiteInterpolator::wrap_Object(HermiteInterpolator(((t_HermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_HermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HermiteInterpolator_init_(t_HermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          HermiteInterpolator object((jobject) NULL);

          INT_CALL(object = HermiteInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_HermiteInterpolator_addSamplePoint(t_HermiteInterpolator *self, PyObject *args)
        {
          jdouble a0;
          JArray< JArray< jdouble > > a1((jobject) NULL);

          if (!parseArgs(args, "D[[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addSamplePoint(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSamplePoint", args);
          return NULL;
        }

        static PyObject *t_HermiteInterpolator_derivatives(t_HermiteInterpolator *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, "DI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.derivatives(a0, a1));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "derivatives", args);
          return NULL;
        }

        static PyObject *t_HermiteInterpolator_getPolynomials(t_HermiteInterpolator *self)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolynomials());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }

        static PyObject *t_HermiteInterpolator_value(t_HermiteInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return result.wrap();
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_HermiteInterpolator_get__polynomials(t_HermiteInterpolator *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolynomials());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanLoadDeformationCoefficients::class$ = NULL;
          jmethodID *OceanLoadDeformationCoefficients::mids$ = NULL;
          bool OceanLoadDeformationCoefficients::live$ = false;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::GEGOUT = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_1996 = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_2003 = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_2010 = NULL;

          jclass OceanLoadDeformationCoefficients::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCoefficients_25e1757a36c4dde2] = env->getMethodID(cls, "getCoefficients", "()[D");
              mids$[mid_valueOf_c479a96c7183b205] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_values_38b90a2bce786533] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GEGOUT = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "GEGOUT", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_1996 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_1996", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_2003 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_2003", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_2010 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_2010", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jdouble > OceanLoadDeformationCoefficients::getCoefficients() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_25e1757a36c4dde2]));
          }

          OceanLoadDeformationCoefficients OceanLoadDeformationCoefficients::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OceanLoadDeformationCoefficients(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c479a96c7183b205], a0.this$));
          }

          JArray< OceanLoadDeformationCoefficients > OceanLoadDeformationCoefficients::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OceanLoadDeformationCoefficients >(env->callStaticObjectMethod(cls, mids$[mid_values_38b90a2bce786533]));
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
          static PyObject *t_OceanLoadDeformationCoefficients_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadDeformationCoefficients_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadDeformationCoefficients_of_(t_OceanLoadDeformationCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadDeformationCoefficients_getCoefficients(t_OceanLoadDeformationCoefficients *self);
          static PyObject *t_OceanLoadDeformationCoefficients_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OceanLoadDeformationCoefficients_values(PyTypeObject *type);
          static PyObject *t_OceanLoadDeformationCoefficients_get__coefficients(t_OceanLoadDeformationCoefficients *self, void *data);
          static PyObject *t_OceanLoadDeformationCoefficients_get__parameters_(t_OceanLoadDeformationCoefficients *self, void *data);
          static PyGetSetDef t_OceanLoadDeformationCoefficients__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadDeformationCoefficients, coefficients),
            DECLARE_GET_FIELD(t_OceanLoadDeformationCoefficients, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadDeformationCoefficients__methods_[] = {
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, of_, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, getCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadDeformationCoefficients)[] = {
            { Py_tp_methods, t_OceanLoadDeformationCoefficients__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OceanLoadDeformationCoefficients__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadDeformationCoefficients)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OceanLoadDeformationCoefficients, t_OceanLoadDeformationCoefficients, OceanLoadDeformationCoefficients);
          PyObject *t_OceanLoadDeformationCoefficients::wrap_Object(const OceanLoadDeformationCoefficients& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OceanLoadDeformationCoefficients::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OceanLoadDeformationCoefficients *self = (t_OceanLoadDeformationCoefficients *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OceanLoadDeformationCoefficients::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OceanLoadDeformationCoefficients::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OceanLoadDeformationCoefficients *self = (t_OceanLoadDeformationCoefficients *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OceanLoadDeformationCoefficients::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadDeformationCoefficients), &PY_TYPE_DEF(OceanLoadDeformationCoefficients), module, "OceanLoadDeformationCoefficients", 0);
          }

          void t_OceanLoadDeformationCoefficients::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "class_", make_descriptor(OceanLoadDeformationCoefficients::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "wrapfn_", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "boxfn_", make_descriptor(boxObject));
            env->getClass(OceanLoadDeformationCoefficients::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "GEGOUT", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::GEGOUT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_1996", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_1996)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_2003", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_2010", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_2010)));
          }

          static PyObject *t_OceanLoadDeformationCoefficients_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadDeformationCoefficients::initializeClass, 1)))
              return NULL;
            return t_OceanLoadDeformationCoefficients::wrap_Object(OceanLoadDeformationCoefficients(((t_OceanLoadDeformationCoefficients *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadDeformationCoefficients_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadDeformationCoefficients::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OceanLoadDeformationCoefficients_of_(t_OceanLoadDeformationCoefficients *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OceanLoadDeformationCoefficients_getCoefficients(t_OceanLoadDeformationCoefficients *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getCoefficients());
            return result.wrap();
          }

          static PyObject *t_OceanLoadDeformationCoefficients_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OceanLoadDeformationCoefficients result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::valueOf(a0));
              return t_OceanLoadDeformationCoefficients::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OceanLoadDeformationCoefficients_values(PyTypeObject *type)
          {
            JArray< OceanLoadDeformationCoefficients > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::values());
            return JArray<jobject>(result.this$).wrap(t_OceanLoadDeformationCoefficients::wrap_jobject);
          }
          static PyObject *t_OceanLoadDeformationCoefficients_get__parameters_(t_OceanLoadDeformationCoefficients *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OceanLoadDeformationCoefficients_get__coefficients(t_OceanLoadDeformationCoefficients *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getCoefficients());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Exception.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Exception::class$ = NULL;
    jmethodID *Exception::mids$ = NULL;
    bool Exception::live$ = false;

    jclass Exception::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Exception");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_c5d3549d4f245728] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_9d7a6ef9713b9df2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Exception::Exception() : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    Exception::Exception(const ::java::lang::String & a0) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    Exception::Exception(const ::java::lang::Throwable & a0) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_c5d3549d4f245728, a0.this$)) {}

    Exception::Exception(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_9d7a6ef9713b9df2, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Exception_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Exception_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Exception_init_(t_Exception *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_Exception__methods_[] = {
      DECLARE_METHOD(t_Exception, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Exception, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Exception)[] = {
      { Py_tp_methods, t_Exception__methods_ },
      { Py_tp_init, (void *) t_Exception_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Exception)[] = {
      &PY_TYPE_DEF(::java::lang::Throwable),
      NULL
    };

    DEFINE_TYPE(Exception, t_Exception, Exception);

    void t_Exception::install(PyObject *module)
    {
      installType(&PY_TYPE(Exception), &PY_TYPE_DEF(Exception), module, "Exception", 0);
    }

    void t_Exception::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "class_", make_descriptor(Exception::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "wrapfn_", make_descriptor(t_Exception::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Exception_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Exception::initializeClass, 1)))
        return NULL;
      return t_Exception::wrap_Object(Exception(((t_Exception *) arg)->object.this$));
    }
    static PyObject *t_Exception_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Exception::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Exception_init_(t_Exception *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Exception object((jobject) NULL);

          INT_CALL(object = Exception());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Exception(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = Exception(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Exception(a0, a1));
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *AuxiliaryElements::class$ = NULL;
            jmethodID *AuxiliaryElements::mids$ = NULL;
            bool AuxiliaryElements::live$ = false;

            jclass AuxiliaryElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_5580c8af98851969] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;I)V");
                mids$[mid_getAlpha_b74f83833fdad017] = env->getMethodID(cls, "getAlpha", "()D");
                mids$[mid_getB_b74f83833fdad017] = env->getMethodID(cls, "getB", "()D");
                mids$[mid_getBeta_b74f83833fdad017] = env->getMethodID(cls, "getBeta", "()D");
                mids$[mid_getC_b74f83833fdad017] = env->getMethodID(cls, "getC", "()D");
                mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getEcc_b74f83833fdad017] = env->getMethodID(cls, "getEcc", "()D");
                mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGamma_b74f83833fdad017] = env->getMethodID(cls, "getGamma", "()D");
                mids$[mid_getH_b74f83833fdad017] = env->getMethodID(cls, "getH", "()D");
                mids$[mid_getK_b74f83833fdad017] = env->getMethodID(cls, "getK", "()D");
                mids$[mid_getKeplerianPeriod_b74f83833fdad017] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
                mids$[mid_getLM_b74f83833fdad017] = env->getMethodID(cls, "getLM", "()D");
                mids$[mid_getLf_b74f83833fdad017] = env->getMethodID(cls, "getLf", "()D");
                mids$[mid_getLv_b74f83833fdad017] = env->getMethodID(cls, "getLv", "()D");
                mids$[mid_getMeanMotion_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getOrbit_b6e68c5f730fb347] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/Orbit;");
                mids$[mid_getP_b74f83833fdad017] = env->getMethodID(cls, "getP", "()D");
                mids$[mid_getQ_b74f83833fdad017] = env->getMethodID(cls, "getQ", "()D");
                mids$[mid_getRetrogradeFactor_55546ef6a647f39b] = env->getMethodID(cls, "getRetrogradeFactor", "()I");
                mids$[mid_getSma_b74f83833fdad017] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getVectorF_8b724f8b4fdad1a2] = env->getMethodID(cls, "getVectorF", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVectorG_8b724f8b4fdad1a2] = env->getMethodID(cls, "getVectorG", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVectorW_8b724f8b4fdad1a2] = env->getMethodID(cls, "getVectorW", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AuxiliaryElements::AuxiliaryElements(const ::org::orekit::orbits::Orbit & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5580c8af98851969, a0.this$, a1)) {}

            jdouble AuxiliaryElements::getAlpha() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha_b74f83833fdad017]);
            }

            jdouble AuxiliaryElements::getB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getB_b74f83833fdad017]);
            }

            jdouble AuxiliaryElements::getBeta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBeta_b74f83833fdad017]);
            }

            jdouble AuxiliaryElements::getC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getC_b74f83833fdad017]);
            }

            ::org::orekit::time::AbsoluteDate AuxiliaryElements::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
            }

            jdouble AuxiliaryElements::getEcc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEcc_b74f83833fdad017]);
            }

            ::org::orekit::frames::Frame AuxiliaryElements::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
            }

            jdouble AuxiliaryElements::getGamma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGamma_b74f83833fdad017]);
            }

            jdouble AuxiliaryElements::getH() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getH_b74f83833fdad017]);
            }

            jdouble AuxiliaryElements::getK() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK_b74f83833fdad017]);
            }

            jdouble AuxiliaryElements::getKeplerianPeriod() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_b74f83833fdad017]);
            }

            jdouble AuxiliaryElements::getLM() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLM_b74f83833fdad017]);
            }

            jdouble AuxiliaryElements::getLf() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLf_b74f83833fdad017]);
            }

            jdouble AuxiliaryElements::getLv() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLv_b74f83833fdad017]);
            }

            jdouble AuxiliaryElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_b74f83833fdad017]);
            }

            ::org::orekit::orbits::Orbit AuxiliaryElements::getOrbit() const
            {
              return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOrbit_b6e68c5f730fb347]));
            }

            jdouble AuxiliaryElements::getP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getP_b74f83833fdad017]);
            }

            jdouble AuxiliaryElements::getQ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getQ_b74f83833fdad017]);
            }

            jint AuxiliaryElements::getRetrogradeFactor() const
            {
              return env->callIntMethod(this$, mids$[mid_getRetrogradeFactor_55546ef6a647f39b]);
            }

            jdouble AuxiliaryElements::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_b74f83833fdad017]);
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorF() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorF_8b724f8b4fdad1a2]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorG() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorG_8b724f8b4fdad1a2]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorW() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorW_8b724f8b4fdad1a2]));
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
            static PyObject *t_AuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AuxiliaryElements_init_(t_AuxiliaryElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AuxiliaryElements_getAlpha(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getB(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getBeta(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getC(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getDate(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getEcc(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getFrame(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getGamma(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getH(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getK(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getKeplerianPeriod(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLM(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLf(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLv(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getMeanMotion(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getOrbit(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getP(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getQ(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getRetrogradeFactor(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getSma(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorF(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorG(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorW(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_get__alpha(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__b(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__beta(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__c(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__date(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__ecc(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__frame(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__gamma(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__h(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__k(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__keplerianPeriod(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lM(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lf(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lv(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__meanMotion(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__orbit(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__p(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__q(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__retrogradeFactor(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__sma(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorF(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorG(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorW(t_AuxiliaryElements *self, void *data);
            static PyGetSetDef t_AuxiliaryElements__fields_[] = {
              DECLARE_GET_FIELD(t_AuxiliaryElements, alpha),
              DECLARE_GET_FIELD(t_AuxiliaryElements, b),
              DECLARE_GET_FIELD(t_AuxiliaryElements, beta),
              DECLARE_GET_FIELD(t_AuxiliaryElements, c),
              DECLARE_GET_FIELD(t_AuxiliaryElements, date),
              DECLARE_GET_FIELD(t_AuxiliaryElements, ecc),
              DECLARE_GET_FIELD(t_AuxiliaryElements, frame),
              DECLARE_GET_FIELD(t_AuxiliaryElements, gamma),
              DECLARE_GET_FIELD(t_AuxiliaryElements, h),
              DECLARE_GET_FIELD(t_AuxiliaryElements, k),
              DECLARE_GET_FIELD(t_AuxiliaryElements, keplerianPeriod),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lM),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lf),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lv),
              DECLARE_GET_FIELD(t_AuxiliaryElements, meanMotion),
              DECLARE_GET_FIELD(t_AuxiliaryElements, orbit),
              DECLARE_GET_FIELD(t_AuxiliaryElements, p),
              DECLARE_GET_FIELD(t_AuxiliaryElements, q),
              DECLARE_GET_FIELD(t_AuxiliaryElements, retrogradeFactor),
              DECLARE_GET_FIELD(t_AuxiliaryElements, sma),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorF),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorG),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorW),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AuxiliaryElements__methods_[] = {
              DECLARE_METHOD(t_AuxiliaryElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AuxiliaryElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AuxiliaryElements, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getB, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getC, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getEcc, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getH, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getK, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getKeplerianPeriod, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLM, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLf, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLv, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getOrbit, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getP, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getQ, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getRetrogradeFactor, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getSma, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorF, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorG, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorW, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AuxiliaryElements)[] = {
              { Py_tp_methods, t_AuxiliaryElements__methods_ },
              { Py_tp_init, (void *) t_AuxiliaryElements_init_ },
              { Py_tp_getset, t_AuxiliaryElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AuxiliaryElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AuxiliaryElements, t_AuxiliaryElements, AuxiliaryElements);

            void t_AuxiliaryElements::install(PyObject *module)
            {
              installType(&PY_TYPE(AuxiliaryElements), &PY_TYPE_DEF(AuxiliaryElements), module, "AuxiliaryElements", 0);
            }

            void t_AuxiliaryElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "class_", make_descriptor(AuxiliaryElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "wrapfn_", make_descriptor(t_AuxiliaryElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AuxiliaryElements::initializeClass, 1)))
                return NULL;
              return t_AuxiliaryElements::wrap_Object(AuxiliaryElements(((t_AuxiliaryElements *) arg)->object.this$));
            }
            static PyObject *t_AuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AuxiliaryElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AuxiliaryElements_init_(t_AuxiliaryElements *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jint a1;
              AuxiliaryElements object((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = AuxiliaryElements(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AuxiliaryElements_getAlpha(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getB(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getBeta(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBeta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getC(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getDate(t_AuxiliaryElements *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getEcc(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEcc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getFrame(t_AuxiliaryElements *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getGamma(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGamma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getH(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getH());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getK(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getKeplerianPeriod(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKeplerianPeriod());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLM(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLM());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLf(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLf());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLv(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLv());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getMeanMotion(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getOrbit(t_AuxiliaryElements *self)
            {
              ::org::orekit::orbits::Orbit result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbit());
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getP(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getQ(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getQ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getRetrogradeFactor(t_AuxiliaryElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AuxiliaryElements_getSma(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getVectorF(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getVectorG(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getVectorW(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_get__alpha(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__b(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__beta(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBeta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__c(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__date(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__ecc(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEcc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__frame(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__gamma(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGamma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__h(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getH());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__k(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__keplerianPeriod(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKeplerianPeriod());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lM(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLM());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lf(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLf());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lv(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLv());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__meanMotion(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__orbit(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::orbits::Orbit value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbit());
              return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__p(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getP());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__q(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getQ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__retrogradeFactor(t_AuxiliaryElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AuxiliaryElements_get__sma(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorF(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorG(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorW(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonAbstractMatricesHarvester.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAbstractMatricesHarvester::class$ = NULL;
      jmethodID *PythonAbstractMatricesHarvester::mids$ = NULL;
      bool PythonAbstractMatricesHarvester::live$ = false;

      jclass PythonAbstractMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAbstractMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e716ca6f57d42548] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_freezeColumnsNames_a1fa5dae97ea5ed2] = env->getMethodID(cls, "freezeColumnsNames", "()V");
          mids$[mid_getJacobiansColumnsNames_e62d3bb06d56d7e3] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractMatricesHarvester::PythonAbstractMatricesHarvester(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::org::orekit::propagation::AbstractMatricesHarvester(env->newObject(initializeClass, &mids$, mid_init$_e716ca6f57d42548, a0.this$, a1.this$, a2.this$)) {}

      void PythonAbstractMatricesHarvester::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonAbstractMatricesHarvester::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonAbstractMatricesHarvester::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonAbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractMatricesHarvester_init_(t_PythonAbstractMatricesHarvester *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractMatricesHarvester_finalize(t_PythonAbstractMatricesHarvester *self);
      static PyObject *t_PythonAbstractMatricesHarvester_pythonExtension(t_PythonAbstractMatricesHarvester *self, PyObject *args);
      static void JNICALL t_PythonAbstractMatricesHarvester_freezeColumnsNames0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getOrbitType2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAbstractMatricesHarvester_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractMatricesHarvester_get__self(t_PythonAbstractMatricesHarvester *self, void *data);
      static PyGetSetDef t_PythonAbstractMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractMatricesHarvester, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMatricesHarvester)[] = {
        { Py_tp_methods, t_PythonAbstractMatricesHarvester__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractMatricesHarvester_init_ },
        { Py_tp_getset, t_PythonAbstractMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractMatricesHarvester)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractMatricesHarvester),
        NULL
      };

      DEFINE_TYPE(PythonAbstractMatricesHarvester, t_PythonAbstractMatricesHarvester, PythonAbstractMatricesHarvester);

      void t_PythonAbstractMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractMatricesHarvester), &PY_TYPE_DEF(PythonAbstractMatricesHarvester), module, "PythonAbstractMatricesHarvester", 1);
      }

      void t_PythonAbstractMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "class_", make_descriptor(PythonAbstractMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "wrapfn_", make_descriptor(t_PythonAbstractMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractMatricesHarvester::initializeClass);
        JNINativeMethod methods[] = {
          { "freezeColumnsNames", "()V", (void *) t_PythonAbstractMatricesHarvester_freezeColumnsNames0 },
          { "getJacobiansColumnsNames", "()Ljava/util/List;", (void *) t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1 },
          { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonAbstractMatricesHarvester_getOrbitType2 },
          { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonAbstractMatricesHarvester_getPositionAngleType3 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractMatricesHarvester_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractMatricesHarvester::wrap_Object(PythonAbstractMatricesHarvester(((t_PythonAbstractMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractMatricesHarvester_init_(t_PythonAbstractMatricesHarvester *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        PythonAbstractMatricesHarvester object((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PythonAbstractMatricesHarvester(a0, a1, a2));
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

      static PyObject *t_PythonAbstractMatricesHarvester_finalize(t_PythonAbstractMatricesHarvester *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractMatricesHarvester_pythonExtension(t_PythonAbstractMatricesHarvester *self, PyObject *args)
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

      static void JNICALL t_PythonAbstractMatricesHarvester_freezeColumnsNames0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "freezeColumnsNames", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJacobiansColumnsNames", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getJacobiansColumnsNames", result);
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

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getOrbitType2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getOrbitType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
        {
          throwTypeError("getOrbitType", result);
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

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPositionAngleType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
        {
          throwTypeError("getPositionAngleType", result);
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

      static void JNICALL t_PythonAbstractMatricesHarvester_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractMatricesHarvester_get__self(t_PythonAbstractMatricesHarvester *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/oned/OrientedPoint.h"
#include "org/hipparchus/geometry/euclidean/oned/OrientedPoint.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/oned/SubOrientedPoint.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *OrientedPoint::class$ = NULL;
          jmethodID *OrientedPoint::mids$ = NULL;
          bool OrientedPoint::live$ = false;

          jclass OrientedPoint::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/OrientedPoint");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9cfe050a265de486] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;ZD)V");
              mids$[mid_copySelf_5f8b6db3a8315733] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/oned/OrientedPoint;");
              mids$[mid_emptyHyperplane_a59721c72afcee95] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/oned/SubOrientedPoint;");
              mids$[mid_getLocation_62608abb8b57a58e] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_getOffset_f0dd8cb59ea09794] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_2f915fa9762130df] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getTolerance_b74f83833fdad017] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_isDirect_9ab94ac1dc23b105] = env->getMethodID(cls, "isDirect", "()Z");
              mids$[mid_project_2214f7ad5b6ca158] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_revertSelf_a1fa5dae97ea5ed2] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_806ecfbca1984226] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_wholeHyperplane_a59721c72afcee95] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/oned/SubOrientedPoint;");
              mids$[mid_wholeSpace_9520063cff244850] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OrientedPoint::OrientedPoint(const ::org::hipparchus::geometry::euclidean::oned::Vector1D & a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9cfe050a265de486, a0.this$, a1, a2)) {}

          OrientedPoint OrientedPoint::copySelf() const
          {
            return OrientedPoint(env->callObjectMethod(this$, mids$[mid_copySelf_5f8b6db3a8315733]));
          }

          ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint OrientedPoint::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_a59721c72afcee95]));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D OrientedPoint::getLocation() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_getLocation_62608abb8b57a58e]));
          }

          jdouble OrientedPoint::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_f0dd8cb59ea09794], a0.this$);
          }

          jdouble OrientedPoint::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_2f915fa9762130df], a0.this$);
          }

          jdouble OrientedPoint::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_b74f83833fdad017]);
          }

          jboolean OrientedPoint::isDirect() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isDirect_9ab94ac1dc23b105]);
          }

          ::org::hipparchus::geometry::Point OrientedPoint::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_2214f7ad5b6ca158], a0.this$));
          }

          void OrientedPoint::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_a1fa5dae97ea5ed2]);
          }

          jboolean OrientedPoint::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_806ecfbca1984226], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint OrientedPoint::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_a59721c72afcee95]));
          }

          ::org::hipparchus::geometry::euclidean::oned::IntervalsSet OrientedPoint::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::IntervalsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_9520063cff244850]));
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
        namespace oned {
          static PyObject *t_OrientedPoint_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrientedPoint_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OrientedPoint_init_(t_OrientedPoint *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OrientedPoint_copySelf(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_emptyHyperplane(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_getLocation(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_getOffset(t_OrientedPoint *self, PyObject *args);
          static PyObject *t_OrientedPoint_getTolerance(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_isDirect(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_project(t_OrientedPoint *self, PyObject *arg);
          static PyObject *t_OrientedPoint_revertSelf(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_sameOrientationAs(t_OrientedPoint *self, PyObject *arg);
          static PyObject *t_OrientedPoint_wholeHyperplane(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_wholeSpace(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_get__direct(t_OrientedPoint *self, void *data);
          static PyObject *t_OrientedPoint_get__location(t_OrientedPoint *self, void *data);
          static PyObject *t_OrientedPoint_get__tolerance(t_OrientedPoint *self, void *data);
          static PyGetSetDef t_OrientedPoint__fields_[] = {
            DECLARE_GET_FIELD(t_OrientedPoint, direct),
            DECLARE_GET_FIELD(t_OrientedPoint, location),
            DECLARE_GET_FIELD(t_OrientedPoint, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OrientedPoint__methods_[] = {
            DECLARE_METHOD(t_OrientedPoint, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrientedPoint, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrientedPoint, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, getLocation, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_OrientedPoint, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, isDirect, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, project, METH_O),
            DECLARE_METHOD(t_OrientedPoint, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_OrientedPoint, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OrientedPoint)[] = {
            { Py_tp_methods, t_OrientedPoint__methods_ },
            { Py_tp_init, (void *) t_OrientedPoint_init_ },
            { Py_tp_getset, t_OrientedPoint__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OrientedPoint)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OrientedPoint, t_OrientedPoint, OrientedPoint);

          void t_OrientedPoint::install(PyObject *module)
          {
            installType(&PY_TYPE(OrientedPoint), &PY_TYPE_DEF(OrientedPoint), module, "OrientedPoint", 0);
          }

          void t_OrientedPoint::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "class_", make_descriptor(OrientedPoint::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "wrapfn_", make_descriptor(t_OrientedPoint::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OrientedPoint_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OrientedPoint::initializeClass, 1)))
              return NULL;
            return t_OrientedPoint::wrap_Object(OrientedPoint(((t_OrientedPoint *) arg)->object.this$));
          }
          static PyObject *t_OrientedPoint_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OrientedPoint::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OrientedPoint_init_(t_OrientedPoint *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D a0((jobject) NULL);
            jboolean a1;
            jdouble a2;
            OrientedPoint object((jobject) NULL);

            if (!parseArgs(args, "kZD", ::org::hipparchus::geometry::euclidean::oned::Vector1D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OrientedPoint(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OrientedPoint_copySelf(t_OrientedPoint *self)
          {
            OrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_OrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_emptyHyperplane(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::oned::t_SubOrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_getLocation(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getLocation());
            return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_getOffset(t_OrientedPoint *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_OrientedPoint_getTolerance(t_OrientedPoint *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_OrientedPoint_isDirect(t_OrientedPoint *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isDirect());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OrientedPoint_project(t_OrientedPoint *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_OrientedPoint_revertSelf(t_OrientedPoint *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_OrientedPoint_sameOrientationAs(t_OrientedPoint *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_OrientedPoint_wholeHyperplane(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::oned::t_SubOrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_wholeSpace(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::IntervalsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_IntervalsSet::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_get__direct(t_OrientedPoint *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isDirect());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_OrientedPoint_get__location(t_OrientedPoint *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getLocation());
            return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(value);
          }

          static PyObject *t_OrientedPoint_get__tolerance(t_OrientedPoint *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Line::class$ = NULL;
          jmethodID *Line::mids$ = NULL;
          bool Line::live$ = false;

          jclass Line::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Line");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_14bec7b2bdc550d3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_init$_bd9cd5e56b659d61] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;DD)V");
              mids$[mid_contains_7f9cee33caf2d2df] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Z");
              mids$[mid_copySelf_f76ed72539e37ce2] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_distance_a7f439b8ba8ffc55] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_emptyHyperplane_dbab5bf6f6485ce8] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/twod/SubLine;");
              mids$[mid_getAngle_b74f83833fdad017] = env->getMethodID(cls, "getAngle", "()D");
              mids$[mid_getOffset_991880b3f2f7e107] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)D");
              mids$[mid_getOffset_f0dd8cb59ea09794] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_2f915fa9762130df] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getOriginOffset_b74f83833fdad017] = env->getMethodID(cls, "getOriginOffset", "()D");
              mids$[mid_getPointAt_22a6b58b73b3753b] = env->getMethodID(cls, "getPointAt", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getReverse_f76ed72539e37ce2] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_getTolerance_b74f83833fdad017] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getTransform_677c2cd6ff5569fd] = env->getStaticMethodID(cls, "getTransform", "(DDDDDD)Lorg/hipparchus/geometry/partitioning/Transform;");
              mids$[mid_intersection_f461b019c08ce2f9] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_isParallelTo_88eea5997cf84611] = env->getMethodID(cls, "isParallelTo", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)Z");
              mids$[mid_project_2214f7ad5b6ca158] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_19aaf4ce06642948] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_reset_0458ed3c331169c7] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_revertSelf_a1fa5dae97ea5ed2] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_806ecfbca1984226] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_setAngle_8ba9fe7a847cecad] = env->getMethodID(cls, "setAngle", "(D)V");
              mids$[mid_setOriginOffset_8ba9fe7a847cecad] = env->getMethodID(cls, "setOriginOffset", "(D)V");
              mids$[mid_toSpace_541d7608593f5738] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSpace_4f90fdb34b7d1107] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSubSpace_b2178ad896cd2546] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toSubSpace_b1d2ab531c8e2a03] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_translateToPoint_e94ae32a63c9501d] = env->getMethodID(cls, "translateToPoint", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_wholeHyperplane_dbab5bf6f6485ce8] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/twod/SubLine;");
              mids$[mid_wholeSpace_f9a97598fbca1de4] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/twod/PolygonsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Line::Line(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_14bec7b2bdc550d3, a0.this$, a1.this$, a2)) {}

          Line::Line(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd9cd5e56b659d61, a0.this$, a1, a2)) {}

          jboolean Line::contains(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_7f9cee33caf2d2df], a0.this$);
          }

          Line Line::copySelf() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_copySelf_f76ed72539e37ce2]));
          }

          jdouble Line::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_a7f439b8ba8ffc55], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::SubLine Line::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::SubLine(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_dbab5bf6f6485ce8]));
          }

          jdouble Line::getAngle() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAngle_b74f83833fdad017]);
          }

          jdouble Line::getOffset(const Line & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_991880b3f2f7e107], a0.this$);
          }

          jdouble Line::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_f0dd8cb59ea09794], a0.this$);
          }

          jdouble Line::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_2f915fa9762130df], a0.this$);
          }

          jdouble Line::getOriginOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOriginOffset_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::getPointAt(const ::org::hipparchus::geometry::euclidean::oned::Vector1D & a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getPointAt_22a6b58b73b3753b], a0.this$, a1));
          }

          Line Line::getReverse() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_getReverse_f76ed72539e37ce2]));
          }

          jdouble Line::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::partitioning::Transform Line::getTransform(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::partitioning::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_677c2cd6ff5569fd], a0, a1, a2, a3, a4, a5));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::intersection(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_intersection_f461b019c08ce2f9], a0.this$));
          }

          jboolean Line::isParallelTo(const Line & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isParallelTo_88eea5997cf84611], a0.this$);
          }

          ::org::hipparchus::geometry::Point Line::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_2214f7ad5b6ca158], a0.this$));
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_19aaf4ce06642948], a0.this$, a1.this$);
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_0458ed3c331169c7], a0.this$, a1);
          }

          void Line::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_a1fa5dae97ea5ed2]);
          }

          jboolean Line::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_806ecfbca1984226], a0.this$);
          }

          void Line::setAngle(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAngle_8ba9fe7a847cecad], a0);
          }

          void Line::setOriginOffset(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOriginOffset_8ba9fe7a847cecad], a0);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSpace_541d7608593f5738], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSpace_4f90fdb34b7d1107], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_b2178ad896cd2546], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_b1d2ab531c8e2a03], a0.this$));
          }

          void Line::translateToPoint(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_translateToPoint_e94ae32a63c9501d], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::SubLine Line::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::SubLine(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_dbab5bf6f6485ce8]));
          }

          ::org::hipparchus::geometry::euclidean::twod::PolygonsSet Line::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::PolygonsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_f9a97598fbca1de4]));
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
          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Line_contains(t_Line *self, PyObject *arg);
          static PyObject *t_Line_copySelf(t_Line *self);
          static PyObject *t_Line_distance(t_Line *self, PyObject *arg);
          static PyObject *t_Line_emptyHyperplane(t_Line *self);
          static PyObject *t_Line_getAngle(t_Line *self);
          static PyObject *t_Line_getOffset(t_Line *self, PyObject *args);
          static PyObject *t_Line_getOriginOffset(t_Line *self);
          static PyObject *t_Line_getPointAt(t_Line *self, PyObject *args);
          static PyObject *t_Line_getReverse(t_Line *self);
          static PyObject *t_Line_getTolerance(t_Line *self);
          static PyObject *t_Line_getTransform(PyTypeObject *type, PyObject *args);
          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg);
          static PyObject *t_Line_isParallelTo(t_Line *self, PyObject *arg);
          static PyObject *t_Line_project(t_Line *self, PyObject *arg);
          static PyObject *t_Line_reset(t_Line *self, PyObject *args);
          static PyObject *t_Line_revertSelf(t_Line *self);
          static PyObject *t_Line_sameOrientationAs(t_Line *self, PyObject *arg);
          static PyObject *t_Line_setAngle(t_Line *self, PyObject *arg);
          static PyObject *t_Line_setOriginOffset(t_Line *self, PyObject *arg);
          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_translateToPoint(t_Line *self, PyObject *arg);
          static PyObject *t_Line_wholeHyperplane(t_Line *self);
          static PyObject *t_Line_wholeSpace(t_Line *self);
          static PyObject *t_Line_get__angle(t_Line *self, void *data);
          static int t_Line_set__angle(t_Line *self, PyObject *arg, void *data);
          static PyObject *t_Line_get__originOffset(t_Line *self, void *data);
          static int t_Line_set__originOffset(t_Line *self, PyObject *arg, void *data);
          static PyObject *t_Line_get__reverse(t_Line *self, void *data);
          static PyObject *t_Line_get__tolerance(t_Line *self, void *data);
          static PyGetSetDef t_Line__fields_[] = {
            DECLARE_GETSET_FIELD(t_Line, angle),
            DECLARE_GETSET_FIELD(t_Line, originOffset),
            DECLARE_GET_FIELD(t_Line, reverse),
            DECLARE_GET_FIELD(t_Line, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Line__methods_[] = {
            DECLARE_METHOD(t_Line, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, contains, METH_O),
            DECLARE_METHOD(t_Line, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Line, distance, METH_O),
            DECLARE_METHOD(t_Line, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Line, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_Line, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Line, getOriginOffset, METH_NOARGS),
            DECLARE_METHOD(t_Line, getPointAt, METH_VARARGS),
            DECLARE_METHOD(t_Line, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTransform, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Line, intersection, METH_O),
            DECLARE_METHOD(t_Line, isParallelTo, METH_O),
            DECLARE_METHOD(t_Line, project, METH_O),
            DECLARE_METHOD(t_Line, reset, METH_VARARGS),
            DECLARE_METHOD(t_Line, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Line, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Line, setAngle, METH_O),
            DECLARE_METHOD(t_Line, setOriginOffset, METH_O),
            DECLARE_METHOD(t_Line, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, translateToPoint, METH_O),
            DECLARE_METHOD(t_Line, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Line, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Line)[] = {
            { Py_tp_methods, t_Line__methods_ },
            { Py_tp_init, (void *) t_Line_init_ },
            { Py_tp_getset, t_Line__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Line)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Line, t_Line, Line);

          void t_Line::install(PyObject *module)
          {
            installType(&PY_TYPE(Line), &PY_TYPE_DEF(Line), module, "Line", 0);
          }

          void t_Line::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "class_", make_descriptor(Line::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "wrapfn_", make_descriptor(t_Line::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Line::initializeClass, 1)))
              return NULL;
            return t_Line::wrap_Object(Line(((t_Line *) arg)->object.this$));
          }
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Line::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                jdouble a2;
                Line object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Line(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                Line object((jobject) NULL);

                if (!parseArgs(args, "kDD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Line(a0, a1, a2));
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

          static PyObject *t_Line_contains(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Line_copySelf(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_distance(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Line_emptyHyperplane(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::twod::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_getAngle(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAngle());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getOffset(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Line a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Line_getOriginOffset(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOriginOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getPointAt(t_Line *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::oned::Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPointAt(a0, a1));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", args);
            return NULL;
          }

          static PyObject *t_Line_getReverse(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_getTolerance(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getTransform(PyTypeObject *type, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::hipparchus::geometry::partitioning::Transform result((jobject) NULL);

            if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Line::getTransform(a0, a1, a2, a3, a4, a5));
              return ::org::hipparchus::geometry::partitioning::t_Transform::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D), ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            PyErr_SetArgsError(type, "getTransform", args);
            return NULL;
          }

          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_Line_isParallelTo(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isParallelTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isParallelTo", arg);
            return NULL;
          }

          static PyObject *t_Line_project(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Line_reset(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                jdouble a1;

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Line_revertSelf(t_Line *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Line_sameOrientationAs(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Line_setAngle(t_Line *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAngle(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAngle", arg);
            return NULL;
          }

          static PyObject *t_Line_setOriginOffset(t_Line *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOriginOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOriginOffset", arg);
            return NULL;
          }

          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Line_translateToPoint(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.translateToPoint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "translateToPoint", arg);
            return NULL;
          }

          static PyObject *t_Line_wholeHyperplane(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::twod::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_wholeSpace(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::PolygonsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_PolygonsSet::wrap_Object(result);
          }

          static PyObject *t_Line_get__angle(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAngle());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Line_set__angle(t_Line *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAngle(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "angle", arg);
            return -1;
          }

          static PyObject *t_Line_get__originOffset(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOriginOffset());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Line_set__originOffset(t_Line *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOriginOffset(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "originOffset", arg);
            return -1;
          }

          static PyObject *t_Line_get__reverse(t_Line *self, void *data)
          {
            Line value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_Line::wrap_Object(value);
          }

          static PyObject *t_Line_get__tolerance(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TCGScale::class$ = NULL;
      jmethodID *TCGScale::mids$ = NULL;
      bool TCGScale::live$ = false;

      jclass TCGScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TCGScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TCGScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jdouble TCGScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TCGScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      ::java::lang::String TCGScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_TCGScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCGScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCGScale_getName(t_TCGScale *self);
      static PyObject *t_TCGScale_offsetFromTAI(t_TCGScale *self, PyObject *args);
      static PyObject *t_TCGScale_toString(t_TCGScale *self, PyObject *args);
      static PyObject *t_TCGScale_get__name(t_TCGScale *self, void *data);
      static PyGetSetDef t_TCGScale__fields_[] = {
        DECLARE_GET_FIELD(t_TCGScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TCGScale__methods_[] = {
        DECLARE_METHOD(t_TCGScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCGScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCGScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TCGScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TCGScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TCGScale)[] = {
        { Py_tp_methods, t_TCGScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TCGScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TCGScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TCGScale, t_TCGScale, TCGScale);

      void t_TCGScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TCGScale), &PY_TYPE_DEF(TCGScale), module, "TCGScale", 0);
      }

      void t_TCGScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCGScale), "class_", make_descriptor(TCGScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCGScale), "wrapfn_", make_descriptor(t_TCGScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCGScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TCGScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TCGScale::initializeClass, 1)))
          return NULL;
        return t_TCGScale::wrap_Object(TCGScale(((t_TCGScale *) arg)->object.this$));
      }
      static PyObject *t_TCGScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TCGScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TCGScale_getName(t_TCGScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TCGScale_offsetFromTAI(t_TCGScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_TCGScale_toString(t_TCGScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TCGScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TCGScale_get__name(t_TCGScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractMessageParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *AbstractMessageParser::class$ = NULL;
            jmethodID *AbstractMessageParser::mids$ = NULL;
            bool AbstractMessageParser::live$ = false;

            jclass AbstractMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/AbstractMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_anticipateNext_c4aced5b6da74a0c] = env->getMethodID(cls, "anticipateNext", "(Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");
                mids$[mid_getCurrent_f164c3688294cf91] = env->getMethodID(cls, "getCurrent", "()Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;");
                mids$[mid_getFileFormat_e4c64bde02ca34c3] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_653fe7fd2fcbf113] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_19d473d3b0277de6] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_setEndTagSeen_fcb96c98de6fad04] = env->getMethodID(cls, "setEndTagSeen", "(Z)V");
                mids$[mid_setFallback_c4aced5b6da74a0c] = env->getMethodID(cls, "setFallback", "(Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");
                mids$[mid_wasEndTagSeen_9ab94ac1dc23b105] = env->getMethodID(cls, "wasEndTagSeen", "()Z");
                mids$[mid_reset_4a64e4a74b40b4f0] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void AbstractMessageParser::anticipateNext(const ::org::orekit::files::ccsds::utils::parsing::ProcessingState & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_anticipateNext_c4aced5b6da74a0c], a0.this$);
            }

            ::org::orekit::files::ccsds::utils::parsing::ProcessingState AbstractMessageParser::getCurrent() const
            {
              return ::org::orekit::files::ccsds::utils::parsing::ProcessingState(env->callObjectMethod(this$, mids$[mid_getCurrent_f164c3688294cf91]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat AbstractMessageParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_e4c64bde02ca34c3]));
            }

            ::java::lang::String AbstractMessageParser::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_1c1fa1e935d6cdcf]));
            }

            ::java::util::Map AbstractMessageParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a]));
            }

            ::java::lang::Object AbstractMessageParser::parseMessage(const ::org::orekit::data::DataSource & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseMessage_653fe7fd2fcbf113], a0.this$));
            }

            void AbstractMessageParser::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_process_19d473d3b0277de6], a0.this$);
            }

            void AbstractMessageParser::setEndTagSeen(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEndTagSeen_fcb96c98de6fad04], a0);
            }

            void AbstractMessageParser::setFallback(const ::org::orekit::files::ccsds::utils::parsing::ProcessingState & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFallback_c4aced5b6da74a0c], a0.this$);
            }

            jboolean AbstractMessageParser::wasEndTagSeen() const
            {
              return env->callBooleanMethod(this$, mids$[mid_wasEndTagSeen_9ab94ac1dc23b105]);
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
            static PyObject *t_AbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageParser_of_(t_AbstractMessageParser *self, PyObject *args);
            static PyObject *t_AbstractMessageParser_anticipateNext(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_getCurrent(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getFileFormat(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getFormatVersionKey(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getSpecialXmlElementsBuilders(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_parseMessage(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_process(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_setEndTagSeen(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_setFallback(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_wasEndTagSeen(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_get__current(t_AbstractMessageParser *self, void *data);
            static int t_AbstractMessageParser_set__endTagSeen(t_AbstractMessageParser *self, PyObject *arg, void *data);
            static int t_AbstractMessageParser_set__fallback(t_AbstractMessageParser *self, PyObject *arg, void *data);
            static PyObject *t_AbstractMessageParser_get__fileFormat(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__formatVersionKey(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__specialXmlElementsBuilders(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__parameters_(t_AbstractMessageParser *self, void *data);
            static PyGetSetDef t_AbstractMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractMessageParser, current),
              DECLARE_SET_FIELD(t_AbstractMessageParser, endTagSeen),
              DECLARE_SET_FIELD(t_AbstractMessageParser, fallback),
              DECLARE_GET_FIELD(t_AbstractMessageParser, fileFormat),
              DECLARE_GET_FIELD(t_AbstractMessageParser, formatVersionKey),
              DECLARE_GET_FIELD(t_AbstractMessageParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_AbstractMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractMessageParser__methods_[] = {
              DECLARE_METHOD(t_AbstractMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractMessageParser, anticipateNext, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, getCurrent, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getFileFormat, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getSpecialXmlElementsBuilders, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, parseMessage, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, process, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, setEndTagSeen, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, setFallback, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, wasEndTagSeen, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractMessageParser)[] = {
              { Py_tp_methods, t_AbstractMessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractMessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractMessageParser, t_AbstractMessageParser, AbstractMessageParser);
            PyObject *t_AbstractMessageParser::wrap_Object(const AbstractMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageParser *self = (t_AbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageParser *self = (t_AbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractMessageParser), &PY_TYPE_DEF(AbstractMessageParser), module, "AbstractMessageParser", 0);
            }

            void t_AbstractMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "class_", make_descriptor(AbstractMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "wrapfn_", make_descriptor(t_AbstractMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractMessageParser::initializeClass, 1)))
                return NULL;
              return t_AbstractMessageParser::wrap_Object(AbstractMessageParser(((t_AbstractMessageParser *) arg)->object.this$));
            }
            static PyObject *t_AbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractMessageParser_of_(t_AbstractMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractMessageParser_anticipateNext(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.anticipateNext(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "anticipateNext", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_getCurrent(t_AbstractMessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState result((jobject) NULL);
              OBJ_CALL(result = self->object.getCurrent());
              return ::org::orekit::files::ccsds::utils::parsing::t_ProcessingState::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageParser_getFileFormat(t_AbstractMessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageParser_getFormatVersionKey(t_AbstractMessageParser *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_AbstractMessageParser_getSpecialXmlElementsBuilders(t_AbstractMessageParser *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            static PyObject *t_AbstractMessageParser_parseMessage(t_AbstractMessageParser *self, PyObject *arg)
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

            static PyObject *t_AbstractMessageParser_process(t_AbstractMessageParser *self, PyObject *arg)
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

            static PyObject *t_AbstractMessageParser_setEndTagSeen(t_AbstractMessageParser *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setEndTagSeen(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEndTagSeen", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_setFallback(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFallback(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFallback", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_wasEndTagSeen(t_AbstractMessageParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.wasEndTagSeen());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractMessageParser_get__parameters_(t_AbstractMessageParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractMessageParser_get__current(t_AbstractMessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState value((jobject) NULL);
              OBJ_CALL(value = self->object.getCurrent());
              return ::org::orekit::files::ccsds::utils::parsing::t_ProcessingState::wrap_Object(value);
            }

            static int t_AbstractMessageParser_set__endTagSeen(t_AbstractMessageParser *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setEndTagSeen(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "endTagSeen", arg);
              return -1;
            }

            static int t_AbstractMessageParser_set__fallback(t_AbstractMessageParser *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::utils::parsing::ProcessingState value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &value))
                {
                  INT_CALL(self->object.setFallback(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "fallback", arg);
              return -1;
            }

            static PyObject *t_AbstractMessageParser_get__fileFormat(t_AbstractMessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_AbstractMessageParser_get__formatVersionKey(t_AbstractMessageParser *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_AbstractMessageParser_get__specialXmlElementsBuilders(t_AbstractMessageParser *self, void *data)
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
#include "org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *AbstractFieldODEStateInterpolator::class$ = NULL;
        jmethodID *AbstractFieldODEStateInterpolator::mids$ = NULL;
        bool AbstractFieldODEStateInterpolator::live$ = false;

        jclass AbstractFieldODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_b7aa8b39e4b21836] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getGlobalCurrentState_b7aa8b39e4b21836] = env->getMethodID(cls, "getGlobalCurrentState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getGlobalPreviousState_b7aa8b39e4b21836] = env->getMethodID(cls, "getGlobalPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_285853fa8f6e2f48] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_getPreviousState_b7aa8b39e4b21836] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_9ab94ac1dc23b105] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_9ab94ac1dc23b105] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_9ab94ac1dc23b105] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_fe13e56a433ef111] = env->getMethodID(cls, "restrictStep", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;");
            mids$[mid_getMapper_e3ed330d4a98f3fc] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/FieldEquationsMapper;");
            mids$[mid_computeInterpolatedStateAndDerivatives_8141c621c833a952] = env->getMethodID(cls, "computeInterpolatedStateAndDerivatives", "(Lorg/hipparchus/ode/FieldEquationsMapper;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_create_caefaa95c8e0ef1f] = env->getMethodID(cls, "create", "(ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_b7aa8b39e4b21836]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getGlobalCurrentState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalCurrentState_b7aa8b39e4b21836]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getGlobalPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalPreviousState_b7aa8b39e4b21836]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_285853fa8f6e2f48], a0.this$));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_b7aa8b39e4b21836]));
        }

        jboolean AbstractFieldODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_9ab94ac1dc23b105]);
        }

        jboolean AbstractFieldODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_9ab94ac1dc23b105]);
        }

        jboolean AbstractFieldODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_9ab94ac1dc23b105]);
        }

        AbstractFieldODEStateInterpolator AbstractFieldODEStateInterpolator::restrictStep(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a1) const
        {
          return AbstractFieldODEStateInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_fe13e56a433ef111], a0.this$, a1.this$));
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
        static PyObject *t_AbstractFieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_of_(t_AbstractFieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractFieldODEStateInterpolator_getCurrentState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalCurrentState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalPreviousState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_getInterpolatedState(t_AbstractFieldODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEStateInterpolator_getPreviousState(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isCurrentStateInterpolated(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isForward(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_isPreviousStateInterpolated(t_AbstractFieldODEStateInterpolator *self);
        static PyObject *t_AbstractFieldODEStateInterpolator_restrictStep(t_AbstractFieldODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__forward(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalCurrentState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalPreviousState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousState(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractFieldODEStateInterpolator_get__parameters_(t_AbstractFieldODEStateInterpolator *self, void *data);
        static PyGetSetDef t_AbstractFieldODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, globalCurrentState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, globalPreviousState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, previousStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractFieldODEStateInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getGlobalCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getGlobalPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEStateInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldODEStateInterpolator)[] = {
          { Py_tp_methods, t_AbstractFieldODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldODEStateInterpolator, t_AbstractFieldODEStateInterpolator, AbstractFieldODEStateInterpolator);
        PyObject *t_AbstractFieldODEStateInterpolator::wrap_Object(const AbstractFieldODEStateInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldODEStateInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEStateInterpolator *self = (t_AbstractFieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFieldODEStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldODEStateInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEStateInterpolator *self = (t_AbstractFieldODEStateInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFieldODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldODEStateInterpolator), &PY_TYPE_DEF(AbstractFieldODEStateInterpolator), module, "AbstractFieldODEStateInterpolator", 0);
        }

        void t_AbstractFieldODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "class_", make_descriptor(AbstractFieldODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldODEStateInterpolator::wrap_Object(AbstractFieldODEStateInterpolator(((t_AbstractFieldODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_of_(t_AbstractFieldODEStateInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getCurrentState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalCurrentState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getGlobalPreviousState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getInterpolatedState(t_AbstractFieldODEStateInterpolator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_getPreviousState(t_AbstractFieldODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isCurrentStateInterpolated(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isForward(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_isPreviousStateInterpolated(t_AbstractFieldODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_restrictStep(t_AbstractFieldODEStateInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative a1((jobject) NULL);
          PyTypeObject **p1;
          AbstractFieldODEStateInterpolator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_AbstractFieldODEStateInterpolator::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }
        static PyObject *t_AbstractFieldODEStateInterpolator_get__parameters_(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__currentStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__forward(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalCurrentState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__globalPreviousState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousState(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEStateInterpolator_get__previousStateInterpolated(t_AbstractFieldODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEStateInterpolator::class$ = NULL;
        jmethodID *ODEStateInterpolator::mids$ = NULL;
        bool ODEStateInterpolator::live$ = false;

        jclass ODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_73a804ac72232dd7] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_cf0061d2765ae5a3] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getPreviousState_73a804ac72232dd7] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_9ab94ac1dc23b105] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_9ab94ac1dc23b105] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_9ab94ac1dc23b105] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_73a804ac72232dd7]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getInterpolatedState(jdouble a0) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_cf0061d2765ae5a3], a0));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_73a804ac72232dd7]));
        }

        jboolean ODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_9ab94ac1dc23b105]);
        }

        jboolean ODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_9ab94ac1dc23b105]);
        }

        jboolean ODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_9ab94ac1dc23b105]);
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
        static PyObject *t_ODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_getCurrentState(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_getInterpolatedState(t_ODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_getPreviousState(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isCurrentStateInterpolated(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isForward(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isPreviousStateInterpolated(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_get__currentState(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__currentStateInterpolated(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__forward(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__previousState(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__previousStateInterpolated(t_ODEStateInterpolator *self, void *data);
        static PyGetSetDef t_ODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_ODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_ODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_ODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStateInterpolator)[] = {
          { Py_tp_methods, t_ODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::io::Serializable),
          NULL
        };

        DEFINE_TYPE(ODEStateInterpolator, t_ODEStateInterpolator, ODEStateInterpolator);

        void t_ODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStateInterpolator), &PY_TYPE_DEF(ODEStateInterpolator), module, "ODEStateInterpolator", 0);
        }

        void t_ODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "class_", make_descriptor(ODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "wrapfn_", make_descriptor(t_ODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_ODEStateInterpolator::wrap_Object(ODEStateInterpolator(((t_ODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_ODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStateInterpolator_getCurrentState(t_ODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_ODEStateInterpolator_getInterpolatedState(t_ODEStateInterpolator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_ODEStateInterpolator_getPreviousState(t_ODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_ODEStateInterpolator_isCurrentStateInterpolated(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_isForward(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_isPreviousStateInterpolated(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_get__currentState(t_ODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_ODEStateInterpolator_get__currentStateInterpolated(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ODEStateInterpolator_get__forward(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ODEStateInterpolator_get__previousState(t_ODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_ODEStateInterpolator_get__previousStateInterpolated(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AngularCoordinates::class$ = NULL;
      jmethodID *AngularCoordinates::mids$ = NULL;
      bool AngularCoordinates::live$ = false;
      AngularCoordinates *AngularCoordinates::IDENTITY = NULL;

      jclass AngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_dda4fc5052dbc315] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_f32de4638c68c05a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_e02abf874db8137f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_0773768711c29aaf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_1cc1bcaa3fec8385] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_08ec4abcb342f7e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_addOffset_5b02a5c5ff92f9cb] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_applyTo_176da7a9c87c96a5] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_applyTo_b59fe39c52b8d345] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_applyTo_448b59d288b2a2ff] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_applyTo_78bd106652cc7d0f] = env->getMethodID(cls, "applyTo", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_createFromModifiedRodrigues_ff486bc27859fbb3] = env->getStaticMethodID(cls, "createFromModifiedRodrigues", "([[D)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_estimateRate_777fefe4c2acaed3] = env->getStaticMethodID(cls, "estimateRate", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Rotation;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getModifiedRodrigues_be4fdefc2fcf7494] = env->getMethodID(cls, "getModifiedRodrigues", "(D)[[D");
          mids$[mid_getRotation_ff298a39b3cae5da] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_8b724f8b4fdad1a2] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRotationRate_8b724f8b4fdad1a2] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_revert_df90fc3151533d81] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_rotationShiftedBy_0b2bfb9df138ab1c] = env->getMethodID(cls, "rotationShiftedBy", "(D)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_shiftedBy_e7e7fac768feeefc] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_subtractOffset_5b02a5c5ff92f9cb] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_toDerivativeStructureRotation_33765e3b6b59bed2] = env->getMethodID(cls, "toDerivativeStructureRotation", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative1Rotation_1e54a5caa5199c2e] = env->getMethodID(cls, "toUnivariateDerivative1Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_toUnivariateDerivative2Rotation_1e54a5caa5199c2e] = env->getMethodID(cls, "toUnivariateDerivative2Rotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY = new AngularCoordinates(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/utils/AngularCoordinates;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AngularCoordinates::AngularCoordinates() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dda4fc5052dbc315, a0.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f32de4638c68c05a, a0.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e02abf874db8137f, a0.this$, a1.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0773768711c29aaf, a0.this$, a1.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1cc1bcaa3fec8385, a0.this$, a1.this$, a2.this$)) {}

      AngularCoordinates::AngularCoordinates(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::orekit::utils::PVCoordinates & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08ec4abcb342f7e4, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

      AngularCoordinates AngularCoordinates::addOffset(const AngularCoordinates & a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_5b02a5c5ff92f9cb], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_176da7a9c87c96a5], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_b59fe39c52b8d345], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_448b59d288b2a2ff], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates AngularCoordinates::applyTo(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_applyTo_78bd106652cc7d0f], a0.this$));
      }

      AngularCoordinates AngularCoordinates::createFromModifiedRodrigues(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return AngularCoordinates(env->callStaticObjectMethod(cls, mids$[mid_createFromModifiedRodrigues_ff486bc27859fbb3], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::estimateRate(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateRate_777fefe4c2acaed3], a0.this$, a1.this$, a2));
      }

      JArray< JArray< jdouble > > AngularCoordinates::getModifiedRodrigues(jdouble a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getModifiedRodrigues_be4fdefc2fcf7494], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AngularCoordinates::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_ff298a39b3cae5da]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularCoordinates::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_8b724f8b4fdad1a2]));
      }

      AngularCoordinates AngularCoordinates::revert() const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_df90fc3151533d81]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AngularCoordinates::rotationShiftedBy(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationShiftedBy_0b2bfb9df138ab1c], a0));
      }

      AngularCoordinates AngularCoordinates::shiftedBy(jdouble a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_e7e7fac768feeefc], a0));
      }

      AngularCoordinates AngularCoordinates::subtractOffset(const AngularCoordinates & a0) const
      {
        return AngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_5b02a5c5ff92f9cb], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toDerivativeStructureRotation(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureRotation_33765e3b6b59bed2], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toUnivariateDerivative1Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Rotation_1e54a5caa5199c2e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AngularCoordinates::toUnivariateDerivative2Rotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Rotation_1e54a5caa5199c2e]));
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
      static PyObject *t_AngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AngularCoordinates_init_(t_AngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AngularCoordinates_addOffset(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_applyTo(t_AngularCoordinates *self, PyObject *args);
      static PyObject *t_AngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args);
      static PyObject *t_AngularCoordinates_getModifiedRodrigues(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_getRotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_getRotationAcceleration(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_getRotationRate(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_revert(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_rotationShiftedBy(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_shiftedBy(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_subtractOffset(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_toDerivativeStructureRotation(t_AngularCoordinates *self, PyObject *arg);
      static PyObject *t_AngularCoordinates_toUnivariateDerivative1Rotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_toUnivariateDerivative2Rotation(t_AngularCoordinates *self);
      static PyObject *t_AngularCoordinates_get__rotation(t_AngularCoordinates *self, void *data);
      static PyObject *t_AngularCoordinates_get__rotationAcceleration(t_AngularCoordinates *self, void *data);
      static PyObject *t_AngularCoordinates_get__rotationRate(t_AngularCoordinates *self, void *data);
      static PyGetSetDef t_AngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_AngularCoordinates, rotation),
        DECLARE_GET_FIELD(t_AngularCoordinates, rotationAcceleration),
        DECLARE_GET_FIELD(t_AngularCoordinates, rotationRate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_AngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, addOffset, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, applyTo, METH_VARARGS),
        DECLARE_METHOD(t_AngularCoordinates, createFromModifiedRodrigues, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, estimateRate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AngularCoordinates, getModifiedRodrigues, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, revert, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, rotationShiftedBy, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, shiftedBy, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, subtractOffset, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, toDerivativeStructureRotation, METH_O),
        DECLARE_METHOD(t_AngularCoordinates, toUnivariateDerivative1Rotation, METH_NOARGS),
        DECLARE_METHOD(t_AngularCoordinates, toUnivariateDerivative2Rotation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AngularCoordinates)[] = {
        { Py_tp_methods, t_AngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_AngularCoordinates_init_ },
        { Py_tp_getset, t_AngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AngularCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AngularCoordinates, t_AngularCoordinates, AngularCoordinates);

      void t_AngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(AngularCoordinates), &PY_TYPE_DEF(AngularCoordinates), module, "AngularCoordinates", 0);
      }

      void t_AngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "class_", make_descriptor(AngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "wrapfn_", make_descriptor(t_AngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "boxfn_", make_descriptor(boxObject));
        env->getClass(AngularCoordinates::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AngularCoordinates), "IDENTITY", make_descriptor(t_AngularCoordinates::wrap_Object(*AngularCoordinates::IDENTITY)));
      }

      static PyObject *t_AngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_AngularCoordinates::wrap_Object(AngularCoordinates(((t_AngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_AngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AngularCoordinates_init_(t_AngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            AngularCoordinates object((jobject) NULL);

            INT_CALL(object = AngularCoordinates());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = AngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              INT_CALL(object = AngularCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            jdouble a4;
            AngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AngularCoordinates(a0, a1, a2, a3, a4));
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

      static PyObject *t_AngularCoordinates_addOffset(t_AngularCoordinates *self, PyObject *arg)
      {
        AngularCoordinates a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "k", AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addOffset", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_applyTo(t_AngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.applyTo(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "applyTo", args);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_createFromModifiedRodrigues(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularCoordinates::createFromModifiedRodrigues(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFromModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_estimateRate(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::AngularCoordinates::estimateRate(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateRate", args);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_getModifiedRodrigues(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getModifiedRodrigues(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "getModifiedRodrigues", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_getRotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_getRotationAcceleration(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_getRotationRate(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_revert(t_AngularCoordinates *self)
      {
        AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.revert());
        return t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_AngularCoordinates_rotationShiftedBy(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.rotationShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rotationShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_shiftedBy(t_AngularCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_subtractOffset(t_AngularCoordinates *self, PyObject *arg)
      {
        AngularCoordinates a0((jobject) NULL);
        AngularCoordinates result((jobject) NULL);

        if (!parseArg(arg, "k", AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_AngularCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtractOffset", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_toDerivativeStructureRotation(t_AngularCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureRotation(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureRotation", arg);
        return NULL;
      }

      static PyObject *t_AngularCoordinates_toUnivariateDerivative1Rotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_AngularCoordinates_toUnivariateDerivative2Rotation(t_AngularCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Rotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_AngularCoordinates_get__rotation(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_AngularCoordinates_get__rotationAcceleration(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_AngularCoordinates_get__rotationRate(t_AngularCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldKeplerianOrbit::class$ = NULL;
      jmethodID *FieldKeplerianOrbit::mids$ = NULL;
      bool FieldKeplerianOrbit::live$ = false;

      jclass FieldKeplerianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldKeplerianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_01b80e5fc8224f27] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_b2c0210b967e3fb5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/KeplerianOrbit;)V");
          mids$[mid_init$_e1cf5518a92ef935] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_77de91c247081784] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_16a0bc6b5307ef8d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_6ae44f82428ce0df] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_aee57b9535eb9d66] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_99dd76219aa0c8c0] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_81520b552cb3fa26] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_81520b552cb3fa26] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAnomaly_dd259b88fa6c00bb] = env->getMethodID(cls, "getAnomaly", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAnomalyDot_dd259b88fa6c00bb] = env->getMethodID(cls, "getAnomalyDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_81520b552cb3fa26] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_81520b552cb3fa26] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEccentricAnomaly_81520b552cb3fa26] = env->getMethodID(cls, "getEccentricAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEccentricAnomalyDot_81520b552cb3fa26] = env->getMethodID(cls, "getEccentricAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_81520b552cb3fa26] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_81520b552cb3fa26] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_81520b552cb3fa26] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_81520b552cb3fa26] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_81520b552cb3fa26] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_81520b552cb3fa26] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_81520b552cb3fa26] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_81520b552cb3fa26] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_81520b552cb3fa26] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_81520b552cb3fa26] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_81520b552cb3fa26] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_81520b552cb3fa26] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomaly_81520b552cb3fa26] = env->getMethodID(cls, "getMeanAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomalyDot_81520b552cb3fa26] = env->getMethodID(cls, "getMeanAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPerigeeArgument_81520b552cb3fa26] = env->getMethodID(cls, "getPerigeeArgument", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPerigeeArgumentDot_81520b552cb3fa26] = env->getMethodID(cls, "getPerigeeArgumentDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNode_81520b552cb3fa26] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNodeDot_81520b552cb3fa26] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTrueAnomaly_81520b552cb3fa26] = env->getMethodID(cls, "getTrueAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTrueAnomalyDot_81520b552cb3fa26] = env->getMethodID(cls, "getTrueAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_c7d4737d7afca612] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_9ab94ac1dc23b105] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_9ab94ac1dc23b105] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_74e971a711cad5fd] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_shiftedBy_56e56755a7c5bf57] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_shiftedBy_51dbeecc5fe5a0c4] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_toOrbit_f50f1bbccaeb207e] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPosition_ff5ac73a7b43eddd] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_243debd9cc1dd623] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_01b80e5fc8224f27, a0.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::KeplerianOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b2c0210b967e3fb5, a0.this$, a1.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_e1cf5518a92ef935, a0.this$, a1.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_77de91c247081784, a0.this$, a1.this$, a2.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_16a0bc6b5307ef8d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_6ae44f82428ce0df, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_aee57b9535eb9d66, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldKeplerianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_99dd76219aa0c8c0], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getAnomaly(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAnomaly_dd259b88fa6c00bb], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getAnomalyDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAnomalyDot_dd259b88fa6c00bb], a0.this$));
      }

      ::org::orekit::orbits::PositionAngleType FieldKeplerianOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_c25055891f180348]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEccentricAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEccentricAnomaly_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEccentricAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEccentricAnomalyDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getMeanAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomaly_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getMeanAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomalyDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getPerigeeArgument() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgument_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getPerigeeArgumentDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgumentDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getRightAscensionOfAscendingNode() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getTrueAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTrueAnomaly_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getTrueAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTrueAnomalyDot_81520b552cb3fa26]));
      }

      ::org::orekit::orbits::OrbitType FieldKeplerianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_c7d4737d7afca612]));
      }

      jboolean FieldKeplerianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_9ab94ac1dc23b105]);
      }

      jboolean FieldKeplerianOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_9ab94ac1dc23b105]);
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::removeRates() const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_74e971a711cad5fd]));
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::shiftedBy(jdouble a0) const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_56e56755a7c5bf57], a0));
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_51dbeecc5fe5a0c4], a0.this$));
      }

      ::org::orekit::orbits::KeplerianOrbit FieldKeplerianOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_f50f1bbccaeb207e]));
      }

      ::java::lang::String FieldKeplerianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_FieldKeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_of_(t_FieldKeplerianOrbit *self, PyObject *args);
      static int t_FieldKeplerianOrbit_init_(t_FieldKeplerianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldKeplerianOrbit_addKeplerContribution(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getA(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getADot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getAnomaly(t_FieldKeplerianOrbit *self, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_getAnomalyDot(t_FieldKeplerianOrbit *self, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_getCachedPositionAngleType(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getE(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomaly(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomalyDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEx(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialExDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEy(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEyDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHx(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHxDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHy(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHyDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getI(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getIDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLE(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLEDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLM(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLMDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLv(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLvDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getMeanAnomaly(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getMeanAnomalyDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgument(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgumentDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getTrueAnomaly(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getTrueAnomalyDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getType(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_hasDerivatives(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_hasRates(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_removeRates(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_shiftedBy(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_toOrbit(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_toString(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_get__a(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__aDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__cachedPositionAngleType(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__e(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__eDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomaly(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomalyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEx(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialExDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEy(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hx(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hxDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hy(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__i(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__iDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lE(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lEDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lM(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lMDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lv(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lvDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__meanAnomaly(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__meanAnomalyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgument(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgumentDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__trueAnomaly(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__trueAnomalyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__type(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__parameters_(t_FieldKeplerianOrbit *self, void *data);
      static PyGetSetDef t_FieldKeplerianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, a),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, e),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, eccentricAnomaly),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, eccentricAnomalyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hx),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hy),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, i),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lE),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lM),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lv),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, meanAnomaly),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, meanAnomalyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, perigeeArgument),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, perigeeArgumentDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, trueAnomaly),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, trueAnomalyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, type),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldKeplerianOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldKeplerianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getAnomaly, METH_O),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getAnomalyDot, METH_O),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEccentricAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEccentricAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getMeanAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getMeanAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getPerigeeArgument, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getPerigeeArgumentDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getTrueAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getTrueAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldKeplerianOrbit)[] = {
        { Py_tp_methods, t_FieldKeplerianOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldKeplerianOrbit_init_ },
        { Py_tp_getset, t_FieldKeplerianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldKeplerianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldKeplerianOrbit, t_FieldKeplerianOrbit, FieldKeplerianOrbit);
      PyObject *t_FieldKeplerianOrbit::wrap_Object(const FieldKeplerianOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldKeplerianOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldKeplerianOrbit *self = (t_FieldKeplerianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldKeplerianOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldKeplerianOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldKeplerianOrbit *self = (t_FieldKeplerianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldKeplerianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldKeplerianOrbit), &PY_TYPE_DEF(FieldKeplerianOrbit), module, "FieldKeplerianOrbit", 0);
      }

      void t_FieldKeplerianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianOrbit), "class_", make_descriptor(FieldKeplerianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianOrbit), "wrapfn_", make_descriptor(t_FieldKeplerianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldKeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldKeplerianOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldKeplerianOrbit::wrap_Object(FieldKeplerianOrbit(((t_FieldKeplerianOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldKeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldKeplerianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldKeplerianOrbit_of_(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldKeplerianOrbit_init_(t_FieldKeplerianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::KeplerianOrbit a1((jobject) NULL);
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::KeplerianOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
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
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
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
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
            PyTypeObject **p10;
            ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
            PyTypeObject **p11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a14((jobject) NULL);
            PyTypeObject **p14;
            ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
            PyTypeObject **p15;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldKeplerianOrbit_addKeplerContribution(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getA(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getADot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getAnomaly(t_FieldKeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomaly(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomaly", arg);
        return NULL;
      }

      static PyObject *t_FieldKeplerianOrbit_getAnomalyDot(t_FieldKeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomalyDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomalyDot", arg);
        return NULL;
      }

      static PyObject *t_FieldKeplerianOrbit_getCachedPositionAngleType(t_FieldKeplerianOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getE(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomaly(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEccentricAnomaly());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomalyDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEccentricAnomalyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEx(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialExDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEy(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEyDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHx(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHxDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHy(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHyDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getI(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getIDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLE(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLEDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLM(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLMDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLv(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLvDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getMeanAnomaly(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeanAnomaly());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getMeanAnomalyDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeanAnomalyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgument(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPerigeeArgument());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgumentDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPerigeeArgumentDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getTrueAnomaly(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrueAnomaly());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getTrueAnomalyDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrueAnomalyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getType(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_hasDerivatives(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_hasRates(t_FieldKeplerianOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldKeplerianOrbit_removeRates(t_FieldKeplerianOrbit *self)
      {
        FieldKeplerianOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldKeplerianOrbit_shiftedBy(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldKeplerianOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldKeplerianOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_toOrbit(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_toString(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldKeplerianOrbit_get__parameters_(t_FieldKeplerianOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldKeplerianOrbit_get__a(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__aDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__cachedPositionAngleType(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__e(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__eDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomaly(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEccentricAnomaly());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomalyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEccentricAnomalyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEx(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialExDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEy(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hx(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hxDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hy(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__i(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__iDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lE(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lEDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lM(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lMDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lv(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lvDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__meanAnomaly(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanAnomaly());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__meanAnomalyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanAnomalyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgument(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPerigeeArgument());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgumentDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPerigeeArgumentDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__trueAnomaly(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrueAnomaly());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__trueAnomalyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrueAnomalyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__type(t_FieldKeplerianOrbit *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1241.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1241::class$ = NULL;
              jmethodID *Rtcm1241::mids$ = NULL;
              bool Rtcm1241::live$ = false;

              jclass Rtcm1241::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1241");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9aa5d47c021c6219] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1241::Rtcm1241(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_9aa5d47c021c6219, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1241_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1241_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1241_of_(t_Rtcm1241 *self, PyObject *args);
              static int t_Rtcm1241_init_(t_Rtcm1241 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1241_get__parameters_(t_Rtcm1241 *self, void *data);
              static PyGetSetDef t_Rtcm1241__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1241, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1241__methods_[] = {
                DECLARE_METHOD(t_Rtcm1241, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1241, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1241, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1241)[] = {
                { Py_tp_methods, t_Rtcm1241__methods_ },
                { Py_tp_init, (void *) t_Rtcm1241_init_ },
                { Py_tp_getset, t_Rtcm1241__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1241)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1241, t_Rtcm1241, Rtcm1241);
              PyObject *t_Rtcm1241::wrap_Object(const Rtcm1241& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1241::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1241 *self = (t_Rtcm1241 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1241::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1241::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1241 *self = (t_Rtcm1241 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1241::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1241), &PY_TYPE_DEF(Rtcm1241), module, "Rtcm1241", 0);
              }

              void t_Rtcm1241::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1241), "class_", make_descriptor(Rtcm1241::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1241), "wrapfn_", make_descriptor(t_Rtcm1241::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1241), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1241_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1241::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1241::wrap_Object(Rtcm1241(((t_Rtcm1241 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1241_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1241::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1241_of_(t_Rtcm1241 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1241_init_(t_Rtcm1241 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1241 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1241(a0, a1, a2));
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
              static PyObject *t_Rtcm1241_get__parameters_(t_Rtcm1241 *self, void *data)
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
