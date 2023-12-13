#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/PythonFieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *PythonFieldUnivariateFunction::class$ = NULL;
      jmethodID *PythonFieldUnivariateFunction::mids$ = NULL;
      bool PythonFieldUnivariateFunction::live$ = false;

      jclass PythonFieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/PythonFieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_6e00dc5eb352fe51] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldUnivariateFunction::PythonFieldUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFieldUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFieldUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFieldUnivariateFunction::pythonExtension(jlong a0) const
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
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self);
      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonFieldUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonFieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFieldUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonFieldUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldUnivariateFunction, t_PythonFieldUnivariateFunction, PythonFieldUnivariateFunction);

      void t_PythonFieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldUnivariateFunction), &PY_TYPE_DEF(PythonFieldUnivariateFunction), module, "PythonFieldUnivariateFunction", 1);
      }

      void t_PythonFieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "class_", make_descriptor(PythonFieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "wrapfn_", make_descriptor(t_PythonFieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonFieldUnivariateFunction_pythonDecRef0 },
          { "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFieldUnivariateFunction::wrap_Object(PythonFieldUnivariateFunction(((t_PythonFieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonFieldUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
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

      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data)
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
#include "org/orekit/files/ccsds/utils/generation/AbstractMessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *AbstractMessageWriter::class$ = NULL;
            jmethodID *AbstractMessageWriter::mids$ = NULL;
            bool AbstractMessageWriter::live$ = false;
            ::java::lang::String *AbstractMessageWriter::DEFAULT_ORIGINATOR = NULL;

            jclass AbstractMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/AbstractMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_171dbda6f9dc03f2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getContext_f24ed3335bf508bc] = env->getMethodID(cls, "getContext", "()Lorg/orekit/files/ccsds/utils/ContextBinding;");
                mids$[mid_getDefaultVersion_b74f83833fdad017] = env->getMethodID(cls, "getDefaultVersion", "()D");
                mids$[mid_getFormatVersionKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getTimeConverter_cf100f800540ff49] = env->getMethodID(cls, "getTimeConverter", "()Lorg/orekit/files/ccsds/definitions/TimeConverter;");
                mids$[mid_getVersion_b74f83833fdad017] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_setContext_db5d6d07a090d1f4] = env->getMethodID(cls, "setContext", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_writeFooter_fb222e851cd27682] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_5f2a5114115bbdb2] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeSegment_1cabdf4a5e993579] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");
                mids$[mid_writeSegmentContent_309d7ce7156c8c23] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_ORIGINATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ORIGINATOR", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractMessageWriter::AbstractMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_171dbda6f9dc03f2, a0.this$, a1.this$, a2, a3.this$)) {}

            ::org::orekit::files::ccsds::utils::ContextBinding AbstractMessageWriter::getContext() const
            {
              return ::org::orekit::files::ccsds::utils::ContextBinding(env->callObjectMethod(this$, mids$[mid_getContext_f24ed3335bf508bc]));
            }

            jdouble AbstractMessageWriter::getDefaultVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDefaultVersion_b74f83833fdad017]);
            }

            ::java::lang::String AbstractMessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String AbstractMessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::definitions::TimeConverter AbstractMessageWriter::getTimeConverter() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getTimeConverter_cf100f800540ff49]));
            }

            jdouble AbstractMessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_b74f83833fdad017]);
            }

            void AbstractMessageWriter::setContext(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setContext_db5d6d07a090d1f4], a0.this$);
            }

            void AbstractMessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_fb222e851cd27682], a0.this$);
            }

            void AbstractMessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Header & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_5f2a5114115bbdb2], a0.this$, a1.this$);
            }

            void AbstractMessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Segment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_1cabdf4a5e993579], a0.this$, a1.this$);
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
            static PyObject *t_AbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_of_(t_AbstractMessageWriter *self, PyObject *args);
            static int t_AbstractMessageWriter_init_(t_AbstractMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractMessageWriter_getContext(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getDefaultVersion(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getFormatVersionKey(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getRoot(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getTimeConverter(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getVersion(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_setContext(t_AbstractMessageWriter *self, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_writeFooter(t_AbstractMessageWriter *self, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_writeHeader(t_AbstractMessageWriter *self, PyObject *args);
            static PyObject *t_AbstractMessageWriter_writeSegment(t_AbstractMessageWriter *self, PyObject *args);
            static PyObject *t_AbstractMessageWriter_get__context(t_AbstractMessageWriter *self, void *data);
            static int t_AbstractMessageWriter_set__context(t_AbstractMessageWriter *self, PyObject *arg, void *data);
            static PyObject *t_AbstractMessageWriter_get__defaultVersion(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__formatVersionKey(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__root(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__timeConverter(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__version(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__parameters_(t_AbstractMessageWriter *self, void *data);
            static PyGetSetDef t_AbstractMessageWriter__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractMessageWriter, context),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, defaultVersion),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, root),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, timeConverter),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, version),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractMessageWriter__methods_[] = {
              DECLARE_METHOD(t_AbstractMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getContext, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getDefaultVersion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getTimeConverter, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, setContext, METH_O),
              DECLARE_METHOD(t_AbstractMessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_AbstractMessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, writeSegment, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractMessageWriter)[] = {
              { Py_tp_methods, t_AbstractMessageWriter__methods_ },
              { Py_tp_init, (void *) t_AbstractMessageWriter_init_ },
              { Py_tp_getset, t_AbstractMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractMessageWriter, t_AbstractMessageWriter, AbstractMessageWriter);
            PyObject *t_AbstractMessageWriter::wrap_Object(const AbstractMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageWriter *self = (t_AbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_AbstractMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageWriter *self = (t_AbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_AbstractMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractMessageWriter), &PY_TYPE_DEF(AbstractMessageWriter), module, "AbstractMessageWriter", 0);
            }

            void t_AbstractMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "class_", make_descriptor(AbstractMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "wrapfn_", make_descriptor(t_AbstractMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(AbstractMessageWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "DEFAULT_ORIGINATOR", make_descriptor(j2p(*AbstractMessageWriter::DEFAULT_ORIGINATOR)));
            }

            static PyObject *t_AbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractMessageWriter::initializeClass, 1)))
                return NULL;
              return t_AbstractMessageWriter::wrap_Object(AbstractMessageWriter(((t_AbstractMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_AbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractMessageWriter_of_(t_AbstractMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_AbstractMessageWriter_init_(t_AbstractMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              AbstractMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AbstractMessageWriter(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractMessageWriter_getContext(t_AbstractMessageWriter *self)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding result((jobject) NULL);
              OBJ_CALL(result = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageWriter_getDefaultVersion(t_AbstractMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractMessageWriter_getFormatVersionKey(t_AbstractMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_AbstractMessageWriter_getRoot(t_AbstractMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_AbstractMessageWriter_getTimeConverter(t_AbstractMessageWriter *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageWriter_getVersion(t_AbstractMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractMessageWriter_setContext(t_AbstractMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setContext(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setContext", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageWriter_writeFooter(t_AbstractMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
              {
                OBJ_CALL(self->object.writeFooter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeFooter", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageWriter_writeHeader(t_AbstractMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Header a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Header::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_AbstractMessageWriter_writeSegment(t_AbstractMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Segment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }
            static PyObject *t_AbstractMessageWriter_get__parameters_(t_AbstractMessageWriter *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractMessageWriter_get__context(t_AbstractMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
              OBJ_CALL(value = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(value);
            }
            static int t_AbstractMessageWriter_set__context(t_AbstractMessageWriter *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &value))
                {
                  INT_CALL(self->object.setContext(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "context", arg);
              return -1;
            }

            static PyObject *t_AbstractMessageWriter_get__defaultVersion(t_AbstractMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractMessageWriter_get__formatVersionKey(t_AbstractMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_AbstractMessageWriter_get__root(t_AbstractMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_AbstractMessageWriter_get__timeConverter(t_AbstractMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(value);
            }

            static PyObject *t_AbstractMessageWriter_get__version(t_AbstractMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getVersion());
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CharConsumer::class$ = NULL;
            jmethodID *ParseToken$CharConsumer::mids$ = NULL;
            bool ParseToken$CharConsumer::live$ = false;

            jclass ParseToken$CharConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_df95ad02f5b4acd9] = env->getMethodID(cls, "accept", "(C)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CharConsumer::accept(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_df95ad02f5b4acd9], a0);
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
            static PyObject *t_ParseToken$CharConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CharConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CharConsumer_accept(t_ParseToken$CharConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CharConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CharConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CharConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CharConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CharConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CharConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CharConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CharConsumer, t_ParseToken$CharConsumer, ParseToken$CharConsumer);

            void t_ParseToken$CharConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CharConsumer), &PY_TYPE_DEF(ParseToken$CharConsumer), module, "ParseToken$CharConsumer", 0);
            }

            void t_ParseToken$CharConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "class_", make_descriptor(ParseToken$CharConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "wrapfn_", make_descriptor(t_ParseToken$CharConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CharConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CharConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CharConsumer::wrap_Object(ParseToken$CharConsumer(((t_ParseToken$CharConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CharConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CharConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CharConsumer_accept(t_ParseToken$CharConsumer *self, PyObject *arg)
            {
              jchar a0;

              if (!parseArg(arg, "C", &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldGradient::class$ = NULL;
        jmethodID *FieldGradient::mids$ = NULL;
        bool FieldGradient::live$ = false;

        jclass FieldGradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldGradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bf4cfa4b031fbab0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_1d66803ed368a800] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_f418c9d91aa473ef] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_acos_f418c9d91aa473ef] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_acosh_f418c9d91aa473ef] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_c6645824f76877ad] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_2861a4e95a22b062] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_968a043a5a5793e4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_asin_f418c9d91aa473ef] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_asinh_f418c9d91aa473ef] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atan_f418c9d91aa473ef] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atan2_c6645824f76877ad] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atanh_f418c9d91aa473ef] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cbrt_f418c9d91aa473ef] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_ceil_f418c9d91aa473ef] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_compose_78d1442f7cefc35c] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_constant_ba1acce6a3a1f53a] = env->getStaticMethodID(cls, "constant", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_c6645824f76877ad] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_2861a4e95a22b062] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_968a043a5a5793e4] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cos_f418c9d91aa473ef] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cosh_f418c9d91aa473ef] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_c6645824f76877ad] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_2861a4e95a22b062] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_968a043a5a5793e4] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_f418c9d91aa473ef] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_expm1_f418c9d91aa473ef] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_floor_f418c9d91aa473ef] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getExponent_55546ef6a647f39b] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_bf1149dde94126bb] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldGradientField;");
            mids$[mid_getFreeParameters_55546ef6a647f39b] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getGradient_883be608cfc68c26] = env->getMethodID(cls, "getGradient", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_8224159d85a4681d] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPartialDerivative_21e6b3c521b9c768] = env->getMethodID(cls, "getPartialDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPi_f418c9d91aa473ef] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_81520b552cb3fa26] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_c6645824f76877ad] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_751aef776c99f180] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_83a8a6ed299ccdbc] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_1c24cb7016344f01] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldGradient;[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_cfe8a3fd6796f527] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_e7518e9dce173fb8] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_193c9bb68af49c7f] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_e52bc97356b1b8d2] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_5d00327ad5d3c103] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_228f1d86a7f7bee6] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_d774e09270a386a3] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log_f418c9d91aa473ef] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log10_f418c9d91aa473ef] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log1p_f418c9d91aa473ef] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_c6645824f76877ad] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_2861a4e95a22b062] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_49eeb8950462fa3f] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_968a043a5a5793e4] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_negate_f418c9d91aa473ef] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_newInstance_2861a4e95a22b062] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_newInstance_968a043a5a5793e4] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_c6645824f76877ad] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_2861a4e95a22b062] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_49eeb8950462fa3f] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_cf3b31980d7d59de] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_reciprocal_f418c9d91aa473ef] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_c6645824f76877ad] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_2861a4e95a22b062] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_968a043a5a5793e4] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_rint_f418c9d91aa473ef] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_rootN_49eeb8950462fa3f] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_scalb_49eeb8950462fa3f] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sign_f418c9d91aa473ef] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sin_f418c9d91aa473ef] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_f418c9d91aa473ef] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_f418c9d91aa473ef] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_c6645824f76877ad] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_2861a4e95a22b062] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_968a043a5a5793e4] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_tan_f418c9d91aa473ef] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_tanh_f418c9d91aa473ef] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_taylor_447413902a94c4ea] = env->getMethodID(cls, "taylor", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_ba5ea64a789ad864] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_f418c9d91aa473ef] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_toDerivativeStructure_4b6e77c66fd622c3] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_f418c9d91aa473ef] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_ulp_f418c9d91aa473ef] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_variable_559a0a7ec79db27e] = env->getStaticMethodID(cls, "variable", "(IILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldGradient::FieldGradient(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bf4cfa4b031fbab0, a0.this$)) {}

        FieldGradient::FieldGradient(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d66803ed368a800, a0.this$, a1.this$)) {}

        FieldGradient FieldGradient::abs() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_abs_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::acos() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_acos_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::acosh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_acosh_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::add(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_c6645824f76877ad], a0.this$));
        }

        FieldGradient FieldGradient::add(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_2861a4e95a22b062], a0));
        }

        FieldGradient FieldGradient::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_968a043a5a5793e4], a0.this$));
        }

        FieldGradient FieldGradient::asin() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_asin_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::asinh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_asinh_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::atan() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atan_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::atan2(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atan2_c6645824f76877ad], a0.this$));
        }

        FieldGradient FieldGradient::atanh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atanh_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::cbrt() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cbrt_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::ceil() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_ceil_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_compose_78d1442f7cefc35c], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::constant(jint a0, const ::org::hipparchus::CalculusFieldElement & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_constant_ba1acce6a3a1f53a], a0, a1.this$));
        }

        FieldGradient FieldGradient::copySign(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_c6645824f76877ad], a0.this$));
        }

        FieldGradient FieldGradient::copySign(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_2861a4e95a22b062], a0));
        }

        FieldGradient FieldGradient::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_968a043a5a5793e4], a0.this$));
        }

        FieldGradient FieldGradient::cos() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cos_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::cosh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cosh_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::divide(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_c6645824f76877ad], a0.this$));
        }

        FieldGradient FieldGradient::divide(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_2861a4e95a22b062], a0));
        }

        FieldGradient FieldGradient::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_968a043a5a5793e4], a0.this$));
        }

        jboolean FieldGradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        FieldGradient FieldGradient::exp() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_exp_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::expm1() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_expm1_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::floor() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_floor_f418c9d91aa473ef]));
        }

        jint FieldGradient::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_55546ef6a647f39b]);
        }

        ::org::hipparchus::analysis::differentiation::FieldGradientField FieldGradient::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradientField(env->callObjectMethod(this$, mids$[mid_getField_bf1149dde94126bb]));
        }

        jint FieldGradient::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_55546ef6a647f39b]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldGradient::getGradient() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGradient_883be608cfc68c26]));
        }

        jint FieldGradient::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_8224159d85a4681d], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getPartialDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_21e6b3c521b9c768], a0));
        }

        FieldGradient FieldGradient::getPi() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_getPi_f418c9d91aa473ef]));
        }

        jdouble FieldGradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_81520b552cb3fa26]));
        }

        ::org::hipparchus::Field FieldGradient::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_04d1f63e17d5c5d4]));
        }

        jint FieldGradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        FieldGradient FieldGradient::hypot(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_hypot_c6645824f76877ad], a0.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< jdouble > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_751aef776c99f180], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_83a8a6ed299ccdbc], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< FieldGradient > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_1c24cb7016344f01], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_cfe8a3fd6796f527], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_e7518e9dce173fb8], a0, a1.this$, a2, a3.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3, const FieldGradient & a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_193c9bb68af49c7f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3, jdouble a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_e52bc97356b1b8d2], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldGradient & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldGradient & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_5d00327ad5d3c103], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3, const FieldGradient & a4, const FieldGradient & a5, const FieldGradient & a6, const FieldGradient & a7) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_228f1d86a7f7bee6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3, jdouble a4, const FieldGradient & a5, jdouble a6, const FieldGradient & a7) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_d774e09270a386a3], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldGradient FieldGradient::log() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::log10() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log10_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::log1p() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log1p_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::multiply(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_c6645824f76877ad], a0.this$));
        }

        FieldGradient FieldGradient::multiply(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_2861a4e95a22b062], a0));
        }

        FieldGradient FieldGradient::multiply(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_49eeb8950462fa3f], a0));
        }

        FieldGradient FieldGradient::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_968a043a5a5793e4], a0.this$));
        }

        FieldGradient FieldGradient::negate() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_negate_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::newInstance(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_newInstance_2861a4e95a22b062], a0));
        }

        FieldGradient FieldGradient::newInstance(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_newInstance_968a043a5a5793e4], a0.this$));
        }

        FieldGradient FieldGradient::pow(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_c6645824f76877ad], a0.this$));
        }

        FieldGradient FieldGradient::pow(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_2861a4e95a22b062], a0));
        }

        FieldGradient FieldGradient::pow(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_49eeb8950462fa3f], a0));
        }

        FieldGradient FieldGradient::pow(jdouble a0, const FieldGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_pow_cf3b31980d7d59de], a0, a1.this$));
        }

        FieldGradient FieldGradient::reciprocal() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_reciprocal_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::remainder(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_c6645824f76877ad], a0.this$));
        }

        FieldGradient FieldGradient::remainder(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_2861a4e95a22b062], a0));
        }

        FieldGradient FieldGradient::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_968a043a5a5793e4], a0.this$));
        }

        FieldGradient FieldGradient::rint() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_rint_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::rootN(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_rootN_49eeb8950462fa3f], a0));
        }

        FieldGradient FieldGradient::scalb(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_scalb_49eeb8950462fa3f], a0));
        }

        FieldGradient FieldGradient::sign() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sign_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::sin() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sin_f418c9d91aa473ef]));
        }

        ::org::hipparchus::util::FieldSinCos FieldGradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
        }

        FieldGradient FieldGradient::sinh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sinh_f418c9d91aa473ef]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldGradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
        }

        FieldGradient FieldGradient::sqrt() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sqrt_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::subtract(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_c6645824f76877ad], a0.this$));
        }

        FieldGradient FieldGradient::subtract(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_2861a4e95a22b062], a0));
        }

        FieldGradient FieldGradient::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_968a043a5a5793e4], a0.this$));
        }

        FieldGradient FieldGradient::tan() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_tan_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::tanh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_tanh_f418c9d91aa473ef]));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::taylor(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_447413902a94c4ea], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_ba5ea64a789ad864], a0.this$));
        }

        FieldGradient FieldGradient::toDegrees() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_toDegrees_f418c9d91aa473ef]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldGradient::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_4b6e77c66fd622c3]));
        }

        FieldGradient FieldGradient::toRadians() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_toRadians_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::ulp() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_ulp_f418c9d91aa473ef]));
        }

        FieldGradient FieldGradient::variable(jint a0, jint a1, const ::org::hipparchus::CalculusFieldElement & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_variable_559a0a7ec79db27e], a0, a1, a2.this$));
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
        static PyObject *t_FieldGradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradient_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradient_of_(t_FieldGradient *self, PyObject *args);
        static int t_FieldGradient_init_(t_FieldGradient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldGradient_abs(t_FieldGradient *self);
        static PyObject *t_FieldGradient_acos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_acosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_add(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_asin(t_FieldGradient *self);
        static PyObject *t_FieldGradient_asinh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_atan(t_FieldGradient *self);
        static PyObject *t_FieldGradient_atan2(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_atanh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_cbrt(t_FieldGradient *self);
        static PyObject *t_FieldGradient_ceil(t_FieldGradient *self);
        static PyObject *t_FieldGradient_compose(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_constant(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_copySign(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_cos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_cosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_divide(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_equals(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_exp(t_FieldGradient *self);
        static PyObject *t_FieldGradient_expm1(t_FieldGradient *self);
        static PyObject *t_FieldGradient_floor(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getExponent(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getField(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getFreeParameters(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getGradient(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getOrder(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getPartialDerivative(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_getPi(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getReal(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getValue(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getValueField(t_FieldGradient *self);
        static PyObject *t_FieldGradient_hashCode(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_hypot(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_linearCombination(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_log(t_FieldGradient *self);
        static PyObject *t_FieldGradient_log10(t_FieldGradient *self);
        static PyObject *t_FieldGradient_log1p(t_FieldGradient *self);
        static PyObject *t_FieldGradient_multiply(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_negate(t_FieldGradient *self);
        static PyObject *t_FieldGradient_newInstance(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_pow(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_reciprocal(t_FieldGradient *self);
        static PyObject *t_FieldGradient_remainder(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_rint(t_FieldGradient *self);
        static PyObject *t_FieldGradient_rootN(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_scalb(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_sign(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sin(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinCos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinhCosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sqrt(t_FieldGradient *self);
        static PyObject *t_FieldGradient_subtract(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_tan(t_FieldGradient *self);
        static PyObject *t_FieldGradient_tanh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_taylor(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_toDegrees(t_FieldGradient *self);
        static PyObject *t_FieldGradient_toDerivativeStructure(t_FieldGradient *self);
        static PyObject *t_FieldGradient_toRadians(t_FieldGradient *self);
        static PyObject *t_FieldGradient_ulp(t_FieldGradient *self);
        static PyObject *t_FieldGradient_variable(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_get__exponent(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__field(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__freeParameters(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__gradient(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__order(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__pi(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__real(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__value(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__valueField(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__parameters_(t_FieldGradient *self, void *data);
        static PyGetSetDef t_FieldGradient__fields_[] = {
          DECLARE_GET_FIELD(t_FieldGradient, exponent),
          DECLARE_GET_FIELD(t_FieldGradient, field),
          DECLARE_GET_FIELD(t_FieldGradient, freeParameters),
          DECLARE_GET_FIELD(t_FieldGradient, gradient),
          DECLARE_GET_FIELD(t_FieldGradient, order),
          DECLARE_GET_FIELD(t_FieldGradient, pi),
          DECLARE_GET_FIELD(t_FieldGradient, real),
          DECLARE_GET_FIELD(t_FieldGradient, value),
          DECLARE_GET_FIELD(t_FieldGradient, valueField),
          DECLARE_GET_FIELD(t_FieldGradient, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldGradient__methods_[] = {
          DECLARE_METHOD(t_FieldGradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, atan2, METH_O),
          DECLARE_METHOD(t_FieldGradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, constant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getGradient, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getPartialDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, hypot, METH_O),
          DECLARE_METHOD(t_FieldGradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, log, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, rootN, METH_O),
          DECLARE_METHOD(t_FieldGradient, scalb, METH_O),
          DECLARE_METHOD(t_FieldGradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, toDerivativeStructure, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, ulp, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, variable, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldGradient)[] = {
          { Py_tp_methods, t_FieldGradient__methods_ },
          { Py_tp_init, (void *) t_FieldGradient_init_ },
          { Py_tp_getset, t_FieldGradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldGradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldGradient, t_FieldGradient, FieldGradient);
        PyObject *t_FieldGradient::wrap_Object(const FieldGradient& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradient::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradient *self = (t_FieldGradient *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldGradient::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradient::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradient *self = (t_FieldGradient *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldGradient::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldGradient), &PY_TYPE_DEF(FieldGradient), module, "FieldGradient", 0);
        }

        void t_FieldGradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "class_", make_descriptor(FieldGradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "wrapfn_", make_descriptor(t_FieldGradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldGradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldGradient::initializeClass, 1)))
            return NULL;
          return t_FieldGradient::wrap_Object(FieldGradient(((t_FieldGradient *) arg)->object.this$));
        }
        static PyObject *t_FieldGradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldGradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldGradient_of_(t_FieldGradient *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldGradient_init_(t_FieldGradient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldGradient(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient object((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldGradient(a0, a1));
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

        static PyObject *t_FieldGradient_abs(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_acos(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_acosh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_add(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_asin(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_asinh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_atan(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_atan2(t_FieldGradient *self, PyObject *arg)
        {
          FieldGradient a0((jobject) NULL);
          PyTypeObject **p0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_atanh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_cbrt(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_ceil(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_compose(t_FieldGradient *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_constant(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::constant(a0, a1));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "constant", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_copySign(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_cos(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_cosh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_divide(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_equals(t_FieldGradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldGradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldGradient_exp(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_expm1(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_floor(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getExponent(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getField(t_FieldGradient *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradientField result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradientField::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getFreeParameters(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getGradient(t_FieldGradient *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradient());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldGradient_getOrder(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getPartialDerivative(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_getPi(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getReal(t_FieldGradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldGradient_getValue(t_FieldGradient *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_getValueField(t_FieldGradient *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_hashCode(t_FieldGradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldGradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldGradient_hypot(t_FieldGradient *self, PyObject *arg)
        {
          FieldGradient a0((jobject) NULL);
          PyTypeObject **p0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_linearCombination(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldGradient > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, t_FieldGradient::parameters_, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_, &a4, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient a6((jobject) NULL);
              PyTypeObject **p6;
              FieldGradient a7((jobject) NULL);
              PyTypeObject **p7;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, t_FieldGradient::parameters_, &a5, &p5, t_FieldGradient::parameters_, &a6, &p6, t_FieldGradient::parameters_, &a7, &p7, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldGradient a7((jobject) NULL);
              PyTypeObject **p7;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_, &a4, &a5, &p5, t_FieldGradient::parameters_, &a6, &a7, &p7, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_log(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_log10(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_log1p(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_multiply(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_negate(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_newInstance(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.newInstance(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.newInstance(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_pow(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldGradient a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::pow(a0, a1));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_reciprocal(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_remainder(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_rint(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_rootN(t_FieldGradient *self, PyObject *arg)
        {
          jint a0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_scalb(t_FieldGradient *self, PyObject *arg)
        {
          jint a0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_sign(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sin(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sinCos(t_FieldGradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_sinh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sinhCosh(t_FieldGradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_sqrt(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_subtract(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_tan(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_tanh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_taylor(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_toDegrees(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_toDerivativeStructure(t_FieldGradient *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_toRadians(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_ulp(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_variable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "IIK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::variable(a0, a1, a2));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "variable", args);
          return NULL;
        }
        static PyObject *t_FieldGradient_get__parameters_(t_FieldGradient *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldGradient_get__exponent(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__field(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradientField value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradientField::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__freeParameters(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__gradient(t_FieldGradient *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradient());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldGradient_get__order(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__pi(t_FieldGradient *self, void *data)
        {
          FieldGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldGradient::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__real(t_FieldGradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldGradient_get__value(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__valueField(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldSimpsonIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldSimpsonIntegrator::class$ = NULL;
        jmethodID *FieldSimpsonIntegrator::mids$ = NULL;
        bool FieldSimpsonIntegrator::live$ = false;
        jint FieldSimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldSimpsonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldSimpsonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_b6c946d1cbf160f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_287374284b786369] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_81520b552cb3fa26] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SIMPSON_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "SIMPSON_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b6c946d1cbf160f0, a0.this$, a1, a2)) {}

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_287374284b786369, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldSimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldSimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldSimpsonIntegrator_of_(t_FieldSimpsonIntegrator *self, PyObject *args);
        static int t_FieldSimpsonIntegrator_init_(t_FieldSimpsonIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldSimpsonIntegrator_get__parameters_(t_FieldSimpsonIntegrator *self, void *data);
        static PyGetSetDef t_FieldSimpsonIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldSimpsonIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldSimpsonIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldSimpsonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldSimpsonIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldSimpsonIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldSimpsonIntegrator)[] = {
          { Py_tp_methods, t_FieldSimpsonIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldSimpsonIntegrator_init_ },
          { Py_tp_getset, t_FieldSimpsonIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldSimpsonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldSimpsonIntegrator, t_FieldSimpsonIntegrator, FieldSimpsonIntegrator);
        PyObject *t_FieldSimpsonIntegrator::wrap_Object(const FieldSimpsonIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldSimpsonIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldSimpsonIntegrator *self = (t_FieldSimpsonIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldSimpsonIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldSimpsonIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldSimpsonIntegrator *self = (t_FieldSimpsonIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldSimpsonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldSimpsonIntegrator), &PY_TYPE_DEF(FieldSimpsonIntegrator), module, "FieldSimpsonIntegrator", 0);
        }

        void t_FieldSimpsonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "class_", make_descriptor(FieldSimpsonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "wrapfn_", make_descriptor(t_FieldSimpsonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldSimpsonIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "SIMPSON_MAX_ITERATIONS_COUNT", make_descriptor(FieldSimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldSimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldSimpsonIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldSimpsonIntegrator::wrap_Object(FieldSimpsonIntegrator(((t_FieldSimpsonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldSimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldSimpsonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldSimpsonIntegrator_of_(t_FieldSimpsonIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldSimpsonIntegrator_init_(t_FieldSimpsonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0));
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
              jint a2;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldSimpsonIntegrator_get__parameters_(t_FieldSimpsonIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
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
            mids$[mid_createLinearGrid_651fe70a6d1d171e] = env->getStaticMethodID(cls, "createLinearGrid", "(DDI)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > GridCreation::createLinearGrid(jdouble a0, jdouble a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_createLinearGrid_651fe70a6d1d171e], a0, a1, a2));
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
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/FieldMatrix.h"
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
            mids$[mid_computeProjectionMatrix_f77d745f2128c391] = env->getMethodID(cls, "computeProjectionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeProjectionMatrix_6a4a6a8dba9fd9fb] = env->getMethodID(cls, "computeProjectionMatrix", "(Lorg/hipparchus/Field;)Lorg/hipparchus/linear/FieldMatrix;");
            mids$[mid_getAxisNormalToCollisionPlane_8b724f8b4fdad1a2] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_98221d2e63674019] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFieldOther_dac7b66b757e9da0] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getOther_180fb117720acb76] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_isQuasiInertial_9ab94ac1dc23b105] = env->getMethodID(cls, "isQuasiInertial", "()Z");
            mids$[mid_projectOntoCollisionPlane_9f54cac39580172c] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
            mids$[mid_projectOntoCollisionPlane_9d707d8812de06bd] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
            mids$[mid_projectOntoCollisionPlane_e74c5d5fdc2ea025] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
            mids$[mid_projectOntoCollisionPlane_be124f4006dc9f69] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_rotationFromInertial_7e9d52385b0ba3f0] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_9c03210e4a66b8b3] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_bf95090cc5e2a8d4] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_80cbd49af33092b8] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_rotationFromInertial_8f928c19e9edde2b] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_rotationFromInertial_8851faa33644affd] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix EncounterLOF::computeProjectionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectionMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::FieldMatrix EncounterLOF::computeProjectionMatrix(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectionMatrix_6a4a6a8dba9fd9fb], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EncounterLOF::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_8b724f8b4fdad1a2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D EncounterLOF::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_98221d2e63674019], a0.this$));
        }

        ::org::orekit::utils::FieldPVCoordinates EncounterLOF::getFieldOther(const ::org::hipparchus::Field & a0) const
        {
          return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getFieldOther_dac7b66b757e9da0], a0.this$));
        }

        ::org::orekit::utils::PVCoordinates EncounterLOF::getOther() const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getOther_180fb117720acb76]));
        }

        jboolean EncounterLOF::isQuasiInertial() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_9ab94ac1dc23b105]);
        }

        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_9f54cac39580172c], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::twod::Vector2D EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_9d707d8812de06bd], a0.this$));
        }

        ::org::hipparchus::linear::FieldMatrix EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::linear::FieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_e74c5d5fdc2ea025], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_be124f4006dc9f69], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_7e9d52385b0ba3f0], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_9c03210e4a66b8b3], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_bf95090cc5e2a8d4], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_80cbd49af33092b8], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_8f928c19e9edde2b], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_8851faa33644affd], a0.this$, a1.this$, a2.this$));
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
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorPreservingVisitor::class$ = NULL;
      jmethodID *RealVectorPreservingVisitor::mids$ = NULL;
      bool RealVectorPreservingVisitor::live$ = false;

      jclass RealVectorPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_b74f83833fdad017] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_a0df4b8e4ed3805e] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_d5322b8b512aeb26] = env->getMethodID(cls, "visit", "(ID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealVectorPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_b74f83833fdad017]);
      }

      void RealVectorPreservingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_a0df4b8e4ed3805e], a0, a1, a2);
      }

      void RealVectorPreservingVisitor::visit(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_d5322b8b512aeb26], a0, a1);
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
      static PyObject *t_RealVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorPreservingVisitor_end(t_RealVectorPreservingVisitor *self);
      static PyObject *t_RealVectorPreservingVisitor_start(t_RealVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_RealVectorPreservingVisitor_visit(t_RealVectorPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_RealVectorPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealVectorPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorPreservingVisitor)[] = {
        { Py_tp_methods, t_RealVectorPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorPreservingVisitor, t_RealVectorPreservingVisitor, RealVectorPreservingVisitor);

      void t_RealVectorPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorPreservingVisitor), &PY_TYPE_DEF(RealVectorPreservingVisitor), module, "RealVectorPreservingVisitor", 0);
      }

      void t_RealVectorPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "class_", make_descriptor(RealVectorPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "wrapfn_", make_descriptor(t_RealVectorPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealVectorPreservingVisitor::wrap_Object(RealVectorPreservingVisitor(((t_RealVectorPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealVectorPreservingVisitor_end(t_RealVectorPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVectorPreservingVisitor_start(t_RealVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_RealVectorPreservingVisitor_visit(t_RealVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.visit(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/analysis/differentiation/DSFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DerivativeStructure::class$ = NULL;
        jmethodID *DerivativeStructure::mids$ = NULL;
        bool DerivativeStructure::live$ = false;

        jclass DerivativeStructure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DerivativeStructure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_57983c4d4b4a2f7f] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_acos_57983c4d4b4a2f7f] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_acosh_57983c4d4b4a2f7f] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_add_d767b94ffc51b3ba] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_add_d33302169f933b5a] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_asin_57983c4d4b4a2f7f] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_asinh_57983c4d4b4a2f7f] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan_57983c4d4b4a2f7f] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan2_d767b94ffc51b3ba] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan2_9a7c28a832777f54] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atanh_57983c4d4b4a2f7f] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cbrt_57983c4d4b4a2f7f] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_ceil_57983c4d4b4a2f7f] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_compose_86f1b5af7e082a1a] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_copySign_d767b94ffc51b3ba] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_copySign_d33302169f933b5a] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cos_57983c4d4b4a2f7f] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cosh_57983c4d4b4a2f7f] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_differentiate_e6bd03b9f9ff3a4e] = env->getMethodID(cls, "differentiate", "(II)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_divide_d767b94ffc51b3ba] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_divide_d33302169f933b5a] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_57983c4d4b4a2f7f] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_expm1_57983c4d4b4a2f7f] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_floor_57983c4d4b4a2f7f] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getAllDerivatives_25e1757a36c4dde2] = env->getMethodID(cls, "getAllDerivatives", "()[D");
            mids$[mid_getExponent_55546ef6a647f39b] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getFactory_d9c5beecbcd9df82] = env->getMethodID(cls, "getFactory", "()Lorg/hipparchus/analysis/differentiation/DSFactory;");
            mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getFreeParameters_55546ef6a647f39b] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_bff393394ab19dc1] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getPi_57983c4d4b4a2f7f] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_d767b94ffc51b3ba] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_hypot_9a7c28a832777f54] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_integrate_e6bd03b9f9ff3a4e] = env->getMethodID(cls, "integrate", "(II)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_81ad9b647c3c3ec4] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_7986851850e4ac5c] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_562245d44ef8769c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_b14deccf979d9f01] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_e817b9efb5fd6633] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_31b2412b461aaf8a] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_56d37fe4945be603] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_1e657464bae8fb96] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log_57983c4d4b4a2f7f] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log10_57983c4d4b4a2f7f] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log1p_57983c4d4b4a2f7f] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_d767b94ffc51b3ba] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_d33302169f933b5a] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_7d1614ef7f412b0c] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_negate_57983c4d4b4a2f7f] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_newInstance_d33302169f933b5a] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_d767b94ffc51b3ba] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_d33302169f933b5a] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_7d1614ef7f412b0c] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_39751935285e5df3] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rebase_a789982882efd99b] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_reciprocal_57983c4d4b4a2f7f] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_remainder_d767b94ffc51b3ba] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_remainder_d33302169f933b5a] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rint_57983c4d4b4a2f7f] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rootN_7d1614ef7f412b0c] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_scalb_7d1614ef7f412b0c] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sign_57983c4d4b4a2f7f] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sin_57983c4d4b4a2f7f] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_57983c4d4b4a2f7f] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_57983c4d4b4a2f7f] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_subtract_d767b94ffc51b3ba] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_subtract_d33302169f933b5a] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_tan_57983c4d4b4a2f7f] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_tanh_57983c4d4b4a2f7f] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_taylor_b060e4326765ccf1] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_57983c4d4b4a2f7f] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_57983c4d4b4a2f7f] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_ulp_57983c4d4b4a2f7f] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DerivativeStructure DerivativeStructure::abs() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_abs_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::acos() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_acos_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::acosh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_acosh_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::add(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_d767b94ffc51b3ba], a0.this$));
        }

        DerivativeStructure DerivativeStructure::add(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_d33302169f933b5a], a0));
        }

        DerivativeStructure DerivativeStructure::asin() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_asin_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::asinh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_asinh_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::atan() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::atan2(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan2_d767b94ffc51b3ba], a0.this$));
        }

        DerivativeStructure DerivativeStructure::atan2(const DerivativeStructure & a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_atan2_9a7c28a832777f54], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::atanh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atanh_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::cbrt() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cbrt_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::ceil() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_ceil_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::compose(const JArray< jdouble > & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_86f1b5af7e082a1a], a0.this$));
        }

        DerivativeStructure DerivativeStructure::copySign(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_d767b94ffc51b3ba], a0.this$));
        }

        DerivativeStructure DerivativeStructure::copySign(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_d33302169f933b5a], a0));
        }

        DerivativeStructure DerivativeStructure::cos() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cos_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::cosh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cosh_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::differentiate(jint a0, jint a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_differentiate_e6bd03b9f9ff3a4e], a0, a1));
        }

        DerivativeStructure DerivativeStructure::divide(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_d767b94ffc51b3ba], a0.this$));
        }

        DerivativeStructure DerivativeStructure::divide(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_d33302169f933b5a], a0));
        }

        jboolean DerivativeStructure::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        DerivativeStructure DerivativeStructure::exp() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_exp_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::expm1() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_expm1_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::floor() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_floor_57983c4d4b4a2f7f]));
        }

        JArray< jdouble > DerivativeStructure::getAllDerivatives() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAllDerivatives_25e1757a36c4dde2]));
        }

        jint DerivativeStructure::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_55546ef6a647f39b]);
        }

        ::org::hipparchus::analysis::differentiation::DSFactory DerivativeStructure::getFactory() const
        {
          return ::org::hipparchus::analysis::differentiation::DSFactory(env->callObjectMethod(this$, mids$[mid_getFactory_d9c5beecbcd9df82]));
        }

        ::org::hipparchus::Field DerivativeStructure::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
        }

        jint DerivativeStructure::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_55546ef6a647f39b]);
        }

        jint DerivativeStructure::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }

        jdouble DerivativeStructure::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_bff393394ab19dc1], a0.this$);
        }

        DerivativeStructure DerivativeStructure::getPi() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_57983c4d4b4a2f7f]));
        }

        jdouble DerivativeStructure::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
        }

        jdouble DerivativeStructure::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
        }

        jint DerivativeStructure::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        DerivativeStructure DerivativeStructure::hypot(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_hypot_d767b94ffc51b3ba], a0.this$));
        }

        DerivativeStructure DerivativeStructure::hypot(const DerivativeStructure & a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_hypot_9a7c28a832777f54], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::integrate(jint a0, jint a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_integrate_e6bd03b9f9ff3a4e], a0, a1));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const JArray< jdouble > & a0, const JArray< DerivativeStructure > & a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_81ad9b647c3c3ec4], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const JArray< DerivativeStructure > & a0, const JArray< DerivativeStructure > & a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_7986851850e4ac5c], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_562245d44ef8769c], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_b14deccf979d9f01], a0, a1.this$, a2, a3.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3, const DerivativeStructure & a4, const DerivativeStructure & a5) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_e817b9efb5fd6633], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3, jdouble a4, const DerivativeStructure & a5) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_31b2412b461aaf8a], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3, const DerivativeStructure & a4, const DerivativeStructure & a5, const DerivativeStructure & a6, const DerivativeStructure & a7) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_56d37fe4945be603], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3, jdouble a4, const DerivativeStructure & a5, jdouble a6, const DerivativeStructure & a7) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_1e657464bae8fb96], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        DerivativeStructure DerivativeStructure::log() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::log10() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log10_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::log1p() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log1p_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::multiply(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_d767b94ffc51b3ba], a0.this$));
        }

        DerivativeStructure DerivativeStructure::multiply(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_d33302169f933b5a], a0));
        }

        DerivativeStructure DerivativeStructure::multiply(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_7d1614ef7f412b0c], a0));
        }

        DerivativeStructure DerivativeStructure::negate() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_negate_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::newInstance(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_newInstance_d33302169f933b5a], a0));
        }

        DerivativeStructure DerivativeStructure::pow(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_d767b94ffc51b3ba], a0.this$));
        }

        DerivativeStructure DerivativeStructure::pow(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_d33302169f933b5a], a0));
        }

        DerivativeStructure DerivativeStructure::pow(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_7d1614ef7f412b0c], a0));
        }

        DerivativeStructure DerivativeStructure::pow(jdouble a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_pow_39751935285e5df3], a0, a1.this$));
        }

        DerivativeStructure DerivativeStructure::rebase(const JArray< DerivativeStructure > & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rebase_a789982882efd99b], a0.this$));
        }

        DerivativeStructure DerivativeStructure::reciprocal() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_reciprocal_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::remainder(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_d767b94ffc51b3ba], a0.this$));
        }

        DerivativeStructure DerivativeStructure::remainder(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_d33302169f933b5a], a0));
        }

        DerivativeStructure DerivativeStructure::rint() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rint_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::rootN(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rootN_7d1614ef7f412b0c], a0));
        }

        DerivativeStructure DerivativeStructure::scalb(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_scalb_7d1614ef7f412b0c], a0));
        }

        DerivativeStructure DerivativeStructure::sign() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sign_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::sin() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sin_57983c4d4b4a2f7f]));
        }

        ::org::hipparchus::util::FieldSinCos DerivativeStructure::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
        }

        DerivativeStructure DerivativeStructure::sinh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sinh_57983c4d4b4a2f7f]));
        }

        ::org::hipparchus::util::FieldSinhCosh DerivativeStructure::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
        }

        DerivativeStructure DerivativeStructure::sqrt() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sqrt_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::subtract(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_d767b94ffc51b3ba], a0.this$));
        }

        DerivativeStructure DerivativeStructure::subtract(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_d33302169f933b5a], a0));
        }

        DerivativeStructure DerivativeStructure::tan() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_tan_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::tanh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_tanh_57983c4d4b4a2f7f]));
        }

        jdouble DerivativeStructure::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_b060e4326765ccf1], a0.this$);
        }

        DerivativeStructure DerivativeStructure::toDegrees() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDegrees_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::toRadians() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toRadians_57983c4d4b4a2f7f]));
        }

        DerivativeStructure DerivativeStructure::ulp() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_ulp_57983c4d4b4a2f7f]));
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
        static PyObject *t_DerivativeStructure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeStructure_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeStructure_abs(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_acos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_acosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_add(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_asin(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_asinh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_atan(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_atan2(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_atanh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_cbrt(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_ceil(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_compose(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_copySign(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_cos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_cosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_differentiate(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_divide(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_equals(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_exp(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_expm1(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_floor(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getAllDerivatives(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getExponent(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getFactory(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getField(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getFreeParameters(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getOrder(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getPartialDerivative(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_getPi(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getReal(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getValue(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_hashCode(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_hypot(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_integrate(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_linearCombination(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_log(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_log10(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_log1p(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_multiply(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_negate(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_newInstance(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_pow(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_rebase(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_reciprocal(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_remainder(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_rint(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_rootN(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_scalb(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_sign(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sin(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinCos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinhCosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sqrt(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_subtract(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_tan(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_tanh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_taylor(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_toDegrees(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_toRadians(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_ulp(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_get__allDerivatives(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__exponent(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__factory(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__field(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__freeParameters(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__order(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__pi(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__real(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__value(t_DerivativeStructure *self, void *data);
        static PyGetSetDef t_DerivativeStructure__fields_[] = {
          DECLARE_GET_FIELD(t_DerivativeStructure, allDerivatives),
          DECLARE_GET_FIELD(t_DerivativeStructure, exponent),
          DECLARE_GET_FIELD(t_DerivativeStructure, factory),
          DECLARE_GET_FIELD(t_DerivativeStructure, field),
          DECLARE_GET_FIELD(t_DerivativeStructure, freeParameters),
          DECLARE_GET_FIELD(t_DerivativeStructure, order),
          DECLARE_GET_FIELD(t_DerivativeStructure, pi),
          DECLARE_GET_FIELD(t_DerivativeStructure, real),
          DECLARE_GET_FIELD(t_DerivativeStructure, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DerivativeStructure__methods_[] = {
          DECLARE_METHOD(t_DerivativeStructure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, abs, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, acos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, acosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, add, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, asin, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, asinh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, atan, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, atan2, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, atanh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, ceil, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, compose, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, copySign, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, cos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, cosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, divide, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, equals, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, exp, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, expm1, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, floor, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getAllDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getFactory, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getField, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, getPi, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getReal, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getValue, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, hypot, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, integrate, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, log, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, log10, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, log1p, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, multiply, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, negate, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, newInstance, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, pow, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, rebase, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, remainder, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, rint, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, rootN, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, scalb, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, sign, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sin, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, subtract, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, tan, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, tanh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, taylor, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DerivativeStructure)[] = {
          { Py_tp_methods, t_DerivativeStructure__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DerivativeStructure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DerivativeStructure)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DerivativeStructure, t_DerivativeStructure, DerivativeStructure);

        void t_DerivativeStructure::install(PyObject *module)
        {
          installType(&PY_TYPE(DerivativeStructure), &PY_TYPE_DEF(DerivativeStructure), module, "DerivativeStructure", 0);
        }

        void t_DerivativeStructure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "class_", make_descriptor(DerivativeStructure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "wrapfn_", make_descriptor(t_DerivativeStructure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DerivativeStructure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DerivativeStructure::initializeClass, 1)))
            return NULL;
          return t_DerivativeStructure::wrap_Object(DerivativeStructure(((t_DerivativeStructure *) arg)->object.this$));
        }
        static PyObject *t_DerivativeStructure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DerivativeStructure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DerivativeStructure_abs(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_acos(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_acosh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_add(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_asin(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_asinh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_atan(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_atan2(t_DerivativeStructure *self, PyObject *arg)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_atan2_(PyTypeObject *type, PyObject *args)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "kk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::atan2(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_atanh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_cbrt(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_ceil(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_compose(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_copySign(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_cos(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_cosh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_differentiate(t_DerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.differentiate(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_divide(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_equals(t_DerivativeStructure *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(DerivativeStructure), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_DerivativeStructure_exp(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_expm1(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_floor(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getAllDerivatives(t_DerivativeStructure *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllDerivatives());
          return result.wrap();
        }

        static PyObject *t_DerivativeStructure_getExponent(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getFactory(t_DerivativeStructure *self)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory result((jobject) NULL);
          OBJ_CALL(result = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getField(t_DerivativeStructure *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_getFreeParameters(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getOrder(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getPartialDerivative(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_getPi(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getReal(t_DerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DerivativeStructure_getValue(t_DerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DerivativeStructure_hashCode(t_DerivativeStructure *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DerivativeStructure), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_DerivativeStructure_hypot(t_DerivativeStructure *self, PyObject *arg)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_hypot_(PyTypeObject *type, PyObject *args)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "kk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::hypot(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_integrate(t_DerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_linearCombination(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< DerivativeStructure > a1((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D[k", DerivativeStructure::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              JArray< DerivativeStructure > a0((jobject) NULL);
              JArray< DerivativeStructure > a1((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[k[k", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure a4((jobject) NULL);
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              jdouble a4;
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure a4((jobject) NULL);
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure a6((jobject) NULL);
              DerivativeStructure a7((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              jdouble a4;
              DerivativeStructure a5((jobject) NULL);
              jdouble a6;
              DerivativeStructure a7((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_log(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_log10(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_log1p(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_multiply(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jint a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_negate(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_newInstance(t_DerivativeStructure *self, PyObject *arg)
        {
          jdouble a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_pow(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jint a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "Dk", DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::pow(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_rebase(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< DerivativeStructure > a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.rebase(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_reciprocal(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_remainder(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_rint(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_rootN(t_DerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_scalb(t_DerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_sign(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sin(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sinCos(t_DerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_sinh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sinhCosh(t_DerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_sqrt(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_subtract(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_tan(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_tanh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_taylor(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_toDegrees(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_toRadians(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_ulp(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_get__allDerivatives(t_DerivativeStructure *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllDerivatives());
          return value.wrap();
        }

        static PyObject *t_DerivativeStructure_get__exponent(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__factory(t_DerivativeStructure *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory value((jobject) NULL);
          OBJ_CALL(value = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__field(t_DerivativeStructure *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__freeParameters(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__order(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__pi(t_DerivativeStructure *self, void *data)
        {
          DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__real(t_DerivativeStructure *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DerivativeStructure_get__value(t_DerivativeStructure *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Integer.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "java/lang/Double.h"
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmMetadata::class$ = NULL;
            jmethodID *TdmMetadata::mids$ = NULL;
            bool TdmMetadata::live$ = false;

            jclass TdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addEphemerisName_5817b937d38eafc1] = env->getMethodID(cls, "addEphemerisName", "(ILjava/lang/String;)V");
                mids$[mid_addParticipant_5817b937d38eafc1] = env->getMethodID(cls, "addParticipant", "(ILjava/lang/String;)V");
                mids$[mid_addReceiveDelay_d5322b8b512aeb26] = env->getMethodID(cls, "addReceiveDelay", "(ID)V");
                mids$[mid_addTransmitDelay_d5322b8b512aeb26] = env->getMethodID(cls, "addTransmitDelay", "(ID)V");
                mids$[mid_getAngleType_9e0aee69e1fdbc88] = env->getMethodID(cls, "getAngleType", "()Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");
                mids$[mid_getCorrectionAberrationDiurnal_b74f83833fdad017] = env->getMethodID(cls, "getCorrectionAberrationDiurnal", "()D");
                mids$[mid_getCorrectionAberrationYearly_b74f83833fdad017] = env->getMethodID(cls, "getCorrectionAberrationYearly", "()D");
                mids$[mid_getCorrectionAngle1_b74f83833fdad017] = env->getMethodID(cls, "getCorrectionAngle1", "()D");
                mids$[mid_getCorrectionAngle2_b74f83833fdad017] = env->getMethodID(cls, "getCorrectionAngle2", "()D");
                mids$[mid_getCorrectionDoppler_b74f83833fdad017] = env->getMethodID(cls, "getCorrectionDoppler", "()D");
                mids$[mid_getCorrectionMagnitude_b74f83833fdad017] = env->getMethodID(cls, "getCorrectionMagnitude", "()D");
                mids$[mid_getCorrectionRange_c24296302549e234] = env->getMethodID(cls, "getCorrectionRange", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)D");
                mids$[mid_getCorrectionRcs_b74f83833fdad017] = env->getMethodID(cls, "getCorrectionRcs", "()D");
                mids$[mid_getCorrectionReceive_b74f83833fdad017] = env->getMethodID(cls, "getCorrectionReceive", "()D");
                mids$[mid_getCorrectionTransmit_b74f83833fdad017] = env->getMethodID(cls, "getCorrectionTransmit", "()D");
                mids$[mid_getCorrectionsApplied_e728a459801cd379] = env->getMethodID(cls, "getCorrectionsApplied", "()Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");
                mids$[mid_getDataQuality_ec1341baf8be0be8] = env->getMethodID(cls, "getDataQuality", "()Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");
                mids$[mid_getDataTypes_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDataTypes", "()Ljava/util/List;");
                mids$[mid_getDopplerCountBias_b74f83833fdad017] = env->getMethodID(cls, "getDopplerCountBias", "()D");
                mids$[mid_getDopplerCountScale_b74f83833fdad017] = env->getMethodID(cls, "getDopplerCountScale", "()D");
                mids$[mid_getEphemerisNames_810bed48fafb0b9a] = env->getMethodID(cls, "getEphemerisNames", "()Ljava/util/Map;");
                mids$[mid_getFreqOffset_b74f83833fdad017] = env->getMethodID(cls, "getFreqOffset", "()D");
                mids$[mid_getIntegrationInterval_b74f83833fdad017] = env->getMethodID(cls, "getIntegrationInterval", "()D");
                mids$[mid_getIntegrationRef_8756c0a701bf4809] = env->getMethodID(cls, "getIntegrationRef", "()Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");
                mids$[mid_getInterpolationDegree_55546ef6a647f39b] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                mids$[mid_getInterpolationMethod_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                mids$[mid_getMode_f5b184cec54efa86] = env->getMethodID(cls, "getMode", "()Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");
                mids$[mid_getParticipants_810bed48fafb0b9a] = env->getMethodID(cls, "getParticipants", "()Ljava/util/Map;");
                mids$[mid_getPath_4d095d7a08163110] = env->getMethodID(cls, "getPath", "()[I");
                mids$[mid_getPath1_4d095d7a08163110] = env->getMethodID(cls, "getPath1", "()[I");
                mids$[mid_getPath2_4d095d7a08163110] = env->getMethodID(cls, "getPath2", "()[I");
                mids$[mid_getRangeMode_56e6fbfab7a821ed] = env->getMethodID(cls, "getRangeMode", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");
                mids$[mid_getRangeModulus_c24296302549e234] = env->getMethodID(cls, "getRangeModulus", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter;)D");
                mids$[mid_getRangeUnits_8590817e5cfdf06b] = env->getMethodID(cls, "getRangeUnits", "()Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;");
                mids$[mid_getRawCorrectionRange_b74f83833fdad017] = env->getMethodID(cls, "getRawCorrectionRange", "()D");
                mids$[mid_getRawRangeModulus_b74f83833fdad017] = env->getMethodID(cls, "getRawRangeModulus", "()D");
                mids$[mid_getReceiveBand_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getReceiveBand", "()Ljava/lang/String;");
                mids$[mid_getReceiveDelays_810bed48fafb0b9a] = env->getMethodID(cls, "getReceiveDelays", "()Ljava/util/Map;");
                mids$[mid_getReferenceFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getStartTime_c325492395d89b24] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getStopTime_c325492395d89b24] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimetagRef_0150dfe84952dd06] = env->getMethodID(cls, "getTimetagRef", "()Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");
                mids$[mid_getTrackId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTrackId", "()Ljava/lang/String;");
                mids$[mid_getTransmitBand_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTransmitBand", "()Ljava/lang/String;");
                mids$[mid_getTransmitDelays_810bed48fafb0b9a] = env->getMethodID(cls, "getTransmitDelays", "()Ljava/util/Map;");
                mids$[mid_getTurnaroundDenominator_55546ef6a647f39b] = env->getMethodID(cls, "getTurnaroundDenominator", "()I");
                mids$[mid_getTurnaroundNumerator_55546ef6a647f39b] = env->getMethodID(cls, "getTurnaroundNumerator", "()I");
                mids$[mid_hasDopplerCountRollover_9ab94ac1dc23b105] = env->getMethodID(cls, "hasDopplerCountRollover", "()Z");
                mids$[mid_setAngleType_9bcc49b46153434b] = env->getMethodID(cls, "setAngleType", "(Lorg/orekit/files/ccsds/ndm/tdm/AngleType;)V");
                mids$[mid_setCorrectionAberrationDiurnal_8ba9fe7a847cecad] = env->getMethodID(cls, "setCorrectionAberrationDiurnal", "(D)V");
                mids$[mid_setCorrectionAberrationYearly_8ba9fe7a847cecad] = env->getMethodID(cls, "setCorrectionAberrationYearly", "(D)V");
                mids$[mid_setCorrectionAngle1_8ba9fe7a847cecad] = env->getMethodID(cls, "setCorrectionAngle1", "(D)V");
                mids$[mid_setCorrectionAngle2_8ba9fe7a847cecad] = env->getMethodID(cls, "setCorrectionAngle2", "(D)V");
                mids$[mid_setCorrectionDoppler_8ba9fe7a847cecad] = env->getMethodID(cls, "setCorrectionDoppler", "(D)V");
                mids$[mid_setCorrectionMagnitude_8ba9fe7a847cecad] = env->getMethodID(cls, "setCorrectionMagnitude", "(D)V");
                mids$[mid_setCorrectionRcs_8ba9fe7a847cecad] = env->getMethodID(cls, "setCorrectionRcs", "(D)V");
                mids$[mid_setCorrectionReceive_8ba9fe7a847cecad] = env->getMethodID(cls, "setCorrectionReceive", "(D)V");
                mids$[mid_setCorrectionTransmit_8ba9fe7a847cecad] = env->getMethodID(cls, "setCorrectionTransmit", "(D)V");
                mids$[mid_setCorrectionsApplied_490361ab6c463716] = env->getMethodID(cls, "setCorrectionsApplied", "(Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;)V");
                mids$[mid_setDataQuality_22128bca9f62416a] = env->getMethodID(cls, "setDataQuality", "(Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;)V");
                mids$[mid_setDataTypes_0e7c3032c7c93ed3] = env->getMethodID(cls, "setDataTypes", "(Ljava/util/List;)V");
                mids$[mid_setDopplerCountBias_8ba9fe7a847cecad] = env->getMethodID(cls, "setDopplerCountBias", "(D)V");
                mids$[mid_setDopplerCountRollover_fcb96c98de6fad04] = env->getMethodID(cls, "setDopplerCountRollover", "(Z)V");
                mids$[mid_setDopplerCountScale_8ba9fe7a847cecad] = env->getMethodID(cls, "setDopplerCountScale", "(D)V");
                mids$[mid_setEphemerisNames_6648520b18d8ef1d] = env->getMethodID(cls, "setEphemerisNames", "(Ljava/util/Map;)V");
                mids$[mid_setFreqOffset_8ba9fe7a847cecad] = env->getMethodID(cls, "setFreqOffset", "(D)V");
                mids$[mid_setIntegrationInterval_8ba9fe7a847cecad] = env->getMethodID(cls, "setIntegrationInterval", "(D)V");
                mids$[mid_setIntegrationRef_936ff1a2ef8eedf4] = env->getMethodID(cls, "setIntegrationRef", "(Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;)V");
                mids$[mid_setInterpolationDegree_44ed599e93e8a30c] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                mids$[mid_setInterpolationMethod_734b91ac30d5f9b4] = env->getMethodID(cls, "setInterpolationMethod", "(Ljava/lang/String;)V");
                mids$[mid_setMode_b932c0afd0b33537] = env->getMethodID(cls, "setMode", "(Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;)V");
                mids$[mid_setParticipants_6648520b18d8ef1d] = env->getMethodID(cls, "setParticipants", "(Ljava/util/Map;)V");
                mids$[mid_setPath_86a2769cb881d388] = env->getMethodID(cls, "setPath", "([I)V");
                mids$[mid_setPath1_86a2769cb881d388] = env->getMethodID(cls, "setPath1", "([I)V");
                mids$[mid_setPath2_86a2769cb881d388] = env->getMethodID(cls, "setPath2", "([I)V");
                mids$[mid_setRangeMode_1db85cccec5203b9] = env->getMethodID(cls, "setRangeMode", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;)V");
                mids$[mid_setRangeUnits_8f2df96f08228b85] = env->getMethodID(cls, "setRangeUnits", "(Lorg/orekit/files/ccsds/ndm/tdm/RangeUnits;)V");
                mids$[mid_setRawCorrectionRange_8ba9fe7a847cecad] = env->getMethodID(cls, "setRawCorrectionRange", "(D)V");
                mids$[mid_setRawRangeModulus_8ba9fe7a847cecad] = env->getMethodID(cls, "setRawRangeModulus", "(D)V");
                mids$[mid_setReceiveBand_734b91ac30d5f9b4] = env->getMethodID(cls, "setReceiveBand", "(Ljava/lang/String;)V");
                mids$[mid_setReceiveDelays_6648520b18d8ef1d] = env->getMethodID(cls, "setReceiveDelays", "(Ljava/util/Map;)V");
                mids$[mid_setReferenceFrame_4755133c5c4c59be] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setStartTime_02135a6ef25adb4b] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setStopTime_02135a6ef25adb4b] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimetagRef_ca6ff11c4c143ecb] = env->getMethodID(cls, "setTimetagRef", "(Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;)V");
                mids$[mid_setTrackId_734b91ac30d5f9b4] = env->getMethodID(cls, "setTrackId", "(Ljava/lang/String;)V");
                mids$[mid_setTransmitBand_734b91ac30d5f9b4] = env->getMethodID(cls, "setTransmitBand", "(Ljava/lang/String;)V");
                mids$[mid_setTransmitDelays_6648520b18d8ef1d] = env->getMethodID(cls, "setTransmitDelays", "(Ljava/util/Map;)V");
                mids$[mid_setTurnaroundDenominator_44ed599e93e8a30c] = env->getMethodID(cls, "setTurnaroundDenominator", "(I)V");
                mids$[mid_setTurnaroundNumerator_44ed599e93e8a30c] = env->getMethodID(cls, "setTurnaroundNumerator", "(I)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmMetadata::TdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void TdmMetadata::addEphemerisName(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addEphemerisName_5817b937d38eafc1], a0, a1.this$);
            }

            void TdmMetadata::addParticipant(jint a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addParticipant_5817b937d38eafc1], a0, a1.this$);
            }

            void TdmMetadata::addReceiveDelay(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addReceiveDelay_d5322b8b512aeb26], a0, a1);
            }

            void TdmMetadata::addTransmitDelay(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addTransmitDelay_d5322b8b512aeb26], a0, a1);
            }

            ::org::orekit::files::ccsds::ndm::tdm::AngleType TdmMetadata::getAngleType() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::AngleType(env->callObjectMethod(this$, mids$[mid_getAngleType_9e0aee69e1fdbc88]));
            }

            jdouble TdmMetadata::getCorrectionAberrationDiurnal() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAberrationDiurnal_b74f83833fdad017]);
            }

            jdouble TdmMetadata::getCorrectionAberrationYearly() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAberrationYearly_b74f83833fdad017]);
            }

            jdouble TdmMetadata::getCorrectionAngle1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAngle1_b74f83833fdad017]);
            }

            jdouble TdmMetadata::getCorrectionAngle2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionAngle2_b74f83833fdad017]);
            }

            jdouble TdmMetadata::getCorrectionDoppler() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionDoppler_b74f83833fdad017]);
            }

            jdouble TdmMetadata::getCorrectionMagnitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionMagnitude_b74f83833fdad017]);
            }

            jdouble TdmMetadata::getCorrectionRange(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionRange_c24296302549e234], a0.this$);
            }

            jdouble TdmMetadata::getCorrectionRcs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionRcs_b74f83833fdad017]);
            }

            jdouble TdmMetadata::getCorrectionReceive() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionReceive_b74f83833fdad017]);
            }

            jdouble TdmMetadata::getCorrectionTransmit() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCorrectionTransmit_b74f83833fdad017]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied TdmMetadata::getCorrectionsApplied() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied(env->callObjectMethod(this$, mids$[mid_getCorrectionsApplied_e728a459801cd379]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::DataQuality TdmMetadata::getDataQuality() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::DataQuality(env->callObjectMethod(this$, mids$[mid_getDataQuality_ec1341baf8be0be8]));
            }

            ::java::util::List TdmMetadata::getDataTypes() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataTypes_e62d3bb06d56d7e3]));
            }

            jdouble TdmMetadata::getDopplerCountBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDopplerCountBias_b74f83833fdad017]);
            }

            jdouble TdmMetadata::getDopplerCountScale() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDopplerCountScale_b74f83833fdad017]);
            }

            ::java::util::Map TdmMetadata::getEphemerisNames() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getEphemerisNames_810bed48fafb0b9a]));
            }

            jdouble TdmMetadata::getFreqOffset() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getFreqOffset_b74f83833fdad017]);
            }

            jdouble TdmMetadata::getIntegrationInterval() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIntegrationInterval_b74f83833fdad017]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference TdmMetadata::getIntegrationRef() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference(env->callObjectMethod(this$, mids$[mid_getIntegrationRef_8756c0a701bf4809]));
            }

            jint TdmMetadata::getInterpolationDegree() const
            {
              return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_55546ef6a647f39b]);
            }

            ::java::lang::String TdmMetadata::getInterpolationMethod() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::TrackingMode TdmMetadata::getMode() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TrackingMode(env->callObjectMethod(this$, mids$[mid_getMode_f5b184cec54efa86]));
            }

            ::java::util::Map TdmMetadata::getParticipants() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParticipants_810bed48fafb0b9a]));
            }

            JArray< jint > TdmMetadata::getPath() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath_4d095d7a08163110]));
            }

            JArray< jint > TdmMetadata::getPath1() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath1_4d095d7a08163110]));
            }

            JArray< jint > TdmMetadata::getPath2() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPath2_4d095d7a08163110]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::RangeMode TdmMetadata::getRangeMode() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::RangeMode(env->callObjectMethod(this$, mids$[mid_getRangeMode_56e6fbfab7a821ed]));
            }

            jdouble TdmMetadata::getRangeModulus(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRangeModulus_c24296302549e234], a0.this$);
            }

            ::org::orekit::files::ccsds::ndm::tdm::RangeUnits TdmMetadata::getRangeUnits() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::RangeUnits(env->callObjectMethod(this$, mids$[mid_getRangeUnits_8590817e5cfdf06b]));
            }

            jdouble TdmMetadata::getRawCorrectionRange() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRawCorrectionRange_b74f83833fdad017]);
            }

            jdouble TdmMetadata::getRawRangeModulus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRawRangeModulus_b74f83833fdad017]);
            }

            ::java::lang::String TdmMetadata::getReceiveBand() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiveBand_1c1fa1e935d6cdcf]));
            }

            ::java::util::Map TdmMetadata::getReceiveDelays() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getReceiveDelays_810bed48fafb0b9a]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade TdmMetadata::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_69d8be1b6b0a1a94]));
            }

            ::org::orekit::time::AbsoluteDate TdmMetadata::getStartTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_c325492395d89b24]));
            }

            ::org::orekit::time::AbsoluteDate TdmMetadata::getStopTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_c325492395d89b24]));
            }

            ::org::orekit::files::ccsds::ndm::tdm::TimetagReference TdmMetadata::getTimetagRef() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TimetagReference(env->callObjectMethod(this$, mids$[mid_getTimetagRef_0150dfe84952dd06]));
            }

            ::java::lang::String TdmMetadata::getTrackId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTrackId_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String TdmMetadata::getTransmitBand() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTransmitBand_1c1fa1e935d6cdcf]));
            }

            ::java::util::Map TdmMetadata::getTransmitDelays() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getTransmitDelays_810bed48fafb0b9a]));
            }

            jint TdmMetadata::getTurnaroundDenominator() const
            {
              return env->callIntMethod(this$, mids$[mid_getTurnaroundDenominator_55546ef6a647f39b]);
            }

            jint TdmMetadata::getTurnaroundNumerator() const
            {
              return env->callIntMethod(this$, mids$[mid_getTurnaroundNumerator_55546ef6a647f39b]);
            }

            jboolean TdmMetadata::hasDopplerCountRollover() const
            {
              return env->callBooleanMethod(this$, mids$[mid_hasDopplerCountRollover_9ab94ac1dc23b105]);
            }

            void TdmMetadata::setAngleType(const ::org::orekit::files::ccsds::ndm::tdm::AngleType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAngleType_9bcc49b46153434b], a0.this$);
            }

            void TdmMetadata::setCorrectionAberrationDiurnal(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAberrationDiurnal_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setCorrectionAberrationYearly(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAberrationYearly_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setCorrectionAngle1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAngle1_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setCorrectionAngle2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionAngle2_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setCorrectionDoppler(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionDoppler_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setCorrectionMagnitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionMagnitude_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setCorrectionRcs(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionRcs_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setCorrectionReceive(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionReceive_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setCorrectionTransmit(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionTransmit_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setCorrectionsApplied(const ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCorrectionsApplied_490361ab6c463716], a0.this$);
            }

            void TdmMetadata::setDataQuality(const ::org::orekit::files::ccsds::ndm::tdm::DataQuality & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataQuality_22128bca9f62416a], a0.this$);
            }

            void TdmMetadata::setDataTypes(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataTypes_0e7c3032c7c93ed3], a0.this$);
            }

            void TdmMetadata::setDopplerCountBias(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountBias_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setDopplerCountRollover(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountRollover_fcb96c98de6fad04], a0);
            }

            void TdmMetadata::setDopplerCountScale(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDopplerCountScale_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setEphemerisNames(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEphemerisNames_6648520b18d8ef1d], a0.this$);
            }

            void TdmMetadata::setFreqOffset(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFreqOffset_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setIntegrationInterval(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrationInterval_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setIntegrationRef(const ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrationRef_936ff1a2ef8eedf4], a0.this$);
            }

            void TdmMetadata::setInterpolationDegree(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_44ed599e93e8a30c], a0);
            }

            void TdmMetadata::setInterpolationMethod(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_734b91ac30d5f9b4], a0.this$);
            }

            void TdmMetadata::setMode(const ::org::orekit::files::ccsds::ndm::tdm::TrackingMode & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMode_b932c0afd0b33537], a0.this$);
            }

            void TdmMetadata::setParticipants(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setParticipants_6648520b18d8ef1d], a0.this$);
            }

            void TdmMetadata::setPath(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath_86a2769cb881d388], a0.this$);
            }

            void TdmMetadata::setPath1(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath1_86a2769cb881d388], a0.this$);
            }

            void TdmMetadata::setPath2(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPath2_86a2769cb881d388], a0.this$);
            }

            void TdmMetadata::setRangeMode(const ::org::orekit::files::ccsds::ndm::tdm::RangeMode & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRangeMode_1db85cccec5203b9], a0.this$);
            }

            void TdmMetadata::setRangeUnits(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnits & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRangeUnits_8f2df96f08228b85], a0.this$);
            }

            void TdmMetadata::setRawCorrectionRange(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRawCorrectionRange_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setRawRangeModulus(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRawRangeModulus_8ba9fe7a847cecad], a0);
            }

            void TdmMetadata::setReceiveBand(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReceiveBand_734b91ac30d5f9b4], a0.this$);
            }

            void TdmMetadata::setReceiveDelays(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReceiveDelays_6648520b18d8ef1d], a0.this$);
            }

            void TdmMetadata::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_4755133c5c4c59be], a0.this$);
            }

            void TdmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStartTime_02135a6ef25adb4b], a0.this$);
            }

            void TdmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStopTime_02135a6ef25adb4b], a0.this$);
            }

            void TdmMetadata::setTimetagRef(const ::org::orekit::files::ccsds::ndm::tdm::TimetagReference & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimetagRef_ca6ff11c4c143ecb], a0.this$);
            }

            void TdmMetadata::setTrackId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTrackId_734b91ac30d5f9b4], a0.this$);
            }

            void TdmMetadata::setTransmitBand(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmitBand_734b91ac30d5f9b4], a0.this$);
            }

            void TdmMetadata::setTransmitDelays(const ::java::util::Map & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmitDelays_6648520b18d8ef1d], a0.this$);
            }

            void TdmMetadata::setTurnaroundDenominator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTurnaroundDenominator_44ed599e93e8a30c], a0);
            }

            void TdmMetadata::setTurnaroundNumerator(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTurnaroundNumerator_44ed599e93e8a30c], a0);
            }

            void TdmMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
            static PyObject *t_TdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_TdmMetadata_init_(t_TdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_TdmMetadata_addEphemerisName(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addParticipant(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addReceiveDelay(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_addTransmitDelay(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_getAngleType(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAberrationDiurnal(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAberrationYearly(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAngle1(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionAngle2(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionDoppler(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionMagnitude(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionRange(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_getCorrectionRcs(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionReceive(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionTransmit(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getCorrectionsApplied(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDataQuality(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDataTypes(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDopplerCountBias(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getDopplerCountScale(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getEphemerisNames(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getFreqOffset(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getIntegrationInterval(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getIntegrationRef(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getInterpolationDegree(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getInterpolationMethod(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getMode(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getParticipants(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath1(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getPath2(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRangeMode(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRangeModulus(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_getRangeUnits(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRawCorrectionRange(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getRawRangeModulus(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReceiveBand(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReceiveDelays(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getReferenceFrame(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getStartTime(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getStopTime(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTimetagRef(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTrackId(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTransmitBand(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTransmitDelays(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTurnaroundDenominator(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_getTurnaroundNumerator(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_hasDopplerCountRollover(t_TdmMetadata *self);
            static PyObject *t_TdmMetadata_setAngleType(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAberrationYearly(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAngle1(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionAngle2(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionDoppler(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionMagnitude(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionRcs(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionReceive(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionTransmit(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setCorrectionsApplied(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDataQuality(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDataTypes(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountBias(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountRollover(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setDopplerCountScale(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setEphemerisNames(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setFreqOffset(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setIntegrationInterval(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setIntegrationRef(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setInterpolationDegree(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setInterpolationMethod(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setMode(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setParticipants(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath1(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setPath2(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRangeMode(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRangeUnits(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRawCorrectionRange(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setRawRangeModulus(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReceiveBand(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReceiveDelays(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setReferenceFrame(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setStartTime(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setStopTime(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTimetagRef(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTrackId(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTransmitBand(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTransmitDelays(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTurnaroundDenominator(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_setTurnaroundNumerator(t_TdmMetadata *self, PyObject *arg);
            static PyObject *t_TdmMetadata_validate(t_TdmMetadata *self, PyObject *args);
            static PyObject *t_TdmMetadata_get__angleType(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__angleType(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAberrationDiurnal(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAberrationYearly(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAberrationYearly(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAngle1(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAngle1(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionAngle2(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionAngle2(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionDoppler(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionDoppler(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionMagnitude(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionMagnitude(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionRcs(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionRcs(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionReceive(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionReceive(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionTransmit(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionTransmit(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__correctionsApplied(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__correctionsApplied(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dataQuality(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dataQuality(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dataTypes(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dataTypes(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dopplerCountBias(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dopplerCountBias(t_TdmMetadata *self, PyObject *arg, void *data);
            static int t_TdmMetadata_set__dopplerCountRollover(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__dopplerCountScale(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__dopplerCountScale(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__ephemerisNames(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__ephemerisNames(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__freqOffset(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__freqOffset(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__integrationInterval(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__integrationInterval(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__integrationRef(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__integrationRef(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__interpolationDegree(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__interpolationDegree(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__interpolationMethod(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__interpolationMethod(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__mode(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__mode(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__participants(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__participants(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path1(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path1(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__path2(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__path2(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rangeMode(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rangeMode(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rangeUnits(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rangeUnits(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rawCorrectionRange(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rawCorrectionRange(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__rawRangeModulus(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__rawRangeModulus(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__receiveBand(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__receiveBand(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__receiveDelays(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__receiveDelays(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__referenceFrame(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__referenceFrame(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__startTime(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__startTime(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__stopTime(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__stopTime(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__timetagRef(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__timetagRef(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__trackId(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__trackId(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__transmitBand(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__transmitBand(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__transmitDelays(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__transmitDelays(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__turnaroundDenominator(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__turnaroundDenominator(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_TdmMetadata_get__turnaroundNumerator(t_TdmMetadata *self, void *data);
            static int t_TdmMetadata_set__turnaroundNumerator(t_TdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_TdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_TdmMetadata, angleType),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAberrationDiurnal),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAberrationYearly),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAngle1),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionAngle2),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionDoppler),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionMagnitude),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionRcs),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionReceive),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionTransmit),
              DECLARE_GETSET_FIELD(t_TdmMetadata, correctionsApplied),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dataQuality),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dataTypes),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dopplerCountBias),
              DECLARE_SET_FIELD(t_TdmMetadata, dopplerCountRollover),
              DECLARE_GETSET_FIELD(t_TdmMetadata, dopplerCountScale),
              DECLARE_GETSET_FIELD(t_TdmMetadata, ephemerisNames),
              DECLARE_GETSET_FIELD(t_TdmMetadata, freqOffset),
              DECLARE_GETSET_FIELD(t_TdmMetadata, integrationInterval),
              DECLARE_GETSET_FIELD(t_TdmMetadata, integrationRef),
              DECLARE_GETSET_FIELD(t_TdmMetadata, interpolationDegree),
              DECLARE_GETSET_FIELD(t_TdmMetadata, interpolationMethod),
              DECLARE_GETSET_FIELD(t_TdmMetadata, mode),
              DECLARE_GETSET_FIELD(t_TdmMetadata, participants),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path1),
              DECLARE_GETSET_FIELD(t_TdmMetadata, path2),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rangeMode),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rangeUnits),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rawCorrectionRange),
              DECLARE_GETSET_FIELD(t_TdmMetadata, rawRangeModulus),
              DECLARE_GETSET_FIELD(t_TdmMetadata, receiveBand),
              DECLARE_GETSET_FIELD(t_TdmMetadata, receiveDelays),
              DECLARE_GETSET_FIELD(t_TdmMetadata, referenceFrame),
              DECLARE_GETSET_FIELD(t_TdmMetadata, startTime),
              DECLARE_GETSET_FIELD(t_TdmMetadata, stopTime),
              DECLARE_GETSET_FIELD(t_TdmMetadata, timetagRef),
              DECLARE_GETSET_FIELD(t_TdmMetadata, trackId),
              DECLARE_GETSET_FIELD(t_TdmMetadata, transmitBand),
              DECLARE_GETSET_FIELD(t_TdmMetadata, transmitDelays),
              DECLARE_GETSET_FIELD(t_TdmMetadata, turnaroundDenominator),
              DECLARE_GETSET_FIELD(t_TdmMetadata, turnaroundNumerator),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmMetadata__methods_[] = {
              DECLARE_METHOD(t_TdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadata, addEphemerisName, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addParticipant, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addReceiveDelay, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, addTransmitDelay, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadata, getAngleType, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAberrationDiurnal, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAberrationYearly, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAngle1, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionAngle2, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionDoppler, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionMagnitude, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionRange, METH_O),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionRcs, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionReceive, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionTransmit, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getCorrectionsApplied, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDataQuality, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDataTypes, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDopplerCountBias, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getDopplerCountScale, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getEphemerisNames, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getFreqOffset, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getIntegrationInterval, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getIntegrationRef, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getInterpolationDegree, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getInterpolationMethod, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getMode, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getParticipants, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath1, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getPath2, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRangeMode, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRangeModulus, METH_O),
              DECLARE_METHOD(t_TdmMetadata, getRangeUnits, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRawCorrectionRange, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getRawRangeModulus, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReceiveBand, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReceiveDelays, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getStartTime, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getStopTime, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTimetagRef, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTrackId, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTransmitBand, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTransmitDelays, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTurnaroundDenominator, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, getTurnaroundNumerator, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, hasDopplerCountRollover, METH_NOARGS),
              DECLARE_METHOD(t_TdmMetadata, setAngleType, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAberrationDiurnal, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAberrationYearly, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAngle1, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionAngle2, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionDoppler, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionMagnitude, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionRcs, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionReceive, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionTransmit, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setCorrectionsApplied, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDataQuality, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDataTypes, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountBias, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountRollover, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setDopplerCountScale, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setEphemerisNames, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setFreqOffset, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setIntegrationInterval, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setIntegrationRef, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setInterpolationDegree, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setInterpolationMethod, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setMode, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setParticipants, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath1, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setPath2, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRangeMode, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRangeUnits, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRawCorrectionRange, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setRawRangeModulus, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReceiveBand, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReceiveDelays, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setStartTime, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setStopTime, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTimetagRef, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTrackId, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTransmitBand, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTransmitDelays, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTurnaroundDenominator, METH_O),
              DECLARE_METHOD(t_TdmMetadata, setTurnaroundNumerator, METH_O),
              DECLARE_METHOD(t_TdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmMetadata)[] = {
              { Py_tp_methods, t_TdmMetadata__methods_ },
              { Py_tp_init, (void *) t_TdmMetadata_init_ },
              { Py_tp_getset, t_TdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(TdmMetadata, t_TdmMetadata, TdmMetadata);

            void t_TdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmMetadata), &PY_TYPE_DEF(TdmMetadata), module, "TdmMetadata", 0);
            }

            void t_TdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "class_", make_descriptor(TdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "wrapfn_", make_descriptor(t_TdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmMetadata::initializeClass, 1)))
                return NULL;
              return t_TdmMetadata::wrap_Object(TdmMetadata(((t_TdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_TdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_TdmMetadata_init_(t_TdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              TdmMetadata object((jobject) NULL);

              INT_CALL(object = TdmMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_TdmMetadata_addEphemerisName(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.addEphemerisName(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addEphemerisName", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addParticipant(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "Is", &a0, &a1))
              {
                OBJ_CALL(self->object.addParticipant(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addParticipant", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addReceiveDelay(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.addReceiveDelay(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addReceiveDelay", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_addTransmitDelay(t_TdmMetadata *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.addTransmitDelay(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addTransmitDelay", args);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getAngleType(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAngleType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAberrationDiurnal(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAberrationDiurnal());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAberrationYearly(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAberrationYearly());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAngle1(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAngle1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionAngle2(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionAngle2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionDoppler(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionDoppler());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionMagnitude(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionMagnitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionRange(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getCorrectionRange(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCorrectionRange", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getCorrectionRcs(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionRcs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionReceive(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionReceive());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionTransmit(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCorrectionTransmit());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getCorrectionsApplied(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied result((jobject) NULL);
              OBJ_CALL(result = self->object.getCorrectionsApplied());
              return ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getDataQuality(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataQuality());
              return ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getDataTypes(t_TdmMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataTypes());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(ObservationType));
            }

            static PyObject *t_TdmMetadata_getDopplerCountBias(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDopplerCountBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getDopplerCountScale(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDopplerCountScale());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getEphemerisNames(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getEphemerisNames());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_TdmMetadata_getFreqOffset(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getFreqOffset());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getIntegrationInterval(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIntegrationInterval());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getIntegrationRef(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference result((jobject) NULL);
              OBJ_CALL(result = self->object.getIntegrationRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getInterpolationDegree(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getInterpolationDegree());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_getInterpolationMethod(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getInterpolationMethod());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getMode(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode result((jobject) NULL);
              OBJ_CALL(result = self->object.getMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getParticipants(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getParticipants());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_TdmMetadata_getPath(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getPath1(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath1());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getPath2(t_TdmMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPath2());
              return result.wrap();
            }

            static PyObject *t_TdmMetadata_getRangeMode(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode result((jobject) NULL);
              OBJ_CALL(result = self->object.getRangeMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getRangeModulus(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getRangeModulus(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getRangeModulus", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_getRangeUnits(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits result((jobject) NULL);
              OBJ_CALL(result = self->object.getRangeUnits());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getRawCorrectionRange(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRawCorrectionRange());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getRawRangeModulus(t_TdmMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRawRangeModulus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_TdmMetadata_getReceiveBand(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getReceiveBand());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getReceiveDelays(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getReceiveDelays());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_TdmMetadata_getReferenceFrame(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getStartTime(t_TdmMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStartTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getStopTime(t_TdmMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStopTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getTimetagRef(t_TdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimetagRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::wrap_Object(result);
            }

            static PyObject *t_TdmMetadata_getTrackId(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getTrackId());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getTransmitBand(t_TdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransmitBand());
              return j2p(result);
            }

            static PyObject *t_TdmMetadata_getTransmitDelays(t_TdmMetadata *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getTransmitDelays());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_TdmMetadata_getTurnaroundDenominator(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTurnaroundDenominator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_getTurnaroundNumerator(t_TdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getTurnaroundNumerator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_TdmMetadata_hasDopplerCountRollover(t_TdmMetadata *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.hasDopplerCountRollover());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_TdmMetadata_setAngleType(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::AngleType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::parameters_))
              {
                OBJ_CALL(self->object.setAngleType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAngleType", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAberrationDiurnal(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAberrationDiurnal", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAberrationYearly(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAberrationYearly(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAberrationYearly", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAngle1(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAngle1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAngle1", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionAngle2(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionAngle2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionAngle2", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionDoppler(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionDoppler(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionDoppler", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionMagnitude(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionMagnitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionMagnitude", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionRcs(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionRcs(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionRcs", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionReceive(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionReceive(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionReceive", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionTransmit(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCorrectionTransmit(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionTransmit", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setCorrectionsApplied(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::parameters_))
              {
                OBJ_CALL(self->object.setCorrectionsApplied(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCorrectionsApplied", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDataQuality(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::DataQuality::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::parameters_))
              {
                OBJ_CALL(self->object.setDataQuality(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDataQuality", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDataTypes(t_TdmMetadata *self, PyObject *arg)
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

            static PyObject *t_TdmMetadata_setDopplerCountBias(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountBias(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountBias", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDopplerCountRollover(t_TdmMetadata *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountRollover(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountRollover", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setDopplerCountScale(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDopplerCountScale(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDopplerCountScale", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setEphemerisNames(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setEphemerisNames(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEphemerisNames", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setFreqOffset(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setFreqOffset(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFreqOffset", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setIntegrationInterval(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIntegrationInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrationInterval", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setIntegrationRef(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::parameters_))
              {
                OBJ_CALL(self->object.setIntegrationRef(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrationRef", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setInterpolationDegree(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setInterpolationDegree(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setInterpolationMethod(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setInterpolationMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setMode(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::parameters_))
              {
                OBJ_CALL(self->object.setMode(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMode", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setParticipants(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setParticipants(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setParticipants", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath1(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath1", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setPath2(t_TdmMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setPath2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPath2", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRangeMode(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::RangeMode::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::parameters_))
              {
                OBJ_CALL(self->object.setRangeMode(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRangeMode", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRangeUnits(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::parameters_))
              {
                OBJ_CALL(self->object.setRangeUnits(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRangeUnits", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRawCorrectionRange(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRawCorrectionRange(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRawCorrectionRange", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setRawRangeModulus(t_TdmMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRawRangeModulus(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRawRangeModulus", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReceiveBand(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setReceiveBand(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReceiveBand", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReceiveDelays(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setReceiveDelays(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReceiveDelays", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setReferenceFrame(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setReferenceFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReferenceFrame", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setStartTime(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStartTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setStopTime(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStopTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTimetagRef(t_TdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::parameters_))
              {
                OBJ_CALL(self->object.setTimetagRef(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimetagRef", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTrackId(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setTrackId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTrackId", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTransmitBand(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setTransmitBand(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmitBand", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTransmitDelays(t_TdmMetadata *self, PyObject *arg)
            {
              ::java::util::Map a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(self->object.setTransmitDelays(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTransmitDelays", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTurnaroundDenominator(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTurnaroundDenominator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTurnaroundDenominator", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_setTurnaroundNumerator(t_TdmMetadata *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setTurnaroundNumerator(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTurnaroundNumerator", arg);
              return NULL;
            }

            static PyObject *t_TdmMetadata_validate(t_TdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(TdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_TdmMetadata_get__angleType(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::AngleType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAngleType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_AngleType::wrap_Object(value);
            }
            static int t_TdmMetadata_set__angleType(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::AngleType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::AngleType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAngleType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "angleType", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAberrationDiurnal(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAberrationDiurnal());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAberrationDiurnal(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAberrationDiurnal(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAberrationDiurnal", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAberrationYearly(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAberrationYearly());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAberrationYearly(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAberrationYearly(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAberrationYearly", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAngle1(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAngle1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAngle1(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAngle1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAngle1", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionAngle2(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionAngle2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionAngle2(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionAngle2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionAngle2", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionDoppler(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionDoppler());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionDoppler(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionDoppler(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionDoppler", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionMagnitude(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionMagnitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionMagnitude(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionMagnitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionMagnitude", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionRcs(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionRcs());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionRcs(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionRcs(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionRcs", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionReceive(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionReceive());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionReceive(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionReceive(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionReceive", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionTransmit(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCorrectionTransmit());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__correctionTransmit(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCorrectionTransmit(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionTransmit", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__correctionsApplied(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied value((jobject) NULL);
              OBJ_CALL(value = self->object.getCorrectionsApplied());
              return ::org::orekit::files::ccsds::ndm::tdm::t_CorrectionApplied::wrap_Object(value);
            }
            static int t_TdmMetadata_set__correctionsApplied(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::initializeClass, &value))
                {
                  INT_CALL(self->object.setCorrectionsApplied(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "correctionsApplied", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dataQuality(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::DataQuality value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataQuality());
              return ::org::orekit::files::ccsds::ndm::tdm::t_DataQuality::wrap_Object(value);
            }
            static int t_TdmMetadata_set__dataQuality(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::DataQuality value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::DataQuality::initializeClass, &value))
                {
                  INT_CALL(self->object.setDataQuality(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dataQuality", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dataTypes(t_TdmMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataTypes());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_TdmMetadata_set__dataTypes(t_TdmMetadata *self, PyObject *arg, void *data)
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

            static PyObject *t_TdmMetadata_get__dopplerCountBias(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDopplerCountBias());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__dopplerCountBias(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDopplerCountBias(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountBias", arg);
              return -1;
            }

            static int t_TdmMetadata_set__dopplerCountRollover(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setDopplerCountRollover(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountRollover", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__dopplerCountScale(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDopplerCountScale());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__dopplerCountScale(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDopplerCountScale(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dopplerCountScale", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__ephemerisNames(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getEphemerisNames());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__ephemerisNames(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setEphemerisNames(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ephemerisNames", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__freqOffset(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getFreqOffset());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__freqOffset(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setFreqOffset(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "freqOffset", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__integrationInterval(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIntegrationInterval());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__integrationInterval(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIntegrationInterval(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrationInterval", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__integrationRef(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference value((jobject) NULL);
              OBJ_CALL(value = self->object.getIntegrationRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_IntegrationReference::wrap_Object(value);
            }
            static int t_TdmMetadata_set__integrationRef(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::initializeClass, &value))
                {
                  INT_CALL(self->object.setIntegrationRef(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrationRef", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__interpolationDegree(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getInterpolationDegree());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__interpolationDegree(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setInterpolationDegree(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__interpolationMethod(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getInterpolationMethod());
              return j2p(value);
            }
            static int t_TdmMetadata_set__interpolationMethod(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setInterpolationMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__mode(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TrackingMode value((jobject) NULL);
              OBJ_CALL(value = self->object.getMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TrackingMode::wrap_Object(value);
            }
            static int t_TdmMetadata_set__mode(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::TrackingMode value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::initializeClass, &value))
                {
                  INT_CALL(self->object.setMode(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mode", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__participants(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getParticipants());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__participants(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setParticipants(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "participants", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path1(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath1());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path1(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path1", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__path2(t_TdmMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPath2());
              return value.wrap();
            }
            static int t_TdmMetadata_set__path2(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setPath2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "path2", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rangeMode(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeMode value((jobject) NULL);
              OBJ_CALL(value = self->object.getRangeMode());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeMode::wrap_Object(value);
            }
            static int t_TdmMetadata_set__rangeMode(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::RangeMode value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeMode::initializeClass, &value))
                {
                  INT_CALL(self->object.setRangeMode(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rangeMode", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rangeUnits(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::RangeUnits value((jobject) NULL);
              OBJ_CALL(value = self->object.getRangeUnits());
              return ::org::orekit::files::ccsds::ndm::tdm::t_RangeUnits::wrap_Object(value);
            }
            static int t_TdmMetadata_set__rangeUnits(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::RangeUnits value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::RangeUnits::initializeClass, &value))
                {
                  INT_CALL(self->object.setRangeUnits(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rangeUnits", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rawCorrectionRange(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRawCorrectionRange());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__rawCorrectionRange(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRawCorrectionRange(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rawCorrectionRange", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__rawRangeModulus(t_TdmMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRawRangeModulus());
              return PyFloat_FromDouble((double) value);
            }
            static int t_TdmMetadata_set__rawRangeModulus(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRawRangeModulus(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "rawRangeModulus", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__receiveBand(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getReceiveBand());
              return j2p(value);
            }
            static int t_TdmMetadata_set__receiveBand(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setReceiveBand(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "receiveBand", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__receiveDelays(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getReceiveDelays());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__receiveDelays(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setReceiveDelays(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "receiveDelays", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__referenceFrame(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_TdmMetadata_set__referenceFrame(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setReferenceFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "referenceFrame", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__startTime(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStartTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_TdmMetadata_set__startTime(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStartTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "startTime", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__stopTime(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStopTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_TdmMetadata_set__stopTime(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStopTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__timetagRef(t_TdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TimetagReference value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimetagRef());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TimetagReference::wrap_Object(value);
            }
            static int t_TdmMetadata_set__timetagRef(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::tdm::TimetagReference value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimetagRef(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timetagRef", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__trackId(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getTrackId());
              return j2p(value);
            }
            static int t_TdmMetadata_set__trackId(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setTrackId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "trackId", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__transmitBand(t_TdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getTransmitBand());
              return j2p(value);
            }
            static int t_TdmMetadata_set__transmitBand(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setTransmitBand(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmitBand", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__transmitDelays(t_TdmMetadata *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getTransmitDelays());
              return ::java::util::t_Map::wrap_Object(value);
            }
            static int t_TdmMetadata_set__transmitDelays(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::util::Map value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::Map::initializeClass, &value))
                {
                  INT_CALL(self->object.setTransmitDelays(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "transmitDelays", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__turnaroundDenominator(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTurnaroundDenominator());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__turnaroundDenominator(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTurnaroundDenominator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "turnaroundDenominator", arg);
              return -1;
            }

            static PyObject *t_TdmMetadata_get__turnaroundNumerator(t_TdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getTurnaroundNumerator());
              return PyLong_FromLong((long) value);
            }
            static int t_TdmMetadata_set__turnaroundNumerator(t_TdmMetadata *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setTurnaroundNumerator(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "turnaroundNumerator", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceType::class$ = NULL;
              jmethodID *AttitudeCovarianceType::mids$ = NULL;
              bool AttitudeCovarianceType::live$ = false;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE_ANGVEL = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE_GYROBIAS = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION_ANGVEL = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION_GYROBIAS = NULL;

              jclass AttitudeCovarianceType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_e62d3bb06d56d7e3] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_valueOf_ace24d354abfff27] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_values_cc7e51b05fabaec9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGLE = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  ANGLE_ANGVEL = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  ANGLE_GYROBIAS = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE_GYROBIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION_ANGVEL = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION_GYROBIAS = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION_GYROBIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List AttitudeCovarianceType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_e62d3bb06d56d7e3]));
              }

              AttitudeCovarianceType AttitudeCovarianceType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeCovarianceType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ace24d354abfff27], a0.this$));
              }

              JArray< AttitudeCovarianceType > AttitudeCovarianceType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeCovarianceType >(env->callStaticObjectMethod(cls, mids$[mid_values_cc7e51b05fabaec9]));
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
              static PyObject *t_AttitudeCovarianceType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceType_of_(t_AttitudeCovarianceType *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceType_getUnits(t_AttitudeCovarianceType *self);
              static PyObject *t_AttitudeCovarianceType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeCovarianceType_values(PyTypeObject *type);
              static PyObject *t_AttitudeCovarianceType_get__units(t_AttitudeCovarianceType *self, void *data);
              static PyObject *t_AttitudeCovarianceType_get__parameters_(t_AttitudeCovarianceType *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceType__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceType, units),
                DECLARE_GET_FIELD(t_AttitudeCovarianceType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceType__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceType)[] = {
                { Py_tp_methods, t_AttitudeCovarianceType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeCovarianceType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceType, t_AttitudeCovarianceType, AttitudeCovarianceType);
              PyObject *t_AttitudeCovarianceType::wrap_Object(const AttitudeCovarianceType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceType *self = (t_AttitudeCovarianceType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeCovarianceType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceType *self = (t_AttitudeCovarianceType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeCovarianceType::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceType), &PY_TYPE_DEF(AttitudeCovarianceType), module, "AttitudeCovarianceType", 0);
              }

              void t_AttitudeCovarianceType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "class_", make_descriptor(AttitudeCovarianceType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "wrapfn_", make_descriptor(t_AttitudeCovarianceType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeCovarianceType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE_ANGVEL", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE_ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE_GYROBIAS", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE_GYROBIAS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION_ANGVEL", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION_ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION_GYROBIAS", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION_GYROBIAS)));
              }

              static PyObject *t_AttitudeCovarianceType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceType::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceType::wrap_Object(AttitudeCovarianceType(((t_AttitudeCovarianceType *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeCovarianceType_of_(t_AttitudeCovarianceType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeCovarianceType_getUnits(t_AttitudeCovarianceType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_AttitudeCovarianceType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeCovarianceType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::valueOf(a0));
                  return t_AttitudeCovarianceType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeCovarianceType_values(PyTypeObject *type)
              {
                JArray< AttitudeCovarianceType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeCovarianceType::wrap_jobject);
              }
              static PyObject *t_AttitudeCovarianceType_get__parameters_(t_AttitudeCovarianceType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AttitudeCovarianceType_get__units(t_AttitudeCovarianceType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/hipparchus/filtering/kalman/linear/LinearKalmanFilter.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/filtering/kalman/linear/LinearProcess.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearKalmanFilter::class$ = NULL;
          jmethodID *LinearKalmanFilter::mids$ = NULL;
          bool LinearKalmanFilter::live$ = false;

          jclass LinearKalmanFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearKalmanFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_581afc85c01f536a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/linear/LinearProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
              mids$[mid_estimationStep_de0fd16eb0d97034] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LinearKalmanFilter::LinearKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::linear::LinearProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2) : ::org::hipparchus::filtering::kalman::AbstractKalmanFilter(env->newObject(initializeClass, &mids$, mid_init$_581afc85c01f536a, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate LinearKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_de0fd16eb0d97034], a0.this$));
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
    namespace filtering {
      namespace kalman {
        namespace linear {
          static PyObject *t_LinearKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearKalmanFilter_of_(t_LinearKalmanFilter *self, PyObject *args);
          static int t_LinearKalmanFilter_init_(t_LinearKalmanFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LinearKalmanFilter_estimationStep(t_LinearKalmanFilter *self, PyObject *args);
          static PyObject *t_LinearKalmanFilter_get__parameters_(t_LinearKalmanFilter *self, void *data);
          static PyGetSetDef t_LinearKalmanFilter__fields_[] = {
            DECLARE_GET_FIELD(t_LinearKalmanFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearKalmanFilter__methods_[] = {
            DECLARE_METHOD(t_LinearKalmanFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearKalmanFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearKalmanFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_LinearKalmanFilter, estimationStep, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearKalmanFilter)[] = {
            { Py_tp_methods, t_LinearKalmanFilter__methods_ },
            { Py_tp_init, (void *) t_LinearKalmanFilter_init_ },
            { Py_tp_getset, t_LinearKalmanFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearKalmanFilter)[] = {
            &PY_TYPE_DEF(::org::hipparchus::filtering::kalman::AbstractKalmanFilter),
            NULL
          };

          DEFINE_TYPE(LinearKalmanFilter, t_LinearKalmanFilter, LinearKalmanFilter);
          PyObject *t_LinearKalmanFilter::wrap_Object(const LinearKalmanFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearKalmanFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearKalmanFilter *self = (t_LinearKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_LinearKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LinearKalmanFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LinearKalmanFilter *self = (t_LinearKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_LinearKalmanFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearKalmanFilter), &PY_TYPE_DEF(LinearKalmanFilter), module, "LinearKalmanFilter", 0);
          }

          void t_LinearKalmanFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearKalmanFilter), "class_", make_descriptor(LinearKalmanFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearKalmanFilter), "wrapfn_", make_descriptor(t_LinearKalmanFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearKalmanFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearKalmanFilter::initializeClass, 1)))
              return NULL;
            return t_LinearKalmanFilter::wrap_Object(LinearKalmanFilter(((t_LinearKalmanFilter *) arg)->object.this$));
          }
          static PyObject *t_LinearKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearKalmanFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LinearKalmanFilter_of_(t_LinearKalmanFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_LinearKalmanFilter_init_(t_LinearKalmanFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::linear::LinearProcess a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::filtering::kalman::ProcessEstimate a2((jobject) NULL);
            LinearKalmanFilter object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::filtering::kalman::linear::LinearProcess::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::linear::t_LinearProcess::parameters_, &a2))
            {
              INT_CALL(object = LinearKalmanFilter(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LinearKalmanFilter_estimationStep(t_LinearKalmanFilter *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.estimationStep(a0));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(LinearKalmanFilter), (PyObject *) self, "estimationStep", args, 2);
          }
          static PyObject *t_LinearKalmanFilter_get__parameters_(t_LinearKalmanFilter *self, void *data)
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
#include "org/orekit/models/PythonAtmosphericRefractionModel.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {

      ::java::lang::Class *PythonAtmosphericRefractionModel::class$ = NULL;
      jmethodID *PythonAtmosphericRefractionModel::mids$ = NULL;
      bool PythonAtmosphericRefractionModel::live$ = false;

      jclass PythonAtmosphericRefractionModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/models/PythonAtmosphericRefractionModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getRefraction_04fd0666b613d2ab] = env->getMethodID(cls, "getRefraction", "(D)D");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAtmosphericRefractionModel::PythonAtmosphericRefractionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonAtmosphericRefractionModel::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonAtmosphericRefractionModel::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonAtmosphericRefractionModel::pythonExtension(jlong a0) const
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
    namespace models {
      static PyObject *t_PythonAtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAtmosphericRefractionModel_init_(t_PythonAtmosphericRefractionModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAtmosphericRefractionModel_finalize(t_PythonAtmosphericRefractionModel *self);
      static PyObject *t_PythonAtmosphericRefractionModel_pythonExtension(t_PythonAtmosphericRefractionModel *self, PyObject *args);
      static jdouble JNICALL t_PythonAtmosphericRefractionModel_getRefraction0(JNIEnv *jenv, jobject jobj, jdouble a0);
      static void JNICALL t_PythonAtmosphericRefractionModel_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAtmosphericRefractionModel_get__self(t_PythonAtmosphericRefractionModel *self, void *data);
      static PyGetSetDef t_PythonAtmosphericRefractionModel__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAtmosphericRefractionModel, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAtmosphericRefractionModel__methods_[] = {
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAtmosphericRefractionModel)[] = {
        { Py_tp_methods, t_PythonAtmosphericRefractionModel__methods_ },
        { Py_tp_init, (void *) t_PythonAtmosphericRefractionModel_init_ },
        { Py_tp_getset, t_PythonAtmosphericRefractionModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAtmosphericRefractionModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAtmosphericRefractionModel, t_PythonAtmosphericRefractionModel, PythonAtmosphericRefractionModel);

      void t_PythonAtmosphericRefractionModel::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAtmosphericRefractionModel), &PY_TYPE_DEF(PythonAtmosphericRefractionModel), module, "PythonAtmosphericRefractionModel", 1);
      }

      void t_PythonAtmosphericRefractionModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "class_", make_descriptor(PythonAtmosphericRefractionModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "wrapfn_", make_descriptor(t_PythonAtmosphericRefractionModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAtmosphericRefractionModel::initializeClass);
        JNINativeMethod methods[] = {
          { "getRefraction", "(D)D", (void *) t_PythonAtmosphericRefractionModel_getRefraction0 },
          { "pythonDecRef", "()V", (void *) t_PythonAtmosphericRefractionModel_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAtmosphericRefractionModel::initializeClass, 1)))
          return NULL;
        return t_PythonAtmosphericRefractionModel::wrap_Object(PythonAtmosphericRefractionModel(((t_PythonAtmosphericRefractionModel *) arg)->object.this$));
      }
      static PyObject *t_PythonAtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAtmosphericRefractionModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAtmosphericRefractionModel_init_(t_PythonAtmosphericRefractionModel *self, PyObject *args, PyObject *kwds)
      {
        PythonAtmosphericRefractionModel object((jobject) NULL);

        INT_CALL(object = PythonAtmosphericRefractionModel());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAtmosphericRefractionModel_finalize(t_PythonAtmosphericRefractionModel *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAtmosphericRefractionModel_pythonExtension(t_PythonAtmosphericRefractionModel *self, PyObject *args)
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

      static jdouble JNICALL t_PythonAtmosphericRefractionModel_getRefraction0(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getRefraction", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getRefraction", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static void JNICALL t_PythonAtmosphericRefractionModel_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAtmosphericRefractionModel_get__self(t_PythonAtmosphericRefractionModel *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/TDOAIonosphericDelayModifier.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TDOAIonosphericDelayModifier::class$ = NULL;
          jmethodID *TDOAIonosphericDelayModifier::mids$ = NULL;
          bool TDOAIonosphericDelayModifier::live$ = false;

          jclass TDOAIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TDOAIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c3c7040adbf9e5f8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOAIonosphericDelayModifier::TDOAIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3c7040adbf9e5f8, a0.this$, a1)) {}

          ::java::util::List TDOAIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void TDOAIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void TDOAIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_TDOAIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TDOAIonosphericDelayModifier_init_(t_TDOAIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOAIonosphericDelayModifier_getParametersDrivers(t_TDOAIonosphericDelayModifier *self);
          static PyObject *t_TDOAIonosphericDelayModifier_modify(t_TDOAIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_modifyWithoutDerivatives(t_TDOAIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_get__parametersDrivers(t_TDOAIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_TDOAIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TDOAIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOAIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOAIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_TDOAIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TDOAIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_TDOAIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOAIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TDOAIonosphericDelayModifier, t_TDOAIonosphericDelayModifier, TDOAIonosphericDelayModifier);

          void t_TDOAIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOAIonosphericDelayModifier), &PY_TYPE_DEF(TDOAIonosphericDelayModifier), module, "TDOAIonosphericDelayModifier", 0);
          }

          void t_TDOAIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "class_", make_descriptor(TDOAIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "wrapfn_", make_descriptor(t_TDOAIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOAIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOAIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TDOAIonosphericDelayModifier::wrap_Object(TDOAIonosphericDelayModifier(((t_TDOAIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TDOAIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOAIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TDOAIonosphericDelayModifier_init_(t_TDOAIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            TDOAIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TDOAIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOAIonosphericDelayModifier_getParametersDrivers(t_TDOAIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TDOAIonosphericDelayModifier_modify(t_TDOAIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TDOAIonosphericDelayModifier_modifyWithoutDerivatives(t_TDOAIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TDOAIonosphericDelayModifier_get__parametersDrivers(t_TDOAIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldPropagator::class$ = NULL;
      jmethodID *FieldPropagator::mids$ = NULL;
      bool FieldPropagator::live$ = false;
      jdouble FieldPropagator::DEFAULT_MASS = (jdouble) 0;

      jclass FieldPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_6f4fb3fe151ef989] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_ca1d91eb6a3ce219] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_clearStepHandlers_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getAdditionalStateProviders_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_afe29c55086c638f] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_cb666ea1a15f5210] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f94e41879ab7062] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_bf5be23258085f1c] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_70fecd201ca47d3b] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_44f88f604c4d00f1] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_resetInitialState_54d9efbf99822980] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setStepHandler_a80810763ccddce2] = env->getMethodID(cls, "setStepHandler", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");
          mids$[mid_setStepHandler_73fc248bc2640832] = env->getMethodID(cls, "setStepHandler", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::FieldAdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_6f4fb3fe151ef989], a0.this$);
      }

      void FieldPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_ca1d91eb6a3ce219], a0.this$);
      }

      void FieldPropagator::clearEventsDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2]);
      }

      void FieldPropagator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_a1fa5dae97ea5ed2]);
      }

      ::java::util::List FieldPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_e62d3bb06d56d7e3]));
      }

      ::org::orekit::attitudes::AttitudeProvider FieldPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_331f12bb6017243b]));
      }

      ::org::orekit::propagation::FieldEphemerisGenerator FieldPropagator::getEphemerisGenerator() const
      {
        return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_afe29c55086c638f]));
      }

      ::java::util::Collection FieldPropagator::getEventsDetectors() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_cb666ea1a15f5210]));
      }

      ::org::orekit::frames::Frame FieldPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_fba6d56f8dbc98d0]));
      }

      JArray< ::java::lang::String > FieldPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f94e41879ab7062]));
      }

      ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer FieldPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_bf5be23258085f1c]));
      }

      jboolean FieldPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75], a0.this$);
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_70fecd201ca47d3b], a0.this$));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_44f88f604c4d00f1], a0.this$, a1.this$));
      }

      void FieldPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_54d9efbf99822980], a0.this$);
      }

      void FieldPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8e4d3ea100bc0095], a0.this$);
      }

      void FieldPropagator::setStepHandler(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_a80810763ccddce2], a0.this$);
      }

      void FieldPropagator::setStepHandler(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_73fc248bc2640832], a0.this$, a1.this$);
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
      static PyObject *t_FieldPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPropagator_of_(t_FieldPropagator *self, PyObject *args);
      static PyObject *t_FieldPropagator_addAdditionalStateProvider(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_addEventDetector(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_clearEventsDetectors(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_clearStepHandlers(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getAdditionalStateProviders(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getAttitudeProvider(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getEphemerisGenerator(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getEventsDetectors(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getFrame(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getInitialState(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getManagedAdditionalStates(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getMultiplexer(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_isAdditionalStateManaged(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_propagate(t_FieldPropagator *self, PyObject *args);
      static PyObject *t_FieldPropagator_resetInitialState(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_setAttitudeProvider(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_setStepHandler(t_FieldPropagator *self, PyObject *args);
      static PyObject *t_FieldPropagator_get__additionalStateProviders(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__attitudeProvider(t_FieldPropagator *self, void *data);
      static int t_FieldPropagator_set__attitudeProvider(t_FieldPropagator *self, PyObject *arg, void *data);
      static PyObject *t_FieldPropagator_get__ephemerisGenerator(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__eventsDetectors(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__frame(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__initialState(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__managedAdditionalStates(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__multiplexer(t_FieldPropagator *self, void *data);
      static int t_FieldPropagator_set__stepHandler(t_FieldPropagator *self, PyObject *arg, void *data);
      static PyObject *t_FieldPropagator_get__parameters_(t_FieldPropagator *self, void *data);
      static PyGetSetDef t_FieldPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_FieldPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_FieldPropagator, ephemerisGenerator),
        DECLARE_GET_FIELD(t_FieldPropagator, eventsDetectors),
        DECLARE_GET_FIELD(t_FieldPropagator, frame),
        DECLARE_GET_FIELD(t_FieldPropagator, initialState),
        DECLARE_GET_FIELD(t_FieldPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_FieldPropagator, multiplexer),
        DECLARE_SET_FIELD(t_FieldPropagator, stepHandler),
        DECLARE_GET_FIELD(t_FieldPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_FieldPropagator, addEventDetector, METH_O),
        DECLARE_METHOD(t_FieldPropagator, clearEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getEphemerisGenerator, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_FieldPropagator, propagate, METH_VARARGS),
        DECLARE_METHOD(t_FieldPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_FieldPropagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_FieldPropagator, setStepHandler, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPropagator)[] = {
        { Py_tp_methods, t_FieldPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::FieldPVCoordinatesProvider),
        NULL
      };

      DEFINE_TYPE(FieldPropagator, t_FieldPropagator, FieldPropagator);
      PyObject *t_FieldPropagator::wrap_Object(const FieldPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPropagator *self = (t_FieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPropagator *self = (t_FieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPropagator), &PY_TYPE_DEF(FieldPropagator), module, "FieldPropagator", 0);
      }

      void t_FieldPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "class_", make_descriptor(FieldPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "wrapfn_", make_descriptor(t_FieldPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "boxfn_", make_descriptor(boxObject));
        env->getClass(FieldPropagator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "DEFAULT_MASS", make_descriptor(FieldPropagator::DEFAULT_MASS));
      }

      static PyObject *t_FieldPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldPropagator::wrap_Object(FieldPropagator(((t_FieldPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPropagator_of_(t_FieldPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldPropagator_addAdditionalStateProvider(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldAdditionalStateProvider a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldAdditionalStateProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldAdditionalStateProvider::parameters_))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_addEventDetector(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_clearEventsDetectors(t_FieldPropagator *self)
      {
        OBJ_CALL(self->object.clearEventsDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldPropagator_clearStepHandlers(t_FieldPropagator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldPropagator_getAdditionalStateProviders(t_FieldPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getAttitudeProvider(t_FieldPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getEphemerisGenerator(t_FieldPropagator *self)
      {
        ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPropagator_getEventsDetectors(t_FieldPropagator *self)
      {
        ::java::util::Collection result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getFrame(t_FieldPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getInitialState(t_FieldPropagator *self)
      {
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPropagator_getManagedAdditionalStates(t_FieldPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_FieldPropagator_getMultiplexer(t_FieldPropagator *self)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPropagator_isAdditionalStateManaged(t_FieldPropagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_propagate(t_FieldPropagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.propagate(a0));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.propagate(a0, a1));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_FieldPropagator_resetInitialState(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_setAttitudeProvider(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_setStepHandler(t_FieldPropagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::sampling::FieldOrekitStepHandler a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepHandler::parameters_))
            {
              OBJ_CALL(self->object.setStepHandler(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
            {
              OBJ_CALL(self->object.setStepHandler(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setStepHandler", args);
        return NULL;
      }
      static PyObject *t_FieldPropagator_get__parameters_(t_FieldPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPropagator_get__additionalStateProviders(t_FieldPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__attitudeProvider(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_FieldPropagator_set__attitudeProvider(t_FieldPropagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
          {
            INT_CALL(self->object.setAttitudeProvider(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
        return -1;
      }

      static PyObject *t_FieldPropagator_get__ephemerisGenerator(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__eventsDetectors(t_FieldPropagator *self, void *data)
      {
        ::java::util::Collection value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__frame(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__initialState(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__managedAdditionalStates(t_FieldPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_FieldPropagator_get__multiplexer(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(value);
      }

      static int t_FieldPropagator_set__stepHandler(t_FieldPropagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepHandler value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &value))
          {
            INT_CALL(self->object.setStepHandler(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "stepHandler", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer$IdentityPreconditioner::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer$IdentityPreconditioner::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer$IdentityPreconditioner::live$ = false;

            jclass NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_precondition_1badeb24cd1b9588] = env->getMethodID(cls, "precondition", "([D[D)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer$IdentityPreconditioner::NonLinearConjugateGradientOptimizer$IdentityPreconditioner() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            JArray< jdouble > NonLinearConjugateGradientOptimizer$IdentityPreconditioner::precondition(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_precondition_1badeb24cd1b9588], a0.this$, a1.this$));
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
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_of_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args);
            static int t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_precondition(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_get__parameters_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, precondition, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__methods_ },
              { Py_tp_init, (void *) t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_ },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, NonLinearConjugateGradientOptimizer$IdentityPreconditioner);
            PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(const NonLinearConjugateGradientOptimizer$IdentityPreconditioner& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self = (t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self = (t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), module, "NonLinearConjugateGradientOptimizer$IdentityPreconditioner", 0);
            }

            void t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "class_", make_descriptor(NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(NonLinearConjugateGradientOptimizer$IdentityPreconditioner(((t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_of_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args, PyObject *kwds)
            {
              NonLinearConjugateGradientOptimizer$IdentityPreconditioner object((jobject) NULL);

              INT_CALL(object = NonLinearConjugateGradientOptimizer$IdentityPreconditioner());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);

              return 0;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_precondition(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args)
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.precondition(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "precondition", args);
              return NULL;
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_get__parameters_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, void *data)
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
#include "org/orekit/propagation/events/FieldLongitudeCrossingDetector.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldLongitudeCrossingDetector::class$ = NULL;
        jmethodID *FieldLongitudeCrossingDetector::mids$ = NULL;
        bool FieldLongitudeCrossingDetector::live$ = false;

        jclass FieldLongitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldLongitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5aa113c8ea2c3853] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_3a020ed83ff3efcb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBody_dd5c4288aa5a3dd8] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLongitude_b74f83833fdad017] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_5540c3ec4d60c1c6] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldLongitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldLongitudeCrossingDetector::FieldLongitudeCrossingDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5aa113c8ea2c3853, a0.this$, a1.this$, a2)) {}

        FieldLongitudeCrossingDetector::FieldLongitudeCrossingDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3a020ed83ff3efcb, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldLongitudeCrossingDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::orekit::bodies::OneAxisEllipsoid FieldLongitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_dd5c4288aa5a3dd8]));
        }

        jdouble FieldLongitudeCrossingDetector::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_b74f83833fdad017]);
        }

        void FieldLongitudeCrossingDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
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
        static PyObject *t_FieldLongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLongitudeCrossingDetector_of_(t_FieldLongitudeCrossingDetector *self, PyObject *args);
        static int t_FieldLongitudeCrossingDetector_init_(t_FieldLongitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldLongitudeCrossingDetector_g(t_FieldLongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_FieldLongitudeCrossingDetector_getBody(t_FieldLongitudeCrossingDetector *self);
        static PyObject *t_FieldLongitudeCrossingDetector_getLongitude(t_FieldLongitudeCrossingDetector *self);
        static PyObject *t_FieldLongitudeCrossingDetector_init(t_FieldLongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_FieldLongitudeCrossingDetector_get__body(t_FieldLongitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLongitudeCrossingDetector_get__longitude(t_FieldLongitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLongitudeCrossingDetector_get__parameters_(t_FieldLongitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_FieldLongitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldLongitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_FieldLongitudeCrossingDetector, longitude),
          DECLARE_GET_FIELD(t_FieldLongitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldLongitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, getLongitude, METH_NOARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldLongitudeCrossingDetector)[] = {
          { Py_tp_methods, t_FieldLongitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_FieldLongitudeCrossingDetector_init_ },
          { Py_tp_getset, t_FieldLongitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldLongitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldLongitudeCrossingDetector, t_FieldLongitudeCrossingDetector, FieldLongitudeCrossingDetector);
        PyObject *t_FieldLongitudeCrossingDetector::wrap_Object(const FieldLongitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLongitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLongitudeCrossingDetector *self = (t_FieldLongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldLongitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLongitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLongitudeCrossingDetector *self = (t_FieldLongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldLongitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldLongitudeCrossingDetector), &PY_TYPE_DEF(FieldLongitudeCrossingDetector), module, "FieldLongitudeCrossingDetector", 0);
        }

        void t_FieldLongitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLongitudeCrossingDetector), "class_", make_descriptor(FieldLongitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLongitudeCrossingDetector), "wrapfn_", make_descriptor(t_FieldLongitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLongitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldLongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldLongitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_FieldLongitudeCrossingDetector::wrap_Object(FieldLongitudeCrossingDetector(((t_FieldLongitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldLongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldLongitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldLongitudeCrossingDetector_of_(t_FieldLongitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldLongitudeCrossingDetector_init_(t_FieldLongitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
              jdouble a2;
              FieldLongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::hipparchus::Field::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldLongitudeCrossingDetector(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              FieldLongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KKkD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
              {
                INT_CALL(object = FieldLongitudeCrossingDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldLongitudeCrossingDetector_g(t_FieldLongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldLongitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_getBody(t_FieldLongitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_getLongitude(t_FieldLongitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_init(t_FieldLongitudeCrossingDetector *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldLongitudeCrossingDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldLongitudeCrossingDetector_get__parameters_(t_FieldLongitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldLongitudeCrossingDetector_get__body(t_FieldLongitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_get__longitude(t_FieldLongitudeCrossingDetector *self, void *data)
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
#include "org/hipparchus/linear/SingularValueDecomposer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SingularValueDecomposer::class$ = NULL;
      jmethodID *SingularValueDecomposer::mids$ = NULL;
      bool SingularValueDecomposer::live$ = false;

      jclass SingularValueDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SingularValueDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_decompose_8def7320d620ddc9] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingularValueDecomposer::SingularValueDecomposer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ::org::hipparchus::linear::DecompositionSolver SingularValueDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_8def7320d620ddc9], a0.this$));
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
      static PyObject *t_SingularValueDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingularValueDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingularValueDecomposer_init_(t_SingularValueDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingularValueDecomposer_decompose(t_SingularValueDecomposer *self, PyObject *arg);

      static PyMethodDef t_SingularValueDecomposer__methods_[] = {
        DECLARE_METHOD(t_SingularValueDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingularValueDecomposer)[] = {
        { Py_tp_methods, t_SingularValueDecomposer__methods_ },
        { Py_tp_init, (void *) t_SingularValueDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingularValueDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingularValueDecomposer, t_SingularValueDecomposer, SingularValueDecomposer);

      void t_SingularValueDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(SingularValueDecomposer), &PY_TYPE_DEF(SingularValueDecomposer), module, "SingularValueDecomposer", 0);
      }

      void t_SingularValueDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "class_", make_descriptor(SingularValueDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "wrapfn_", make_descriptor(t_SingularValueDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SingularValueDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingularValueDecomposer::initializeClass, 1)))
          return NULL;
        return t_SingularValueDecomposer::wrap_Object(SingularValueDecomposer(((t_SingularValueDecomposer *) arg)->object.this$));
      }
      static PyObject *t_SingularValueDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingularValueDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingularValueDecomposer_init_(t_SingularValueDecomposer *self, PyObject *args, PyObject *kwds)
      {
        SingularValueDecomposer object((jobject) NULL);

        INT_CALL(object = SingularValueDecomposer());
        self->object = object;

        return 0;
      }

      static PyObject *t_SingularValueDecomposer_decompose(t_SingularValueDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00$FieldOutput.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *NRLMSISE00$FieldOutput::class$ = NULL;
          jmethodID *NRLMSISE00$FieldOutput::mids$ = NULL;
          bool NRLMSISE00$FieldOutput::live$ = false;

          jclass NRLMSISE00$FieldOutput::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/NRLMSISE00$FieldOutput");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDensity_21e6b3c521b9c768] = env->getMethodID(cls, "getDensity", "(I)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement NRLMSISE00$FieldOutput::getDensity(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_21e6b3c521b9c768], a0));
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
          static PyObject *t_NRLMSISE00$FieldOutput_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00$FieldOutput_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00$FieldOutput_of_(t_NRLMSISE00$FieldOutput *self, PyObject *args);
          static PyObject *t_NRLMSISE00$FieldOutput_getDensity(t_NRLMSISE00$FieldOutput *self, PyObject *arg);
          static PyObject *t_NRLMSISE00$FieldOutput_get__parameters_(t_NRLMSISE00$FieldOutput *self, void *data);
          static PyGetSetDef t_NRLMSISE00$FieldOutput__fields_[] = {
            DECLARE_GET_FIELD(t_NRLMSISE00$FieldOutput, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NRLMSISE00$FieldOutput__methods_[] = {
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, of_, METH_VARARGS),
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, getDensity, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NRLMSISE00$FieldOutput)[] = {
            { Py_tp_methods, t_NRLMSISE00$FieldOutput__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NRLMSISE00$FieldOutput__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NRLMSISE00$FieldOutput)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NRLMSISE00$FieldOutput, t_NRLMSISE00$FieldOutput, NRLMSISE00$FieldOutput);
          PyObject *t_NRLMSISE00$FieldOutput::wrap_Object(const NRLMSISE00$FieldOutput& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NRLMSISE00$FieldOutput::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NRLMSISE00$FieldOutput *self = (t_NRLMSISE00$FieldOutput *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NRLMSISE00$FieldOutput::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NRLMSISE00$FieldOutput::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NRLMSISE00$FieldOutput *self = (t_NRLMSISE00$FieldOutput *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NRLMSISE00$FieldOutput::install(PyObject *module)
          {
            installType(&PY_TYPE(NRLMSISE00$FieldOutput), &PY_TYPE_DEF(NRLMSISE00$FieldOutput), module, "NRLMSISE00$FieldOutput", 0);
          }

          void t_NRLMSISE00$FieldOutput::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00$FieldOutput), "class_", make_descriptor(NRLMSISE00$FieldOutput::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00$FieldOutput), "wrapfn_", make_descriptor(t_NRLMSISE00$FieldOutput::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00$FieldOutput), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NRLMSISE00$FieldOutput_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NRLMSISE00$FieldOutput::initializeClass, 1)))
              return NULL;
            return t_NRLMSISE00$FieldOutput::wrap_Object(NRLMSISE00$FieldOutput(((t_NRLMSISE00$FieldOutput *) arg)->object.this$));
          }
          static PyObject *t_NRLMSISE00$FieldOutput_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NRLMSISE00$FieldOutput::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NRLMSISE00$FieldOutput_of_(t_NRLMSISE00$FieldOutput *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NRLMSISE00$FieldOutput_getDensity(t_NRLMSISE00$FieldOutput *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getDensity(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", arg);
            return NULL;
          }
          static PyObject *t_NRLMSISE00$FieldOutput_get__parameters_(t_NRLMSISE00$FieldOutput *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTAtmosphericDrag.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/forces/drag/DragForce.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTAtmosphericDrag::class$ = NULL;
            jmethodID *DSSTAtmosphericDrag::mids$ = NULL;
            bool DSSTAtmosphericDrag::live$ = false;

            jclass DSSTAtmosphericDrag::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTAtmosphericDrag");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_deefd38e570563ff] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/drag/DragForce;D)V");
                mids$[mid_init$_0ce46920d2f2ff0a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;D)V");
                mids$[mid_init$_ca5f27c92d1fb19a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;DDD)V");
                mids$[mid_getAtmosphere_51e24dc1f47828d4] = env->getMethodID(cls, "getAtmosphere", "()Lorg/orekit/models/earth/atmosphere/Atmosphere;");
                mids$[mid_getDrag_6a0d5872a8149beb] = env->getMethodID(cls, "getDrag", "()Lorg/orekit/forces/drag/DragForce;");
                mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
                mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
                mids$[mid_getRbar_b74f83833fdad017] = env->getMethodID(cls, "getRbar", "()D");
                mids$[mid_getSpacecraft_bf04d13a51559009] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/drag/DragSensitive;");
                mids$[mid_getLLimits_1abf2eee80dffc68] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLLimits_9b6fd6b3a2b07f62] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getParametersDriversWithoutMu_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::forces::drag::DragForce & a0, jdouble a1) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_deefd38e570563ff, a0.this$, a1)) {}

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1, jdouble a2) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_0ce46920d2f2ff0a, a0.this$, a1.this$, a2)) {}

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_ca5f27c92d1fb19a, a0.this$, a1, a2, a3)) {}

            ::org::orekit::models::earth::atmosphere::Atmosphere DSSTAtmosphericDrag::getAtmosphere() const
            {
              return ::org::orekit::models::earth::atmosphere::Atmosphere(env->callObjectMethod(this$, mids$[mid_getAtmosphere_51e24dc1f47828d4]));
            }

            ::org::orekit::forces::drag::DragForce DSSTAtmosphericDrag::getDrag() const
            {
              return ::org::orekit::forces::drag::DragForce(env->callObjectMethod(this$, mids$[mid_getDrag_6a0d5872a8149beb]));
            }

            ::java::util::stream::Stream DSSTAtmosphericDrag::getEventDetectors() const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
            }

            ::java::util::stream::Stream DSSTAtmosphericDrag::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
            }

            jdouble DSSTAtmosphericDrag::getRbar() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRbar_b74f83833fdad017]);
            }

            ::org::orekit::forces::drag::DragSensitive DSSTAtmosphericDrag::getSpacecraft() const
            {
              return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_bf04d13a51559009]));
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
            static PyObject *t_DSSTAtmosphericDrag_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTAtmosphericDrag_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTAtmosphericDrag_init_(t_DSSTAtmosphericDrag *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTAtmosphericDrag_getAtmosphere(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_getDrag(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_getEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args);
            static PyObject *t_DSSTAtmosphericDrag_getFieldEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args);
            static PyObject *t_DSSTAtmosphericDrag_getRbar(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_getSpacecraft(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_get__atmosphere(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__drag(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__eventDetectors(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__rbar(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__spacecraft(t_DSSTAtmosphericDrag *self, void *data);
            static PyGetSetDef t_DSSTAtmosphericDrag__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, atmosphere),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, drag),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, eventDetectors),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, rbar),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, spacecraft),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTAtmosphericDrag__methods_[] = {
              DECLARE_METHOD(t_DSSTAtmosphericDrag, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getAtmosphere, METH_NOARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getDrag, METH_NOARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getEventDetectors, METH_VARARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getFieldEventDetectors, METH_VARARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getRbar, METH_NOARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getSpacecraft, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTAtmosphericDrag)[] = {
              { Py_tp_methods, t_DSSTAtmosphericDrag__methods_ },
              { Py_tp_init, (void *) t_DSSTAtmosphericDrag_init_ },
              { Py_tp_getset, t_DSSTAtmosphericDrag__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTAtmosphericDrag)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(DSSTAtmosphericDrag, t_DSSTAtmosphericDrag, DSSTAtmosphericDrag);

            void t_DSSTAtmosphericDrag::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTAtmosphericDrag), &PY_TYPE_DEF(DSSTAtmosphericDrag), module, "DSSTAtmosphericDrag", 0);
            }

            void t_DSSTAtmosphericDrag::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTAtmosphericDrag), "class_", make_descriptor(DSSTAtmosphericDrag::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTAtmosphericDrag), "wrapfn_", make_descriptor(t_DSSTAtmosphericDrag::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTAtmosphericDrag), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTAtmosphericDrag_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTAtmosphericDrag::initializeClass, 1)))
                return NULL;
              return t_DSSTAtmosphericDrag::wrap_Object(DSSTAtmosphericDrag(((t_DSSTAtmosphericDrag *) arg)->object.this$));
            }
            static PyObject *t_DSSTAtmosphericDrag_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTAtmosphericDrag::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTAtmosphericDrag_init_(t_DSSTAtmosphericDrag *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::forces::drag::DragForce a0((jobject) NULL);
                  jdouble a1;
                  DSSTAtmosphericDrag object((jobject) NULL);

                  if (!parseArgs(args, "kD", ::org::orekit::forces::drag::DragForce::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = DSSTAtmosphericDrag(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
                  ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
                  jdouble a2;
                  DSSTAtmosphericDrag object((jobject) NULL);

                  if (!parseArgs(args, "kkD", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = DSSTAtmosphericDrag(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  DSSTAtmosphericDrag object((jobject) NULL);

                  if (!parseArgs(args, "kDDD", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTAtmosphericDrag(a0, a1, a2, a3));
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

            static PyObject *t_DSSTAtmosphericDrag_getAtmosphere(t_DSSTAtmosphericDrag *self)
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere result((jobject) NULL);
              OBJ_CALL(result = self->object.getAtmosphere());
              return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(result);
            }

            static PyObject *t_DSSTAtmosphericDrag_getDrag(t_DSSTAtmosphericDrag *self)
            {
              ::org::orekit::forces::drag::DragForce result((jobject) NULL);
              OBJ_CALL(result = self->object.getDrag());
              return ::org::orekit::forces::drag::t_DragForce::wrap_Object(result);
            }

            static PyObject *t_DSSTAtmosphericDrag_getEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args)
            {
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getEventDetectors());
                return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
              }

              return callSuper(PY_TYPE(DSSTAtmosphericDrag), (PyObject *) self, "getEventDetectors", args, 2);
            }

            static PyObject *t_DSSTAtmosphericDrag_getFieldEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }

              return callSuper(PY_TYPE(DSSTAtmosphericDrag), (PyObject *) self, "getFieldEventDetectors", args, 2);
            }

            static PyObject *t_DSSTAtmosphericDrag_getRbar(t_DSSTAtmosphericDrag *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRbar());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTAtmosphericDrag_getSpacecraft(t_DSSTAtmosphericDrag *self)
            {
              ::org::orekit::forces::drag::DragSensitive result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraft());
              return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(result);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__atmosphere(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere value((jobject) NULL);
              OBJ_CALL(value = self->object.getAtmosphere());
              return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__drag(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::org::orekit::forces::drag::DragForce value((jobject) NULL);
              OBJ_CALL(value = self->object.getDrag());
              return ::org::orekit::forces::drag::t_DragForce::wrap_Object(value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__eventDetectors(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::java::util::stream::Stream value((jobject) NULL);
              OBJ_CALL(value = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__rbar(t_DSSTAtmosphericDrag *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRbar());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__spacecraft(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::org::orekit::forces::drag::DragSensitive value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraft());
              return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorKey.h"
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

            ::java::lang::Class *StateVectorKey::class$ = NULL;
            jmethodID *StateVectorKey::mids$ = NULL;
            bool StateVectorKey::live$ = false;
            StateVectorKey *StateVectorKey::COMMENT = NULL;
            StateVectorKey *StateVectorKey::X = NULL;
            StateVectorKey *StateVectorKey::X_DOT = NULL;
            StateVectorKey *StateVectorKey::Y = NULL;
            StateVectorKey *StateVectorKey::Y_DOT = NULL;
            StateVectorKey *StateVectorKey::Z = NULL;
            StateVectorKey *StateVectorKey::Z_DOT = NULL;

            jclass StateVectorKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVectorKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_142a0c3d1387d79d] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;)Z");
                mids$[mid_valueOf_f2ce2861e28b037b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;");
                mids$[mid_values_9a55a0fa0ba93c65] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new StateVectorKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                X = new StateVectorKey(env->getStaticObjectField(cls, "X", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                X_DOT = new StateVectorKey(env->getStaticObjectField(cls, "X_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Y = new StateVectorKey(env->getStaticObjectField(cls, "Y", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Y_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Y_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Z = new StateVectorKey(env->getStaticObjectField(cls, "Z", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Z_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Z_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean StateVectorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_142a0c3d1387d79d], a0.this$, a1.this$, a2.this$);
            }

            StateVectorKey StateVectorKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return StateVectorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f2ce2861e28b037b], a0.this$));
            }

            JArray< StateVectorKey > StateVectorKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< StateVectorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_9a55a0fa0ba93c65]));
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
            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_StateVectorKey_values(PyTypeObject *type);
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data);
            static PyGetSetDef t_StateVectorKey__fields_[] = {
              DECLARE_GET_FIELD(t_StateVectorKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVectorKey__methods_[] = {
              DECLARE_METHOD(t_StateVectorKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, process, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorKey)[] = {
              { Py_tp_methods, t_StateVectorKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_StateVectorKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(StateVectorKey, t_StateVectorKey, StateVectorKey);
            PyObject *t_StateVectorKey::wrap_Object(const StateVectorKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_StateVectorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_StateVectorKey::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorKey), &PY_TYPE_DEF(StateVectorKey), module, "StateVectorKey", 0);
            }

            void t_StateVectorKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "class_", make_descriptor(StateVectorKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "wrapfn_", make_descriptor(t_StateVectorKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(StateVectorKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "COMMENT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z_DOT)));
            }

            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorKey::initializeClass, 1)))
                return NULL;
              return t_StateVectorKey::wrap_Object(StateVectorKey(((t_StateVectorKey *) arg)->object.this$));
            }
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::StateVector a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              StateVectorKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::StateVectorKey::valueOf(a0));
                return t_StateVectorKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_StateVectorKey_values(PyTypeObject *type)
            {
              JArray< StateVectorKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::StateVectorKey::values());
              return JArray<jobject>(result.this$).wrap(t_StateVectorKey::wrap_jobject);
            }
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data)
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
#include "org/orekit/gnss/metric/messages/common/CodeBias.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *CodeBias::class$ = NULL;
            jmethodID *CodeBias::mids$ = NULL;
            bool CodeBias::live$ = false;

            jclass CodeBias::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/CodeBias");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_getCodeBias_b74f83833fdad017] = env->getMethodID(cls, "getCodeBias", "()D");
                mids$[mid_getSignalID_55546ef6a647f39b] = env->getMethodID(cls, "getSignalID", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CodeBias::CodeBias(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

            jdouble CodeBias::getCodeBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCodeBias_b74f83833fdad017]);
            }

            jint CodeBias::getSignalID() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalID_55546ef6a647f39b]);
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
            static PyObject *t_CodeBias_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CodeBias_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CodeBias_init_(t_CodeBias *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CodeBias_getCodeBias(t_CodeBias *self);
            static PyObject *t_CodeBias_getSignalID(t_CodeBias *self);
            static PyObject *t_CodeBias_get__codeBias(t_CodeBias *self, void *data);
            static PyObject *t_CodeBias_get__signalID(t_CodeBias *self, void *data);
            static PyGetSetDef t_CodeBias__fields_[] = {
              DECLARE_GET_FIELD(t_CodeBias, codeBias),
              DECLARE_GET_FIELD(t_CodeBias, signalID),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CodeBias__methods_[] = {
              DECLARE_METHOD(t_CodeBias, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CodeBias, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CodeBias, getCodeBias, METH_NOARGS),
              DECLARE_METHOD(t_CodeBias, getSignalID, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CodeBias)[] = {
              { Py_tp_methods, t_CodeBias__methods_ },
              { Py_tp_init, (void *) t_CodeBias_init_ },
              { Py_tp_getset, t_CodeBias__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CodeBias)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CodeBias, t_CodeBias, CodeBias);

            void t_CodeBias::install(PyObject *module)
            {
              installType(&PY_TYPE(CodeBias), &PY_TYPE_DEF(CodeBias), module, "CodeBias", 0);
            }

            void t_CodeBias::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "class_", make_descriptor(CodeBias::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "wrapfn_", make_descriptor(t_CodeBias::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CodeBias_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CodeBias::initializeClass, 1)))
                return NULL;
              return t_CodeBias::wrap_Object(CodeBias(((t_CodeBias *) arg)->object.this$));
            }
            static PyObject *t_CodeBias_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CodeBias::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CodeBias_init_(t_CodeBias *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              CodeBias object((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                INT_CALL(object = CodeBias(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CodeBias_getCodeBias(t_CodeBias *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCodeBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CodeBias_getSignalID(t_CodeBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalID());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CodeBias_get__codeBias(t_CodeBias *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCodeBias());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CodeBias_get__signalID(t_CodeBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalID());
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
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader.h"
#include "java/io/InputStream.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "java/lang/String.h"
#include "java/util/SortedSet.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimationLoader::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimationLoader::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimationLoader::live$ = false;

            jclass MarshallSolarActivityFutureEstimationLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7bade9164d1f84b1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_2110432f762213c9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_7961e54fd3a47d94] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimationLoader::MarshallSolarActivityFutureEstimationLoader(const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_7bade9164d1f84b1, a0.this$)) {}

            MarshallSolarActivityFutureEstimationLoader::MarshallSolarActivityFutureEstimationLoader(const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a0, const ::org::orekit::time::TimeScale & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_2110432f762213c9, a0.this$, a1.this$)) {}

            ::java::util::SortedSet MarshallSolarActivityFutureEstimationLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_7961e54fd3a47d94]));
            }

            void MarshallSolarActivityFutureEstimationLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_of_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static int t_MarshallSolarActivityFutureEstimationLoader_init_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_getDataSet(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_loadData(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__dataSet(t_MarshallSolarActivityFutureEstimationLoader *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimationLoader__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader, dataSet),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimationLoader__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, getDataSet, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, loadData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimationLoader)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimationLoader__methods_ },
              { Py_tp_init, (void *) t_MarshallSolarActivityFutureEstimationLoader_init_ },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimationLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimationLoader)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimationLoader, t_MarshallSolarActivityFutureEstimationLoader, MarshallSolarActivityFutureEstimationLoader);
            PyObject *t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(const MarshallSolarActivityFutureEstimationLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader *self = (t_MarshallSolarActivityFutureEstimationLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader *self = (t_MarshallSolarActivityFutureEstimationLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimationLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimationLoader), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader), module, "MarshallSolarActivityFutureEstimationLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader$LineParameters)));
            }

            void t_MarshallSolarActivityFutureEstimationLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "class_", make_descriptor(MarshallSolarActivityFutureEstimationLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimationLoader::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(MarshallSolarActivityFutureEstimationLoader(((t_MarshallSolarActivityFutureEstimationLoader *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimationLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_of_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_MarshallSolarActivityFutureEstimationLoader_init_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a0((jobject) NULL);
                  PyTypeObject **p0;
                  MarshallSolarActivityFutureEstimationLoader object((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimationLoader(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  MarshallSolarActivityFutureEstimationLoader object((jobject) NULL);

                  if (!parseArgs(args, "Kk", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a1))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimationLoader(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
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

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_getDataSet(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              ::java::util::SortedSet result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getDataSet());
                return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters));
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader), (PyObject *) self, "getDataSet", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_loadData(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              ::java::io::InputStream a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.loadData(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader), (PyObject *) self, "loadData", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__dataSet(t_MarshallSolarActivityFutureEstimationLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/SpinStabilized.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/Attitude.h"
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
          mids$[mid_init$_e16a13c4339393db] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getUnderlyingAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpinStabilized::SpinStabilized(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e16a13c4339393db, a0.this$, a1.this$, a2.this$, a3)) {}

      ::org::orekit::attitudes::Attitude SpinStabilized::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude SpinStabilized::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider SpinStabilized::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_331f12bb6017243b]));
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
            mids$[mid_init$_2a76ff63410d1b77] = env->getMethodID(cls, "<init>", "(DDJDDD)V");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getMax_b74f83833fdad017] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_b74f83833fdad017] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_b74f83833fdad017] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_b74f83833fdad017] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_b74f83833fdad017] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getVariance_b74f83833fdad017] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StatisticalSummaryValues::StatisticalSummaryValues(jdouble a0, jdouble a1, jlong a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a76ff63410d1b77, a0, a1, a2, a3, a4, a5)) {}

        jboolean StatisticalSummaryValues::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        jdouble StatisticalSummaryValues::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_b74f83833fdad017]);
        }

        jdouble StatisticalSummaryValues::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_b74f83833fdad017]);
        }

        jdouble StatisticalSummaryValues::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_b74f83833fdad017]);
        }

        jlong StatisticalSummaryValues::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
        }

        jdouble StatisticalSummaryValues::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_b74f83833fdad017]);
        }

        jdouble StatisticalSummaryValues::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_b74f83833fdad017]);
        }

        jdouble StatisticalSummaryValues::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_b74f83833fdad017]);
        }

        jint StatisticalSummaryValues::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        ::java::lang::String StatisticalSummaryValues::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
#include "org/orekit/propagation/conversion/AbstractPropagatorConverter.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractPropagatorConverter::class$ = NULL;
        jmethodID *AbstractPropagatorConverter::mids$ = NULL;
        bool AbstractPropagatorConverter::live$ = false;

        jclass AbstractPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_convert_1085fbc3099561ad] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_ed49a95e057deeb1] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_8c138e9dd275b235] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_439cb7b3f99fe6c0] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_getAdaptedPropagator_75ab23d3f479a59b] = env->getMethodID(cls, "getAdaptedPropagator", "()Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getRMS_b74f83833fdad017] = env->getMethodID(cls, "getRMS", "()D");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getModel_6a20d4ddc607b9bb] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getTargetSize_55546ef6a647f39b] = env->getMethodID(cls, "getTargetSize", "()I");
            mids$[mid_getSample_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSample", "()Ljava/util/List;");
            mids$[mid_isOnlyPosition_9ab94ac1dc23b105] = env->getMethodID(cls, "isOnlyPosition", "()Z");
            mids$[mid_getObjectiveFunction_72c2cddd79f92b83] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const JArray< ::java::lang::String > & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_1085fbc3099561ad], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const ::java::util::List & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_ed49a95e057deeb1], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const JArray< ::java::lang::String > & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_8c138e9dd275b235], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const ::java::util::List & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_439cb7b3f99fe6c0], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator AbstractPropagatorConverter::getAdaptedPropagator() const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getAdaptedPropagator_75ab23d3f479a59b]));
        }

        jint AbstractPropagatorConverter::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
        }

        jdouble AbstractPropagatorConverter::getRMS() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRMS_b74f83833fdad017]);
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
        static PyObject *t_AbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorConverter_convert(t_AbstractPropagatorConverter *self, PyObject *args);
        static PyObject *t_AbstractPropagatorConverter_getAdaptedPropagator(t_AbstractPropagatorConverter *self);
        static PyObject *t_AbstractPropagatorConverter_getEvaluations(t_AbstractPropagatorConverter *self);
        static PyObject *t_AbstractPropagatorConverter_getRMS(t_AbstractPropagatorConverter *self);
        static PyObject *t_AbstractPropagatorConverter_get__adaptedPropagator(t_AbstractPropagatorConverter *self, void *data);
        static PyObject *t_AbstractPropagatorConverter_get__evaluations(t_AbstractPropagatorConverter *self, void *data);
        static PyObject *t_AbstractPropagatorConverter_get__rMS(t_AbstractPropagatorConverter *self, void *data);
        static PyGetSetDef t_AbstractPropagatorConverter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractPropagatorConverter, adaptedPropagator),
          DECLARE_GET_FIELD(t_AbstractPropagatorConverter, evaluations),
          DECLARE_GET_FIELD(t_AbstractPropagatorConverter, rMS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_AbstractPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, convert, METH_VARARGS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, getAdaptedPropagator, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorConverter, getRMS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractPropagatorConverter)[] = {
          { Py_tp_methods, t_AbstractPropagatorConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractPropagatorConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractPropagatorConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractPropagatorConverter, t_AbstractPropagatorConverter, AbstractPropagatorConverter);

        void t_AbstractPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractPropagatorConverter), &PY_TYPE_DEF(AbstractPropagatorConverter), module, "AbstractPropagatorConverter", 0);
        }

        void t_AbstractPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorConverter), "class_", make_descriptor(AbstractPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorConverter), "wrapfn_", make_descriptor(t_AbstractPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_AbstractPropagatorConverter::wrap_Object(AbstractPropagatorConverter(((t_AbstractPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_AbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractPropagatorConverter_convert(t_AbstractPropagatorConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              JArray< ::java::lang::String > a2((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZ[s", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              JArray< ::java::lang::String > a3((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDI[s", ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              ::java::util::List a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDIK", ::org::orekit::propagation::Propagator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "convert", args);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorConverter_getAdaptedPropagator(t_AbstractPropagatorConverter *self)
        {
          ::org::orekit::propagation::Propagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdaptedPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorConverter_getEvaluations(t_AbstractPropagatorConverter *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractPropagatorConverter_getRMS(t_AbstractPropagatorConverter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRMS());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorConverter_get__adaptedPropagator(t_AbstractPropagatorConverter *self, void *data)
        {
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdaptedPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorConverter_get__evaluations(t_AbstractPropagatorConverter *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractPropagatorConverter_get__rMS(t_AbstractPropagatorConverter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRMS());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/CombinatoricsUtils.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CombinatoricsUtils::class$ = NULL;
      jmethodID *CombinatoricsUtils::mids$ = NULL;
      bool CombinatoricsUtils::live$ = false;
      jint CombinatoricsUtils::MAX_BELL = (jint) 0;

      jclass CombinatoricsUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CombinatoricsUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_bellNumber_f4947a88f79e0725] = env->getStaticMethodID(cls, "bellNumber", "(I)J");
          mids$[mid_binomialCoefficient_86fb9ef85bc94662] = env->getStaticMethodID(cls, "binomialCoefficient", "(II)J");
          mids$[mid_binomialCoefficientDouble_cad98089d00f8a5b] = env->getStaticMethodID(cls, "binomialCoefficientDouble", "(II)D");
          mids$[mid_binomialCoefficientLog_cad98089d00f8a5b] = env->getStaticMethodID(cls, "binomialCoefficientLog", "(II)D");
          mids$[mid_checkBinomial_3313c75e3e16c428] = env->getStaticMethodID(cls, "checkBinomial", "(II)V");
          mids$[mid_combinationsIterator_39d5da9b3f886b53] = env->getStaticMethodID(cls, "combinationsIterator", "(II)Ljava/util/Iterator;");
          mids$[mid_factorial_f4947a88f79e0725] = env->getStaticMethodID(cls, "factorial", "(I)J");
          mids$[mid_factorialDouble_2afcbc21f4e57ab2] = env->getStaticMethodID(cls, "factorialDouble", "(I)D");
          mids$[mid_factorialLog_2afcbc21f4e57ab2] = env->getStaticMethodID(cls, "factorialLog", "(I)D");
          mids$[mid_partitions_b6d6fcabc14abaa4] = env->getStaticMethodID(cls, "partitions", "(Ljava/util/List;)Ljava/util/stream/Stream;");
          mids$[mid_permutations_b6d6fcabc14abaa4] = env->getStaticMethodID(cls, "permutations", "(Ljava/util/List;)Ljava/util/stream/Stream;");
          mids$[mid_stirlingS2_86fb9ef85bc94662] = env->getStaticMethodID(cls, "stirlingS2", "(II)J");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MAX_BELL = env->getStaticIntField(cls, "MAX_BELL");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jlong CombinatoricsUtils::bellNumber(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_bellNumber_f4947a88f79e0725], a0);
      }

      jlong CombinatoricsUtils::binomialCoefficient(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_binomialCoefficient_86fb9ef85bc94662], a0, a1);
      }

      jdouble CombinatoricsUtils::binomialCoefficientDouble(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_binomialCoefficientDouble_cad98089d00f8a5b], a0, a1);
      }

      jdouble CombinatoricsUtils::binomialCoefficientLog(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_binomialCoefficientLog_cad98089d00f8a5b], a0, a1);
      }

      void CombinatoricsUtils::checkBinomial(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkBinomial_3313c75e3e16c428], a0, a1);
      }

      ::java::util::Iterator CombinatoricsUtils::combinationsIterator(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::Iterator(env->callStaticObjectMethod(cls, mids$[mid_combinationsIterator_39d5da9b3f886b53], a0, a1));
      }

      jlong CombinatoricsUtils::factorial(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_factorial_f4947a88f79e0725], a0);
      }

      jdouble CombinatoricsUtils::factorialDouble(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_factorialDouble_2afcbc21f4e57ab2], a0);
      }

      jdouble CombinatoricsUtils::factorialLog(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_factorialLog_2afcbc21f4e57ab2], a0);
      }

      ::java::util::stream::Stream CombinatoricsUtils::partitions(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_partitions_b6d6fcabc14abaa4], a0.this$));
      }

      ::java::util::stream::Stream CombinatoricsUtils::permutations(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_permutations_b6d6fcabc14abaa4], a0.this$));
      }

      jlong CombinatoricsUtils::stirlingS2(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_stirlingS2_86fb9ef85bc94662], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_CombinatoricsUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_bellNumber(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_binomialCoefficient(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_binomialCoefficientDouble(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_binomialCoefficientLog(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_checkBinomial(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_combinationsIterator(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_factorial(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_factorialDouble(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_factorialLog(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_partitions(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_permutations(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_stirlingS2(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_CombinatoricsUtils__methods_[] = {
        DECLARE_METHOD(t_CombinatoricsUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, bellNumber, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficient, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficientDouble, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficientLog, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, checkBinomial, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, combinationsIterator, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorial, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorialDouble, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorialLog, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, partitions, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, permutations, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, stirlingS2, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CombinatoricsUtils)[] = {
        { Py_tp_methods, t_CombinatoricsUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CombinatoricsUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CombinatoricsUtils, t_CombinatoricsUtils, CombinatoricsUtils);

      void t_CombinatoricsUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(CombinatoricsUtils), &PY_TYPE_DEF(CombinatoricsUtils), module, "CombinatoricsUtils", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "FactorialLog", make_descriptor(&PY_TYPE_DEF(CombinatoricsUtils$FactorialLog)));
      }

      void t_CombinatoricsUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "class_", make_descriptor(CombinatoricsUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "wrapfn_", make_descriptor(t_CombinatoricsUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(CombinatoricsUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "MAX_BELL", make_descriptor(CombinatoricsUtils::MAX_BELL));
      }

      static PyObject *t_CombinatoricsUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CombinatoricsUtils::initializeClass, 1)))
          return NULL;
        return t_CombinatoricsUtils::wrap_Object(CombinatoricsUtils(((t_CombinatoricsUtils *) arg)->object.this$));
      }
      static PyObject *t_CombinatoricsUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CombinatoricsUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CombinatoricsUtils_bellNumber(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jlong result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::bellNumber(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "bellNumber", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficient(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficient(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficient", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficientDouble(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficientDouble(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficientDouble", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficientLog(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficientLog(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficientLog", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_checkBinomial(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::CombinatoricsUtils::checkBinomial(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkBinomial", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_combinationsIterator(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        ::java::util::Iterator result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::combinationsIterator(a0, a1));
          return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
        }

        PyErr_SetArgsError(type, "combinationsIterator", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorial(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jlong result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorial(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "factorial", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorialDouble(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorialDouble(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "factorialDouble", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorialLog(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorialLog(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "factorialLog", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_partitions(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::partitions(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "partitions", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_permutations(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::permutations(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "permutations", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_stirlingS2(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::stirlingS2(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "stirlingS2", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonEphemerisGenerator.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonEphemerisGenerator::class$ = NULL;
      jmethodID *PythonEphemerisGenerator::mids$ = NULL;
      bool PythonEphemerisGenerator::live$ = false;

      jclass PythonEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getGeneratedEphemeris_2d80cda3dc1f1422] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEphemerisGenerator::PythonEphemerisGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonEphemerisGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonEphemerisGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonEphemerisGenerator::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEphemerisGenerator_init_(t_PythonEphemerisGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEphemerisGenerator_finalize(t_PythonEphemerisGenerator *self);
      static PyObject *t_PythonEphemerisGenerator_pythonExtension(t_PythonEphemerisGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEphemerisGenerator_get__self(t_PythonEphemerisGenerator *self, void *data);
      static PyGetSetDef t_PythonEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEphemerisGenerator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisGenerator)[] = {
        { Py_tp_methods, t_PythonEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonEphemerisGenerator_init_ },
        { Py_tp_getset, t_PythonEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEphemerisGenerator, t_PythonEphemerisGenerator, PythonEphemerisGenerator);

      void t_PythonEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEphemerisGenerator), &PY_TYPE_DEF(PythonEphemerisGenerator), module, "PythonEphemerisGenerator", 1);
      }

      void t_PythonEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "class_", make_descriptor(PythonEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "wrapfn_", make_descriptor(t_PythonEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEphemerisGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;", (void *) t_PythonEphemerisGenerator_getGeneratedEphemeris0 },
          { "pythonDecRef", "()V", (void *) t_PythonEphemerisGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonEphemerisGenerator::wrap_Object(PythonEphemerisGenerator(((t_PythonEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEphemerisGenerator_init_(t_PythonEphemerisGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonEphemerisGenerator object((jobject) NULL);

        INT_CALL(object = PythonEphemerisGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEphemerisGenerator_finalize(t_PythonEphemerisGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEphemerisGenerator_pythonExtension(t_PythonEphemerisGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeneratedEphemeris", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::BoundedPropagator::initializeClass, &value))
        {
          throwTypeError("getGeneratedEphemeris", result);
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

      static void JNICALL t_PythonEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEphemerisGenerator_get__self(t_PythonEphemerisGenerator *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/AbstractAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractAlmanac::class$ = NULL;
            jmethodID *AbstractAlmanac::mids$ = NULL;
            bool AbstractAlmanac::live$ = false;

            jclass AbstractAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2aa803b9073e6a76] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf2_b74f83833fdad017] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCic_b74f83833fdad017] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_b74f83833fdad017] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_b74f83833fdad017] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_b74f83833fdad017] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_b74f83833fdad017] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_b74f83833fdad017] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getIDot_b74f83833fdad017] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getMeanMotion_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotion", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractAlmanac::AbstractAlmanac(jdouble a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(env->newObject(initializeClass, &mids$, mid_init$_2aa803b9073e6a76, a0, a1, a2)) {}

            jdouble AbstractAlmanac::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_b74f83833fdad017]);
            }

            jdouble AbstractAlmanac::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_b74f83833fdad017]);
            }

            jdouble AbstractAlmanac::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_b74f83833fdad017]);
            }

            jdouble AbstractAlmanac::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_b74f83833fdad017]);
            }

            jdouble AbstractAlmanac::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_b74f83833fdad017]);
            }

            jdouble AbstractAlmanac::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_b74f83833fdad017]);
            }

            jdouble AbstractAlmanac::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_b74f83833fdad017]);
            }

            jdouble AbstractAlmanac::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_b74f83833fdad017]);
            }

            jdouble AbstractAlmanac::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_b74f83833fdad017]);
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
            static PyObject *t_AbstractAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractAlmanac_init_(t_AbstractAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractAlmanac_getAf2(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCic(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCis(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCrc(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCrs(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCuc(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getCus(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getIDot(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_getMeanMotion(t_AbstractAlmanac *self);
            static PyObject *t_AbstractAlmanac_get__af2(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cic(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cis(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__crc(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__crs(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cuc(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__cus(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__iDot(t_AbstractAlmanac *self, void *data);
            static PyObject *t_AbstractAlmanac_get__meanMotion(t_AbstractAlmanac *self, void *data);
            static PyGetSetDef t_AbstractAlmanac__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractAlmanac, af2),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cic),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cis),
              DECLARE_GET_FIELD(t_AbstractAlmanac, crc),
              DECLARE_GET_FIELD(t_AbstractAlmanac, crs),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cuc),
              DECLARE_GET_FIELD(t_AbstractAlmanac, cus),
              DECLARE_GET_FIELD(t_AbstractAlmanac, iDot),
              DECLARE_GET_FIELD(t_AbstractAlmanac, meanMotion),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractAlmanac__methods_[] = {
              DECLARE_METHOD(t_AbstractAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractAlmanac, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCic, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCis, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getCus, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractAlmanac, getMeanMotion, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractAlmanac)[] = {
              { Py_tp_methods, t_AbstractAlmanac__methods_ },
              { Py_tp_init, (void *) t_AbstractAlmanac_init_ },
              { Py_tp_getset, t_AbstractAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CommonGnssData),
              NULL
            };

            DEFINE_TYPE(AbstractAlmanac, t_AbstractAlmanac, AbstractAlmanac);

            void t_AbstractAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractAlmanac), &PY_TYPE_DEF(AbstractAlmanac), module, "AbstractAlmanac", 0);
            }

            void t_AbstractAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "class_", make_descriptor(AbstractAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "wrapfn_", make_descriptor(t_AbstractAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractAlmanac::initializeClass, 1)))
                return NULL;
              return t_AbstractAlmanac::wrap_Object(AbstractAlmanac(((t_AbstractAlmanac *) arg)->object.this$));
            }
            static PyObject *t_AbstractAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractAlmanac_init_(t_AbstractAlmanac *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              AbstractAlmanac object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = AbstractAlmanac(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractAlmanac_getAf2(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCic(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCis(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCrc(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCrs(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCuc(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getCus(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getIDot(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_getMeanMotion(t_AbstractAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractAlmanac_get__af2(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cic(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cis(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__crc(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__crs(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cuc(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__cus(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__iDot(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractAlmanac_get__meanMotion(t_AbstractAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
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

              ::java::lang::Class *OrbitPhysicalPropertiesKey::class$ = NULL;
              jmethodID *OrbitPhysicalPropertiesKey::mids$ = NULL;
              bool OrbitPhysicalPropertiesKey::live$ = false;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_INT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_MAX_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_MIN_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_TYP_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_ACTUATOR_TYPE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_CONTROL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_CONTROL_MODE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_KNOWLEDGE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_POINTING = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AVG_MANEUVER_FREQ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::BUS_MODEL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::COMMENT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DOCKED_WITH = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_COEFF_NOM = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_CONST_AREA = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_UNCERTAINTY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRY_MASS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DV_BOL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DV_REMAINING = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::INITIAL_WET_MASS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IYY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IYZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IZZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::MANUFACTURER = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::MAX_THRUST = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_INT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME_EPOCH = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q1 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q2 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q3 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_QC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::REFLECTANCE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SOLAR_RAD_COEFF = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SOLAR_RAD_UNCERTAINTY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SRP_CONST_AREA = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_ABSOLUTE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::WET_MASS = NULL;

              jclass OrbitPhysicalPropertiesKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_7c8f2f452bd42d0a] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;)Z");
                  mids$[mid_valueOf_8319c2a27f5ee4bd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;");
                  mids$[mid_values_b67aee829b8e142a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AREA_ALONG_OEB_INT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_INT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_ALONG_OEB_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_ALONG_OEB_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_MAX_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_MAX_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_MIN_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_MIN_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_TYP_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_TYP_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_ACTUATOR_TYPE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_ACTUATOR_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_CONTROL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_CONTROL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_CONTROL_MODE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_CONTROL_MODE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_KNOWLEDGE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_KNOWLEDGE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_POINTING = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_POINTING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AVG_MANEUVER_FREQ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AVG_MANEUVER_FREQ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  BUS_MODEL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "BUS_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  COMMENT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DOCKED_WITH = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DOCKED_WITH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_COEFF_NOM = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_COEFF_NOM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_CONST_AREA = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_CONST_AREA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_UNCERTAINTY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRY_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRY_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DV_BOL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DV_BOL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DV_REMAINING = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DV_REMAINING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  INITIAL_WET_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "INITIAL_WET_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IYY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IYZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IZZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  MANUFACTURER = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "MANUFACTURER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  MAX_THRUST = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "MAX_THRUST", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_INT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_INT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_PARENT_FRAME = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_PARENT_FRAME_EPOCH = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q1 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q1", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q2 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q2", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q3 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q3", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_QC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_QC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  REFLECTANCE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "REFLECTANCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SOLAR_RAD_COEFF = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SOLAR_RAD_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SOLAR_RAD_UNCERTAINTY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SOLAR_RAD_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SRP_CONST_AREA = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SRP_CONST_AREA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_ABSOLUTE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  WET_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "WET_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitPhysicalPropertiesKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_7c8f2f452bd42d0a], a0.this$, a1.this$, a2.this$);
              }

              OrbitPhysicalPropertiesKey OrbitPhysicalPropertiesKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitPhysicalPropertiesKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8319c2a27f5ee4bd], a0.this$));
              }

              JArray< OrbitPhysicalPropertiesKey > OrbitPhysicalPropertiesKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitPhysicalPropertiesKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b67aee829b8e142a]));
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
              static PyObject *t_OrbitPhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalPropertiesKey_of_(t_OrbitPhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_process(t_OrbitPhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_values(PyTypeObject *type);
              static PyObject *t_OrbitPhysicalPropertiesKey_get__parameters_(t_OrbitPhysicalPropertiesKey *self, void *data);
              static PyGetSetDef t_OrbitPhysicalPropertiesKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitPhysicalPropertiesKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitPhysicalPropertiesKey__methods_[] = {
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitPhysicalPropertiesKey)[] = {
                { Py_tp_methods, t_OrbitPhysicalPropertiesKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitPhysicalPropertiesKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitPhysicalPropertiesKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitPhysicalPropertiesKey, t_OrbitPhysicalPropertiesKey, OrbitPhysicalPropertiesKey);
              PyObject *t_OrbitPhysicalPropertiesKey::wrap_Object(const OrbitPhysicalPropertiesKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitPhysicalPropertiesKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitPhysicalPropertiesKey *self = (t_OrbitPhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitPhysicalPropertiesKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitPhysicalPropertiesKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitPhysicalPropertiesKey *self = (t_OrbitPhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitPhysicalPropertiesKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitPhysicalPropertiesKey), &PY_TYPE_DEF(OrbitPhysicalPropertiesKey), module, "OrbitPhysicalPropertiesKey", 0);
              }

              void t_OrbitPhysicalPropertiesKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "class_", make_descriptor(OrbitPhysicalPropertiesKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "wrapfn_", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitPhysicalPropertiesKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_INT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_INT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_MAX_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_MAX_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_MIN_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_MIN_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_TYP_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_TYP_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_ACTUATOR_TYPE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_ACTUATOR_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_CONTROL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_CONTROL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_CONTROL_MODE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_CONTROL_MODE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_KNOWLEDGE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_KNOWLEDGE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_POINTING", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_POINTING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AVG_MANEUVER_FREQ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AVG_MANEUVER_FREQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "BUS_MODEL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::BUS_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "COMMENT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DOCKED_WITH", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DOCKED_WITH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_COEFF_NOM", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_COEFF_NOM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_CONST_AREA", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_CONST_AREA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_UNCERTAINTY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_UNCERTAINTY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRY_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DV_BOL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DV_BOL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DV_REMAINING", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DV_REMAINING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "INITIAL_WET_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::INITIAL_WET_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IYY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IYZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IZZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IZZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "MANUFACTURER", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::MANUFACTURER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "MAX_THRUST", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::MAX_THRUST)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_INT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_INT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_PARENT_FRAME", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_PARENT_FRAME_EPOCH", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q1", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q2", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q3", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_QC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_QC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "REFLECTANCE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::REFLECTANCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SOLAR_RAD_COEFF", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SOLAR_RAD_COEFF)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SOLAR_RAD_UNCERTAINTY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SOLAR_RAD_UNCERTAINTY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SRP_CONST_AREA", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SRP_CONST_AREA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_ABSOLUTE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_ABSOLUTE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "WET_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::WET_MASS)));
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitPhysicalPropertiesKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitPhysicalPropertiesKey::wrap_Object(OrbitPhysicalPropertiesKey(((t_OrbitPhysicalPropertiesKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitPhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitPhysicalPropertiesKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_of_(t_OrbitPhysicalPropertiesKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_process(t_OrbitPhysicalPropertiesKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitPhysicalPropertiesKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalPropertiesKey::valueOf(a0));
                  return t_OrbitPhysicalPropertiesKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_values(PyTypeObject *type)
              {
                JArray< OrbitPhysicalPropertiesKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalPropertiesKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitPhysicalPropertiesKey::wrap_jobject);
              }
              static PyObject *t_OrbitPhysicalPropertiesKey_get__parameters_(t_OrbitPhysicalPropertiesKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmData::class$ = NULL;
            jmethodID *CdmData::mids$ = NULL;
            bool CdmData::live$ = false;

            jclass CdmData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0b71fcd2b4cb438c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)V");
                mids$[mid_init$_49e5b7252dc97c59] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_init$_92d754c3a78a9806] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_init$_4e5cb386720290df] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_getAdditionalCovMetadataBlock_9eabb6f701c4e4fe] = env->getMethodID(cls, "getAdditionalCovMetadataBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;");
                mids$[mid_getAdditionalParametersBlock_e4566e0d03e79656] = env->getMethodID(cls, "getAdditionalParametersBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;");
                mids$[mid_getComments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
                mids$[mid_getODParametersBlock_cd91ddfcfbea3896] = env->getMethodID(cls, "getODParametersBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;");
                mids$[mid_getRTNCovarianceBlock_975a15045a985502] = env->getMethodID(cls, "getRTNCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;");
                mids$[mid_getSig3EigVec3CovarianceBlock_5c069924ff4aa42b] = env->getMethodID(cls, "getSig3EigVec3CovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;");
                mids$[mid_getStateVectorBlock_e063c4a483382013] = env->getMethodID(cls, "getStateVectorBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/StateVector;");
                mids$[mid_getUserDefinedBlock_757fcfae3141e23d] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                mids$[mid_getXYZCovarianceBlock_2b6d071b00b37f40] = env->getMethodID(cls, "getXYZCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;");
                mids$[mid_setAdditionalParametersBlock_504202b07f6cff36] = env->getMethodID(cls, "setAdditionalParametersBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;)V");
                mids$[mid_setCovarianceMatrixBlock_ba8d39caad7cffba] = env->getMethodID(cls, "setCovarianceMatrixBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)V");
                mids$[mid_setODParametersBlock_c67d81394aa7ad4f] = env->getMethodID(cls, "setODParametersBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;)V");
                mids$[mid_setUserDefinedBlock_b829f4a4b34395d9] = env->getMethodID(cls, "setUserDefinedBlock", "(Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0b71fcd2b4cb438c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49e5b7252dc97c59, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance & a5, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_92d754c3a78a9806, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance & a5, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4e5cb386720290df, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

            ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata CdmData::getAdditionalCovMetadataBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata(env->callObjectMethod(this$, mids$[mid_getAdditionalCovMetadataBlock_9eabb6f701c4e4fe]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters CdmData::getAdditionalParametersBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters(env->callObjectMethod(this$, mids$[mid_getAdditionalParametersBlock_e4566e0d03e79656]));
            }

            ::java::util::List CdmData::getComments() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_e62d3bb06d56d7e3]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::ODParameters CdmData::getODParametersBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ODParameters(env->callObjectMethod(this$, mids$[mid_getODParametersBlock_cd91ddfcfbea3896]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance CdmData::getRTNCovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance(env->callObjectMethod(this$, mids$[mid_getRTNCovarianceBlock_975a15045a985502]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance CdmData::getSig3EigVec3CovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance(env->callObjectMethod(this$, mids$[mid_getSig3EigVec3CovarianceBlock_5c069924ff4aa42b]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::StateVector CdmData::getStateVectorBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::StateVector(env->callObjectMethod(this$, mids$[mid_getStateVectorBlock_e063c4a483382013]));
            }

            ::org::orekit::files::ccsds::ndm::odm::UserDefined CdmData::getUserDefinedBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_757fcfae3141e23d]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance CdmData::getXYZCovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance(env->callObjectMethod(this$, mids$[mid_getXYZCovarianceBlock_2b6d071b00b37f40]));
            }

            void CdmData::setAdditionalParametersBlock(const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAdditionalParametersBlock_504202b07f6cff36], a0.this$);
            }

            void CdmData::setCovarianceMatrixBlock(const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixBlock_ba8d39caad7cffba], a0.this$);
            }

            void CdmData::setODParametersBlock(const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setODParametersBlock_c67d81394aa7ad4f], a0.this$);
            }

            void CdmData::setUserDefinedBlock(const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUserDefinedBlock_b829f4a4b34395d9], a0.this$);
            }

            void CdmData::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
            static PyObject *t_CdmData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmData_init_(t_CdmData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmData_getAdditionalCovMetadataBlock(t_CdmData *self);
            static PyObject *t_CdmData_getAdditionalParametersBlock(t_CdmData *self);
            static PyObject *t_CdmData_getComments(t_CdmData *self);
            static PyObject *t_CdmData_getODParametersBlock(t_CdmData *self);
            static PyObject *t_CdmData_getRTNCovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_getSig3EigVec3CovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_getStateVectorBlock(t_CdmData *self);
            static PyObject *t_CdmData_getUserDefinedBlock(t_CdmData *self);
            static PyObject *t_CdmData_getXYZCovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_setAdditionalParametersBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setCovarianceMatrixBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setODParametersBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setUserDefinedBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_validate(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_get__additionalCovMetadataBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__additionalParametersBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__additionalParametersBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__comments(t_CdmData *self, void *data);
            static int t_CdmData_set__covarianceMatrixBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__oDParametersBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__oDParametersBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__rTNCovarianceBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__sig3EigVec3CovarianceBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__stateVectorBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__userDefinedBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__userDefinedBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__xYZCovarianceBlock(t_CdmData *self, void *data);
            static PyGetSetDef t_CdmData__fields_[] = {
              DECLARE_GET_FIELD(t_CdmData, additionalCovMetadataBlock),
              DECLARE_GETSET_FIELD(t_CdmData, additionalParametersBlock),
              DECLARE_GET_FIELD(t_CdmData, comments),
              DECLARE_SET_FIELD(t_CdmData, covarianceMatrixBlock),
              DECLARE_GETSET_FIELD(t_CdmData, oDParametersBlock),
              DECLARE_GET_FIELD(t_CdmData, rTNCovarianceBlock),
              DECLARE_GET_FIELD(t_CdmData, sig3EigVec3CovarianceBlock),
              DECLARE_GET_FIELD(t_CdmData, stateVectorBlock),
              DECLARE_GETSET_FIELD(t_CdmData, userDefinedBlock),
              DECLARE_GET_FIELD(t_CdmData, xYZCovarianceBlock),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmData__methods_[] = {
              DECLARE_METHOD(t_CdmData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmData, getAdditionalCovMetadataBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getAdditionalParametersBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getComments, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getODParametersBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getRTNCovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getSig3EigVec3CovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getStateVectorBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getUserDefinedBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getXYZCovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, setAdditionalParametersBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setCovarianceMatrixBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setODParametersBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setUserDefinedBlock, METH_O),
              DECLARE_METHOD(t_CdmData, validate, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmData)[] = {
              { Py_tp_methods, t_CdmData__methods_ },
              { Py_tp_init, (void *) t_CdmData_init_ },
              { Py_tp_getset, t_CdmData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmData, t_CdmData, CdmData);

            void t_CdmData::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmData), &PY_TYPE_DEF(CdmData), module, "CdmData", 0);
            }

            void t_CdmData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "class_", make_descriptor(CdmData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "wrapfn_", make_descriptor(t_CdmData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmData::initializeClass, 1)))
                return NULL;
              return t_CdmData::wrap_Object(CdmData(((t_CdmData *) arg)->object.this$));
            }
            static PyObject *t_CdmData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmData_init_(t_CdmData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 5:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a5((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance a5((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a6((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    break;
                  }
                }
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance a5((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a6((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5, a6));
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

            static PyObject *t_CdmData_getAdditionalCovMetadataBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdditionalCovMetadataBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalCovarianceMetadata::wrap_Object(result);
            }

            static PyObject *t_CdmData_getAdditionalParametersBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdditionalParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalParameters::wrap_Object(result);
            }

            static PyObject *t_CdmData_getComments(t_CdmData *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getComments());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_CdmData_getODParametersBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters result((jobject) NULL);
              OBJ_CALL(result = self->object.getODParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ODParameters::wrap_Object(result);
            }

            static PyObject *t_CdmData_getRTNCovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getRTNCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_RTNCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_getSig3EigVec3CovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getSig3EigVec3CovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_SigmaEigenvectorsCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_getStateVectorBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::StateVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStateVectorBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_StateVector::wrap_Object(result);
            }

            static PyObject *t_CdmData_getUserDefinedBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
              OBJ_CALL(result = self->object.getUserDefinedBlock());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
            }

            static PyObject *t_CdmData_getXYZCovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getXYZCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_XYZCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_setAdditionalParametersBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setAdditionalParametersBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAdditionalParametersBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setCovarianceMatrixBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCovarianceMatrixBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setODParametersBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setODParametersBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setODParametersBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setUserDefinedBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setUserDefinedBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUserDefinedBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_validate(t_CdmData *self, PyObject *arg)
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

            static PyObject *t_CdmData_get__additionalCovMetadataBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdditionalCovMetadataBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalCovarianceMetadata::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__additionalParametersBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdditionalParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalParameters::wrap_Object(value);
            }
            static int t_CdmData_set__additionalParametersBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &value))
                {
                  INT_CALL(self->object.setAdditionalParametersBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "additionalParametersBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__comments(t_CdmData *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getComments());
              return ::java::util::t_List::wrap_Object(value);
            }

            static int t_CdmData_set__covarianceMatrixBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &value))
                {
                  INT_CALL(self->object.setCovarianceMatrixBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceMatrixBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__oDParametersBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters value((jobject) NULL);
              OBJ_CALL(value = self->object.getODParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ODParameters::wrap_Object(value);
            }
            static int t_CdmData_set__oDParametersBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ODParameters value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &value))
                {
                  INT_CALL(self->object.setODParametersBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "oDParametersBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__rTNCovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getRTNCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_RTNCovariance::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__sig3EigVec3CovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getSig3EigVec3CovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_SigmaEigenvectorsCovariance::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__stateVectorBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::StateVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStateVectorBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_StateVector::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__userDefinedBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
              OBJ_CALL(value = self->object.getUserDefinedBlock());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
            }
            static int t_CdmData_set__userDefinedBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &value))
                {
                  INT_CALL(self->object.setUserDefinedBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "userDefinedBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__xYZCovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getXYZCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_XYZCovariance::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/StepNormalizer.h"
#include "org/hipparchus/ode/sampling/ODEFixedStepHandler.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *StepNormalizer::class$ = NULL;
        jmethodID *StepNormalizer::mids$ = NULL;
        bool StepNormalizer::live$ = false;

        jclass StepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/StepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aef956f00e8dabe9] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;)V");
            mids$[mid_init$_48db2681a14ca9e2] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_init$_2ecc51857164c598] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;)V");
            mids$[mid_init$_23f713b0620a4fcb] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_finish_d2d966b8a9c77b61] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
            mids$[mid_handleStep_197c5aaefd855810] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_init_a7556bd72cab73f1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aef956f00e8dabe9, a0, a1.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48db2681a14ca9e2, a0, a1.this$, a2.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ecc51857164c598, a0, a1.this$, a2.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_23f713b0620a4fcb, a0, a1.this$, a2.this$, a3.this$)) {}

        void StepNormalizer::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_d2d966b8a9c77b61], a0.this$);
        }

        void StepNormalizer::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_197c5aaefd855810], a0.this$);
        }

        void StepNormalizer::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_a7556bd72cab73f1], a0.this$, a1);
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
        static PyObject *t_StepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepNormalizer_init_(t_StepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepNormalizer_finish(t_StepNormalizer *self, PyObject *arg);
        static PyObject *t_StepNormalizer_handleStep(t_StepNormalizer *self, PyObject *arg);
        static PyObject *t_StepNormalizer_init(t_StepNormalizer *self, PyObject *args);

        static PyMethodDef t_StepNormalizer__methods_[] = {
          DECLARE_METHOD(t_StepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_StepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_StepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepNormalizer)[] = {
          { Py_tp_methods, t_StepNormalizer__methods_ },
          { Py_tp_init, (void *) t_StepNormalizer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepNormalizer, t_StepNormalizer, StepNormalizer);

        void t_StepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(StepNormalizer), &PY_TYPE_DEF(StepNormalizer), module, "StepNormalizer", 0);
        }

        void t_StepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "class_", make_descriptor(StepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "wrapfn_", make_descriptor(t_StepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepNormalizer::initializeClass, 1)))
            return NULL;
          return t_StepNormalizer::wrap_Object(StepNormalizer(((t_StepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_StepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepNormalizer_init_(t_StepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, &a0, &a1))
              {
                INT_CALL(object = StepNormalizer(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a2((jobject) NULL);
              PyTypeObject **p2;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a3((jobject) NULL);
              PyTypeObject **p3;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkKK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_, &a3, &p3, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2, a3));
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

        static PyObject *t_StepNormalizer_finish(t_StepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_StepNormalizer_handleStep(t_StepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_StepNormalizer_init(t_StepNormalizer *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
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
