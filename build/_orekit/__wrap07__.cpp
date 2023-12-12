#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/PythonIonosphericModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *PythonIonosphericModel::class$ = NULL;
          jmethodID *PythonIonosphericModel::mids$ = NULL;
          bool PythonIonosphericModel::live$ = false;

          jclass PythonIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/PythonIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParameters_a53a7513ecedada2] = env->getMethodID(cls, "getParameters", "()[D");
              mids$[mid_getParameters_4ab353685404cfce] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_e09499dc3d690830] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_8fbdb07bb0b935f0] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIonosphericModel::PythonIonosphericModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonIonosphericModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonIonosphericModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonIonosphericModel::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace ionosphere {
          static PyObject *t_PythonIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIonosphericModel_init_(t_PythonIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIonosphericModel_finalize(t_PythonIonosphericModel *self);
          static PyObject *t_PythonIonosphericModel_pythonExtension(t_PythonIonosphericModel *self, PyObject *args);
          static jobject JNICALL t_PythonIonosphericModel_getParameters0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIonosphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonIonosphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIonosphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3);
          static jdouble JNICALL t_PythonIonosphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3);
          static void JNICALL t_PythonIonosphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIonosphericModel_get__self(t_PythonIonosphericModel *self, void *data);
          static PyGetSetDef t_PythonIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIonosphericModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_PythonIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIonosphericModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIonosphericModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIonosphericModel)[] = {
            { Py_tp_methods, t_PythonIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_PythonIonosphericModel_init_ },
            { Py_tp_getset, t_PythonIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIonosphericModel, t_PythonIonosphericModel, PythonIonosphericModel);

          void t_PythonIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIonosphericModel), &PY_TYPE_DEF(PythonIonosphericModel), module, "PythonIonosphericModel", 1);
          }

          void t_PythonIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "class_", make_descriptor(PythonIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "wrapfn_", make_descriptor(t_PythonIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIonosphericModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIonosphericModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getParameters", "()[D", (void *) t_PythonIonosphericModel_getParameters0 },
              { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericModel_getParameters1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonIonosphericModel_getParametersDrivers2 },
              { "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIonosphericModel_pathDelay3 },
              { "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D", (void *) t_PythonIonosphericModel_pathDelay4 },
              { "pythonDecRef", "()V", (void *) t_PythonIonosphericModel_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_PythonIonosphericModel::wrap_Object(PythonIonosphericModel(((t_PythonIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_PythonIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIonosphericModel_init_(t_PythonIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            PythonIonosphericModel object((jobject) NULL);

            INT_CALL(object = PythonIonosphericModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIonosphericModel_finalize(t_PythonIonosphericModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIonosphericModel_pythonExtension(t_PythonIonosphericModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonIonosphericModel_getParameters0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonIonosphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonIonosphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static jobject JNICALL t_PythonIonosphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::frames::t_TopocentricFrame::wrap_Object(::org::orekit::frames::TopocentricFrame(a1));
            PyObject *o3 = JArray<jobject>(a3).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOdO", o0, o1, (double) a2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("pathDelay", result);
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

          static jdouble JNICALL t_PythonIonosphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::frames::t_TopocentricFrame::wrap_Object(::org::orekit::frames::TopocentricFrame(a1));
            PyObject *o3 = JArray<jdouble>(a3).wrap();
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOdO", o0, o1, (double) a2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("pathDelay", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonIonosphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIonosphericModel::mids$[PythonIonosphericModel::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIonosphericModel_get__self(t_PythonIonosphericModel *self, void *data)
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
#include "java/io/PrintStream.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/util/Locale.h"
#include "java/lang/CharSequence.h"
#include "java/io/OutputStream.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/File.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *PrintStream::class$ = NULL;
    jmethodID *PrintStream::mids$ = NULL;
    bool PrintStream::live$ = false;

    jclass PrintStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/PrintStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_5d6bcca91ae998ee] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_a093374b16e6c27d] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_7a5b31fafc364859] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
        mids$[mid_init$_630071dd94c59169] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_c53621196bb83b72] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;Z)V");
        mids$[mid_init$_c2b3ab497d54aa82] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;ZLjava/lang/String;)V");
        mids$[mid_append_0c0ceeafac08086d] = env->getMethodID(cls, "append", "(C)Ljava/io/PrintStream;");
        mids$[mid_append_7c9d6bd819de0015] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintStream;");
        mids$[mid_append_08e20acc9aee2acd] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;");
        mids$[mid_checkError_89b302893bdbe1f1] = env->getMethodID(cls, "checkError", "()Z");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0640e6acf969ed28] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_1df10a6ed0835cfe] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_format_cbd641757d6f146e] = env->getMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_print_916bf6d42d285c69] = env->getMethodID(cls, "print", "([C)V");
        mids$[mid_print_f5ffdf29129ef90a] = env->getMethodID(cls, "print", "(Ljava/lang/String;)V");
        mids$[mid_print_ed2afdb8506b9742] = env->getMethodID(cls, "print", "(Z)V");
        mids$[mid_print_102587d250c3217b] = env->getMethodID(cls, "print", "(C)V");
        mids$[mid_print_10f281d777284cea] = env->getMethodID(cls, "print", "(D)V");
        mids$[mid_print_3ac7cc3def9efaa9] = env->getMethodID(cls, "print", "(F)V");
        mids$[mid_print_a3da1a935cb37f7b] = env->getMethodID(cls, "print", "(I)V");
        mids$[mid_print_009757f2c0fd9090] = env->getMethodID(cls, "print", "(Ljava/lang/Object;)V");
        mids$[mid_print_3cd6a6b354c6aa22] = env->getMethodID(cls, "print", "(J)V");
        mids$[mid_printf_1df10a6ed0835cfe] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_printf_cbd641757d6f146e] = env->getMethodID(cls, "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;");
        mids$[mid_println_0640e6acf969ed28] = env->getMethodID(cls, "println", "()V");
        mids$[mid_println_916bf6d42d285c69] = env->getMethodID(cls, "println", "([C)V");
        mids$[mid_println_f5ffdf29129ef90a] = env->getMethodID(cls, "println", "(Ljava/lang/String;)V");
        mids$[mid_println_ed2afdb8506b9742] = env->getMethodID(cls, "println", "(Z)V");
        mids$[mid_println_102587d250c3217b] = env->getMethodID(cls, "println", "(C)V");
        mids$[mid_println_10f281d777284cea] = env->getMethodID(cls, "println", "(D)V");
        mids$[mid_println_3ac7cc3def9efaa9] = env->getMethodID(cls, "println", "(F)V");
        mids$[mid_println_a3da1a935cb37f7b] = env->getMethodID(cls, "println", "(I)V");
        mids$[mid_println_009757f2c0fd9090] = env->getMethodID(cls, "println", "(Ljava/lang/Object;)V");
        mids$[mid_println_3cd6a6b354c6aa22] = env->getMethodID(cls, "println", "(J)V");
        mids$[mid_write_a3da1a935cb37f7b] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_ac782c7077255dd3] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_setError_0640e6acf969ed28] = env->getMethodID(cls, "setError", "()V");
        mids$[mid_clearError_0640e6acf969ed28] = env->getMethodID(cls, "clearError", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    PrintStream::PrintStream(const ::java::io::File & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_5d6bcca91ae998ee, a0.this$)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_a093374b16e6c27d, a0.this$)) {}

    PrintStream::PrintStream(const ::java::lang::String & a0) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    PrintStream::PrintStream(const ::java::io::File & a0, const ::java::lang::String & a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_7a5b31fafc364859, a0.this$, a1.this$)) {}

    PrintStream::PrintStream(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_630071dd94c59169, a0.this$, a1.this$)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0, jboolean a1) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_c53621196bb83b72, a0.this$, a1)) {}

    PrintStream::PrintStream(const ::java::io::OutputStream & a0, jboolean a1, const ::java::lang::String & a2) : ::java::io::FilterOutputStream(env->newObject(initializeClass, &mids$, mid_init$_c2b3ab497d54aa82, a0.this$, a1, a2.this$)) {}

    PrintStream PrintStream::append(jchar a0) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_0c0ceeafac08086d], a0));
    }

    PrintStream PrintStream::append(const ::java::lang::CharSequence & a0) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_7c9d6bd819de0015], a0.this$));
    }

    PrintStream PrintStream::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_append_08e20acc9aee2acd], a0.this$, a1, a2));
    }

    jboolean PrintStream::checkError() const
    {
      return env->callBooleanMethod(this$, mids$[mid_checkError_89b302893bdbe1f1]);
    }

    void PrintStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    void PrintStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0640e6acf969ed28]);
    }

    PrintStream PrintStream::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_format_1df10a6ed0835cfe], a0.this$, a1.this$));
    }

    PrintStream PrintStream::format(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_format_cbd641757d6f146e], a0.this$, a1.this$, a2.this$));
    }

    void PrintStream::print(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_916bf6d42d285c69], a0.this$);
    }

    void PrintStream::print(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_f5ffdf29129ef90a], a0.this$);
    }

    void PrintStream::print(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_ed2afdb8506b9742], a0);
    }

    void PrintStream::print(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_102587d250c3217b], a0);
    }

    void PrintStream::print(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_10f281d777284cea], a0);
    }

    void PrintStream::print(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_3ac7cc3def9efaa9], a0);
    }

    void PrintStream::print(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_a3da1a935cb37f7b], a0);
    }

    void PrintStream::print(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_009757f2c0fd9090], a0.this$);
    }

    void PrintStream::print(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_print_3cd6a6b354c6aa22], a0);
    }

    PrintStream PrintStream::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_printf_1df10a6ed0835cfe], a0.this$, a1.this$));
    }

    PrintStream PrintStream::printf(const ::java::util::Locale & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      return PrintStream(env->callObjectMethod(this$, mids$[mid_printf_cbd641757d6f146e], a0.this$, a1.this$, a2.this$));
    }

    void PrintStream::println() const
    {
      env->callVoidMethod(this$, mids$[mid_println_0640e6acf969ed28]);
    }

    void PrintStream::println(const JArray< jchar > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_916bf6d42d285c69], a0.this$);
    }

    void PrintStream::println(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_f5ffdf29129ef90a], a0.this$);
    }

    void PrintStream::println(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_ed2afdb8506b9742], a0);
    }

    void PrintStream::println(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_102587d250c3217b], a0);
    }

    void PrintStream::println(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_10f281d777284cea], a0);
    }

    void PrintStream::println(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_3ac7cc3def9efaa9], a0);
    }

    void PrintStream::println(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_a3da1a935cb37f7b], a0);
    }

    void PrintStream::println(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_009757f2c0fd9090], a0.this$);
    }

    void PrintStream::println(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_println_3cd6a6b354c6aa22], a0);
    }

    void PrintStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a3da1a935cb37f7b], a0);
    }

    void PrintStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_ac782c7077255dd3], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_PrintStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrintStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_PrintStream_init_(t_PrintStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_PrintStream_append(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_checkError(t_PrintStream *self);
    static PyObject *t_PrintStream_close(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_flush(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_format(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_print(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_printf(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_println(t_PrintStream *self, PyObject *args);
    static PyObject *t_PrintStream_write(t_PrintStream *self, PyObject *args);

    static PyMethodDef t_PrintStream__methods_[] = {
      DECLARE_METHOD(t_PrintStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrintStream, append, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, checkError, METH_NOARGS),
      DECLARE_METHOD(t_PrintStream, close, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, format, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, print, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, printf, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, println, METH_VARARGS),
      DECLARE_METHOD(t_PrintStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(PrintStream)[] = {
      { Py_tp_methods, t_PrintStream__methods_ },
      { Py_tp_init, (void *) t_PrintStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(PrintStream)[] = {
      &PY_TYPE_DEF(::java::io::FilterOutputStream),
      NULL
    };

    DEFINE_TYPE(PrintStream, t_PrintStream, PrintStream);

    void t_PrintStream::install(PyObject *module)
    {
      installType(&PY_TYPE(PrintStream), &PY_TYPE_DEF(PrintStream), module, "PrintStream", 0);
    }

    void t_PrintStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintStream), "class_", make_descriptor(PrintStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintStream), "wrapfn_", make_descriptor(t_PrintStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrintStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_PrintStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, PrintStream::initializeClass, 1)))
        return NULL;
      return t_PrintStream::wrap_Object(PrintStream(((t_PrintStream *) arg)->object.this$));
    }
    static PyObject *t_PrintStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, PrintStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_PrintStream_init_(t_PrintStream *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = PrintStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
          {
            INT_CALL(object = PrintStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = PrintStream(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::File a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintStream(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = PrintStream(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::OutputStream a0((jobject) NULL);
          jboolean a1;
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PrintStream(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          jboolean a1;
          ::java::lang::String a2((jobject) NULL);
          PrintStream object((jobject) NULL);

          if (!parseArgs(args, "kZs", ::java::io::OutputStream::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PrintStream(a0, a1, a2));
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

    static PyObject *t_PrintStream_append(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jchar a0;
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintStream::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_PrintStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_PrintStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "append", args);
      return NULL;
    }

    static PyObject *t_PrintStream_checkError(t_PrintStream *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.checkError());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_PrintStream_close(t_PrintStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_PrintStream_flush(t_PrintStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrintStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_PrintStream_format(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.format(a0, a1));
            return t_PrintStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return t_PrintStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_PrintStream_print(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.print(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "print", args);
      return NULL;
    }

    static PyObject *t_PrintStream_printf(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.printf(a0, a1));
            return t_PrintStream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          PrintStream result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.printf(a0, a1, a2));
            return t_PrintStream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "printf", args);
      return NULL;
    }

    static PyObject *t_PrintStream_println(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(self->object.println());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jboolean a0;

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jchar a0;

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jfloat a0;

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.println(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "println", args);
      return NULL;
    }

    static PyObject *t_PrintStream_write(t_PrintStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
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
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(PrintStream), (PyObject *) self, "write", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/WideLaneCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WideLaneCombination::class$ = NULL;
          jmethodID *WideLaneCombination::mids$ = NULL;
          bool WideLaneCombination::live$ = false;

          jclass WideLaneCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WideLaneCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_1aca6111050d8282] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_ec5e21d51ba3cb9a] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_WideLaneCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WideLaneCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_WideLaneCombination__methods_[] = {
            DECLARE_METHOD(t_WideLaneCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WideLaneCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WideLaneCombination)[] = {
            { Py_tp_methods, t_WideLaneCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WideLaneCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(WideLaneCombination, t_WideLaneCombination, WideLaneCombination);

          void t_WideLaneCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(WideLaneCombination), &PY_TYPE_DEF(WideLaneCombination), module, "WideLaneCombination", 0);
          }

          void t_WideLaneCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "class_", make_descriptor(WideLaneCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "wrapfn_", make_descriptor(t_WideLaneCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WideLaneCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WideLaneCombination::initializeClass, 1)))
              return NULL;
            return t_WideLaneCombination::wrap_Object(WideLaneCombination(((t_WideLaneCombination *) arg)->object.this$));
          }
          static PyObject *t_WideLaneCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WideLaneCombination::initializeClass, 0))
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
#include "org/orekit/models/earth/atmosphere/PythonJB2008InputParameters.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonJB2008InputParameters::class$ = NULL;
          jmethodID *PythonJB2008InputParameters::mids$ = NULL;
          bool PythonJB2008InputParameters::live$ = false;

          jclass PythonJB2008InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonJB2008InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDSTDTC_b0b988f941da47d8] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10_b0b988f941da47d8] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getF10B_b0b988f941da47d8] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getS10_b0b988f941da47d8] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getS10B_b0b988f941da47d8] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10_b0b988f941da47d8] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getXM10B_b0b988f941da47d8] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10_b0b988f941da47d8] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getY10B_b0b988f941da47d8] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonJB2008InputParameters::PythonJB2008InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonJB2008InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonJB2008InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonJB2008InputParameters::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_PythonJB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonJB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonJB2008InputParameters_init_(t_PythonJB2008InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonJB2008InputParameters_finalize(t_PythonJB2008InputParameters *self);
          static PyObject *t_PythonJB2008InputParameters_pythonExtension(t_PythonJB2008InputParameters *self, PyObject *args);
          static jdouble JNICALL t_PythonJB2008InputParameters_getDSTDTC0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getF101(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getF10B2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonJB2008InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonJB2008InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonJB2008InputParameters_getS105(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getS10B6(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getXM107(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getXM10B8(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getY109(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonJB2008InputParameters_getY10B10(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonJB2008InputParameters_pythonDecRef11(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonJB2008InputParameters_get__self(t_PythonJB2008InputParameters *self, void *data);
          static PyGetSetDef t_PythonJB2008InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonJB2008InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonJB2008InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonJB2008InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonJB2008InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonJB2008InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonJB2008InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonJB2008InputParameters)[] = {
            { Py_tp_methods, t_PythonJB2008InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonJB2008InputParameters_init_ },
            { Py_tp_getset, t_PythonJB2008InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonJB2008InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonJB2008InputParameters, t_PythonJB2008InputParameters, PythonJB2008InputParameters);

          void t_PythonJB2008InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonJB2008InputParameters), &PY_TYPE_DEF(PythonJB2008InputParameters), module, "PythonJB2008InputParameters", 1);
          }

          void t_PythonJB2008InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJB2008InputParameters), "class_", make_descriptor(PythonJB2008InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJB2008InputParameters), "wrapfn_", make_descriptor(t_PythonJB2008InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJB2008InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonJB2008InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getDSTDTC0 },
              { "getF10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getF101 },
              { "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getF10B2 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonJB2008InputParameters_getMaxDate3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonJB2008InputParameters_getMinDate4 },
              { "getS10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getS105 },
              { "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getS10B6 },
              { "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getXM107 },
              { "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getXM10B8 },
              { "getY10", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getY109 },
              { "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonJB2008InputParameters_getY10B10 },
              { "pythonDecRef", "()V", (void *) t_PythonJB2008InputParameters_pythonDecRef11 },
            };
            env->registerNatives(cls, methods, 12);
          }

          static PyObject *t_PythonJB2008InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonJB2008InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonJB2008InputParameters::wrap_Object(PythonJB2008InputParameters(((t_PythonJB2008InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonJB2008InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonJB2008InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonJB2008InputParameters_init_(t_PythonJB2008InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonJB2008InputParameters object((jobject) NULL);

            INT_CALL(object = PythonJB2008InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonJB2008InputParameters_finalize(t_PythonJB2008InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonJB2008InputParameters_pythonExtension(t_PythonJB2008InputParameters *self, PyObject *args)
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

          static jdouble JNICALL t_PythonJB2008InputParameters_getDSTDTC0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getDSTDTC", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getDSTDTC", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getF101(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getF10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getF10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getF10B2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getF10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getF10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonJB2008InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
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

          static jobject JNICALL t_PythonJB2008InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
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

          static jdouble JNICALL t_PythonJB2008InputParameters_getS105(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getS10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getS10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getS10B6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getS10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getS10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getXM107(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getXM10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getXM10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getXM10B8(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getXM10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getXM10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getY109(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getY10", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getY10", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonJB2008InputParameters_getY10B10(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getY10B", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getY10B", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonJB2008InputParameters_pythonDecRef11(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonJB2008InputParameters::mids$[PythonJB2008InputParameters::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonJB2008InputParameters_get__self(t_PythonJB2008InputParameters *self, void *data)
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
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$Calibration::class$ = NULL;
        jmethodID *CRD$Calibration::mids$ = NULL;
        bool CRD$Calibration::live$ = false;

        jclass CRD$Calibration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$Calibration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_eafe5b3d04932887] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;ILjava/lang/String;IIDDDDDDDIIIID)V");
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDelayShift_557b8123390d8d0c] = env->getMethodID(cls, "getDelayShift", "()D");
            mids$[mid_getDetectorChannel_412668abc8d889e9] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getKurtosis_557b8123390d8d0c] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getNumberOfPointsRecorded_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfPointsRecorded", "()I");
            mids$[mid_getNumberOfPointsUsed_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfPointsUsed", "()I");
            mids$[mid_getOneWayDistance_557b8123390d8d0c] = env->getMethodID(cls, "getOneWayDistance", "()D");
            mids$[mid_getPeakMinusMean_557b8123390d8d0c] = env->getMethodID(cls, "getPeakMinusMean", "()D");
            mids$[mid_getReturnRate_557b8123390d8d0c] = env->getMethodID(cls, "getReturnRate", "()D");
            mids$[mid_getRms_557b8123390d8d0c] = env->getMethodID(cls, "getRms", "()D");
            mids$[mid_getShiftTypeIndicator_412668abc8d889e9] = env->getMethodID(cls, "getShiftTypeIndicator", "()I");
            mids$[mid_getSkew_557b8123390d8d0c] = env->getMethodID(cls, "getSkew", "()D");
            mids$[mid_getSpan_412668abc8d889e9] = env->getMethodID(cls, "getSpan", "()I");
            mids$[mid_getSystemConfigurationId_3cffd47377eca18a] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getSystemDelay_557b8123390d8d0c] = env->getMethodID(cls, "getSystemDelay", "()D");
            mids$[mid_getTypeIndicator_412668abc8d889e9] = env->getMethodID(cls, "getTypeIndicator", "()I");
            mids$[mid_getTypeOfData_412668abc8d889e9] = env->getMethodID(cls, "getTypeOfData", "()I");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$Calibration::CRD$Calibration(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::java::lang::String & a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12, jint a13, jint a14, jint a15, jdouble a16) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eafe5b3d04932887, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16)) {}

        ::org::orekit::time::AbsoluteDate CRD$Calibration::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
        }

        jdouble CRD$Calibration::getDelayShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDelayShift_557b8123390d8d0c]);
        }

        jint CRD$Calibration::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_412668abc8d889e9]);
        }

        jdouble CRD$Calibration::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_557b8123390d8d0c]);
        }

        jint CRD$Calibration::getNumberOfPointsRecorded() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfPointsRecorded_412668abc8d889e9]);
        }

        jint CRD$Calibration::getNumberOfPointsUsed() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfPointsUsed_412668abc8d889e9]);
        }

        jdouble CRD$Calibration::getOneWayDistance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOneWayDistance_557b8123390d8d0c]);
        }

        jdouble CRD$Calibration::getPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPeakMinusMean_557b8123390d8d0c]);
        }

        jdouble CRD$Calibration::getReturnRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReturnRate_557b8123390d8d0c]);
        }

        jdouble CRD$Calibration::getRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRms_557b8123390d8d0c]);
        }

        jint CRD$Calibration::getShiftTypeIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getShiftTypeIndicator_412668abc8d889e9]);
        }

        jdouble CRD$Calibration::getSkew() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkew_557b8123390d8d0c]);
        }

        jint CRD$Calibration::getSpan() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpan_412668abc8d889e9]);
        }

        ::java::lang::String CRD$Calibration::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_3cffd47377eca18a]));
        }

        jdouble CRD$Calibration::getSystemDelay() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSystemDelay_557b8123390d8d0c]);
        }

        jint CRD$Calibration::getTypeIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getTypeIndicator_412668abc8d889e9]);
        }

        jint CRD$Calibration::getTypeOfData() const
        {
          return env->callIntMethod(this$, mids$[mid_getTypeOfData_412668abc8d889e9]);
        }

        ::java::lang::String CRD$Calibration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRD$Calibration::toString() const
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
        static PyObject *t_CRD$Calibration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$Calibration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$Calibration_init_(t_CRD$Calibration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$Calibration_getDate(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getDelayShift(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getDetectorChannel(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getKurtosis(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getNumberOfPointsRecorded(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getNumberOfPointsUsed(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getOneWayDistance(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getPeakMinusMean(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getReturnRate(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getRms(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getShiftTypeIndicator(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSkew(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSpan(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSystemConfigurationId(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSystemDelay(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getTypeIndicator(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getTypeOfData(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_toCrdString(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_toString(t_CRD$Calibration *self, PyObject *args);
        static PyObject *t_CRD$Calibration_get__date(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__delayShift(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__detectorChannel(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__kurtosis(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__numberOfPointsRecorded(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__numberOfPointsUsed(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__oneWayDistance(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__peakMinusMean(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__returnRate(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__rms(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__shiftTypeIndicator(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__skew(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__span(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__systemConfigurationId(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__systemDelay(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__typeIndicator(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__typeOfData(t_CRD$Calibration *self, void *data);
        static PyGetSetDef t_CRD$Calibration__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$Calibration, date),
          DECLARE_GET_FIELD(t_CRD$Calibration, delayShift),
          DECLARE_GET_FIELD(t_CRD$Calibration, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$Calibration, kurtosis),
          DECLARE_GET_FIELD(t_CRD$Calibration, numberOfPointsRecorded),
          DECLARE_GET_FIELD(t_CRD$Calibration, numberOfPointsUsed),
          DECLARE_GET_FIELD(t_CRD$Calibration, oneWayDistance),
          DECLARE_GET_FIELD(t_CRD$Calibration, peakMinusMean),
          DECLARE_GET_FIELD(t_CRD$Calibration, returnRate),
          DECLARE_GET_FIELD(t_CRD$Calibration, rms),
          DECLARE_GET_FIELD(t_CRD$Calibration, shiftTypeIndicator),
          DECLARE_GET_FIELD(t_CRD$Calibration, skew),
          DECLARE_GET_FIELD(t_CRD$Calibration, span),
          DECLARE_GET_FIELD(t_CRD$Calibration, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$Calibration, systemDelay),
          DECLARE_GET_FIELD(t_CRD$Calibration, typeIndicator),
          DECLARE_GET_FIELD(t_CRD$Calibration, typeOfData),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$Calibration__methods_[] = {
          DECLARE_METHOD(t_CRD$Calibration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Calibration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Calibration, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getDelayShift, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getNumberOfPointsRecorded, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getNumberOfPointsUsed, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getOneWayDistance, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getReturnRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getShiftTypeIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSkew, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSpan, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSystemDelay, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getTypeIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getTypeOfData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$Calibration)[] = {
          { Py_tp_methods, t_CRD$Calibration__methods_ },
          { Py_tp_init, (void *) t_CRD$Calibration_init_ },
          { Py_tp_getset, t_CRD$Calibration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$Calibration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$Calibration, t_CRD$Calibration, CRD$Calibration);

        void t_CRD$Calibration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$Calibration), &PY_TYPE_DEF(CRD$Calibration), module, "CRD$Calibration", 0);
        }

        void t_CRD$Calibration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "class_", make_descriptor(CRD$Calibration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "wrapfn_", make_descriptor(t_CRD$Calibration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$Calibration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$Calibration::initializeClass, 1)))
            return NULL;
          return t_CRD$Calibration::wrap_Object(CRD$Calibration(((t_CRD$Calibration *) arg)->object.this$));
        }
        static PyObject *t_CRD$Calibration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$Calibration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$Calibration_init_(t_CRD$Calibration *self, PyObject *args, PyObject *kwds)
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
          CRD$Calibration object((jobject) NULL);

          if (!parseArgs(args, "kIsIIDDDDDDDIIIID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16))
          {
            INT_CALL(object = CRD$Calibration(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$Calibration_getDate(t_CRD$Calibration *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$Calibration_getDelayShift(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDelayShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getDetectorChannel(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getKurtosis(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getNumberOfPointsRecorded(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfPointsRecorded());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getNumberOfPointsUsed(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfPointsUsed());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getOneWayDistance(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOneWayDistance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getPeakMinusMean(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getReturnRate(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReturnRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getRms(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getShiftTypeIndicator(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getShiftTypeIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getSkew(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkew());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getSpan(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSpan());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getSystemConfigurationId(t_CRD$Calibration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$Calibration_getSystemDelay(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSystemDelay());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getTypeIndicator(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTypeIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getTypeOfData(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTypeOfData());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_toCrdString(t_CRD$Calibration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$Calibration_toString(t_CRD$Calibration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$Calibration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$Calibration_get__date(t_CRD$Calibration *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$Calibration_get__delayShift(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDelayShift());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__detectorChannel(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__kurtosis(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__numberOfPointsRecorded(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfPointsRecorded());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__numberOfPointsUsed(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfPointsUsed());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__oneWayDistance(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOneWayDistance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__peakMinusMean(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__returnRate(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReturnRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__rms(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__shiftTypeIndicator(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getShiftTypeIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__skew(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkew());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__span(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSpan());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__systemConfigurationId(t_CRD$Calibration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$Calibration_get__systemDelay(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSystemDelay());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__typeIndicator(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTypeIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__typeOfData(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTypeOfData());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/MedianDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *MedianDate::class$ = NULL;
          jmethodID *MedianDate::mids$ = NULL;
          bool MedianDate::live$ = false;

          jclass MedianDate::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/MedianDate");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f5c244a0f15376be] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_getAdditionalState_2a145999b8c9a41d] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_yields_abdf3beb789bbd4e] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MedianDate::MedianDate(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5c244a0f15376be, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > MedianDate::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_2a145999b8c9a41d], a0.this$));
          }

          ::java::lang::String MedianDate::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          jboolean MedianDate::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_abdf3beb789bbd4e], a0.this$);
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
        namespace jacobians {
          static PyObject *t_MedianDate_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MedianDate_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MedianDate_init_(t_MedianDate *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MedianDate_getAdditionalState(t_MedianDate *self, PyObject *arg);
          static PyObject *t_MedianDate_getName(t_MedianDate *self);
          static PyObject *t_MedianDate_yields(t_MedianDate *self, PyObject *arg);
          static PyObject *t_MedianDate_get__name(t_MedianDate *self, void *data);
          static PyGetSetDef t_MedianDate__fields_[] = {
            DECLARE_GET_FIELD(t_MedianDate, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MedianDate__methods_[] = {
            DECLARE_METHOD(t_MedianDate, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MedianDate, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MedianDate, getAdditionalState, METH_O),
            DECLARE_METHOD(t_MedianDate, getName, METH_NOARGS),
            DECLARE_METHOD(t_MedianDate, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MedianDate)[] = {
            { Py_tp_methods, t_MedianDate__methods_ },
            { Py_tp_init, (void *) t_MedianDate_init_ },
            { Py_tp_getset, t_MedianDate__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MedianDate)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MedianDate, t_MedianDate, MedianDate);

          void t_MedianDate::install(PyObject *module)
          {
            installType(&PY_TYPE(MedianDate), &PY_TYPE_DEF(MedianDate), module, "MedianDate", 0);
          }

          void t_MedianDate::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "class_", make_descriptor(MedianDate::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "wrapfn_", make_descriptor(t_MedianDate::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MedianDate), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MedianDate_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MedianDate::initializeClass, 1)))
              return NULL;
            return t_MedianDate::wrap_Object(MedianDate(((t_MedianDate *) arg)->object.this$));
          }
          static PyObject *t_MedianDate_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MedianDate::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MedianDate_init_(t_MedianDate *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            MedianDate object((jobject) NULL);

            if (!parseArgs(args, "sss", &a0, &a1, &a2))
            {
              INT_CALL(object = MedianDate(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MedianDate_getAdditionalState(t_MedianDate *self, PyObject *arg)
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

          static PyObject *t_MedianDate_getName(t_MedianDate *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MedianDate_yields(t_MedianDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.yields(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "yields", arg);
            return NULL;
          }

          static PyObject *t_MedianDate_get__name(t_MedianDate *self, void *data)
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
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DecompositionSolver::class$ = NULL;
      jmethodID *DecompositionSolver::mids$ = NULL;
      bool DecompositionSolver::live$ = false;

      jclass DecompositionSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DecompositionSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getInverse_70a207fcbc031df2] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isNonSingular_89b302893bdbe1f1] = env->getMethodID(cls, "isNonSingular", "()Z");
          mids$[mid_solve_342d5b01463e0dc5] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_340b47d21842d02c] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint DecompositionSolver::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::RealMatrix DecompositionSolver::getInverse() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInverse_70a207fcbc031df2]));
      }

      jint DecompositionSolver::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      jboolean DecompositionSolver::isNonSingular() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNonSingular_89b302893bdbe1f1]);
      }

      ::org::hipparchus::linear::RealVector DecompositionSolver::solve(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_342d5b01463e0dc5], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix DecompositionSolver::solve(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_solve_340b47d21842d02c], a0.this$));
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
      static PyObject *t_DecompositionSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DecompositionSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DecompositionSolver_getColumnDimension(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_getInverse(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_getRowDimension(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_isNonSingular(t_DecompositionSolver *self);
      static PyObject *t_DecompositionSolver_solve(t_DecompositionSolver *self, PyObject *args);
      static PyObject *t_DecompositionSolver_get__columnDimension(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__inverse(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__nonSingular(t_DecompositionSolver *self, void *data);
      static PyObject *t_DecompositionSolver_get__rowDimension(t_DecompositionSolver *self, void *data);
      static PyGetSetDef t_DecompositionSolver__fields_[] = {
        DECLARE_GET_FIELD(t_DecompositionSolver, columnDimension),
        DECLARE_GET_FIELD(t_DecompositionSolver, inverse),
        DECLARE_GET_FIELD(t_DecompositionSolver, nonSingular),
        DECLARE_GET_FIELD(t_DecompositionSolver, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DecompositionSolver__methods_[] = {
        DECLARE_METHOD(t_DecompositionSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DecompositionSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DecompositionSolver, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, isNonSingular, METH_NOARGS),
        DECLARE_METHOD(t_DecompositionSolver, solve, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DecompositionSolver)[] = {
        { Py_tp_methods, t_DecompositionSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DecompositionSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DecompositionSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DecompositionSolver, t_DecompositionSolver, DecompositionSolver);

      void t_DecompositionSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(DecompositionSolver), &PY_TYPE_DEF(DecompositionSolver), module, "DecompositionSolver", 0);
      }

      void t_DecompositionSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "class_", make_descriptor(DecompositionSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "wrapfn_", make_descriptor(t_DecompositionSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DecompositionSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DecompositionSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DecompositionSolver::initializeClass, 1)))
          return NULL;
        return t_DecompositionSolver::wrap_Object(DecompositionSolver(((t_DecompositionSolver *) arg)->object.this$));
      }
      static PyObject *t_DecompositionSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DecompositionSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DecompositionSolver_getColumnDimension(t_DecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DecompositionSolver_getInverse(t_DecompositionSolver *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_DecompositionSolver_getRowDimension(t_DecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DecompositionSolver_isNonSingular(t_DecompositionSolver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNonSingular());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_DecompositionSolver_solve(t_DecompositionSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVector a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }

      static PyObject *t_DecompositionSolver_get__columnDimension(t_DecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DecompositionSolver_get__inverse(t_DecompositionSolver *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_DecompositionSolver_get__nonSingular(t_DecompositionSolver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNonSingular());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_DecompositionSolver_get__rowDimension(t_DecompositionSolver *self, void *data)
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
#include "org/orekit/models/earth/troposphere/ViennaThreeModel.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaThreeModel::class$ = NULL;
          jmethodID *ViennaThreeModel::mids$ = NULL;
          bool ViennaThreeModel::live$ = false;

          jclass ViennaThreeModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaThreeModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_efb1066fada7736f] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_computeZenithDelay_fd96fda04d407b93] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_computeZenithDelay_006dc50aa6e193b5] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_mappingFactors_e6ce6b157ff98280] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_964dc353437b5da2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_pathDelay_a4fdd877b349d4a6] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_129678f244f63094] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaThreeModel::ViennaThreeModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

          ViennaThreeModel::ViennaThreeModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_efb1066fada7736f, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > ViennaThreeModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_fd96fda04d407b93], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaThreeModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_006dc50aa6e193b5], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List ViennaThreeModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaThreeModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_e6ce6b157ff98280], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > ViennaThreeModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_964dc353437b5da2], a0, a1.this$, a2.this$));
          }

          ::org::hipparchus::CalculusFieldElement ViennaThreeModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_a4fdd877b349d4a6], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble ViennaThreeModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_129678f244f63094], a0, a1.this$, a2.this$, a3.this$);
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
          static PyObject *t_ViennaThreeModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaThreeModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaThreeModel_init_(t_ViennaThreeModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaThreeModel_computeZenithDelay(t_ViennaThreeModel *self, PyObject *args);
          static PyObject *t_ViennaThreeModel_getParametersDrivers(t_ViennaThreeModel *self);
          static PyObject *t_ViennaThreeModel_mappingFactors(t_ViennaThreeModel *self, PyObject *args);
          static PyObject *t_ViennaThreeModel_pathDelay(t_ViennaThreeModel *self, PyObject *args);
          static PyObject *t_ViennaThreeModel_get__parametersDrivers(t_ViennaThreeModel *self, void *data);
          static PyGetSetDef t_ViennaThreeModel__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaThreeModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaThreeModel__methods_[] = {
            DECLARE_METHOD(t_ViennaThreeModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaThreeModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaThreeModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_ViennaThreeModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ViennaThreeModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_ViennaThreeModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaThreeModel)[] = {
            { Py_tp_methods, t_ViennaThreeModel__methods_ },
            { Py_tp_init, (void *) t_ViennaThreeModel_init_ },
            { Py_tp_getset, t_ViennaThreeModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaThreeModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ViennaThreeModel, t_ViennaThreeModel, ViennaThreeModel);

          void t_ViennaThreeModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaThreeModel), &PY_TYPE_DEF(ViennaThreeModel), module, "ViennaThreeModel", 0);
          }

          void t_ViennaThreeModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaThreeModel), "class_", make_descriptor(ViennaThreeModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaThreeModel), "wrapfn_", make_descriptor(t_ViennaThreeModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaThreeModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ViennaThreeModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaThreeModel::initializeClass, 1)))
              return NULL;
            return t_ViennaThreeModel::wrap_Object(ViennaThreeModel(((t_ViennaThreeModel *) arg)->object.this$));
          }
          static PyObject *t_ViennaThreeModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaThreeModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaThreeModel_init_(t_ViennaThreeModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ViennaThreeModel object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = ViennaThreeModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                ViennaThreeModel object((jobject) NULL);

                if (!parseArgs(args, "[D[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ViennaThreeModel(a0, a1, a2));
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

          static PyObject *t_ViennaThreeModel_computeZenithDelay(t_ViennaThreeModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "K[KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "computeZenithDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaThreeModel_getParametersDrivers(t_ViennaThreeModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ViennaThreeModel_mappingFactors(t_ViennaThreeModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }

          static PyObject *t_ViennaThreeModel_pathDelay(t_ViennaThreeModel *self, PyObject *args)
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

          static PyObject *t_ViennaThreeModel_get__parametersDrivers(t_ViennaThreeModel *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CenterConsumer::class$ = NULL;
            jmethodID *ParseToken$CenterConsumer::mids$ = NULL;
            bool ParseToken$CenterConsumer::live$ = false;

            jclass ParseToken$CenterConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_e6f755c267d91c26] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CenterConsumer::accept(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_e6f755c267d91c26], a0.this$);
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
            static PyObject *t_ParseToken$CenterConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterConsumer_accept(t_ParseToken$CenterConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CenterConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CenterConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CenterConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CenterConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CenterConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CenterConsumer, t_ParseToken$CenterConsumer, ParseToken$CenterConsumer);

            void t_ParseToken$CenterConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CenterConsumer), &PY_TYPE_DEF(ParseToken$CenterConsumer), module, "ParseToken$CenterConsumer", 0);
            }

            void t_ParseToken$CenterConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterConsumer), "class_", make_descriptor(ParseToken$CenterConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterConsumer), "wrapfn_", make_descriptor(t_ParseToken$CenterConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CenterConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CenterConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CenterConsumer::wrap_Object(ParseToken$CenterConsumer(((t_ParseToken$CenterConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CenterConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CenterConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CenterConsumer_accept(t_ParseToken$CenterConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
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
#include "org/orekit/rugged/los/FixedZHomothety.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *FixedZHomothety::class$ = NULL;
        jmethodID *FixedZHomothety::mids$ = NULL;
        bool FixedZHomothety::live$ = false;

        jclass FixedZHomothety::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/FixedZHomothety");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c6843ef8200b1ede] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
            mids$[mid_getParametersDrivers_d7cce92225eb0db2] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_871f750b8782ea1a] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_1f552c4ec2328a5b] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FixedZHomothety::FixedZHomothety(const ::java::lang::String & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6843ef8200b1ede, a0.this$, a1)) {}

        ::java::util::stream::Stream FixedZHomothety::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d7cce92225eb0db2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedZHomothety::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_871f750b8782ea1a], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedZHomothety::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_1f552c4ec2328a5b], a0, a1.this$, a2.this$));
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
        static PyObject *t_FixedZHomothety_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FixedZHomothety_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FixedZHomothety_init_(t_FixedZHomothety *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FixedZHomothety_getParametersDrivers(t_FixedZHomothety *self);
        static PyObject *t_FixedZHomothety_transformLOS(t_FixedZHomothety *self, PyObject *args);
        static PyObject *t_FixedZHomothety_get__parametersDrivers(t_FixedZHomothety *self, void *data);
        static PyGetSetDef t_FixedZHomothety__fields_[] = {
          DECLARE_GET_FIELD(t_FixedZHomothety, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FixedZHomothety__methods_[] = {
          DECLARE_METHOD(t_FixedZHomothety, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedZHomothety, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedZHomothety, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_FixedZHomothety, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FixedZHomothety)[] = {
          { Py_tp_methods, t_FixedZHomothety__methods_ },
          { Py_tp_init, (void *) t_FixedZHomothety_init_ },
          { Py_tp_getset, t_FixedZHomothety__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FixedZHomothety)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FixedZHomothety, t_FixedZHomothety, FixedZHomothety);

        void t_FixedZHomothety::install(PyObject *module)
        {
          installType(&PY_TYPE(FixedZHomothety), &PY_TYPE_DEF(FixedZHomothety), module, "FixedZHomothety", 0);
        }

        void t_FixedZHomothety::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedZHomothety), "class_", make_descriptor(FixedZHomothety::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedZHomothety), "wrapfn_", make_descriptor(t_FixedZHomothety::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedZHomothety), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FixedZHomothety_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FixedZHomothety::initializeClass, 1)))
            return NULL;
          return t_FixedZHomothety::wrap_Object(FixedZHomothety(((t_FixedZHomothety *) arg)->object.this$));
        }
        static PyObject *t_FixedZHomothety_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FixedZHomothety::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FixedZHomothety_init_(t_FixedZHomothety *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          FixedZHomothety object((jobject) NULL);

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            INT_CALL(object = FixedZHomothety(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FixedZHomothety_getParametersDrivers(t_FixedZHomothety *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_FixedZHomothety_transformLOS(t_FixedZHomothety *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_FixedZHomothety_get__parametersDrivers(t_FixedZHomothety *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *FieldUnivariateInterpolator::class$ = NULL;
        jmethodID *FieldUnivariateInterpolator::mids$ = NULL;
        bool FieldUnivariateInterpolator::live$ = false;

        jclass FieldUnivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_41effb27733ec5c0] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::CalculusFieldUnivariateFunction FieldUnivariateInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::CalculusFieldUnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_41effb27733ec5c0], a0.this$, a1.this$));
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
        static PyObject *t_FieldUnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateInterpolator_interpolate(t_FieldUnivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_FieldUnivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateInterpolator)[] = {
          { Py_tp_methods, t_FieldUnivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateInterpolator, t_FieldUnivariateInterpolator, FieldUnivariateInterpolator);

        void t_FieldUnivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateInterpolator), &PY_TYPE_DEF(FieldUnivariateInterpolator), module, "FieldUnivariateInterpolator", 0);
        }

        void t_FieldUnivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "class_", make_descriptor(FieldUnivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "wrapfn_", make_descriptor(t_FieldUnivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateInterpolator::wrap_Object(FieldUnivariateInterpolator(((t_FieldUnivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateInterpolator_interpolate(t_FieldUnivariateInterpolator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventEnablingPredicateFilter.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventEnablingPredicateFilter::class$ = NULL;
        jmethodID *FieldEventEnablingPredicateFilter::mids$ = NULL;
        bool FieldEventEnablingPredicateFilter::live$ = false;

        jclass FieldEventEnablingPredicateFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventEnablingPredicateFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3fecc29823af5a11] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/events/FieldEnablingPredicate;)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_07d9256595c42b86] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_e0eab4e811c73257] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEventEnablingPredicateFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventEnablingPredicateFilter::FieldEventEnablingPredicateFilter(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::events::FieldEnablingPredicate & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3fecc29823af5a11, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventEnablingPredicateFilter::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventEnablingPredicateFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_07d9256595c42b86]));
        }

        void FieldEventEnablingPredicateFilter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
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
        static PyObject *t_FieldEventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventEnablingPredicateFilter_of_(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static int t_FieldEventEnablingPredicateFilter_init_(t_FieldEventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventEnablingPredicateFilter_g(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_FieldEventEnablingPredicateFilter_getDetector(t_FieldEventEnablingPredicateFilter *self);
        static PyObject *t_FieldEventEnablingPredicateFilter_init(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_FieldEventEnablingPredicateFilter_get__detector(t_FieldEventEnablingPredicateFilter *self, void *data);
        static PyObject *t_FieldEventEnablingPredicateFilter_get__parameters_(t_FieldEventEnablingPredicateFilter *self, void *data);
        static PyGetSetDef t_FieldEventEnablingPredicateFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventEnablingPredicateFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventEnablingPredicateFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventEnablingPredicateFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventEnablingPredicateFilter)[] = {
          { Py_tp_methods, t_FieldEventEnablingPredicateFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventEnablingPredicateFilter_init_ },
          { Py_tp_getset, t_FieldEventEnablingPredicateFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventEnablingPredicateFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventEnablingPredicateFilter, t_FieldEventEnablingPredicateFilter, FieldEventEnablingPredicateFilter);
        PyObject *t_FieldEventEnablingPredicateFilter::wrap_Object(const FieldEventEnablingPredicateFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventEnablingPredicateFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventEnablingPredicateFilter *self = (t_FieldEventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventEnablingPredicateFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventEnablingPredicateFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventEnablingPredicateFilter *self = (t_FieldEventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventEnablingPredicateFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventEnablingPredicateFilter), &PY_TYPE_DEF(FieldEventEnablingPredicateFilter), module, "FieldEventEnablingPredicateFilter", 0);
        }

        void t_FieldEventEnablingPredicateFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "class_", make_descriptor(FieldEventEnablingPredicateFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "wrapfn_", make_descriptor(t_FieldEventEnablingPredicateFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventEnablingPredicateFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventEnablingPredicateFilter::wrap_Object(FieldEventEnablingPredicateFilter(((t_FieldEventEnablingPredicateFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventEnablingPredicateFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_of_(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventEnablingPredicateFilter_init_(t_FieldEventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEnablingPredicate a1((jobject) NULL);
          PyTypeObject **p1;
          FieldEventEnablingPredicateFilter object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::events::FieldEnablingPredicate::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEnablingPredicate::parameters_))
          {
            INT_CALL(object = FieldEventEnablingPredicateFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_g(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventEnablingPredicateFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_getDetector(t_FieldEventEnablingPredicateFilter *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_init(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldEventEnablingPredicateFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventEnablingPredicateFilter_get__parameters_(t_FieldEventEnablingPredicateFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_get__detector(t_FieldEventEnablingPredicateFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PV::class$ = NULL;
        jmethodID *PV::mids$ = NULL;
        bool PV::live$ = false;
        ::java::lang::String *PV::MEASUREMENT_TYPE = NULL;

        jclass PV::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PV");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_15beb50931c1cf88] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_9f586bcdceee113e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_8a2365ac496613b2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_3003177fad71f016] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[D[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_88bd0c310d4fcdf3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getCorrelationCoefficientsMatrix_8cf5267aa13a77f3] = env->getMethodID(cls, "getCorrelationCoefficientsMatrix", "()[[D");
            mids$[mid_getCovarianceMatrix_8cf5267aa13a77f3] = env->getMethodID(cls, "getCovarianceMatrix", "()[[D");
            mids$[mid_getPosition_f88961cca75a2c0a] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getVelocity_f88961cca75a2c0a] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_15beb50931c1cf88, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< JArray< jdouble > > & a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_9f586bcdceee113e, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_8a2365ac496613b2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_3003177fad71f016, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_88bd0c310d4fcdf3, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        JArray< JArray< jdouble > > PV::getCorrelationCoefficientsMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCorrelationCoefficientsMatrix_8cf5267aa13a77f3]));
        }

        JArray< JArray< jdouble > > PV::getCovarianceMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_8cf5267aa13a77f3]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PV::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_f88961cca75a2c0a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PV::getVelocity() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_f88961cca75a2c0a]));
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
        static PyObject *t_PV_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PV_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PV_of_(t_PV *self, PyObject *args);
        static int t_PV_init_(t_PV *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PV_getCorrelationCoefficientsMatrix(t_PV *self);
        static PyObject *t_PV_getCovarianceMatrix(t_PV *self);
        static PyObject *t_PV_getPosition(t_PV *self);
        static PyObject *t_PV_getVelocity(t_PV *self);
        static PyObject *t_PV_get__correlationCoefficientsMatrix(t_PV *self, void *data);
        static PyObject *t_PV_get__covarianceMatrix(t_PV *self, void *data);
        static PyObject *t_PV_get__position(t_PV *self, void *data);
        static PyObject *t_PV_get__velocity(t_PV *self, void *data);
        static PyObject *t_PV_get__parameters_(t_PV *self, void *data);
        static PyGetSetDef t_PV__fields_[] = {
          DECLARE_GET_FIELD(t_PV, correlationCoefficientsMatrix),
          DECLARE_GET_FIELD(t_PV, covarianceMatrix),
          DECLARE_GET_FIELD(t_PV, position),
          DECLARE_GET_FIELD(t_PV, velocity),
          DECLARE_GET_FIELD(t_PV, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PV__methods_[] = {
          DECLARE_METHOD(t_PV, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PV, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PV, of_, METH_VARARGS),
          DECLARE_METHOD(t_PV, getCorrelationCoefficientsMatrix, METH_NOARGS),
          DECLARE_METHOD(t_PV, getCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_PV, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_PV, getVelocity, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PV)[] = {
          { Py_tp_methods, t_PV__methods_ },
          { Py_tp_init, (void *) t_PV_init_ },
          { Py_tp_getset, t_PV__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PV)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(PV, t_PV, PV);
        PyObject *t_PV::wrap_Object(const PV& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PV::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PV *self = (t_PV *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PV::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PV::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PV *self = (t_PV *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PV::install(PyObject *module)
        {
          installType(&PY_TYPE(PV), &PY_TYPE_DEF(PV), module, "PV", 0);
        }

        void t_PV::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "class_", make_descriptor(PV::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "wrapfn_", make_descriptor(t_PV::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "boxfn_", make_descriptor(boxObject));
          env->getClass(PV::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PV), "MEASUREMENT_TYPE", make_descriptor(j2p(*PV::MEASUREMENT_TYPE)));
        }

        static PyObject *t_PV_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PV::initializeClass, 1)))
            return NULL;
          return t_PV::wrap_Object(PV(((t_PV *) arg)->object.this$));
        }
        static PyObject *t_PV_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PV::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PV_of_(t_PV *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PV_init_(t_PV *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              jdouble a4;
              ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< JArray< jdouble > > a3((jobject) NULL);
              jdouble a4;
              ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[D[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< JArray< jdouble > > a3((jobject) NULL);
              JArray< JArray< jdouble > > a4((jobject) NULL);
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkk[[D[[DDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
                break;
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
              PV object((jobject) NULL);

              if (!parseArgs(args, "kkkDDDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = PV(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
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

        static PyObject *t_PV_getCorrelationCoefficientsMatrix(t_PV *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_PV_getCovarianceMatrix(t_PV *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceMatrix());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_PV_getPosition(t_PV *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_PV_getVelocity(t_PV *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }
        static PyObject *t_PV_get__parameters_(t_PV *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_PV_get__correlationCoefficientsMatrix(t_PV *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationCoefficientsMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_PV_get__covarianceMatrix(t_PV *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_PV_get__position(t_PV *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_PV_get__velocity(t_PV *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *AbstractGaussianContributionContext::class$ = NULL;
            jmethodID *AbstractGaussianContributionContext::mids$ = NULL;
            bool AbstractGaussianContributionContext::live$ = false;

            jclass AbstractGaussianContributionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCo2AB_557b8123390d8d0c] = env->getMethodID(cls, "getCo2AB", "()D");
                mids$[mid_getMeanMotion_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOOA_557b8123390d8d0c] = env->getMethodID(cls, "getOOA", "()D");
                mids$[mid_getOOAB_557b8123390d8d0c] = env->getMethodID(cls, "getOOAB", "()D");
                mids$[mid_getOoBpo_557b8123390d8d0c] = env->getMethodID(cls, "getOoBpo", "()D");
                mids$[mid_getOoMU_557b8123390d8d0c] = env->getMethodID(cls, "getOoMU", "()D");
                mids$[mid_getTon2a_557b8123390d8d0c] = env->getMethodID(cls, "getTon2a", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble AbstractGaussianContributionContext::getCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCo2AB_557b8123390d8d0c]);
            }

            jdouble AbstractGaussianContributionContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_557b8123390d8d0c]);
            }

            jdouble AbstractGaussianContributionContext::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
            }

            jdouble AbstractGaussianContributionContext::getOOA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOOA_557b8123390d8d0c]);
            }

            jdouble AbstractGaussianContributionContext::getOOAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOOAB_557b8123390d8d0c]);
            }

            jdouble AbstractGaussianContributionContext::getOoBpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoBpo_557b8123390d8d0c]);
            }

            jdouble AbstractGaussianContributionContext::getOoMU() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoMU_557b8123390d8d0c]);
            }

            jdouble AbstractGaussianContributionContext::getTon2a() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTon2a_557b8123390d8d0c]);
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
            static PyObject *t_AbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContributionContext_getCo2AB(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getMeanMotion(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getMu(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOOA(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOOAB(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOoBpo(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getOoMU(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_getTon2a(t_AbstractGaussianContributionContext *self);
            static PyObject *t_AbstractGaussianContributionContext_get__co2AB(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__meanMotion(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__mu(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__oOA(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__oOAB(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ooBpo(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ooMU(t_AbstractGaussianContributionContext *self, void *data);
            static PyObject *t_AbstractGaussianContributionContext_get__ton2a(t_AbstractGaussianContributionContext *self, void *data);
            static PyGetSetDef t_AbstractGaussianContributionContext__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, co2AB),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, meanMotion),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, mu),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, oOA),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, oOAB),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ooBpo),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ooMU),
              DECLARE_GET_FIELD(t_AbstractGaussianContributionContext, ton2a),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGaussianContributionContext__methods_[] = {
              DECLARE_METHOD(t_AbstractGaussianContributionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getMu, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOOA, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOOAB, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOoBpo, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getOoMU, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContributionContext, getTon2a, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGaussianContributionContext)[] = {
              { Py_tp_methods, t_AbstractGaussianContributionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractGaussianContributionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGaussianContributionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(AbstractGaussianContributionContext, t_AbstractGaussianContributionContext, AbstractGaussianContributionContext);

            void t_AbstractGaussianContributionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGaussianContributionContext), &PY_TYPE_DEF(AbstractGaussianContributionContext), module, "AbstractGaussianContributionContext", 0);
            }

            void t_AbstractGaussianContributionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "class_", make_descriptor(AbstractGaussianContributionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "wrapfn_", make_descriptor(t_AbstractGaussianContributionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContributionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGaussianContributionContext::initializeClass, 1)))
                return NULL;
              return t_AbstractGaussianContributionContext::wrap_Object(AbstractGaussianContributionContext(((t_AbstractGaussianContributionContext *) arg)->object.this$));
            }
            static PyObject *t_AbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGaussianContributionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractGaussianContributionContext_getCo2AB(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getMeanMotion(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getMu(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOOA(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOOA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOOAB(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOOAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOoBpo(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoBpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getOoMU(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoMU());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_getTon2a(t_AbstractGaussianContributionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTon2a());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__co2AB(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__meanMotion(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__mu(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__oOA(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOOA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__oOAB(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOOAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ooBpo(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoBpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ooMU(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoMU());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractGaussianContributionContext_get__ton2a(t_AbstractGaussianContributionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTon2a());
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
#include "org/orekit/estimation/leastsquares/BatchLSModel.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSModel::class$ = NULL;
        jmethodID *BatchLSModel::mids$ = NULL;
        bool BatchLSModel::live$ = false;

        jclass BatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2406e4cf7f21e166] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_configureHarvester_58ff847451f5cf92] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_614fe55969c9646f] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BatchLSModel::BatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_2406e4cf7f21e166, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
      namespace leastsquares {
        static PyObject *t_BatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BatchLSModel_init_(t_BatchLSModel *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BatchLSModel__methods_[] = {
          DECLARE_METHOD(t_BatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSModel, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSModel)[] = {
          { Py_tp_methods, t_BatchLSModel__methods_ },
          { Py_tp_init, (void *) t_BatchLSModel_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(BatchLSModel, t_BatchLSModel, BatchLSModel);

        void t_BatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSModel), &PY_TYPE_DEF(BatchLSModel), module, "BatchLSModel", 0);
        }

        void t_BatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "class_", make_descriptor(BatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "wrapfn_", make_descriptor(t_BatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSModel::initializeClass, 1)))
            return NULL;
          return t_BatchLSModel::wrap_Object(BatchLSModel(((t_BatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_BatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BatchLSModel_init_(t_BatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          BatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = BatchLSModel(a0, a1, a2, a3));
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
#include "org/hipparchus/random/Well19937a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well19937a::class$ = NULL;
      jmethodID *Well19937a::mids$ = NULL;
      bool Well19937a::live$ = false;

      jclass Well19937a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well19937a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_ec63cb8a58ef5a54] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well19937a::Well19937a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      Well19937a::Well19937a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_ec63cb8a58ef5a54, a0.this$)) {}

      Well19937a::Well19937a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      Well19937a::Well19937a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

      jint Well19937a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_Well19937a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well19937a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well19937a_init_(t_Well19937a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well19937a_nextInt(t_Well19937a *self, PyObject *args);

      static PyMethodDef t_Well19937a__methods_[] = {
        DECLARE_METHOD(t_Well19937a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well19937a)[] = {
        { Py_tp_methods, t_Well19937a__methods_ },
        { Py_tp_init, (void *) t_Well19937a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well19937a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well19937a, t_Well19937a, Well19937a);

      void t_Well19937a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well19937a), &PY_TYPE_DEF(Well19937a), module, "Well19937a", 0);
      }

      void t_Well19937a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "class_", make_descriptor(Well19937a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "wrapfn_", make_descriptor(t_Well19937a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well19937a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well19937a::initializeClass, 1)))
          return NULL;
        return t_Well19937a::wrap_Object(Well19937a(((t_Well19937a *) arg)->object.this$));
      }
      static PyObject *t_Well19937a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well19937a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well19937a_init_(t_Well19937a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well19937a object((jobject) NULL);

            INT_CALL(object = Well19937a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well19937a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well19937a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well19937a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well19937a(a0));
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

      static PyObject *t_Well19937a_nextInt(t_Well19937a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well19937a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/ODEFixedStepHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEFixedStepHandler::class$ = NULL;
        jmethodID *ODEFixedStepHandler::mids$ = NULL;
        bool ODEFixedStepHandler::live$ = false;

        jclass ODEFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_handleStep_2a375bce4b32792c] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Z)V");
            mids$[mid_init_7e69c83de8052a2b] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEFixedStepHandler::handleStep(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jboolean a1) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_2a375bce4b32792c], a0.this$, a1);
        }

        void ODEFixedStepHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_7e69c83de8052a2b], a0.this$, a1);
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
        static PyObject *t_ODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEFixedStepHandler_handleStep(t_ODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_ODEFixedStepHandler_init(t_ODEFixedStepHandler *self, PyObject *args);

        static PyMethodDef t_ODEFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_ODEFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEFixedStepHandler, handleStep, METH_VARARGS),
          DECLARE_METHOD(t_ODEFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEFixedStepHandler)[] = {
          { Py_tp_methods, t_ODEFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEFixedStepHandler, t_ODEFixedStepHandler, ODEFixedStepHandler);

        void t_ODEFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEFixedStepHandler), &PY_TYPE_DEF(ODEFixedStepHandler), module, "ODEFixedStepHandler", 0);
        }

        void t_ODEFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "class_", make_descriptor(ODEFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "wrapfn_", make_descriptor(t_ODEFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_ODEFixedStepHandler::wrap_Object(ODEFixedStepHandler(((t_ODEFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEFixedStepHandler_handleStep(t_ODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jboolean a1;

          if (!parseArgs(args, "kZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.handleStep(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", args);
          return NULL;
        }

        static PyObject *t_ODEFixedStepHandler_init(t_ODEFixedStepHandler *self, PyObject *args)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
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
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getField_b172e05bf38ec4f1] = env->getStaticMethodID(cls, "getField", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/analysis/differentiation/FieldGradientField;");
            mids$[mid_getOne_fc34f2fa32af76f3] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_fc34f2fa32af76f3] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldGradientField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        FieldGradientField FieldGradientField::getField(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradientField(env->callStaticObjectMethod(cls, mids$[mid_getField_b172e05bf38ec4f1], a0.this$, a1));
        }

        ::org::hipparchus::analysis::differentiation::FieldGradient FieldGradientField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callObjectMethod(this$, mids$[mid_getOne_fc34f2fa32af76f3]));
        }

        ::java::lang::Class FieldGradientField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
        }

        ::org::hipparchus::analysis::differentiation::FieldGradient FieldGradientField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callObjectMethod(this$, mids$[mid_getZero_fc34f2fa32af76f3]));
        }

        jint FieldGradientField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
#include "org/orekit/utils/FieldTimeSpanMap.h"
#include "java/util/SortedSet.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/FieldTimeSpanMap$Transition.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTimeSpanMap::class$ = NULL;
      jmethodID *FieldTimeSpanMap::mids$ = NULL;
      bool FieldTimeSpanMap::live$ = false;

      jclass FieldTimeSpanMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTimeSpanMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7384cc2619eea255] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Lorg/hipparchus/Field;)V");
          mids$[mid_addValidAfter_5620e6c4fac9acfa] = env->getMethodID(cls, "addValidAfter", "(Ljava/lang/Object;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_addValidBefore_5620e6c4fac9acfa] = env->getMethodID(cls, "addValidBefore", "(Ljava/lang/Object;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_get_84ba864745aad457] = env->getMethodID(cls, "get", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/lang/Object;");
          mids$[mid_getTransitions_c6b6a992db588a51] = env->getMethodID(cls, "getTransitions", "()Ljava/util/SortedSet;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeSpanMap::FieldTimeSpanMap(const ::java::lang::Object & a0, const ::org::hipparchus::Field & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7384cc2619eea255, a0.this$, a1.this$)) {}

      void FieldTimeSpanMap::addValidAfter(const ::java::lang::Object & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addValidAfter_5620e6c4fac9acfa], a0.this$, a1.this$);
      }

      void FieldTimeSpanMap::addValidBefore(const ::java::lang::Object & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addValidBefore_5620e6c4fac9acfa], a0.this$, a1.this$);
      }

      ::java::lang::Object FieldTimeSpanMap::get$(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_84ba864745aad457], a0.this$));
      }

      ::java::util::SortedSet FieldTimeSpanMap::getTransitions() const
      {
        return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getTransitions_c6b6a992db588a51]));
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
      static PyObject *t_FieldTimeSpanMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap_of_(t_FieldTimeSpanMap *self, PyObject *args);
      static int t_FieldTimeSpanMap_init_(t_FieldTimeSpanMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTimeSpanMap_addValidAfter(t_FieldTimeSpanMap *self, PyObject *args);
      static PyObject *t_FieldTimeSpanMap_addValidBefore(t_FieldTimeSpanMap *self, PyObject *args);
      static PyObject *t_FieldTimeSpanMap_get(t_FieldTimeSpanMap *self, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap_getTransitions(t_FieldTimeSpanMap *self);
      static PyObject *t_FieldTimeSpanMap_get__transitions(t_FieldTimeSpanMap *self, void *data);
      static PyObject *t_FieldTimeSpanMap_get__parameters_(t_FieldTimeSpanMap *self, void *data);
      static PyGetSetDef t_FieldTimeSpanMap__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeSpanMap, transitions),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeSpanMap__methods_[] = {
        DECLARE_METHOD(t_FieldTimeSpanMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap, addValidAfter, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap, addValidBefore, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap, get, METH_O),
        DECLARE_METHOD(t_FieldTimeSpanMap, getTransitions, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeSpanMap)[] = {
        { Py_tp_methods, t_FieldTimeSpanMap__methods_ },
        { Py_tp_init, (void *) t_FieldTimeSpanMap_init_ },
        { Py_tp_getset, t_FieldTimeSpanMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeSpanMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeSpanMap, t_FieldTimeSpanMap, FieldTimeSpanMap);
      PyObject *t_FieldTimeSpanMap::wrap_Object(const FieldTimeSpanMap& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap *self = (t_FieldTimeSpanMap *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeSpanMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap *self = (t_FieldTimeSpanMap *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeSpanMap::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeSpanMap), &PY_TYPE_DEF(FieldTimeSpanMap), module, "FieldTimeSpanMap", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "Transition", make_descriptor(&PY_TYPE_DEF(FieldTimeSpanMap$Transition)));
      }

      void t_FieldTimeSpanMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "class_", make_descriptor(FieldTimeSpanMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "wrapfn_", make_descriptor(t_FieldTimeSpanMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeSpanMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeSpanMap::initializeClass, 1)))
          return NULL;
        return t_FieldTimeSpanMap::wrap_Object(FieldTimeSpanMap(((t_FieldTimeSpanMap *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeSpanMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeSpanMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeSpanMap_of_(t_FieldTimeSpanMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTimeSpanMap_init_(t_FieldTimeSpanMap *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::hipparchus::Field a1((jobject) NULL);
        PyTypeObject **p1;
        FieldTimeSpanMap object((jobject) NULL);

        if (!parseArgs(args, "oK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_Field::parameters_))
        {
          INT_CALL(object = FieldTimeSpanMap(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTimeSpanMap_addValidAfter(t_FieldTimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "OK", self->parameters[0], ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(self->object.addValidAfter(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addValidAfter", args);
        return NULL;
      }

      static PyObject *t_FieldTimeSpanMap_addValidBefore(t_FieldTimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "OK", self->parameters[0], ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(self->object.addValidBefore(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBefore", args);
        return NULL;
      }

      static PyObject *t_FieldTimeSpanMap_get(t_FieldTimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::lang::Object result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeSpanMap_getTransitions(t_FieldTimeSpanMap *self)
      {
        ::java::util::SortedSet result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransitions());
        return ::java::util::t_SortedSet::wrap_Object(result);
      }
      static PyObject *t_FieldTimeSpanMap_get__parameters_(t_FieldTimeSpanMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeSpanMap_get__transitions(t_FieldTimeSpanMap *self, void *data)
      {
        ::java::util::SortedSet value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransitions());
        return ::java::util::t_SortedSet::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalPropagator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalPropagator::mids$ = NULL;
        bool PythonAbstractAnalyticalPropagator::live$ = false;

        jclass PythonAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8fa6c0c067ead7b2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMass_b0b988f941da47d8] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_propagateOrbit_9e937c0ae63d8022] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetIntermediateState_45bf76e836befe86] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalPropagator::PythonAbstractAnalyticalPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_8fa6c0c067ead7b2, a0.this$)) {}

        void PythonAbstractAnalyticalPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractAnalyticalPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractAnalyticalPropagator::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace analytical {
        static PyObject *t_PythonAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalPropagator_init_(t_PythonAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalPropagator_finalize(t_PythonAbstractAnalyticalPropagator *self);
        static PyObject *t_PythonAbstractAnalyticalPropagator_pythonExtension(t_PythonAbstractAnalyticalPropagator *self, PyObject *args);
        static jdouble JNICALL t_PythonAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractAnalyticalPropagator_propagateOrbit1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractAnalyticalPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractAnalyticalPropagator_resetIntermediateState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
        static PyObject *t_PythonAbstractAnalyticalPropagator_get__self(t_PythonAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalPropagator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalPropagator_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalPropagator, t_PythonAbstractAnalyticalPropagator, PythonAbstractAnalyticalPropagator);

        void t_PythonAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalPropagator), &PY_TYPE_DEF(PythonAbstractAnalyticalPropagator), module, "PythonAbstractAnalyticalPropagator", 1);
        }

        void t_PythonAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "class_", make_descriptor(PythonAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "getMass", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractAnalyticalPropagator_getMass0 },
            { "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;", (void *) t_PythonAbstractAnalyticalPropagator_propagateOrbit1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalPropagator_pythonDecRef2 },
            { "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V", (void *) t_PythonAbstractAnalyticalPropagator_resetIntermediateState3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalPropagator::wrap_Object(PythonAbstractAnalyticalPropagator(((t_PythonAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalPropagator_init_(t_PythonAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          PythonAbstractAnalyticalPropagator object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractAnalyticalPropagator(a0));
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

        static PyObject *t_PythonAbstractAnalyticalPropagator_finalize(t_PythonAbstractAnalyticalPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_pythonExtension(t_PythonAbstractAnalyticalPropagator *self, PyObject *args)
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

        static jdouble JNICALL t_PythonAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMass", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMass", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonAbstractAnalyticalPropagator_propagateOrbit1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::Orbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "propagateOrbit", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
          {
            throwTypeError("propagateOrbit", result);
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

        static void JNICALL t_PythonAbstractAnalyticalPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAbstractAnalyticalPropagator_resetIntermediateState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalPropagator::mids$[PythonAbstractAnalyticalPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "resetIntermediateState", "OO", o0, o1);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonAbstractAnalyticalPropagator_get__self(t_PythonAbstractAnalyticalPropagator *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/AbstractRuleFactory.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/gauss/RuleFactory.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *AbstractRuleFactory::class$ = NULL;
          jmethodID *AbstractRuleFactory::mids$ = NULL;
          bool AbstractRuleFactory::live$ = false;

          jclass AbstractRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/AbstractRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getRule_9a5adfb225849173] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_computeRule_9a5adfb225849173] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");
              mids$[mid_findRoots_a458920118f0992d] = env->getMethodID(cls, "findRoots", "(ILorg/hipparchus/analysis/UnivariateFunction;)[D");
              mids$[mid_enforceSymmetry_cc18240f4a737f14] = env->getMethodID(cls, "enforceSymmetry", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRuleFactory::AbstractRuleFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::hipparchus::util::Pair AbstractRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_9a5adfb225849173], a0));
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
          static PyObject *t_AbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRuleFactory_init_(t_AbstractRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractRuleFactory_getRule(t_AbstractRuleFactory *self, PyObject *arg);

          static PyMethodDef t_AbstractRuleFactory__methods_[] = {
            DECLARE_METHOD(t_AbstractRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRuleFactory)[] = {
            { Py_tp_methods, t_AbstractRuleFactory__methods_ },
            { Py_tp_init, (void *) t_AbstractRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRuleFactory, t_AbstractRuleFactory, AbstractRuleFactory);

          void t_AbstractRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRuleFactory), &PY_TYPE_DEF(AbstractRuleFactory), module, "AbstractRuleFactory", 0);
          }

          void t_AbstractRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "class_", make_descriptor(AbstractRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "wrapfn_", make_descriptor(t_AbstractRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRuleFactory::initializeClass, 1)))
              return NULL;
            return t_AbstractRuleFactory::wrap_Object(AbstractRuleFactory(((t_AbstractRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_AbstractRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRuleFactory_init_(t_AbstractRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            AbstractRuleFactory object((jobject) NULL);

            INT_CALL(object = AbstractRuleFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_AbstractRuleFactory_getRule(t_AbstractRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::java::lang::PY_TYPE(Object), ::java::lang::PY_TYPE(Object));
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldAbstractPropagator.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldAbstractPropagator::class$ = NULL;
      jmethodID *FieldAbstractPropagator::mids$ = NULL;
      bool FieldAbstractPropagator::live$ = false;

      jclass FieldAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_1dbe9cc03f00d454] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_getAdditionalStateProviders_0d9551367f7ecdef] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_381b3e011cde018d] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_5d7d8c500345981d] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_da8c64c8d63a3f9a] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_5324cbf9e5ce58fe] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_resetInitialState_b66c84a5711243d5] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setStartDate_96f1f04e218525b7] = env->getMethodID(cls, "setStartDate", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_updateAdditionalStates_4f12774dd382c6f4] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_initializePropagation_0640e6acf969ed28] = env->getMethodID(cls, "initializePropagation", "()V");
          mids$[mid_initializeAdditionalStates_96f1f04e218525b7] = env->getMethodID(cls, "initializeAdditionalStates", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_updateUnmanagedStates_4f12774dd382c6f4] = env->getMethodID(cls, "updateUnmanagedStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getStartDate_f1fe4daf77c66560] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_stateChanged_b66c84a5711243d5] = env->getMethodID(cls, "stateChanged", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldAbstractPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::FieldAdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_1dbe9cc03f00d454], a0.this$);
      }

      ::java::util::List FieldAbstractPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_0d9551367f7ecdef]));
      }

      ::org::orekit::attitudes::AttitudeProvider FieldAbstractPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_6df6b78ab9377151]));
      }

      ::org::hipparchus::Field FieldAbstractPropagator::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
      }

      ::org::orekit::frames::Frame FieldAbstractPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldAbstractPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_381b3e011cde018d]));
      }

      JArray< ::java::lang::String > FieldAbstractPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_5d7d8c500345981d]));
      }

      ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer FieldAbstractPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_da8c64c8d63a3f9a]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbstractPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_4ac52e75113a03db], a0.this$, a1.this$));
      }

      jboolean FieldAbstractPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe], a0.this$);
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldAbstractPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_5324cbf9e5ce58fe], a0.this$));
      }

      void FieldAbstractPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_b66c84a5711243d5], a0.this$);
      }

      void FieldAbstractPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
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
      static PyObject *t_FieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_of_(t_FieldAbstractPropagator *self, PyObject *args);
      static PyObject *t_FieldAbstractPropagator_addAdditionalStateProvider(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_getAdditionalStateProviders(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getAttitudeProvider(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getField(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getFrame(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getInitialState(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getManagedAdditionalStates(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getMultiplexer(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getPVCoordinates(t_FieldAbstractPropagator *self, PyObject *args);
      static PyObject *t_FieldAbstractPropagator_isAdditionalStateManaged(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_propagate(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_resetInitialState(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_setAttitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_get__additionalStateProviders(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__attitudeProvider(t_FieldAbstractPropagator *self, void *data);
      static int t_FieldAbstractPropagator_set__attitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg, void *data);
      static PyObject *t_FieldAbstractPropagator_get__field(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__frame(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__initialState(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__managedAdditionalStates(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__multiplexer(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__parameters_(t_FieldAbstractPropagator *self, void *data);
      static PyGetSetDef t_FieldAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_FieldAbstractPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, field),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, frame),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, initialState),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, multiplexer),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbstractPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, propagate, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, setAttitudeProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbstractPropagator)[] = {
        { Py_tp_methods, t_FieldAbstractPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbstractPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAbstractPropagator, t_FieldAbstractPropagator, FieldAbstractPropagator);
      PyObject *t_FieldAbstractPropagator::wrap_Object(const FieldAbstractPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbstractPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbstractPropagator *self = (t_FieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbstractPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbstractPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbstractPropagator *self = (t_FieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbstractPropagator), &PY_TYPE_DEF(FieldAbstractPropagator), module, "FieldAbstractPropagator", 0);
      }

      void t_FieldAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "class_", make_descriptor(FieldAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "wrapfn_", make_descriptor(t_FieldAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldAbstractPropagator::wrap_Object(FieldAbstractPropagator(((t_FieldAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbstractPropagator_of_(t_FieldAbstractPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldAbstractPropagator_addAdditionalStateProvider(t_FieldAbstractPropagator *self, PyObject *arg)
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

      static PyObject *t_FieldAbstractPropagator_getAdditionalStateProviders(t_FieldAbstractPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getAttitudeProvider(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getField(t_FieldAbstractPropagator *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getFrame(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getInitialState(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getManagedAdditionalStates(t_FieldAbstractPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_FieldAbstractPropagator_getMultiplexer(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getPVCoordinates(t_FieldAbstractPropagator *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_isAdditionalStateManaged(t_FieldAbstractPropagator *self, PyObject *arg)
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

      static PyObject *t_FieldAbstractPropagator_propagate(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.propagate(a0));
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_resetInitialState(t_FieldAbstractPropagator *self, PyObject *arg)
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

      static PyObject *t_FieldAbstractPropagator_setAttitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg)
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
      static PyObject *t_FieldAbstractPropagator_get__parameters_(t_FieldAbstractPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbstractPropagator_get__additionalStateProviders(t_FieldAbstractPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__attitudeProvider(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_FieldAbstractPropagator_set__attitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg, void *data)
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

      static PyObject *t_FieldAbstractPropagator_get__field(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__frame(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__initialState(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__managedAdditionalStates(t_FieldAbstractPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_FieldAbstractPropagator_get__multiplexer(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/utils/OccultationEngine$OccultationAngles.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/OccultationEngine$FieldOccultationAngles.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OccultationEngine::class$ = NULL;
      jmethodID *OccultationEngine::mids$ = NULL;
      bool OccultationEngine::live$ = false;

      jclass OccultationEngine::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OccultationEngine");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_96b8e1d4ccad7364] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_angles_df633d7a5dacbba6] = env->getMethodID(cls, "angles", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/utils/OccultationEngine$FieldOccultationAngles;");
          mids$[mid_angles_9914e974952d6aaa] = env->getMethodID(cls, "angles", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/utils/OccultationEngine$OccultationAngles;");
          mids$[mid_getOcculted_9aa0b612d90098c2] = env->getMethodID(cls, "getOcculted", "()Lorg/orekit/utils/ExtendedPVCoordinatesProvider;");
          mids$[mid_getOccultedRadius_557b8123390d8d0c] = env->getMethodID(cls, "getOccultedRadius", "()D");
          mids$[mid_getOcculting_0c55bd1adf955c4c] = env->getMethodID(cls, "getOcculting", "()Lorg/orekit/bodies/OneAxisEllipsoid;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OccultationEngine::OccultationEngine(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96b8e1d4ccad7364, a0.this$, a1, a2.this$)) {}

      ::org::orekit::utils::OccultationEngine$FieldOccultationAngles OccultationEngine::angles(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::orekit::utils::OccultationEngine$FieldOccultationAngles(env->callObjectMethod(this$, mids$[mid_angles_df633d7a5dacbba6], a0.this$));
      }

      ::org::orekit::utils::OccultationEngine$OccultationAngles OccultationEngine::angles(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::orekit::utils::OccultationEngine$OccultationAngles(env->callObjectMethod(this$, mids$[mid_angles_9914e974952d6aaa], a0.this$));
      }

      ::org::orekit::utils::ExtendedPVCoordinatesProvider OccultationEngine::getOcculted() const
      {
        return ::org::orekit::utils::ExtendedPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getOcculted_9aa0b612d90098c2]));
      }

      jdouble OccultationEngine::getOccultedRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOccultedRadius_557b8123390d8d0c]);
      }

      ::org::orekit::bodies::OneAxisEllipsoid OccultationEngine::getOcculting() const
      {
        return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getOcculting_0c55bd1adf955c4c]));
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
      static PyObject *t_OccultationEngine_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OccultationEngine_init_(t_OccultationEngine *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OccultationEngine_angles(t_OccultationEngine *self, PyObject *args);
      static PyObject *t_OccultationEngine_getOcculted(t_OccultationEngine *self);
      static PyObject *t_OccultationEngine_getOccultedRadius(t_OccultationEngine *self);
      static PyObject *t_OccultationEngine_getOcculting(t_OccultationEngine *self);
      static PyObject *t_OccultationEngine_get__occulted(t_OccultationEngine *self, void *data);
      static PyObject *t_OccultationEngine_get__occultedRadius(t_OccultationEngine *self, void *data);
      static PyObject *t_OccultationEngine_get__occulting(t_OccultationEngine *self, void *data);
      static PyGetSetDef t_OccultationEngine__fields_[] = {
        DECLARE_GET_FIELD(t_OccultationEngine, occulted),
        DECLARE_GET_FIELD(t_OccultationEngine, occultedRadius),
        DECLARE_GET_FIELD(t_OccultationEngine, occulting),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OccultationEngine__methods_[] = {
        DECLARE_METHOD(t_OccultationEngine, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine, angles, METH_VARARGS),
        DECLARE_METHOD(t_OccultationEngine, getOcculted, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine, getOccultedRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine, getOcculting, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OccultationEngine)[] = {
        { Py_tp_methods, t_OccultationEngine__methods_ },
        { Py_tp_init, (void *) t_OccultationEngine_init_ },
        { Py_tp_getset, t_OccultationEngine__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OccultationEngine)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OccultationEngine, t_OccultationEngine, OccultationEngine);

      void t_OccultationEngine::install(PyObject *module)
      {
        installType(&PY_TYPE(OccultationEngine), &PY_TYPE_DEF(OccultationEngine), module, "OccultationEngine", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "OccultationAngles", make_descriptor(&PY_TYPE_DEF(OccultationEngine$OccultationAngles)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "FieldOccultationAngles", make_descriptor(&PY_TYPE_DEF(OccultationEngine$FieldOccultationAngles)));
      }

      void t_OccultationEngine::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "class_", make_descriptor(OccultationEngine::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "wrapfn_", make_descriptor(t_OccultationEngine::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OccultationEngine_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OccultationEngine::initializeClass, 1)))
          return NULL;
        return t_OccultationEngine::wrap_Object(OccultationEngine(((t_OccultationEngine *) arg)->object.this$));
      }
      static PyObject *t_OccultationEngine_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OccultationEngine::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OccultationEngine_init_(t_OccultationEngine *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
        jdouble a1;
        ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
        OccultationEngine object((jobject) NULL);

        if (!parseArgs(args, "kDk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = OccultationEngine(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OccultationEngine_angles(t_OccultationEngine *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::OccultationEngine$FieldOccultationAngles result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.angles(a0));
              return ::org::orekit::utils::t_OccultationEngine$FieldOccultationAngles::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::utils::OccultationEngine$OccultationAngles result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.angles(a0));
              return ::org::orekit::utils::t_OccultationEngine$OccultationAngles::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "angles", args);
        return NULL;
      }

      static PyObject *t_OccultationEngine_getOcculted(t_OccultationEngine *self)
      {
        ::org::orekit::utils::ExtendedPVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getOcculted());
        return ::org::orekit::utils::t_ExtendedPVCoordinatesProvider::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine_getOccultedRadius(t_OccultationEngine *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOccultedRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine_getOcculting(t_OccultationEngine *self)
      {
        ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
        OBJ_CALL(result = self->object.getOcculting());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine_get__occulted(t_OccultationEngine *self, void *data)
      {
        ::org::orekit::utils::ExtendedPVCoordinatesProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getOcculted());
        return ::org::orekit::utils::t_ExtendedPVCoordinatesProvider::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine_get__occultedRadius(t_OccultationEngine *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOccultedRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OccultationEngine_get__occulting(t_OccultationEngine *self, void *data)
      {
        ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
        OBJ_CALL(value = self->object.getOcculting());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/PreconditionedIterativeLinearSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *PreconditionedIterativeLinearSolver::class$ = NULL;
      jmethodID *PreconditionedIterativeLinearSolver::mids$ = NULL;
      bool PreconditionedIterativeLinearSolver::live$ = false;

      jclass PreconditionedIterativeLinearSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/PreconditionedIterativeLinearSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5620df2219299797] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;)V");
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_solve_6b479a0f30bd3d0f] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_2afa71936b186c26] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_5846c18557c7b879] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_794cf6c78f8f4b2d] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_2afa71936b186c26] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_794cf6c78f8f4b2d] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_checkParameters_8a2752c0ac4ba040] = env->getStaticMethodID(cls, "checkParameters", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PreconditionedIterativeLinearSolver::PreconditionedIterativeLinearSolver(const ::org::hipparchus::util::IterationManager & a0) : ::org::hipparchus::linear::IterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_5620df2219299797, a0.this$)) {}

      PreconditionedIterativeLinearSolver::PreconditionedIterativeLinearSolver(jint a0) : ::org::hipparchus::linear::IterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_6b479a0f30bd3d0f], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_2afa71936b186c26], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_5846c18557c7b879], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_794cf6c78f8f4b2d], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_2afa71936b186c26], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_794cf6c78f8f4b2d], a0.this$, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_PreconditionedIterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PreconditionedIterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PreconditionedIterativeLinearSolver_init_(t_PreconditionedIterativeLinearSolver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PreconditionedIterativeLinearSolver_solve(t_PreconditionedIterativeLinearSolver *self, PyObject *args);
      static PyObject *t_PreconditionedIterativeLinearSolver_solveInPlace(t_PreconditionedIterativeLinearSolver *self, PyObject *args);

      static PyMethodDef t_PreconditionedIterativeLinearSolver__methods_[] = {
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, solve, METH_VARARGS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PreconditionedIterativeLinearSolver)[] = {
        { Py_tp_methods, t_PreconditionedIterativeLinearSolver__methods_ },
        { Py_tp_init, (void *) t_PreconditionedIterativeLinearSolver_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PreconditionedIterativeLinearSolver)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::IterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(PreconditionedIterativeLinearSolver, t_PreconditionedIterativeLinearSolver, PreconditionedIterativeLinearSolver);

      void t_PreconditionedIterativeLinearSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(PreconditionedIterativeLinearSolver), &PY_TYPE_DEF(PreconditionedIterativeLinearSolver), module, "PreconditionedIterativeLinearSolver", 0);
      }

      void t_PreconditionedIterativeLinearSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "class_", make_descriptor(PreconditionedIterativeLinearSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "wrapfn_", make_descriptor(t_PreconditionedIterativeLinearSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PreconditionedIterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PreconditionedIterativeLinearSolver::initializeClass, 1)))
          return NULL;
        return t_PreconditionedIterativeLinearSolver::wrap_Object(PreconditionedIterativeLinearSolver(((t_PreconditionedIterativeLinearSolver *) arg)->object.this$));
      }
      static PyObject *t_PreconditionedIterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PreconditionedIterativeLinearSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PreconditionedIterativeLinearSolver_init_(t_PreconditionedIterativeLinearSolver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            PreconditionedIterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::util::IterationManager::initializeClass, &a0))
            {
              INT_CALL(object = PreconditionedIterativeLinearSolver(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            PreconditionedIterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = PreconditionedIterativeLinearSolver(a0));
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

      static PyObject *t_PreconditionedIterativeLinearSolver_solve(t_PreconditionedIterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(PreconditionedIterativeLinearSolver), (PyObject *) self, "solve", args, 2);
      }

      static PyObject *t_PreconditionedIterativeLinearSolver_solveInPlace(t_PreconditionedIterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
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
          }
        }

        return callSuper(PY_TYPE(PreconditionedIterativeLinearSolver), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FixedStepSelector.h"
#include "java/util/List.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FixedStepSelector::class$ = NULL;
      jmethodID *FixedStepSelector::mids$ = NULL;
      bool FixedStepSelector::live$ = false;

      jclass FixedStepSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FixedStepSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8c98cae67e6b0d59] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/TimeScale;)V");
          mids$[mid_selectDates_c5683b8e06424542] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedStepSelector::FixedStepSelector(jdouble a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8c98cae67e6b0d59, a0, a1.this$)) {}

      ::java::util::List FixedStepSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_c5683b8e06424542], a0.this$, a1.this$));
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
      static PyObject *t_FixedStepSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedStepSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedStepSelector_init_(t_FixedStepSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedStepSelector_selectDates(t_FixedStepSelector *self, PyObject *args);

      static PyMethodDef t_FixedStepSelector__methods_[] = {
        DECLARE_METHOD(t_FixedStepSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedStepSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedStepSelector, selectDates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedStepSelector)[] = {
        { Py_tp_methods, t_FixedStepSelector__methods_ },
        { Py_tp_init, (void *) t_FixedStepSelector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedStepSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedStepSelector, t_FixedStepSelector, FixedStepSelector);

      void t_FixedStepSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedStepSelector), &PY_TYPE_DEF(FixedStepSelector), module, "FixedStepSelector", 0);
      }

      void t_FixedStepSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "class_", make_descriptor(FixedStepSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "wrapfn_", make_descriptor(t_FixedStepSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedStepSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedStepSelector::initializeClass, 1)))
          return NULL;
        return t_FixedStepSelector::wrap_Object(FixedStepSelector(((t_FixedStepSelector *) arg)->object.this$));
      }
      static PyObject *t_FixedStepSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedStepSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedStepSelector_init_(t_FixedStepSelector *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        FixedStepSelector object((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          INT_CALL(object = FixedStepSelector(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedStepSelector_selectDates(t_FixedStepSelector *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.selectDates(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate));
        }

        PyErr_SetArgsError((PyObject *) self, "selectDates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitStepInterpolator::class$ = NULL;
        jmethodID *FieldOrekitStepInterpolator::mids$ = NULL;
        bool FieldOrekitStepInterpolator::live$ = false;

        jclass FieldOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_381b3e011cde018d] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getInterpolatedState_5324cbf9e5ce58fe] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getPreviousState_381b3e011cde018d] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isForward_89b302893bdbe1f1] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_restrictStep_b313908ffec3e8d3] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getCurrentState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getCurrentState_381b3e011cde018d]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getInterpolatedState(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_5324cbf9e5ce58fe], a0.this$));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrekitStepInterpolator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_4ac52e75113a03db], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getPreviousState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getPreviousState_381b3e011cde018d]));
        }

        jboolean FieldOrekitStepInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_89b302893bdbe1f1]);
        }

        FieldOrekitStepInterpolator FieldOrekitStepInterpolator::restrictStep(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1) const
        {
          return FieldOrekitStepInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_b313908ffec3e8d3], a0.this$, a1.this$));
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
      namespace sampling {
        static PyObject *t_FieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_of_(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_getCurrentState(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_getInterpolatedState(t_FieldOrekitStepInterpolator *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_getPVCoordinates(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_getPreviousState(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_isForward(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_restrictStep(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_get__currentState(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__forward(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__previousState(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__parameters_(t_FieldOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_FieldOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, currentState),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, forward),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, previousState),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_FieldOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::FieldPVCoordinatesProvider),
          NULL
        };

        DEFINE_TYPE(FieldOrekitStepInterpolator, t_FieldOrekitStepInterpolator, FieldOrekitStepInterpolator);
        PyObject *t_FieldOrekitStepInterpolator::wrap_Object(const FieldOrekitStepInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepInterpolator *self = (t_FieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitStepInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepInterpolator *self = (t_FieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitStepInterpolator), &PY_TYPE_DEF(FieldOrekitStepInterpolator), module, "FieldOrekitStepInterpolator", 0);
        }

        void t_FieldOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "class_", make_descriptor(FieldOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "wrapfn_", make_descriptor(t_FieldOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitStepInterpolator::wrap_Object(FieldOrekitStepInterpolator(((t_FieldOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitStepInterpolator_of_(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getCurrentState(t_FieldOrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getInterpolatedState(t_FieldOrekitStepInterpolator *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepInterpolator_getPVCoordinates(t_FieldOrekitStepInterpolator *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldOrekitStepInterpolator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getPreviousState(t_FieldOrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepInterpolator_isForward(t_FieldOrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldOrekitStepInterpolator_restrictStep(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
          PyTypeObject **p1;
          FieldOrekitStepInterpolator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_FieldOrekitStepInterpolator::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }
        static PyObject *t_FieldOrekitStepInterpolator_get__parameters_(t_FieldOrekitStepInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__currentState(t_FieldOrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__forward(t_FieldOrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__previousState(t_FieldOrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemSegment::class$ = NULL;
              jmethodID *OemSegment::mids$ = NULL;
              bool OemSegment::live$ = false;

              jclass OemSegment::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemSegment");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_b46b87d49e1973b7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Lorg/orekit/files/ccsds/ndm/odm/oem/OemData;D)V");
                  mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getCovarianceMatrices_0d9551367f7ecdef] = env->getMethodID(cls, "getCovarianceMatrices", "()Ljava/util/List;");
                  mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInertialFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemSegment::OemSegment(const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemData & a1, jdouble a2) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_b46b87d49e1973b7, a0.this$, a1.this$, a2)) {}

              ::org::orekit::utils::CartesianDerivativesFilter OemSegment::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837]));
              }

              ::java::util::List OemSegment::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_0d9551367f7ecdef]));
              }

              ::java::util::List OemSegment::getCovarianceMatrices() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrices_0d9551367f7ecdef]));
              }

              ::org::orekit::frames::Frame OemSegment::getFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
              }

              ::org::orekit::frames::Frame OemSegment::getInertialFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_6c9bc0a928c56d4e]));
              }

              jint OemSegment::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_412668abc8d889e9]);
              }

              jdouble OemSegment::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
              }

              ::org::orekit::time::AbsoluteDate OemSegment::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate OemSegment::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
            namespace oem {
              static PyObject *t_OemSegment_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemSegment_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemSegment_of_(t_OemSegment *self, PyObject *args);
              static int t_OemSegment_init_(t_OemSegment *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemSegment_getAvailableDerivatives(t_OemSegment *self);
              static PyObject *t_OemSegment_getCoordinates(t_OemSegment *self);
              static PyObject *t_OemSegment_getCovarianceMatrices(t_OemSegment *self);
              static PyObject *t_OemSegment_getFrame(t_OemSegment *self);
              static PyObject *t_OemSegment_getInertialFrame(t_OemSegment *self);
              static PyObject *t_OemSegment_getInterpolationSamples(t_OemSegment *self);
              static PyObject *t_OemSegment_getMu(t_OemSegment *self);
              static PyObject *t_OemSegment_getStart(t_OemSegment *self);
              static PyObject *t_OemSegment_getStop(t_OemSegment *self);
              static PyObject *t_OemSegment_get__availableDerivatives(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__coordinates(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__covarianceMatrices(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__frame(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__inertialFrame(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__interpolationSamples(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__mu(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__start(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__stop(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__parameters_(t_OemSegment *self, void *data);
              static PyGetSetDef t_OemSegment__fields_[] = {
                DECLARE_GET_FIELD(t_OemSegment, availableDerivatives),
                DECLARE_GET_FIELD(t_OemSegment, coordinates),
                DECLARE_GET_FIELD(t_OemSegment, covarianceMatrices),
                DECLARE_GET_FIELD(t_OemSegment, frame),
                DECLARE_GET_FIELD(t_OemSegment, inertialFrame),
                DECLARE_GET_FIELD(t_OemSegment, interpolationSamples),
                DECLARE_GET_FIELD(t_OemSegment, mu),
                DECLARE_GET_FIELD(t_OemSegment, start),
                DECLARE_GET_FIELD(t_OemSegment, stop),
                DECLARE_GET_FIELD(t_OemSegment, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemSegment__methods_[] = {
                DECLARE_METHOD(t_OemSegment, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSegment, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSegment, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemSegment, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getCovarianceMatrices, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getInertialFrame, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemSegment)[] = {
                { Py_tp_methods, t_OemSegment__methods_ },
                { Py_tp_init, (void *) t_OemSegment_init_ },
                { Py_tp_getset, t_OemSegment__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemSegment)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
                NULL
              };

              DEFINE_TYPE(OemSegment, t_OemSegment, OemSegment);
              PyObject *t_OemSegment::wrap_Object(const OemSegment& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemSegment::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemSegment *self = (t_OemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OemSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemSegment::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemSegment *self = (t_OemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OemSegment::install(PyObject *module)
              {
                installType(&PY_TYPE(OemSegment), &PY_TYPE_DEF(OemSegment), module, "OemSegment", 0);
              }

              void t_OemSegment::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSegment), "class_", make_descriptor(OemSegment::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSegment), "wrapfn_", make_descriptor(t_OemSegment::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSegment), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemSegment_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemSegment::initializeClass, 1)))
                  return NULL;
                return t_OemSegment::wrap_Object(OemSegment(((t_OemSegment *) arg)->object.this$));
              }
              static PyObject *t_OemSegment_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemSegment::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemSegment_of_(t_OemSegment *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OemSegment_init_(t_OemSegment *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemData a1((jobject) NULL);
                jdouble a2;
                OemSegment object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemData::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = OemSegment(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemMetadata);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemSegment_getAvailableDerivatives(t_OemSegment *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getCoordinates(t_OemSegment *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemSegment_getCovarianceMatrices(t_OemSegment *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(CartesianCovariance));
              }

              static PyObject *t_OemSegment_getFrame(t_OemSegment *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getInertialFrame(t_OemSegment *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertialFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getInterpolationSamples(t_OemSegment *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OemSegment_getMu(t_OemSegment *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OemSegment_getStart(t_OemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getStop(t_OemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              static PyObject *t_OemSegment_get__parameters_(t_OemSegment *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OemSegment_get__availableDerivatives(t_OemSegment *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__coordinates(t_OemSegment *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__covarianceMatrices(t_OemSegment *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__frame(t_OemSegment *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__inertialFrame(t_OemSegment *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertialFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__interpolationSamples(t_OemSegment *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OemSegment_get__mu(t_OemSegment *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OemSegment_get__start(t_OemSegment *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__stop(t_OemSegment *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$SystemConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$SystemConfiguration::mids$ = NULL;
        bool CRDConfiguration$SystemConfiguration::live$ = false;

        jclass CRDConfiguration$SystemConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getComponents_0d9551367f7ecdef] = env->getMethodID(cls, "getComponents", "()Ljava/util/List;");
            mids$[mid_getSystemId_3cffd47377eca18a] = env->getMethodID(cls, "getSystemId", "()Ljava/lang/String;");
            mids$[mid_getWavelength_557b8123390d8d0c] = env->getMethodID(cls, "getWavelength", "()D");
            mids$[mid_setComponents_cb4082327a3ebdc5] = env->getMethodID(cls, "setComponents", "([Ljava/lang/String;)V");
            mids$[mid_setSystemId_f5ffdf29129ef90a] = env->getMethodID(cls, "setSystemId", "(Ljava/lang/String;)V");
            mids$[mid_setWavelength_10f281d777284cea] = env->getMethodID(cls, "setWavelength", "(D)V");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$SystemConfiguration::CRDConfiguration$SystemConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::java::util::List CRDConfiguration$SystemConfiguration::getComponents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComponents_0d9551367f7ecdef]));
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::getSystemId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemId_3cffd47377eca18a]));
        }

        jdouble CRDConfiguration$SystemConfiguration::getWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWavelength_557b8123390d8d0c]);
        }

        void CRDConfiguration$SystemConfiguration::setComponents(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setComponents_cb4082327a3ebdc5], a0.this$);
        }

        void CRDConfiguration$SystemConfiguration::setSystemId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemId_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$SystemConfiguration::setWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setWavelength_10f281d777284cea], a0);
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$SystemConfiguration::toString() const
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
        static PyObject *t_CRDConfiguration$SystemConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$SystemConfiguration_init_(t_CRDConfiguration$SystemConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getComponents(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getSystemId(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_getWavelength(t_CRDConfiguration$SystemConfiguration *self);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setComponents(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setSystemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_setWavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SystemConfiguration_toCrdString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SystemConfiguration_toString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__components(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__components(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__systemId(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__systemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SystemConfiguration_get__wavelength(t_CRDConfiguration$SystemConfiguration *self, void *data);
        static int t_CRDConfiguration$SystemConfiguration_set__wavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$SystemConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, components),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, systemId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SystemConfiguration, wavelength),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$SystemConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getSystemId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, getWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setComponents, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setSystemId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, setWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$SystemConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$SystemConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$SystemConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$SystemConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$SystemConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$SystemConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$SystemConfiguration, t_CRDConfiguration$SystemConfiguration, CRDConfiguration$SystemConfiguration);

        void t_CRDConfiguration$SystemConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$SystemConfiguration), &PY_TYPE_DEF(CRDConfiguration$SystemConfiguration), module, "CRDConfiguration$SystemConfiguration", 0);
        }

        void t_CRDConfiguration$SystemConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "class_", make_descriptor(CRDConfiguration$SystemConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$SystemConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SystemConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$SystemConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$SystemConfiguration::wrap_Object(CRDConfiguration$SystemConfiguration(((t_CRDConfiguration$SystemConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$SystemConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$SystemConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$SystemConfiguration_init_(t_CRDConfiguration$SystemConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$SystemConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$SystemConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getComponents(t_CRDConfiguration$SystemConfiguration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getSystemId(t_CRDConfiguration$SystemConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_getWavelength(t_CRDConfiguration$SystemConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setComponents(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setComponents(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setComponents", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setSystemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSystemId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_setWavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_toCrdString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SystemConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_toString(t_CRDConfiguration$SystemConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SystemConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__components(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__components(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setComponents(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "components", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__systemId(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemId());
          return j2p(value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__systemId(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSystemId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SystemConfiguration_get__wavelength(t_CRDConfiguration$SystemConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$SystemConfiguration_set__wavelength(t_CRDConfiguration$SystemConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "wavelength", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/WeightedObservedPoints.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *WeightedObservedPoints::class$ = NULL;
      jmethodID *WeightedObservedPoints::mids$ = NULL;
      bool WeightedObservedPoints::live$ = false;

      jclass WeightedObservedPoints::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/WeightedObservedPoints");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_14c17786a6648771] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fitting/WeightedObservedPoint;)V");
          mids$[mid_add_ab23f4ae0fb33968] = env->getMethodID(cls, "add", "(DD)V");
          mids$[mid_add_87096e3fd8086100] = env->getMethodID(cls, "add", "(DDD)V");
          mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_toList_0d9551367f7ecdef] = env->getMethodID(cls, "toList", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WeightedObservedPoints::WeightedObservedPoints() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void WeightedObservedPoints::add(const ::org::hipparchus::fitting::WeightedObservedPoint & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_add_14c17786a6648771], a0.this$);
      }

      void WeightedObservedPoints::add(jdouble a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_add_ab23f4ae0fb33968], a0, a1);
      }

      void WeightedObservedPoints::add(jdouble a0, jdouble a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_add_87096e3fd8086100], a0, a1, a2);
      }

      void WeightedObservedPoints::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
      }

      ::java::util::List WeightedObservedPoints::toList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_toList_0d9551367f7ecdef]));
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
      static PyObject *t_WeightedObservedPoints_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WeightedObservedPoints_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WeightedObservedPoints_init_(t_WeightedObservedPoints *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WeightedObservedPoints_add(t_WeightedObservedPoints *self, PyObject *args);
      static PyObject *t_WeightedObservedPoints_clear(t_WeightedObservedPoints *self);
      static PyObject *t_WeightedObservedPoints_toList(t_WeightedObservedPoints *self);

      static PyMethodDef t_WeightedObservedPoints__methods_[] = {
        DECLARE_METHOD(t_WeightedObservedPoints, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoints, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoints, add, METH_VARARGS),
        DECLARE_METHOD(t_WeightedObservedPoints, clear, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoints, toList, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WeightedObservedPoints)[] = {
        { Py_tp_methods, t_WeightedObservedPoints__methods_ },
        { Py_tp_init, (void *) t_WeightedObservedPoints_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WeightedObservedPoints)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WeightedObservedPoints, t_WeightedObservedPoints, WeightedObservedPoints);

      void t_WeightedObservedPoints::install(PyObject *module)
      {
        installType(&PY_TYPE(WeightedObservedPoints), &PY_TYPE_DEF(WeightedObservedPoints), module, "WeightedObservedPoints", 0);
      }

      void t_WeightedObservedPoints::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoints), "class_", make_descriptor(WeightedObservedPoints::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoints), "wrapfn_", make_descriptor(t_WeightedObservedPoints::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoints), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WeightedObservedPoints_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WeightedObservedPoints::initializeClass, 1)))
          return NULL;
        return t_WeightedObservedPoints::wrap_Object(WeightedObservedPoints(((t_WeightedObservedPoints *) arg)->object.this$));
      }
      static PyObject *t_WeightedObservedPoints_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WeightedObservedPoints::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WeightedObservedPoints_init_(t_WeightedObservedPoints *self, PyObject *args, PyObject *kwds)
      {
        WeightedObservedPoints object((jobject) NULL);

        INT_CALL(object = WeightedObservedPoints());
        self->object = object;

        return 0;
      }

      static PyObject *t_WeightedObservedPoints_add(t_WeightedObservedPoints *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::fitting::WeightedObservedPoint a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::fitting::WeightedObservedPoint::initializeClass, &a0))
            {
              OBJ_CALL(self->object.add(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(self->object.add(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.add(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_WeightedObservedPoints_clear(t_WeightedObservedPoints *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_WeightedObservedPoints_toList(t_WeightedObservedPoints *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.toList());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::fitting::PY_TYPE(WeightedObservedPoint));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GLONASSScale::class$ = NULL;
      jmethodID *GLONASSScale::mids$ = NULL;
      bool GLONASSScale::live$ = false;

      jclass GLONASSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GLONASSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLeap_b0b988f941da47d8] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_b884068a2c99f6ca] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_insideLeap_981023bfa4a8a093] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_f02ea951706eaf64] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_7488878b3477b7fd] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_2c4b5d48930cdcbe] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e4171ab80e571373] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble GLONASSScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GLONASSScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_b884068a2c99f6ca], a0.this$));
      }

      ::java::lang::String GLONASSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jboolean GLONASSScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_981023bfa4a8a093], a0.this$);
      }

      jboolean GLONASSScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_f02ea951706eaf64], a0.this$);
      }

      jint GLONASSScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_7488878b3477b7fd], a0.this$);
      }

      jint GLONASSScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_2c4b5d48930cdcbe], a0.this$);
      }

      jdouble GLONASSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GLONASSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      jdouble GLONASSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e4171ab80e571373], a0.this$, a1.this$);
      }

      ::java::lang::String GLONASSScale::toString() const
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
    namespace time {
      static PyObject *t_GLONASSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSScale_getLeap(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_getName(t_GLONASSScale *self);
      static PyObject *t_GLONASSScale_insideLeap(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_minuteDuration(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_offsetFromTAI(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_offsetToTAI(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_toString(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_get__name(t_GLONASSScale *self, void *data);
      static PyGetSetDef t_GLONASSScale__fields_[] = {
        DECLARE_GET_FIELD(t_GLONASSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GLONASSScale__methods_[] = {
        DECLARE_METHOD(t_GLONASSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSScale, getLeap, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSScale, insideLeap, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, minuteDuration, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GLONASSScale)[] = {
        { Py_tp_methods, t_GLONASSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GLONASSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GLONASSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GLONASSScale, t_GLONASSScale, GLONASSScale);

      void t_GLONASSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GLONASSScale), &PY_TYPE_DEF(GLONASSScale), module, "GLONASSScale", 0);
      }

      void t_GLONASSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "class_", make_descriptor(GLONASSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "wrapfn_", make_descriptor(t_GLONASSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GLONASSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GLONASSScale::initializeClass, 1)))
          return NULL;
        return t_GLONASSScale::wrap_Object(GLONASSScale(((t_GLONASSScale *) arg)->object.this$));
      }
      static PyObject *t_GLONASSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GLONASSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GLONASSScale_getLeap(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLeap", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_getName(t_GLONASSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GLONASSScale_insideLeap(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "insideLeap", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_minuteDuration(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "minuteDuration", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_offsetFromTAI(t_GLONASSScale *self, PyObject *args)
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

      static PyObject *t_GLONASSScale_offsetToTAI(t_GLONASSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_toString(t_GLONASSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GLONASSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GLONASSScale_get__name(t_GLONASSScale *self, void *data)
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
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Point::class$ = NULL;
      jmethodID *Point::mids$ = NULL;
      bool Point::live$ = false;

      jclass Point::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Point");

          mids$ = new jmethodID[max_mid];
          mids$[mid_distance_cf1fec2b7b1c0efe] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
          mids$[mid_getSpace_cf9410d213a7cbb9] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
          mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Point::distance(const Point & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distance_cf1fec2b7b1c0efe], a0.this$);
      }

      ::org::hipparchus::geometry::Space Point::getSpace() const
      {
        return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_cf9410d213a7cbb9]));
      }

      jboolean Point::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
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
      static PyObject *t_Point_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Point_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Point_of_(t_Point *self, PyObject *args);
      static PyObject *t_Point_distance(t_Point *self, PyObject *arg);
      static PyObject *t_Point_getSpace(t_Point *self);
      static PyObject *t_Point_isNaN(t_Point *self);
      static PyObject *t_Point_get__naN(t_Point *self, void *data);
      static PyObject *t_Point_get__space(t_Point *self, void *data);
      static PyObject *t_Point_get__parameters_(t_Point *self, void *data);
      static PyGetSetDef t_Point__fields_[] = {
        DECLARE_GET_FIELD(t_Point, naN),
        DECLARE_GET_FIELD(t_Point, space),
        DECLARE_GET_FIELD(t_Point, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Point__methods_[] = {
        DECLARE_METHOD(t_Point, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Point, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Point, of_, METH_VARARGS),
        DECLARE_METHOD(t_Point, distance, METH_O),
        DECLARE_METHOD(t_Point, getSpace, METH_NOARGS),
        DECLARE_METHOD(t_Point, isNaN, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Point)[] = {
        { Py_tp_methods, t_Point__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Point__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Point)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(Point, t_Point, Point);
      PyObject *t_Point::wrap_Object(const Point& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Point::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Point *self = (t_Point *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Point::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Point::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Point *self = (t_Point *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Point::install(PyObject *module)
      {
        installType(&PY_TYPE(Point), &PY_TYPE_DEF(Point), module, "Point", 0);
      }

      void t_Point::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Point), "class_", make_descriptor(Point::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Point), "wrapfn_", make_descriptor(t_Point::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Point), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Point_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Point::initializeClass, 1)))
          return NULL;
        return t_Point::wrap_Object(Point(((t_Point *) arg)->object.this$));
      }
      static PyObject *t_Point_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Point::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Point_of_(t_Point *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Point_distance(t_Point *self, PyObject *arg)
      {
        Point a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Point::initializeClass, &a0, &p0, t_Point::parameters_))
        {
          OBJ_CALL(result = self->object.distance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distance", arg);
        return NULL;
      }

      static PyObject *t_Point_getSpace(t_Point *self)
      {
        ::org::hipparchus::geometry::Space result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpace());
        return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
      }

      static PyObject *t_Point_isNaN(t_Point *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }
      static PyObject *t_Point_get__parameters_(t_Point *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Point_get__naN(t_Point *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Point_get__space(t_Point *self, void *data)
      {
        ::org::hipparchus::geometry::Space value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpace());
        return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *AbstractAnalyticalPropagator::mids$ = NULL;
        bool AbstractAnalyticalPropagator::live$ = false;

        jclass AbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addEventDetector_2e2dfaf38ed50d1d] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_clearEventsDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getEphemerisGenerator_6a3edfe13bcee780] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
            mids$[mid_getEventsDetectors_12ee61573a18f417] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getPvProvider_dec199e86bf037eb] = env->getMethodID(cls, "getPvProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_propagate_b96c0d97a162784d] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getJacobiansColumnsNames_0d9551367f7ecdef] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_9e937c0ae63d8022] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_resetIntermediateState_45bf76e836befe86] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_getMass_b0b988f941da47d8] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_basicPropagate_15e0d02372b1347b] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_acceptStep_5c22a6e0fde1ed6a] = env->getMethodID(cls, "acceptStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractAnalyticalPropagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_2e2dfaf38ed50d1d], a0.this$);
        }

        void AbstractAnalyticalPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_0640e6acf969ed28]);
        }

        ::org::orekit::propagation::EphemerisGenerator AbstractAnalyticalPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_6a3edfe13bcee780]));
        }

        ::java::util::Collection AbstractAnalyticalPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_12ee61573a18f417]));
        }

        ::org::orekit::utils::PVCoordinatesProvider AbstractAnalyticalPropagator::getPvProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPvProvider_dec199e86bf037eb]));
        }

        ::org::orekit::propagation::SpacecraftState AbstractAnalyticalPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_b96c0d97a162784d], a0.this$, a1.this$));
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
        static PyObject *t_AbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalPropagator_addEventDetector(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_clearEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getEphemerisGenerator(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getPvProvider(t_AbstractAnalyticalPropagator *self);
        static PyObject *t_AbstractAnalyticalPropagator_propagate(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_get__ephemerisGenerator(t_AbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_AbstractAnalyticalPropagator_get__eventsDetectors(t_AbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_AbstractAnalyticalPropagator_get__pvProvider(t_AbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_AbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, pvProvider),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getPvProvider, METH_NOARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_AbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalPropagator, t_AbstractAnalyticalPropagator, AbstractAnalyticalPropagator);

        void t_AbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalPropagator), &PY_TYPE_DEF(AbstractAnalyticalPropagator), module, "AbstractAnalyticalPropagator", 0);
        }

        void t_AbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "class_", make_descriptor(AbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_AbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalPropagator::wrap_Object(AbstractAnalyticalPropagator(((t_AbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalPropagator_addEventDetector(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_clearEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getEphemerisGenerator(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getPvProvider(t_AbstractAnalyticalPropagator *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPvProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AbstractAnalyticalPropagator_propagate(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.propagate(a0, a1));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__ephemerisGenerator(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__eventsDetectors(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__pvProvider(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPvProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
