#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonAbstractEopParser.h"
#include "java/io/IOException.h"
#include "org/orekit/time/TimeScale.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/lang/String.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonAbstractEopParser::class$ = NULL;
      jmethodID *PythonAbstractEopParser::mids$ = NULL;
      bool PythonAbstractEopParser::live$ = false;

      jclass PythonAbstractEopParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonAbstractEopParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_57dc7c227406b02a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Lorg/orekit/frames/ItrfVersionProvider;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_parse_c09602b54bab1317] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractEopParser::PythonAbstractEopParser(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::org::orekit::frames::ItrfVersionProvider & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::frames::AbstractEopParser(env->newObject(initializeClass, &mids$, mid_init$_57dc7c227406b02a, a0.this$, a1.this$, a2.this$)) {}

      void PythonAbstractEopParser::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonAbstractEopParser::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonAbstractEopParser::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonAbstractEopParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractEopParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractEopParser_init_(t_PythonAbstractEopParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractEopParser_finalize(t_PythonAbstractEopParser *self);
      static PyObject *t_PythonAbstractEopParser_pythonExtension(t_PythonAbstractEopParser *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractEopParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAbstractEopParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractEopParser_get__self(t_PythonAbstractEopParser *self, void *data);
      static PyGetSetDef t_PythonAbstractEopParser__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractEopParser, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractEopParser__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractEopParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractEopParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractEopParser, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractEopParser, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEopParser)[] = {
        { Py_tp_methods, t_PythonAbstractEopParser__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractEopParser_init_ },
        { Py_tp_getset, t_PythonAbstractEopParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractEopParser)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractEopParser),
        NULL
      };

      DEFINE_TYPE(PythonAbstractEopParser, t_PythonAbstractEopParser, PythonAbstractEopParser);

      void t_PythonAbstractEopParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractEopParser), &PY_TYPE_DEF(PythonAbstractEopParser), module, "PythonAbstractEopParser", 1);
      }

      void t_PythonAbstractEopParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "class_", make_descriptor(PythonAbstractEopParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "wrapfn_", make_descriptor(t_PythonAbstractEopParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEopParser), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractEopParser::initializeClass);
        JNINativeMethod methods[] = {
          { "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/Collection;", (void *) t_PythonAbstractEopParser_parse0 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractEopParser_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAbstractEopParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractEopParser::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractEopParser::wrap_Object(PythonAbstractEopParser(((t_PythonAbstractEopParser *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractEopParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractEopParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractEopParser_init_(t_PythonAbstractEopParser *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::ItrfVersionProvider a1((jobject) NULL);
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        PythonAbstractEopParser object((jobject) NULL);

        if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::org::orekit::frames::ItrfVersionProvider::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &a2))
        {
          INT_CALL(object = PythonAbstractEopParser(a0, a1, a2));
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

      static PyObject *t_PythonAbstractEopParser_finalize(t_PythonAbstractEopParser *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractEopParser_pythonExtension(t_PythonAbstractEopParser *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractEopParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
        PyObject *o1 = env->fromJString((jstring) a1, 0);
        PyObject *result = PyObject_CallMethod(obj, "parse", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
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

      static void JNICALL t_PythonAbstractEopParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractEopParser::mids$[PythonAbstractEopParser::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractEopParser_get__self(t_PythonAbstractEopParser *self, void *data)
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
#include "org/hipparchus/linear/AnyMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AnyMatrix::class$ = NULL;
      jmethodID *AnyMatrix::mids$ = NULL;
      bool AnyMatrix::live$ = false;

      jclass AnyMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AnyMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isSquare_e470b6d9e0d979db] = env->getMethodID(cls, "isSquare", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint AnyMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      jint AnyMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      jboolean AnyMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_e470b6d9e0d979db]);
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
      static PyObject *t_AnyMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AnyMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AnyMatrix_getColumnDimension(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_getRowDimension(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_isSquare(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_get__columnDimension(t_AnyMatrix *self, void *data);
      static PyObject *t_AnyMatrix_get__rowDimension(t_AnyMatrix *self, void *data);
      static PyObject *t_AnyMatrix_get__square(t_AnyMatrix *self, void *data);
      static PyGetSetDef t_AnyMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AnyMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AnyMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AnyMatrix, square),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AnyMatrix__methods_[] = {
        DECLARE_METHOD(t_AnyMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AnyMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AnyMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AnyMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AnyMatrix, isSquare, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AnyMatrix)[] = {
        { Py_tp_methods, t_AnyMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AnyMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AnyMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AnyMatrix, t_AnyMatrix, AnyMatrix);

      void t_AnyMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AnyMatrix), &PY_TYPE_DEF(AnyMatrix), module, "AnyMatrix", 0);
      }

      void t_AnyMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "class_", make_descriptor(AnyMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "wrapfn_", make_descriptor(t_AnyMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AnyMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AnyMatrix::initializeClass, 1)))
          return NULL;
        return t_AnyMatrix::wrap_Object(AnyMatrix(((t_AnyMatrix *) arg)->object.this$));
      }
      static PyObject *t_AnyMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AnyMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AnyMatrix_getColumnDimension(t_AnyMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AnyMatrix_getRowDimension(t_AnyMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AnyMatrix_isSquare(t_AnyMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AnyMatrix_get__columnDimension(t_AnyMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AnyMatrix_get__rowDimension(t_AnyMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AnyMatrix_get__square(t_AnyMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays$Position.h"
#include "org/hipparchus/util/MathArrays$Position.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays$Position::class$ = NULL;
      jmethodID *MathArrays$Position::mids$ = NULL;
      bool MathArrays$Position::live$ = false;
      MathArrays$Position *MathArrays$Position::HEAD = NULL;
      MathArrays$Position *MathArrays$Position::TAIL = NULL;

      jclass MathArrays$Position::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays$Position");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_aff509199df38726] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/MathArrays$Position;");
          mids$[mid_values_917c5bd55f25bb36] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/MathArrays$Position;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          HEAD = new MathArrays$Position(env->getStaticObjectField(cls, "HEAD", "Lorg/hipparchus/util/MathArrays$Position;"));
          TAIL = new MathArrays$Position(env->getStaticObjectField(cls, "TAIL", "Lorg/hipparchus/util/MathArrays$Position;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathArrays$Position MathArrays$Position::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MathArrays$Position(env->callStaticObjectMethod(cls, mids$[mid_valueOf_aff509199df38726], a0.this$));
      }

      JArray< MathArrays$Position > MathArrays$Position::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MathArrays$Position >(env->callStaticObjectMethod(cls, mids$[mid_values_917c5bd55f25bb36]));
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
      static PyObject *t_MathArrays$Position_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Position_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Position_of_(t_MathArrays$Position *self, PyObject *args);
      static PyObject *t_MathArrays$Position_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays$Position_values(PyTypeObject *type);
      static PyObject *t_MathArrays$Position_get__parameters_(t_MathArrays$Position *self, void *data);
      static PyGetSetDef t_MathArrays$Position__fields_[] = {
        DECLARE_GET_FIELD(t_MathArrays$Position, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathArrays$Position__methods_[] = {
        DECLARE_METHOD(t_MathArrays$Position, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Position, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Position, of_, METH_VARARGS),
        DECLARE_METHOD(t_MathArrays$Position, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Position, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays$Position)[] = {
        { Py_tp_methods, t_MathArrays$Position__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathArrays$Position__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays$Position)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(MathArrays$Position, t_MathArrays$Position, MathArrays$Position);
      PyObject *t_MathArrays$Position::wrap_Object(const MathArrays$Position& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$Position::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$Position *self = (t_MathArrays$Position *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MathArrays$Position::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$Position::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$Position *self = (t_MathArrays$Position *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MathArrays$Position::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays$Position), &PY_TYPE_DEF(MathArrays$Position), module, "MathArrays$Position", 0);
      }

      void t_MathArrays$Position::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "class_", make_descriptor(MathArrays$Position::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "wrapfn_", make_descriptor(t_MathArrays$Position::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "boxfn_", make_descriptor(boxObject));
        env->getClass(MathArrays$Position::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "HEAD", make_descriptor(t_MathArrays$Position::wrap_Object(*MathArrays$Position::HEAD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "TAIL", make_descriptor(t_MathArrays$Position::wrap_Object(*MathArrays$Position::TAIL)));
      }

      static PyObject *t_MathArrays$Position_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays$Position::initializeClass, 1)))
          return NULL;
        return t_MathArrays$Position::wrap_Object(MathArrays$Position(((t_MathArrays$Position *) arg)->object.this$));
      }
      static PyObject *t_MathArrays$Position_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays$Position::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays$Position_of_(t_MathArrays$Position *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MathArrays$Position_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        MathArrays$Position result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays$Position::valueOf(a0));
          return t_MathArrays$Position::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_MathArrays$Position_values(PyTypeObject *type)
      {
        JArray< MathArrays$Position > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::MathArrays$Position::values());
        return JArray<jobject>(result.this$).wrap(t_MathArrays$Position::wrap_jobject);
      }
      static PyObject *t_MathArrays$Position_get__parameters_(t_MathArrays$Position *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/HatanakaCompressFilter.h"
#include "org/orekit/data/DataFilter.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *HatanakaCompressFilter::class$ = NULL;
        jmethodID *HatanakaCompressFilter::mids$ = NULL;
        bool HatanakaCompressFilter::live$ = false;

        jclass HatanakaCompressFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/HatanakaCompressFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_filter_446488bfc679a21b] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HatanakaCompressFilter::HatanakaCompressFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::orekit::data::DataSource HatanakaCompressFilter::filter(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_446488bfc679a21b], a0.this$));
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
        static PyObject *t_HatanakaCompressFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HatanakaCompressFilter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HatanakaCompressFilter_init_(t_HatanakaCompressFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HatanakaCompressFilter_filter(t_HatanakaCompressFilter *self, PyObject *arg);

        static PyMethodDef t_HatanakaCompressFilter__methods_[] = {
          DECLARE_METHOD(t_HatanakaCompressFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HatanakaCompressFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HatanakaCompressFilter, filter, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HatanakaCompressFilter)[] = {
          { Py_tp_methods, t_HatanakaCompressFilter__methods_ },
          { Py_tp_init, (void *) t_HatanakaCompressFilter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HatanakaCompressFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HatanakaCompressFilter, t_HatanakaCompressFilter, HatanakaCompressFilter);

        void t_HatanakaCompressFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(HatanakaCompressFilter), &PY_TYPE_DEF(HatanakaCompressFilter), module, "HatanakaCompressFilter", 0);
        }

        void t_HatanakaCompressFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "class_", make_descriptor(HatanakaCompressFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "wrapfn_", make_descriptor(t_HatanakaCompressFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HatanakaCompressFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HatanakaCompressFilter::initializeClass, 1)))
            return NULL;
          return t_HatanakaCompressFilter::wrap_Object(HatanakaCompressFilter(((t_HatanakaCompressFilter *) arg)->object.this$));
        }
        static PyObject *t_HatanakaCompressFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HatanakaCompressFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HatanakaCompressFilter_init_(t_HatanakaCompressFilter *self, PyObject *args, PyObject *kwds)
        {
          HatanakaCompressFilter object((jobject) NULL);

          INT_CALL(object = HatanakaCompressFilter());
          self->object = object;

          return 0;
        }

        static PyObject *t_HatanakaCompressFilter_filter(t_HatanakaCompressFilter *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::data::DataSource result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.filter(a0));
            return ::org::orekit::data::t_DataSource::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/EarthITU453AtmosphereRefraction.h"
#include "java/lang/Class.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthITU453AtmosphereRefraction::class$ = NULL;
        jmethodID *EarthITU453AtmosphereRefraction::mids$ = NULL;
        bool EarthITU453AtmosphereRefraction::live$ = false;

        jclass EarthITU453AtmosphereRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthITU453AtmosphereRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getRefraction_0ba5fed9597b693e] = env->getMethodID(cls, "getRefraction", "(D)D");
            mids$[mid_getTheta0_456d9a2f64d6b28d] = env->getMethodID(cls, "getTheta0", "()D");
            mids$[mid_getThetaMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getThetaMin", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EarthITU453AtmosphereRefraction::EarthITU453AtmosphereRefraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        jdouble EarthITU453AtmosphereRefraction::getRefraction(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefraction_0ba5fed9597b693e], a0);
        }

        jdouble EarthITU453AtmosphereRefraction::getTheta0() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTheta0_456d9a2f64d6b28d]);
        }

        jdouble EarthITU453AtmosphereRefraction::getThetaMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThetaMin_456d9a2f64d6b28d]);
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
        static PyObject *t_EarthITU453AtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthITU453AtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EarthITU453AtmosphereRefraction_init_(t_EarthITU453AtmosphereRefraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EarthITU453AtmosphereRefraction_getRefraction(t_EarthITU453AtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthITU453AtmosphereRefraction_getTheta0(t_EarthITU453AtmosphereRefraction *self);
        static PyObject *t_EarthITU453AtmosphereRefraction_getThetaMin(t_EarthITU453AtmosphereRefraction *self);
        static PyObject *t_EarthITU453AtmosphereRefraction_get__theta0(t_EarthITU453AtmosphereRefraction *self, void *data);
        static PyObject *t_EarthITU453AtmosphereRefraction_get__thetaMin(t_EarthITU453AtmosphereRefraction *self, void *data);
        static PyGetSetDef t_EarthITU453AtmosphereRefraction__fields_[] = {
          DECLARE_GET_FIELD(t_EarthITU453AtmosphereRefraction, theta0),
          DECLARE_GET_FIELD(t_EarthITU453AtmosphereRefraction, thetaMin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthITU453AtmosphereRefraction__methods_[] = {
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getRefraction, METH_O),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getTheta0, METH_NOARGS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getThetaMin, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthITU453AtmosphereRefraction)[] = {
          { Py_tp_methods, t_EarthITU453AtmosphereRefraction__methods_ },
          { Py_tp_init, (void *) t_EarthITU453AtmosphereRefraction_init_ },
          { Py_tp_getset, t_EarthITU453AtmosphereRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthITU453AtmosphereRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EarthITU453AtmosphereRefraction, t_EarthITU453AtmosphereRefraction, EarthITU453AtmosphereRefraction);

        void t_EarthITU453AtmosphereRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthITU453AtmosphereRefraction), &PY_TYPE_DEF(EarthITU453AtmosphereRefraction), module, "EarthITU453AtmosphereRefraction", 0);
        }

        void t_EarthITU453AtmosphereRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "class_", make_descriptor(EarthITU453AtmosphereRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "wrapfn_", make_descriptor(t_EarthITU453AtmosphereRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthITU453AtmosphereRefraction::initializeClass, 1)))
            return NULL;
          return t_EarthITU453AtmosphereRefraction::wrap_Object(EarthITU453AtmosphereRefraction(((t_EarthITU453AtmosphereRefraction *) arg)->object.this$));
        }
        static PyObject *t_EarthITU453AtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthITU453AtmosphereRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EarthITU453AtmosphereRefraction_init_(t_EarthITU453AtmosphereRefraction *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EarthITU453AtmosphereRefraction object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EarthITU453AtmosphereRefraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getRefraction(t_EarthITU453AtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRefraction(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
          return NULL;
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getTheta0(t_EarthITU453AtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTheta0());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getThetaMin(t_EarthITU453AtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThetaMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_get__theta0(t_EarthITU453AtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTheta0());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_get__thetaMin(t_EarthITU453AtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThetaMin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/python/PythonFunction.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonFunction::class$ = NULL;
      jmethodID *PythonFunction::mids$ = NULL;
      bool PythonFunction::live$ = false;

      jclass PythonFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_apply_ed50a8b49b8274dc] = env->getMethodID(cls, "apply", "(Ljava/lang/Object;)Ljava/lang/Object;");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFunction::PythonFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFunction::pythonExtension(jlong a0) const
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
    namespace python {
      static PyObject *t_PythonFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFunction_of_(t_PythonFunction *self, PyObject *args);
      static int t_PythonFunction_init_(t_PythonFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFunction_finalize(t_PythonFunction *self);
      static PyObject *t_PythonFunction_pythonExtension(t_PythonFunction *self, PyObject *args);
      static jobject JNICALL t_PythonFunction_apply0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFunction_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFunction_get__self(t_PythonFunction *self, void *data);
      static PyObject *t_PythonFunction_get__parameters_(t_PythonFunction *self, void *data);
      static PyGetSetDef t_PythonFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFunction, self),
        DECLARE_GET_FIELD(t_PythonFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFunction)[] = {
        { Py_tp_methods, t_PythonFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFunction_init_ },
        { Py_tp_getset, t_PythonFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFunction, t_PythonFunction, PythonFunction);
      PyObject *t_PythonFunction::wrap_Object(const PythonFunction& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFunction *self = (t_PythonFunction *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFunction::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFunction *self = (t_PythonFunction *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFunction), &PY_TYPE_DEF(PythonFunction), module, "PythonFunction", 1);
      }

      void t_PythonFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "class_", make_descriptor(PythonFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "wrapfn_", make_descriptor(t_PythonFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "apply", "(Ljava/lang/Object;)Ljava/lang/Object;", (void *) t_PythonFunction_apply0 },
          { "pythonDecRef", "()V", (void *) t_PythonFunction_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFunction::wrap_Object(PythonFunction(((t_PythonFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFunction_of_(t_PythonFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFunction_init_(t_PythonFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFunction object((jobject) NULL);

        INT_CALL(object = PythonFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFunction_finalize(t_PythonFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFunction_pythonExtension(t_PythonFunction *self, PyObject *args)
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

      static jobject JNICALL t_PythonFunction_apply0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::Object value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "apply", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "o", &value))
        {
          throwTypeError("apply", result);
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

      static void JNICALL t_PythonFunction_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFunction_get__self(t_PythonFunction *self, void *data)
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
      static PyObject *t_PythonFunction_get__parameters_(t_PythonFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/HatchFilter.h"
#include "java/util/ArrayList.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *HatchFilter::class$ = NULL;
          jmethodID *HatchFilter::mids$ = NULL;
          bool HatchFilter::live$ = false;

          jclass HatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/HatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addToCodeHistory_77e0f9a1f260e2e5] = env->getMethodID(cls, "addToCodeHistory", "(D)V");
              mids$[mid_addToSmoothedCodeHistory_77e0f9a1f260e2e5] = env->getMethodID(cls, "addToSmoothedCodeHistory", "(D)V");
              mids$[mid_getCodeHistory_5e75cfe55d40f4c7] = env->getMethodID(cls, "getCodeHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getSmoothedCodeHistory_5e75cfe55d40f4c7] = env->getMethodID(cls, "getSmoothedCodeHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getThreshold", "()D");
              mids$[mid_resetFilterNext_77e0f9a1f260e2e5] = env->getMethodID(cls, "resetFilterNext", "(D)V");
              mids$[mid_updatePreviousSmoothedCode_77e0f9a1f260e2e5] = env->getMethodID(cls, "updatePreviousSmoothedCode", "(D)V");
              mids$[mid_updatePreviousSmoothingValue_77e0f9a1f260e2e5] = env->getMethodID(cls, "updatePreviousSmoothingValue", "(D)V");
              mids$[mid_resetNextBoolean_7ae3461a92a43152] = env->getMethodID(cls, "resetNextBoolean", "()V");
              mids$[mid_smoothedCode_824133ce4aec3505] = env->getMethodID(cls, "smoothedCode", "(DD)D");
              mids$[mid_resetK_7ae3461a92a43152] = env->getMethodID(cls, "resetK", "()V");
              mids$[mid_checkValidData_a7623f4e7fdb704f] = env->getMethodID(cls, "checkValidData", "(DDZ)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void HatchFilter::addToCodeHistory(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addToCodeHistory_77e0f9a1f260e2e5], a0);
          }

          void HatchFilter::addToSmoothedCodeHistory(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addToSmoothedCodeHistory_77e0f9a1f260e2e5], a0);
          }

          ::java::util::ArrayList HatchFilter::getCodeHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getCodeHistory_5e75cfe55d40f4c7]));
          }

          ::java::util::ArrayList HatchFilter::getSmoothedCodeHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getSmoothedCodeHistory_5e75cfe55d40f4c7]));
          }

          jdouble HatchFilter::getThreshold() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThreshold_456d9a2f64d6b28d]);
          }

          void HatchFilter::resetFilterNext(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetFilterNext_77e0f9a1f260e2e5], a0);
          }

          void HatchFilter::updatePreviousSmoothedCode(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updatePreviousSmoothedCode_77e0f9a1f260e2e5], a0);
          }

          void HatchFilter::updatePreviousSmoothingValue(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updatePreviousSmoothingValue_77e0f9a1f260e2e5], a0);
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
          static PyObject *t_HatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HatchFilter_addToCodeHistory(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_addToSmoothedCodeHistory(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_getCodeHistory(t_HatchFilter *self);
          static PyObject *t_HatchFilter_getSmoothedCodeHistory(t_HatchFilter *self);
          static PyObject *t_HatchFilter_getThreshold(t_HatchFilter *self);
          static PyObject *t_HatchFilter_resetFilterNext(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_updatePreviousSmoothedCode(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_updatePreviousSmoothingValue(t_HatchFilter *self, PyObject *arg);
          static PyObject *t_HatchFilter_get__codeHistory(t_HatchFilter *self, void *data);
          static PyObject *t_HatchFilter_get__smoothedCodeHistory(t_HatchFilter *self, void *data);
          static PyObject *t_HatchFilter_get__threshold(t_HatchFilter *self, void *data);
          static PyGetSetDef t_HatchFilter__fields_[] = {
            DECLARE_GET_FIELD(t_HatchFilter, codeHistory),
            DECLARE_GET_FIELD(t_HatchFilter, smoothedCodeHistory),
            DECLARE_GET_FIELD(t_HatchFilter, threshold),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_HatchFilter__methods_[] = {
            DECLARE_METHOD(t_HatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HatchFilter, addToCodeHistory, METH_O),
            DECLARE_METHOD(t_HatchFilter, addToSmoothedCodeHistory, METH_O),
            DECLARE_METHOD(t_HatchFilter, getCodeHistory, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, getSmoothedCodeHistory, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, getThreshold, METH_NOARGS),
            DECLARE_METHOD(t_HatchFilter, resetFilterNext, METH_O),
            DECLARE_METHOD(t_HatchFilter, updatePreviousSmoothedCode, METH_O),
            DECLARE_METHOD(t_HatchFilter, updatePreviousSmoothingValue, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HatchFilter)[] = {
            { Py_tp_methods, t_HatchFilter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_HatchFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HatchFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(HatchFilter, t_HatchFilter, HatchFilter);

          void t_HatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(HatchFilter), &PY_TYPE_DEF(HatchFilter), module, "HatchFilter", 0);
          }

          void t_HatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "class_", make_descriptor(HatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "wrapfn_", make_descriptor(t_HatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HatchFilter::initializeClass, 1)))
              return NULL;
            return t_HatchFilter::wrap_Object(HatchFilter(((t_HatchFilter *) arg)->object.this$));
          }
          static PyObject *t_HatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_HatchFilter_addToCodeHistory(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.addToCodeHistory(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addToCodeHistory", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_addToSmoothedCodeHistory(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.addToSmoothedCodeHistory(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addToSmoothedCodeHistory", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_getCodeHistory(t_HatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_HatchFilter_getSmoothedCodeHistory(t_HatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getSmoothedCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_HatchFilter_getThreshold(t_HatchFilter *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getThreshold());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_HatchFilter_resetFilterNext(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.resetFilterNext(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "resetFilterNext", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_updatePreviousSmoothedCode(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.updatePreviousSmoothedCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updatePreviousSmoothedCode", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_updatePreviousSmoothingValue(t_HatchFilter *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.updatePreviousSmoothingValue(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updatePreviousSmoothingValue", arg);
            return NULL;
          }

          static PyObject *t_HatchFilter_get__codeHistory(t_HatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_HatchFilter_get__smoothedCodeHistory(t_HatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getSmoothedCodeHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_HatchFilter_get__threshold(t_HatchFilter *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getThreshold());
            return PyFloat_FromDouble((double) value);
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
          mids$[mid_getLocalizedString_bab3be9b232acc5a] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_0090f7797e403f43] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_2fd569f554241841] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/LocalizedOptimFormats;");
          mids$[mid_values_9c32aed854f558f7] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/LocalizedOptimFormats;");

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
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_bab3be9b232acc5a], a0.this$));
      }

      ::java::lang::String LocalizedOptimFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_0090f7797e403f43]));
      }

      LocalizedOptimFormats LocalizedOptimFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedOptimFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2fd569f554241841], a0.this$));
      }

      JArray< LocalizedOptimFormats > LocalizedOptimFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedOptimFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_9c32aed854f558f7]));
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "org/orekit/time/AbsoluteDate.h"
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
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getActualOdSpan_456d9a2f64d6b28d] = env->getMethodID(cls, "getActualOdSpan", "()D");
                  mids$[mid_getConfidence_456d9a2f64d6b28d] = env->getMethodID(cls, "getConfidence", "()D");
                  mids$[mid_getConsiderN_f2f64475e4580546] = env->getMethodID(cls, "getConsiderN", "()I");
                  mids$[mid_getConsiderParameters_a6156df500549a58] = env->getMethodID(cls, "getConsiderParameters", "()Ljava/util/List;");
                  mids$[mid_getDataTypes_a6156df500549a58] = env->getMethodID(cls, "getDataTypes", "()Ljava/util/List;");
                  mids$[mid_getEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getEpochEigenInt_456d9a2f64d6b28d] = env->getMethodID(cls, "getEpochEigenInt", "()D");
                  mids$[mid_getEpochEigenMaj_456d9a2f64d6b28d] = env->getMethodID(cls, "getEpochEigenMaj", "()D");
                  mids$[mid_getEpochEigenMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getEpochEigenMin", "()D");
                  mids$[mid_getGdop_456d9a2f64d6b28d] = env->getMethodID(cls, "getGdop", "()D");
                  mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMaxPredictedEigenMaj_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxPredictedEigenMaj", "()D");
                  mids$[mid_getMaximumObsGap_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaximumObsGap", "()D");
                  mids$[mid_getMethod_d516ab93379ac969] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/files/ccsds/definitions/OdMethodFacade;");
                  mids$[mid_getMinPredictedEigenMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinPredictedEigenMin", "()D");
                  mids$[mid_getObsAvailable_f2f64475e4580546] = env->getMethodID(cls, "getObsAvailable", "()I");
                  mids$[mid_getObsUsed_f2f64475e4580546] = env->getMethodID(cls, "getObsUsed", "()I");
                  mids$[mid_getPrevId_0090f7797e403f43] = env->getMethodID(cls, "getPrevId", "()Ljava/lang/String;");
                  mids$[mid_getRecommendedOdSpan_456d9a2f64d6b28d] = env->getMethodID(cls, "getRecommendedOdSpan", "()D");
                  mids$[mid_getSedr_456d9a2f64d6b28d] = env->getMethodID(cls, "getSedr", "()D");
                  mids$[mid_getSensors_a6156df500549a58] = env->getMethodID(cls, "getSensors", "()Ljava/util/List;");
                  mids$[mid_getSensorsN_f2f64475e4580546] = env->getMethodID(cls, "getSensorsN", "()I");
                  mids$[mid_getSolveN_f2f64475e4580546] = env->getMethodID(cls, "getSolveN", "()I");
                  mids$[mid_getSolveStates_a6156df500549a58] = env->getMethodID(cls, "getSolveStates", "()Ljava/util/List;");
                  mids$[mid_getTimeSinceFirstObservation_456d9a2f64d6b28d] = env->getMethodID(cls, "getTimeSinceFirstObservation", "()D");
                  mids$[mid_getTimeSinceLastObservation_456d9a2f64d6b28d] = env->getMethodID(cls, "getTimeSinceLastObservation", "()D");
                  mids$[mid_getTracksAvailable_f2f64475e4580546] = env->getMethodID(cls, "getTracksAvailable", "()I");
                  mids$[mid_getTracksUsed_f2f64475e4580546] = env->getMethodID(cls, "getTracksUsed", "()I");
                  mids$[mid_getWeightedRms_456d9a2f64d6b28d] = env->getMethodID(cls, "getWeightedRms", "()D");
                  mids$[mid_setActualOdSpan_77e0f9a1f260e2e5] = env->getMethodID(cls, "setActualOdSpan", "(D)V");
                  mids$[mid_setConfidence_77e0f9a1f260e2e5] = env->getMethodID(cls, "setConfidence", "(D)V");
                  mids$[mid_setConsiderN_0a2a1ac2721c0336] = env->getMethodID(cls, "setConsiderN", "(I)V");
                  mids$[mid_setConsiderParameters_65de9727799c5641] = env->getMethodID(cls, "setConsiderParameters", "(Ljava/util/List;)V");
                  mids$[mid_setDataTypes_65de9727799c5641] = env->getMethodID(cls, "setDataTypes", "(Ljava/util/List;)V");
                  mids$[mid_setEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setEpochEigenInt_77e0f9a1f260e2e5] = env->getMethodID(cls, "setEpochEigenInt", "(D)V");
                  mids$[mid_setEpochEigenMaj_77e0f9a1f260e2e5] = env->getMethodID(cls, "setEpochEigenMaj", "(D)V");
                  mids$[mid_setEpochEigenMin_77e0f9a1f260e2e5] = env->getMethodID(cls, "setEpochEigenMin", "(D)V");
                  mids$[mid_setGdop_77e0f9a1f260e2e5] = env->getMethodID(cls, "setGdop", "(D)V");
                  mids$[mid_setId_e939c6558ae8d313] = env->getMethodID(cls, "setId", "(Ljava/lang/String;)V");
                  mids$[mid_setMaxPredictedEigenMaj_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMaxPredictedEigenMaj", "(D)V");
                  mids$[mid_setMaximumObsGap_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMaximumObsGap", "(D)V");
                  mids$[mid_setMethod_a7950f94a213a00d] = env->getMethodID(cls, "setMethod", "(Lorg/orekit/files/ccsds/definitions/OdMethodFacade;)V");
                  mids$[mid_setMinPredictedEigenMin_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMinPredictedEigenMin", "(D)V");
                  mids$[mid_setObsAvailable_0a2a1ac2721c0336] = env->getMethodID(cls, "setObsAvailable", "(I)V");
                  mids$[mid_setObsUsed_0a2a1ac2721c0336] = env->getMethodID(cls, "setObsUsed", "(I)V");
                  mids$[mid_setPrevId_e939c6558ae8d313] = env->getMethodID(cls, "setPrevId", "(Ljava/lang/String;)V");
                  mids$[mid_setRecommendedOdSpan_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRecommendedOdSpan", "(D)V");
                  mids$[mid_setSedr_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSedr", "(D)V");
                  mids$[mid_setSensors_65de9727799c5641] = env->getMethodID(cls, "setSensors", "(Ljava/util/List;)V");
                  mids$[mid_setSensorsN_0a2a1ac2721c0336] = env->getMethodID(cls, "setSensorsN", "(I)V");
                  mids$[mid_setSolveN_0a2a1ac2721c0336] = env->getMethodID(cls, "setSolveN", "(I)V");
                  mids$[mid_setSolveStates_65de9727799c5641] = env->getMethodID(cls, "setSolveStates", "(Ljava/util/List;)V");
                  mids$[mid_setTimeSinceFirstObservation_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTimeSinceFirstObservation", "(D)V");
                  mids$[mid_setTimeSinceLastObservation_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTimeSinceLastObservation", "(D)V");
                  mids$[mid_setTracksAvailable_0a2a1ac2721c0336] = env->getMethodID(cls, "setTracksAvailable", "(I)V");
                  mids$[mid_setTracksUsed_0a2a1ac2721c0336] = env->getMethodID(cls, "setTracksUsed", "(I)V");
                  mids$[mid_setWeightedRms_77e0f9a1f260e2e5] = env->getMethodID(cls, "setWeightedRms", "(D)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitDetermination::OrbitDetermination() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jdouble OrbitDetermination::getActualOdSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getActualOdSpan_456d9a2f64d6b28d]);
              }

              jdouble OrbitDetermination::getConfidence() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getConfidence_456d9a2f64d6b28d]);
              }

              jint OrbitDetermination::getConsiderN() const
              {
                return env->callIntMethod(this$, mids$[mid_getConsiderN_f2f64475e4580546]);
              }

              ::java::util::List OrbitDetermination::getConsiderParameters() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getConsiderParameters_a6156df500549a58]));
              }

              ::java::util::List OrbitDetermination::getDataTypes() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataTypes_a6156df500549a58]));
              }

              ::org::orekit::time::AbsoluteDate OrbitDetermination::getEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_aaa854c403487cf3]));
              }

              jdouble OrbitDetermination::getEpochEigenInt() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenInt_456d9a2f64d6b28d]);
              }

              jdouble OrbitDetermination::getEpochEigenMaj() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenMaj_456d9a2f64d6b28d]);
              }

              jdouble OrbitDetermination::getEpochEigenMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEpochEigenMin_456d9a2f64d6b28d]);
              }

              jdouble OrbitDetermination::getGdop() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGdop_456d9a2f64d6b28d]);
              }

              ::java::lang::String OrbitDetermination::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
              }

              jdouble OrbitDetermination::getMaxPredictedEigenMaj() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxPredictedEigenMaj_456d9a2f64d6b28d]);
              }

              jdouble OrbitDetermination::getMaximumObsGap() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaximumObsGap_456d9a2f64d6b28d]);
              }

              ::org::orekit::files::ccsds::definitions::OdMethodFacade OrbitDetermination::getMethod() const
              {
                return ::org::orekit::files::ccsds::definitions::OdMethodFacade(env->callObjectMethod(this$, mids$[mid_getMethod_d516ab93379ac969]));
              }

              jdouble OrbitDetermination::getMinPredictedEigenMin() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMinPredictedEigenMin_456d9a2f64d6b28d]);
              }

              jint OrbitDetermination::getObsAvailable() const
              {
                return env->callIntMethod(this$, mids$[mid_getObsAvailable_f2f64475e4580546]);
              }

              jint OrbitDetermination::getObsUsed() const
              {
                return env->callIntMethod(this$, mids$[mid_getObsUsed_f2f64475e4580546]);
              }

              ::java::lang::String OrbitDetermination::getPrevId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevId_0090f7797e403f43]));
              }

              jdouble OrbitDetermination::getRecommendedOdSpan() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRecommendedOdSpan_456d9a2f64d6b28d]);
              }

              jdouble OrbitDetermination::getSedr() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSedr_456d9a2f64d6b28d]);
              }

              ::java::util::List OrbitDetermination::getSensors() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSensors_a6156df500549a58]));
              }

              jint OrbitDetermination::getSensorsN() const
              {
                return env->callIntMethod(this$, mids$[mid_getSensorsN_f2f64475e4580546]);
              }

              jint OrbitDetermination::getSolveN() const
              {
                return env->callIntMethod(this$, mids$[mid_getSolveN_f2f64475e4580546]);
              }

              ::java::util::List OrbitDetermination::getSolveStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSolveStates_a6156df500549a58]));
              }

              jdouble OrbitDetermination::getTimeSinceFirstObservation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSinceFirstObservation_456d9a2f64d6b28d]);
              }

              jdouble OrbitDetermination::getTimeSinceLastObservation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTimeSinceLastObservation_456d9a2f64d6b28d]);
              }

              jint OrbitDetermination::getTracksAvailable() const
              {
                return env->callIntMethod(this$, mids$[mid_getTracksAvailable_f2f64475e4580546]);
              }

              jint OrbitDetermination::getTracksUsed() const
              {
                return env->callIntMethod(this$, mids$[mid_getTracksUsed_f2f64475e4580546]);
              }

              jdouble OrbitDetermination::getWeightedRms() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWeightedRms_456d9a2f64d6b28d]);
              }

              void OrbitDetermination::setActualOdSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setActualOdSpan_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::setConfidence(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConfidence_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::setConsiderN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConsiderN_0a2a1ac2721c0336], a0);
              }

              void OrbitDetermination::setConsiderParameters(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setConsiderParameters_65de9727799c5641], a0.this$);
              }

              void OrbitDetermination::setDataTypes(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDataTypes_65de9727799c5641], a0.this$);
              }

              void OrbitDetermination::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpoch_e82d68cd9f886886], a0.this$);
              }

              void OrbitDetermination::setEpochEigenInt(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenInt_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::setEpochEigenMaj(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenMaj_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::setEpochEigenMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochEigenMin_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::setGdop(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGdop_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::setId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setId_e939c6558ae8d313], a0.this$);
              }

              void OrbitDetermination::setMaxPredictedEigenMaj(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxPredictedEigenMaj_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::setMaximumObsGap(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaximumObsGap_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::setMethod(const ::org::orekit::files::ccsds::definitions::OdMethodFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMethod_a7950f94a213a00d], a0.this$);
              }

              void OrbitDetermination::setMinPredictedEigenMin(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMinPredictedEigenMin_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::setObsAvailable(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObsAvailable_0a2a1ac2721c0336], a0);
              }

              void OrbitDetermination::setObsUsed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObsUsed_0a2a1ac2721c0336], a0);
              }

              void OrbitDetermination::setPrevId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevId_e939c6558ae8d313], a0.this$);
              }

              void OrbitDetermination::setRecommendedOdSpan(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRecommendedOdSpan_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::setSedr(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSedr_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::setSensors(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensors_65de9727799c5641], a0.this$);
              }

              void OrbitDetermination::setSensorsN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorsN_0a2a1ac2721c0336], a0);
              }

              void OrbitDetermination::setSolveN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolveN_0a2a1ac2721c0336], a0);
              }

              void OrbitDetermination::setSolveStates(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolveStates_65de9727799c5641], a0.this$);
              }

              void OrbitDetermination::setTimeSinceFirstObservation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSinceFirstObservation_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::setTimeSinceLastObservation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTimeSinceLastObservation_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::setTracksAvailable(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTracksAvailable_0a2a1ac2721c0336], a0);
              }

              void OrbitDetermination::setTracksUsed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTracksUsed_0a2a1ac2721c0336], a0);
              }

              void OrbitDetermination::setWeightedRms(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWeightedRms_77e0f9a1f260e2e5], a0);
              }

              void OrbitDetermination::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
#include "java/util/AbstractMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractMap::class$ = NULL;
    jmethodID *AbstractMap::mids$ = NULL;
    bool AbstractMap::live$ = false;

    jclass AbstractMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_containsKey_229c87223f486349] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_229c87223f486349] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_entrySet_e9e1a6780fe94297] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_ed50a8b49b8274dc] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_e9e1a6780fe94297] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_put_286de79696ab0806] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_8b4e3987d7532731] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_remove_ed50a8b49b8274dc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_cfcfd130f9013e3e] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void AbstractMap::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    jboolean AbstractMap::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_229c87223f486349], a0.this$);
    }

    jboolean AbstractMap::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_229c87223f486349], a0.this$);
    }

    ::java::util::Set AbstractMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_e9e1a6780fe94297]));
    }

    jboolean AbstractMap::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::Object AbstractMap::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_ed50a8b49b8274dc], a0.this$));
    }

    jint AbstractMap::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean AbstractMap::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Set AbstractMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_e9e1a6780fe94297]));
    }

    ::java::lang::Object AbstractMap::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_286de79696ab0806], a0.this$, a1.this$));
    }

    void AbstractMap::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_8b4e3987d7532731], a0.this$);
    }

    ::java::lang::Object AbstractMap::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_ed50a8b49b8274dc], a0.this$));
    }

    jint AbstractMap::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }

    ::java::lang::String AbstractMap::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    ::java::util::Collection AbstractMap::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_cfcfd130f9013e3e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractMap_of_(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_clear(t_AbstractMap *self);
    static PyObject *t_AbstractMap_containsKey(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_containsValue(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_entrySet(t_AbstractMap *self);
    static PyObject *t_AbstractMap_equals(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_get(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_hashCode(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_isEmpty(t_AbstractMap *self);
    static PyObject *t_AbstractMap_keySet(t_AbstractMap *self);
    static PyObject *t_AbstractMap_put(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_putAll(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_remove(t_AbstractMap *self, PyObject *arg);
    static PyObject *t_AbstractMap_size(t_AbstractMap *self);
    static PyObject *t_AbstractMap_toString(t_AbstractMap *self, PyObject *args);
    static PyObject *t_AbstractMap_values(t_AbstractMap *self);
    static PyObject *t_AbstractMap_get__empty(t_AbstractMap *self, void *data);
    static PyObject *t_AbstractMap_get__parameters_(t_AbstractMap *self, void *data);
    static PyGetSetDef t_AbstractMap__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractMap, empty),
      DECLARE_GET_FIELD(t_AbstractMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractMap__methods_[] = {
      DECLARE_METHOD(t_AbstractMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, clear, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, containsKey, METH_O),
      DECLARE_METHOD(t_AbstractMap, containsValue, METH_O),
      DECLARE_METHOD(t_AbstractMap, entrySet, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, get, METH_O),
      DECLARE_METHOD(t_AbstractMap, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, keySet, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, put, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, putAll, METH_O),
      DECLARE_METHOD(t_AbstractMap, remove, METH_O),
      DECLARE_METHOD(t_AbstractMap, size, METH_NOARGS),
      DECLARE_METHOD(t_AbstractMap, toString, METH_VARARGS),
      DECLARE_METHOD(t_AbstractMap, values, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractMap)[] = {
      { Py_tp_methods, t_AbstractMap__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractMap)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AbstractMap, t_AbstractMap, AbstractMap);
    PyObject *t_AbstractMap::wrap_Object(const AbstractMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_AbstractMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractMap *self = (t_AbstractMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_AbstractMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_AbstractMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractMap *self = (t_AbstractMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_AbstractMap::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractMap), &PY_TYPE_DEF(AbstractMap), module, "AbstractMap", 0);
    }

    void t_AbstractMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "class_", make_descriptor(AbstractMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "wrapfn_", make_descriptor(t_AbstractMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractMap::initializeClass, 1)))
        return NULL;
      return t_AbstractMap::wrap_Object(AbstractMap(((t_AbstractMap *) arg)->object.this$));
    }
    static PyObject *t_AbstractMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractMap_of_(t_AbstractMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractMap_clear(t_AbstractMap *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_AbstractMap_containsKey(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_containsValue(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsValue", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_entrySet(t_AbstractMap *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.entrySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_AbstractMap_equals(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractMap_get(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_hashCode(t_AbstractMap *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractMap_isEmpty(t_AbstractMap *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_AbstractMap_keySet(t_AbstractMap *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_AbstractMap_put(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_AbstractMap_putAll(t_AbstractMap *self, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "putAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_remove(t_AbstractMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_AbstractMap_size(t_AbstractMap *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_AbstractMap_toString(t_AbstractMap *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(AbstractMap), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_AbstractMap_values(t_AbstractMap *self)
    {
      ::java::util::Collection result((jobject) NULL);
      OBJ_CALL(result = self->object.values());
      return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
    }
    static PyObject *t_AbstractMap_get__parameters_(t_AbstractMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_AbstractMap_get__empty(t_AbstractMap *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/BlockFieldMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/BlockFieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *BlockFieldMatrix::class$ = NULL;
      jmethodID *BlockFieldMatrix::mids$ = NULL;
      bool BlockFieldMatrix::live$ = false;
      jint BlockFieldMatrix::BLOCK_SIZE = (jint) 0;

      jclass BlockFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/BlockFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_249f450b19288783] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_11914f5932256658] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_init$_5210554fadd4300a] = env->getMethodID(cls, "<init>", "(II[[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_add_9a476d74482e4c6b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_add_311c21c57522a65c] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_8c5ca78361f003c1] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_cc77900a647586cf] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createBlocksLayout_ebc1d7b2d944a9b8] = env->getStaticMethodID(cls, "createBlocksLayout", "(Lorg/hipparchus/Field;II)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_createMatrix_8e5837651d169cc8] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumn_d29eb5ffff4844ca] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_cb8ea5461f14f705] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_61bcfe594fe45427] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_6ccec7d54d4aa14e] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_e4e0a9e5376069de] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRow_d29eb5ffff4844ca] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_cb8ea5461f14f705] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_61bcfe594fe45427] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_05948e8f73a5c897] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiply_9a476d74482e4c6b] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_multiply_311c21c57522a65c] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_8c5ca78361f003c1] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_9a476d74482e4c6b] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_multiplyTransposed_eff5bb7a14f49822] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_operate_f9019cec9923ca8a] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_f9019cec9923ca8a] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_scalarAdd_0f878209c37822a8] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_0f878209c37822a8] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_72c49d7bd5abccf7] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_ab13d4a167ad2f09] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_dffd6d9d2fbaa6fc] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_8c5ca78361f003c1] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_72c49d7bd5abccf7] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_4ee5877ee1acba81] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/BlockFieldMatrix;)V");
          mids$[mid_setRowMatrix_ab13d4a167ad2f09] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_dffd6d9d2fbaa6fc] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_ca8750336b496dca] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_9a476d74482e4c6b] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_subtract_311c21c57522a65c] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_toBlocksLayout_14397283fdb5cd13] = env->getStaticMethodID(cls, "toBlocksLayout", "([[Lorg/hipparchus/FieldElement;)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_transpose_cc77900a647586cf] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_9a476d74482e4c6b] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/BlockFieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_transposeMultiply_eff5bb7a14f49822] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/BlockFieldMatrix;");
          mids$[mid_walkInOptimizedOrder_09db37bb51f54673] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_3a0cd0f81f3173f1] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_1bdd1f13c5d68880] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_b8a3d440c9844dc5] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_09db37bb51f54673] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_3a0cd0f81f3173f1] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_1bdd1f13c5d68880] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_b8a3d440c9844dc5] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BLOCK_SIZE = env->getStaticIntField(cls, "BLOCK_SIZE");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BlockFieldMatrix::BlockFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_249f450b19288783, a0.this$)) {}

      BlockFieldMatrix::BlockFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_11914f5932256658, a0.this$, a1, a2)) {}

      BlockFieldMatrix::BlockFieldMatrix(jint a0, jint a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2, jboolean a3) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_5210554fadd4300a, a0, a1, a2.this$, a3)) {}

      BlockFieldMatrix BlockFieldMatrix::add(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_add_9a476d74482e4c6b], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::add(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_311c21c57522a65c], a0.this$));
      }

      void BlockFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_cc77900a647586cf]));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::createBlocksLayout(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_createBlocksLayout_ebc1d7b2d944a9b8], a0.this$, a1, a2));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_8e5837651d169cc8], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_d29eb5ffff4844ca], a0));
      }

      jint BlockFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_cb8ea5461f14f705], a0));
      }

      ::org::hipparchus::linear::FieldVector BlockFieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_61bcfe594fe45427], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_6ccec7d54d4aa14e]));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_e4e0a9e5376069de], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_d29eb5ffff4844ca], a0));
      }

      jint BlockFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_cb8ea5461f14f705], a0));
      }

      ::org::hipparchus::linear::FieldVector BlockFieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_61bcfe594fe45427], a0));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_05948e8f73a5c897], a0, a1, a2, a3));
      }

      BlockFieldMatrix BlockFieldMatrix::multiply(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_9a476d74482e4c6b], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::multiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_311c21c57522a65c], a0.this$));
      }

      void BlockFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      BlockFieldMatrix BlockFieldMatrix::multiplyTransposed(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_9a476d74482e4c6b], a0.this$));
      }

      BlockFieldMatrix BlockFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_eff5bb7a14f49822], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_f9019cec9923ca8a], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > BlockFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_f9019cec9923ca8a], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_0f878209c37822a8], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_0f878209c37822a8], a0.this$));
      }

      void BlockFieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_72c49d7bd5abccf7], a0, a1.this$);
      }

      void BlockFieldMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_ab13d4a167ad2f09], a0, a1.this$);
      }

      void BlockFieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_dffd6d9d2fbaa6fc], a0, a1.this$);
      }

      void BlockFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      void BlockFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_72c49d7bd5abccf7], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowMatrix(jint a0, const BlockFieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_4ee5877ee1acba81], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_ab13d4a167ad2f09], a0, a1.this$);
      }

      void BlockFieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_dffd6d9d2fbaa6fc], a0, a1.this$);
      }

      void BlockFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_ca8750336b496dca], a0.this$, a1, a2);
      }

      BlockFieldMatrix BlockFieldMatrix::subtract(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_9a476d74482e4c6b], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::subtract(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_311c21c57522a65c], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > BlockFieldMatrix::toBlocksLayout(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_toBlocksLayout_14397283fdb5cd13], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix BlockFieldMatrix::transpose() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_cc77900a647586cf]));
      }

      BlockFieldMatrix BlockFieldMatrix::transposeMultiply(const BlockFieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_9a476d74482e4c6b], a0.this$));
      }

      BlockFieldMatrix BlockFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return BlockFieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_eff5bb7a14f49822], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_09db37bb51f54673], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_3a0cd0f81f3173f1], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_1bdd1f13c5d68880], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_b8a3d440c9844dc5], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_09db37bb51f54673], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_3a0cd0f81f3173f1], a0.this$));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_1bdd1f13c5d68880], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement BlockFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_b8a3d440c9844dc5], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_BlockFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_of_(t_BlockFieldMatrix *self, PyObject *args);
      static int t_BlockFieldMatrix_init_(t_BlockFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BlockFieldMatrix_add(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_addToEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_copy(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args);
      static PyObject *t_BlockFieldMatrix_createMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumn(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnDimension(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getColumnVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getData(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRow(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowDimension(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getRowVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_getSubMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiplyEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_multiplyTransposed(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_operate(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_preMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_scalarAdd(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_scalarMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumn(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumnMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setColumnVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setEntry(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRow(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRowMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setRowVector(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_setSubMatrix(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_subtract(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BlockFieldMatrix_transpose(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_transposeMultiply(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_walkInOptimizedOrder(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_walkInRowOrder(t_BlockFieldMatrix *self, PyObject *args);
      static PyObject *t_BlockFieldMatrix_get__columnDimension(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__data(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__rowDimension(t_BlockFieldMatrix *self, void *data);
      static PyObject *t_BlockFieldMatrix_get__parameters_(t_BlockFieldMatrix *self, void *data);
      static PyGetSetDef t_BlockFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_BlockFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, data),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_BlockFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BlockFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_BlockFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, createBlocksLayout, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, scalarAdd, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, scalarMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, toBlocksLayout, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BlockFieldMatrix, transpose, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_BlockFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BlockFieldMatrix)[] = {
        { Py_tp_methods, t_BlockFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_BlockFieldMatrix_init_ },
        { Py_tp_getset, t_BlockFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BlockFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(BlockFieldMatrix, t_BlockFieldMatrix, BlockFieldMatrix);
      PyObject *t_BlockFieldMatrix::wrap_Object(const BlockFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BlockFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BlockFieldMatrix *self = (t_BlockFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BlockFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BlockFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BlockFieldMatrix *self = (t_BlockFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BlockFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(BlockFieldMatrix), &PY_TYPE_DEF(BlockFieldMatrix), module, "BlockFieldMatrix", 0);
      }

      void t_BlockFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "class_", make_descriptor(BlockFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "wrapfn_", make_descriptor(t_BlockFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "boxfn_", make_descriptor(boxObject));
        env->getClass(BlockFieldMatrix::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BlockFieldMatrix), "BLOCK_SIZE", make_descriptor(BlockFieldMatrix::BLOCK_SIZE));
      }

      static PyObject *t_BlockFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BlockFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_BlockFieldMatrix::wrap_Object(BlockFieldMatrix(((t_BlockFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_BlockFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BlockFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BlockFieldMatrix_of_(t_BlockFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_BlockFieldMatrix_init_(t_BlockFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = BlockFieldMatrix(a0));
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
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = BlockFieldMatrix(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            JArray< JArray< ::org::hipparchus::FieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;
            jboolean a3;
            BlockFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "II[[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3))
            {
              INT_CALL(object = BlockFieldMatrix(a0, a1, a2, a3));
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

      static PyObject *t_BlockFieldMatrix_add(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_addToEntry(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_copy(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_createBlocksLayout(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockFieldMatrix::createBlocksLayout(a0, a1, a2));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "createBlocksLayout", args);
        return NULL;
      }

      static PyObject *t_BlockFieldMatrix_createMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumn(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumn", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnDimension(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getColumnVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getColumnVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getData(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getEntry(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRow(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowDimension(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getRowVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getRowVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_getSubMatrix(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiplyEntry(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_multiplyTransposed(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_operate(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_preMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_scalarAdd(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "scalarAdd", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_scalarMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "scalarMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumn(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumn", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumnMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumnMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setColumnVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setColumnVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setEntry(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRow(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRowMatrix(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            BlockFieldMatrix a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", BlockFieldMatrix::initializeClass, &a0, &a1, &p1, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(self->object.setRowMatrix(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRowMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setRowVector(t_BlockFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setRowVector", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_setSubMatrix(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_subtract(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_toBlocksLayout(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::BlockFieldMatrix::toBlocksLayout(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError(type, "toBlocksLayout", arg);
        return NULL;
      }

      static PyObject *t_BlockFieldMatrix_transpose(t_BlockFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.transpose());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "transpose", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_transposeMultiply(t_BlockFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BlockFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", BlockFieldMatrix::initializeClass, &a0, &p0, t_BlockFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            BlockFieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return t_BlockFieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_walkInOptimizedOrder(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "walkInOptimizedOrder", args, 2);
      }

      static PyObject *t_BlockFieldMatrix_walkInRowOrder(t_BlockFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(BlockFieldMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }
      static PyObject *t_BlockFieldMatrix_get__parameters_(t_BlockFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BlockFieldMatrix_get__columnDimension(t_BlockFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BlockFieldMatrix_get__data(t_BlockFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_BlockFieldMatrix_get__rowDimension(t_BlockFieldMatrix *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimationLoader$LineParameters::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimationLoader$LineParameters::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimationLoader$LineParameters::live$ = false;

            jclass MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_compareTo_533614488ddee224] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getAp_456d9a2f64d6b28d] = env->getMethodID(cls, "getAp", "()D");
                mids$[mid_getF107_456d9a2f64d6b28d] = env->getMethodID(cls, "getF107", "()D");
                mids$[mid_getFileDate_d592c1a2c355eb35] = env->getMethodID(cls, "getFileDate", "()Lorg/orekit/time/DateComponents;");
                mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint MarshallSolarActivityFutureEstimationLoader$LineParameters::compareTo(const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_533614488ddee224], a0.this$);
            }

            jboolean MarshallSolarActivityFutureEstimationLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimationLoader$LineParameters::getAp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAp_456d9a2f64d6b28d]);
            }

            jdouble MarshallSolarActivityFutureEstimationLoader$LineParameters::getF107() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107_456d9a2f64d6b28d]);
            }

            ::org::orekit::time::DateComponents MarshallSolarActivityFutureEstimationLoader$LineParameters::getFileDate() const
            {
              return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getFileDate_d592c1a2c355eb35]));
            }

            jint MarshallSolarActivityFutureEstimationLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_of_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_compareTo(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_equals(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getAp(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getF107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getFileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_hashCode(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__ap(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__f107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__fileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimationLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, ap),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, f107),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, fileDate),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimationLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, compareTo, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, equals, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, getAp, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, getF107, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, getFileDate, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader$LineParameters, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimationLoader$LineParameters)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimationLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimationLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimationLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters, t_MarshallSolarActivityFutureEstimationLoader$LineParameters, MarshallSolarActivityFutureEstimationLoader$LineParameters);
            PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_Object(const MarshallSolarActivityFutureEstimationLoader$LineParameters& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self = (t_MarshallSolarActivityFutureEstimationLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self = (t_MarshallSolarActivityFutureEstimationLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimationLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader$LineParameters), module, "MarshallSolarActivityFutureEstimationLoader$LineParameters", 0);
            }

            void t_MarshallSolarActivityFutureEstimationLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), "class_", make_descriptor(MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimationLoader$LineParameters::wrap_Object(MarshallSolarActivityFutureEstimationLoader$LineParameters(((t_MarshallSolarActivityFutureEstimationLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimationLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_of_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_compareTo(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters a0((jobject) NULL);
              PyTypeObject **p0;
              jint result;

              if (!parseArgs(args, "K", ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader$LineParameters::parameters_))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), (PyObject *) self, "compareTo", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_equals(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getAp(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getF107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF107());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_getFileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self)
            {
              ::org::orekit::time::DateComponents result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileDate());
              return ::org::orekit::time::t_DateComponents::wrap_Object(result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_hashCode(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters), (PyObject *) self, "hashCode", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__ap(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAp());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__f107(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF107());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader$LineParameters_get__fileDate(t_MarshallSolarActivityFutureEstimationLoader$LineParameters *self, void *data)
            {
              ::org::orekit::time::DateComponents value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileDate());
              return ::org::orekit::time::t_DateComponents::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4C.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4C::class$ = NULL;
          jmethodID *SubFrame4C::mids$ = NULL;
          bool SubFrame4C::live$ = false;
          jint SubFrame4C::NB_ERD = (jint) 0;

          jclass SubFrame4C::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4C");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getERD_38565d58479aa24a] = env->getMethodID(cls, "getERD", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NB_ERD = env->getStaticIntField(cls, "NB_ERD");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4C::getERD(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getERD_38565d58479aa24a], a0);
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
          static PyObject *t_SubFrame4C_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4C_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4C_getERD(t_SubFrame4C *self, PyObject *arg);

          static PyMethodDef t_SubFrame4C__methods_[] = {
            DECLARE_METHOD(t_SubFrame4C, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4C, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4C, getERD, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4C)[] = {
            { Py_tp_methods, t_SubFrame4C__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4C)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4C, t_SubFrame4C, SubFrame4C);

          void t_SubFrame4C::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4C), &PY_TYPE_DEF(SubFrame4C), module, "SubFrame4C", 0);
          }

          void t_SubFrame4C::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "class_", make_descriptor(SubFrame4C::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "wrapfn_", make_descriptor(t_SubFrame4C::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame4C::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4C), "NB_ERD", make_descriptor(SubFrame4C::NB_ERD));
          }

          static PyObject *t_SubFrame4C_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4C::initializeClass, 1)))
              return NULL;
            return t_SubFrame4C::wrap_Object(SubFrame4C(((t_SubFrame4C *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4C_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4C::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4C_getERD(t_SubFrame4C *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getERD(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getERD", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TTScale::class$ = NULL;
      jmethodID *TTScale::mids$ = NULL;
      bool TTScale::live$ = false;

      jclass TTScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TTScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jdouble TTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      jdouble TTScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1], a0.this$, a1.this$);
      }

      ::java::lang::String TTScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_TTScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TTScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TTScale_getName(t_TTScale *self);
      static PyObject *t_TTScale_offsetFromTAI(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_offsetToTAI(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_toString(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_get__name(t_TTScale *self, void *data);
      static PyGetSetDef t_TTScale__fields_[] = {
        DECLARE_GET_FIELD(t_TTScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TTScale__methods_[] = {
        DECLARE_METHOD(t_TTScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TTScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TTScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TTScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TTScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_TTScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TTScale)[] = {
        { Py_tp_methods, t_TTScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TTScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TTScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TTScale, t_TTScale, TTScale);

      void t_TTScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TTScale), &PY_TYPE_DEF(TTScale), module, "TTScale", 0);
      }

      void t_TTScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "class_", make_descriptor(TTScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "wrapfn_", make_descriptor(t_TTScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TTScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TTScale::initializeClass, 1)))
          return NULL;
        return t_TTScale::wrap_Object(TTScale(((t_TTScale *) arg)->object.this$));
      }
      static PyObject *t_TTScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TTScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TTScale_getName(t_TTScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TTScale_offsetFromTAI(t_TTScale *self, PyObject *args)
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

      static PyObject *t_TTScale_offsetToTAI(t_TTScale *self, PyObject *args)
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

      static PyObject *t_TTScale_toString(t_TTScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TTScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TTScale_get__name(t_TTScale *self, void *data)
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
#include "org/hipparchus/complex/Complex.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *Complex::class$ = NULL;
      jmethodID *Complex::mids$ = NULL;
      bool Complex::live$ = false;
      Complex *Complex::I = NULL;
      Complex *Complex::INF = NULL;
      Complex *Complex::MINUS_I = NULL;
      Complex *Complex::MINUS_ONE = NULL;
      Complex *Complex::NaN = NULL;
      Complex *Complex::ONE = NULL;
      Complex *Complex::PI = NULL;
      Complex *Complex::ZERO = NULL;

      jclass Complex::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/Complex");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_abs_8278e96d3787b980] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_acos_8278e96d3787b980] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_acosh_8278e96d3787b980] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_add_b074c62aaddfbbb2] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_add_4dfff6d1ce38e85b] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_asin_8278e96d3787b980] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_asinh_8278e96d3787b980] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_atan_8278e96d3787b980] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_atan2_b074c62aaddfbbb2] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_atanh_8278e96d3787b980] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_cbrt_8278e96d3787b980] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_ceil_8278e96d3787b980] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_compareTo_68c283ffd44764bc] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/complex/Complex;)I");
          mids$[mid_conjugate_8278e96d3787b980] = env->getMethodID(cls, "conjugate", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_copySign_b074c62aaddfbbb2] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_copySign_4dfff6d1ce38e85b] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_cos_8278e96d3787b980] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_cosh_8278e96d3787b980] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_divide_b074c62aaddfbbb2] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_divide_4dfff6d1ce38e85b] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_d4a497a5f0ea4dae] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Z");
          mids$[mid_equals_6b867caf03ce5a76] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;D)Z");
          mids$[mid_equals_c521148f5a1e8729] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;I)Z");
          mids$[mid_equalsWithRelativeTolerance_6b867caf03ce5a76] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;D)Z");
          mids$[mid_exp_8278e96d3787b980] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_expm1_8278e96d3787b980] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_floor_8278e96d3787b980] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getArgument_456d9a2f64d6b28d] = env->getMethodID(cls, "getArgument", "()D");
          mids$[mid_getField_3cb90e62d7040545] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/complex/ComplexField;");
          mids$[mid_getImaginary_456d9a2f64d6b28d] = env->getMethodID(cls, "getImaginary", "()D");
          mids$[mid_getImaginaryPart_456d9a2f64d6b28d] = env->getMethodID(cls, "getImaginaryPart", "()D");
          mids$[mid_getPi_8278e96d3787b980] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getRealPart_456d9a2f64d6b28d] = env->getMethodID(cls, "getRealPart", "()D");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_b074c62aaddfbbb2] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isMathematicalInteger_e470b6d9e0d979db] = env->getMethodID(cls, "isMathematicalInteger", "()Z");
          mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isReal_e470b6d9e0d979db] = env->getMethodID(cls, "isReal", "()Z");
          mids$[mid_isZero_e470b6d9e0d979db] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_2c319bae11bd93df] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_a8d9a7d3fbb2d8eb] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_e56cc6846d200191] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_4aa118580a77cd9e] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_f1ef3700eb5013ff] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_e73e169906a4f317] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_aa7d437b73616dd9] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_linearCombination_82f969a1e9dd08d9] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;DLorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_log_8278e96d3787b980] = env->getMethodID(cls, "log", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_log10_8278e96d3787b980] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_log1p_8278e96d3787b980] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_b074c62aaddfbbb2] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_4dfff6d1ce38e85b] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiply_6274be11ed0ee172] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiplyMinusI_8278e96d3787b980] = env->getMethodID(cls, "multiplyMinusI", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_multiplyPlusI_8278e96d3787b980] = env->getMethodID(cls, "multiplyPlusI", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_negate_8278e96d3787b980] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_newInstance_4dfff6d1ce38e85b] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_norm_456d9a2f64d6b28d] = env->getMethodID(cls, "norm", "()D");
          mids$[mid_nthRoot_0096b74d5921c439] = env->getMethodID(cls, "nthRoot", "(I)Ljava/util/List;");
          mids$[mid_pow_b074c62aaddfbbb2] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_pow_4dfff6d1ce38e85b] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_pow_6274be11ed0ee172] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_reciprocal_8278e96d3787b980] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_remainder_b074c62aaddfbbb2] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_remainder_4dfff6d1ce38e85b] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_rint_8278e96d3787b980] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_rootN_6274be11ed0ee172] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_scalb_6274be11ed0ee172] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/complex/Complex;");
          mids$[mid_sign_8278e96d3787b980] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sin_8278e96d3787b980] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_8278e96d3787b980] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_8278e96d3787b980] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_sqrt1z_8278e96d3787b980] = env->getMethodID(cls, "sqrt1z", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_subtract_b074c62aaddfbbb2] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_subtract_4dfff6d1ce38e85b] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_tan_8278e96d3787b980] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_tanh_8278e96d3787b980] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toDegrees_8278e96d3787b980] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toRadians_8278e96d3787b980] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_8278e96d3787b980] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_valueOf_4dfff6d1ce38e85b] = env->getStaticMethodID(cls, "valueOf", "(D)Lorg/hipparchus/complex/Complex;");
          mids$[mid_valueOf_4a983b2ed426e60d] = env->getStaticMethodID(cls, "valueOf", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_createComplex_4a983b2ed426e60d] = env->getMethodID(cls, "createComplex", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_readResolve_dfd7647d9110ac9f] = env->getMethodID(cls, "readResolve", "()Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          I = new Complex(env->getStaticObjectField(cls, "I", "Lorg/hipparchus/complex/Complex;"));
          INF = new Complex(env->getStaticObjectField(cls, "INF", "Lorg/hipparchus/complex/Complex;"));
          MINUS_I = new Complex(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/complex/Complex;"));
          MINUS_ONE = new Complex(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/complex/Complex;"));
          NaN = new Complex(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/complex/Complex;"));
          ONE = new Complex(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/complex/Complex;"));
          PI = new Complex(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/complex/Complex;"));
          ZERO = new Complex(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/complex/Complex;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Complex::Complex(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

      Complex::Complex(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

      Complex Complex::abs() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_abs_8278e96d3787b980]));
      }

      Complex Complex::acos() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_acos_8278e96d3787b980]));
      }

      Complex Complex::acosh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_acosh_8278e96d3787b980]));
      }

      Complex Complex::add(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_add_b074c62aaddfbbb2], a0.this$));
      }

      Complex Complex::add(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_add_4dfff6d1ce38e85b], a0));
      }

      Complex Complex::asin() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_asin_8278e96d3787b980]));
      }

      Complex Complex::asinh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_asinh_8278e96d3787b980]));
      }

      Complex Complex::atan() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atan_8278e96d3787b980]));
      }

      Complex Complex::atan2(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atan2_b074c62aaddfbbb2], a0.this$));
      }

      Complex Complex::atanh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_atanh_8278e96d3787b980]));
      }

      Complex Complex::cbrt() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cbrt_8278e96d3787b980]));
      }

      Complex Complex::ceil() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_ceil_8278e96d3787b980]));
      }

      jint Complex::compareTo(const Complex & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_68c283ffd44764bc], a0.this$);
      }

      Complex Complex::conjugate() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_conjugate_8278e96d3787b980]));
      }

      Complex Complex::copySign(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_copySign_b074c62aaddfbbb2], a0.this$));
      }

      Complex Complex::copySign(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_copySign_4dfff6d1ce38e85b], a0));
      }

      Complex Complex::cos() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cos_8278e96d3787b980]));
      }

      Complex Complex::cosh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_cosh_8278e96d3787b980]));
      }

      Complex Complex::divide(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_divide_b074c62aaddfbbb2], a0.this$));
      }

      Complex Complex::divide(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_divide_4dfff6d1ce38e85b], a0));
      }

      jboolean Complex::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_d4a497a5f0ea4dae], a0.this$, a1.this$);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_6b867caf03ce5a76], a0.this$, a1.this$, a2);
      }

      jboolean Complex::equals(const Complex & a0, const Complex & a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_c521148f5a1e8729], a0.this$, a1.this$, a2);
      }

      jboolean Complex::equalsWithRelativeTolerance(const Complex & a0, const Complex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_6b867caf03ce5a76], a0.this$, a1.this$, a2);
      }

      Complex Complex::exp() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_exp_8278e96d3787b980]));
      }

      Complex Complex::expm1() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_expm1_8278e96d3787b980]));
      }

      Complex Complex::floor() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_floor_8278e96d3787b980]));
      }

      jdouble Complex::getArgument() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getArgument_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::complex::ComplexField Complex::getField() const
      {
        return ::org::hipparchus::complex::ComplexField(env->callObjectMethod(this$, mids$[mid_getField_3cb90e62d7040545]));
      }

      jdouble Complex::getImaginary() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginary_456d9a2f64d6b28d]);
      }

      jdouble Complex::getImaginaryPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getImaginaryPart_456d9a2f64d6b28d]);
      }

      Complex Complex::getPi() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_getPi_8278e96d3787b980]));
      }

      jdouble Complex::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
      }

      jdouble Complex::getRealPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRealPart_456d9a2f64d6b28d]);
      }

      jint Complex::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      Complex Complex::hypot(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_hypot_b074c62aaddfbbb2], a0.this$));
      }

      jboolean Complex::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
      }

      jboolean Complex::isMathematicalInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isMathematicalInteger_e470b6d9e0d979db]);
      }

      jboolean Complex::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
      }

      jboolean Complex::isReal() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isReal_e470b6d9e0d979db]);
      }

      jboolean Complex::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_e470b6d9e0d979db]);
      }

      Complex Complex::linearCombination(const JArray< jdouble > & a0, const JArray< Complex > & a1) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_2c319bae11bd93df], a0.this$, a1.this$));
      }

      Complex Complex::linearCombination(const JArray< Complex > & a0, const JArray< Complex > & a1) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_a8d9a7d3fbb2d8eb], a0.this$, a1.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_e56cc6846d200191], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_4aa118580a77cd9e], a0, a1.this$, a2, a3.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3, const Complex & a4, const Complex & a5) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_f1ef3700eb5013ff], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3, jdouble a4, const Complex & a5) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_e73e169906a4f317], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Complex Complex::linearCombination(const Complex & a0, const Complex & a1, const Complex & a2, const Complex & a3, const Complex & a4, const Complex & a5, const Complex & a6, const Complex & a7) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_aa7d437b73616dd9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Complex Complex::linearCombination(jdouble a0, const Complex & a1, jdouble a2, const Complex & a3, jdouble a4, const Complex & a5, jdouble a6, const Complex & a7) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_linearCombination_82f969a1e9dd08d9], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Complex Complex::log() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log_8278e96d3787b980]));
      }

      Complex Complex::log10() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log10_8278e96d3787b980]));
      }

      Complex Complex::log1p() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_log1p_8278e96d3787b980]));
      }

      Complex Complex::multiply(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_b074c62aaddfbbb2], a0.this$));
      }

      Complex Complex::multiply(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_4dfff6d1ce38e85b], a0));
      }

      Complex Complex::multiply(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiply_6274be11ed0ee172], a0));
      }

      Complex Complex::multiplyMinusI() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiplyMinusI_8278e96d3787b980]));
      }

      Complex Complex::multiplyPlusI() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_multiplyPlusI_8278e96d3787b980]));
      }

      Complex Complex::negate() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_negate_8278e96d3787b980]));
      }

      Complex Complex::newInstance(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_newInstance_4dfff6d1ce38e85b], a0));
      }

      jdouble Complex::norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_norm_456d9a2f64d6b28d]);
      }

      ::java::util::List Complex::nthRoot(jint a0) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_nthRoot_0096b74d5921c439], a0));
      }

      Complex Complex::pow(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_b074c62aaddfbbb2], a0.this$));
      }

      Complex Complex::pow(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_4dfff6d1ce38e85b], a0));
      }

      Complex Complex::pow(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_pow_6274be11ed0ee172], a0));
      }

      Complex Complex::reciprocal() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_reciprocal_8278e96d3787b980]));
      }

      Complex Complex::remainder(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_remainder_b074c62aaddfbbb2], a0.this$));
      }

      Complex Complex::remainder(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_remainder_4dfff6d1ce38e85b], a0));
      }

      Complex Complex::rint() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_rint_8278e96d3787b980]));
      }

      Complex Complex::rootN(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_rootN_6274be11ed0ee172], a0));
      }

      Complex Complex::scalb(jint a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_scalb_6274be11ed0ee172], a0));
      }

      Complex Complex::sign() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sign_8278e96d3787b980]));
      }

      Complex Complex::sin() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sin_8278e96d3787b980]));
      }

      ::org::hipparchus::util::FieldSinCos Complex::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
      }

      Complex Complex::sinh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sinh_8278e96d3787b980]));
      }

      ::org::hipparchus::util::FieldSinhCosh Complex::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
      }

      Complex Complex::sqrt() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sqrt_8278e96d3787b980]));
      }

      Complex Complex::sqrt1z() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_sqrt1z_8278e96d3787b980]));
      }

      Complex Complex::subtract(const Complex & a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_subtract_b074c62aaddfbbb2], a0.this$));
      }

      Complex Complex::subtract(jdouble a0) const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_subtract_4dfff6d1ce38e85b], a0));
      }

      Complex Complex::tan() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_tan_8278e96d3787b980]));
      }

      Complex Complex::tanh() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_tanh_8278e96d3787b980]));
      }

      Complex Complex::toDegrees() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_toDegrees_8278e96d3787b980]));
      }

      Complex Complex::toRadians() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_toRadians_8278e96d3787b980]));
      }

      ::java::lang::String Complex::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      Complex Complex::ulp() const
      {
        return Complex(env->callObjectMethod(this$, mids$[mid_ulp_8278e96d3787b980]));
      }

      Complex Complex::valueOf(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Complex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4dfff6d1ce38e85b], a0));
      }

      Complex Complex::valueOf(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Complex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4a983b2ed426e60d], a0, a1));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_Complex_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Complex_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Complex_init_(t_Complex *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Complex_abs(t_Complex *self);
      static PyObject *t_Complex_acos(t_Complex *self);
      static PyObject *t_Complex_acosh(t_Complex *self);
      static PyObject *t_Complex_add(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_asin(t_Complex *self);
      static PyObject *t_Complex_asinh(t_Complex *self);
      static PyObject *t_Complex_atan(t_Complex *self);
      static PyObject *t_Complex_atan2(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_atanh(t_Complex *self);
      static PyObject *t_Complex_cbrt(t_Complex *self);
      static PyObject *t_Complex_ceil(t_Complex *self);
      static PyObject *t_Complex_compareTo(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_conjugate(t_Complex *self);
      static PyObject *t_Complex_copySign(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_cos(t_Complex *self);
      static PyObject *t_Complex_cosh(t_Complex *self);
      static PyObject *t_Complex_divide(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_equals(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args);
      static PyObject *t_Complex_equals_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Complex_exp(t_Complex *self);
      static PyObject *t_Complex_expm1(t_Complex *self);
      static PyObject *t_Complex_floor(t_Complex *self);
      static PyObject *t_Complex_getArgument(t_Complex *self);
      static PyObject *t_Complex_getField(t_Complex *self);
      static PyObject *t_Complex_getImaginary(t_Complex *self);
      static PyObject *t_Complex_getImaginaryPart(t_Complex *self);
      static PyObject *t_Complex_getPi(t_Complex *self);
      static PyObject *t_Complex_getReal(t_Complex *self);
      static PyObject *t_Complex_getRealPart(t_Complex *self);
      static PyObject *t_Complex_hashCode(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_hypot(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_isInfinite(t_Complex *self);
      static PyObject *t_Complex_isMathematicalInteger(t_Complex *self);
      static PyObject *t_Complex_isNaN(t_Complex *self);
      static PyObject *t_Complex_isReal(t_Complex *self);
      static PyObject *t_Complex_isZero(t_Complex *self);
      static PyObject *t_Complex_linearCombination(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_log(t_Complex *self);
      static PyObject *t_Complex_log10(t_Complex *self);
      static PyObject *t_Complex_log1p(t_Complex *self);
      static PyObject *t_Complex_multiply(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_multiplyMinusI(t_Complex *self);
      static PyObject *t_Complex_multiplyPlusI(t_Complex *self);
      static PyObject *t_Complex_negate(t_Complex *self);
      static PyObject *t_Complex_newInstance(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_norm(t_Complex *self);
      static PyObject *t_Complex_nthRoot(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_pow(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_reciprocal(t_Complex *self);
      static PyObject *t_Complex_remainder(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_rint(t_Complex *self);
      static PyObject *t_Complex_rootN(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_scalb(t_Complex *self, PyObject *arg);
      static PyObject *t_Complex_sign(t_Complex *self);
      static PyObject *t_Complex_sin(t_Complex *self);
      static PyObject *t_Complex_sinCos(t_Complex *self);
      static PyObject *t_Complex_sinh(t_Complex *self);
      static PyObject *t_Complex_sinhCosh(t_Complex *self);
      static PyObject *t_Complex_sqrt(t_Complex *self);
      static PyObject *t_Complex_sqrt1z(t_Complex *self);
      static PyObject *t_Complex_subtract(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_tan(t_Complex *self);
      static PyObject *t_Complex_tanh(t_Complex *self);
      static PyObject *t_Complex_toDegrees(t_Complex *self);
      static PyObject *t_Complex_toRadians(t_Complex *self);
      static PyObject *t_Complex_toString(t_Complex *self, PyObject *args);
      static PyObject *t_Complex_ulp(t_Complex *self);
      static PyObject *t_Complex_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Complex_get__argument(t_Complex *self, void *data);
      static PyObject *t_Complex_get__field(t_Complex *self, void *data);
      static PyObject *t_Complex_get__imaginary(t_Complex *self, void *data);
      static PyObject *t_Complex_get__imaginaryPart(t_Complex *self, void *data);
      static PyObject *t_Complex_get__infinite(t_Complex *self, void *data);
      static PyObject *t_Complex_get__mathematicalInteger(t_Complex *self, void *data);
      static PyObject *t_Complex_get__naN(t_Complex *self, void *data);
      static PyObject *t_Complex_get__pi(t_Complex *self, void *data);
      static PyObject *t_Complex_get__real(t_Complex *self, void *data);
      static PyObject *t_Complex_get__realPart(t_Complex *self, void *data);
      static PyObject *t_Complex_get__zero(t_Complex *self, void *data);
      static PyGetSetDef t_Complex__fields_[] = {
        DECLARE_GET_FIELD(t_Complex, argument),
        DECLARE_GET_FIELD(t_Complex, field),
        DECLARE_GET_FIELD(t_Complex, imaginary),
        DECLARE_GET_FIELD(t_Complex, imaginaryPart),
        DECLARE_GET_FIELD(t_Complex, infinite),
        DECLARE_GET_FIELD(t_Complex, mathematicalInteger),
        DECLARE_GET_FIELD(t_Complex, naN),
        DECLARE_GET_FIELD(t_Complex, pi),
        DECLARE_GET_FIELD(t_Complex, real),
        DECLARE_GET_FIELD(t_Complex, realPart),
        DECLARE_GET_FIELD(t_Complex, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Complex__methods_[] = {
        DECLARE_METHOD(t_Complex, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Complex, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Complex, abs, METH_NOARGS),
        DECLARE_METHOD(t_Complex, acos, METH_NOARGS),
        DECLARE_METHOD(t_Complex, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, add, METH_VARARGS),
        DECLARE_METHOD(t_Complex, asin, METH_NOARGS),
        DECLARE_METHOD(t_Complex, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, atan, METH_NOARGS),
        DECLARE_METHOD(t_Complex, atan2, METH_O),
        DECLARE_METHOD(t_Complex, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Complex, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Complex, compareTo, METH_O),
        DECLARE_METHOD(t_Complex, conjugate, METH_NOARGS),
        DECLARE_METHOD(t_Complex, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Complex, cos, METH_NOARGS),
        DECLARE_METHOD(t_Complex, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, divide, METH_VARARGS),
        DECLARE_METHOD(t_Complex, equals, METH_VARARGS),
        DECLARE_METHOD(t_Complex, equalsWithRelativeTolerance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Complex, equals_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Complex, exp, METH_NOARGS),
        DECLARE_METHOD(t_Complex, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Complex, floor, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getArgument, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getField, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getImaginary, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getImaginaryPart, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Complex, getRealPart, METH_NOARGS),
        DECLARE_METHOD(t_Complex, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Complex, hypot, METH_O),
        DECLARE_METHOD(t_Complex, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isMathematicalInteger, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isReal, METH_NOARGS),
        DECLARE_METHOD(t_Complex, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Complex, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Complex, log, METH_NOARGS),
        DECLARE_METHOD(t_Complex, log10, METH_NOARGS),
        DECLARE_METHOD(t_Complex, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Complex, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Complex, multiplyMinusI, METH_NOARGS),
        DECLARE_METHOD(t_Complex, multiplyPlusI, METH_NOARGS),
        DECLARE_METHOD(t_Complex, negate, METH_NOARGS),
        DECLARE_METHOD(t_Complex, newInstance, METH_O),
        DECLARE_METHOD(t_Complex, norm, METH_NOARGS),
        DECLARE_METHOD(t_Complex, nthRoot, METH_O),
        DECLARE_METHOD(t_Complex, pow, METH_VARARGS),
        DECLARE_METHOD(t_Complex, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Complex, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Complex, rint, METH_NOARGS),
        DECLARE_METHOD(t_Complex, rootN, METH_O),
        DECLARE_METHOD(t_Complex, scalb, METH_O),
        DECLARE_METHOD(t_Complex, sign, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sin, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Complex, sqrt1z, METH_NOARGS),
        DECLARE_METHOD(t_Complex, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Complex, tan, METH_NOARGS),
        DECLARE_METHOD(t_Complex, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Complex, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Complex, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Complex, toString, METH_VARARGS),
        DECLARE_METHOD(t_Complex, ulp, METH_NOARGS),
        DECLARE_METHOD(t_Complex, valueOf, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Complex)[] = {
        { Py_tp_methods, t_Complex__methods_ },
        { Py_tp_init, (void *) t_Complex_init_ },
        { Py_tp_getset, t_Complex__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Complex)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Complex, t_Complex, Complex);

      void t_Complex::install(PyObject *module)
      {
        installType(&PY_TYPE(Complex), &PY_TYPE_DEF(Complex), module, "Complex", 0);
      }

      void t_Complex::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "class_", make_descriptor(Complex::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "wrapfn_", make_descriptor(t_Complex::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "boxfn_", make_descriptor(boxObject));
        env->getClass(Complex::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "I", make_descriptor(t_Complex::wrap_Object(*Complex::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "INF", make_descriptor(t_Complex::wrap_Object(*Complex::INF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "MINUS_I", make_descriptor(t_Complex::wrap_Object(*Complex::MINUS_I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "MINUS_ONE", make_descriptor(t_Complex::wrap_Object(*Complex::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "NaN", make_descriptor(t_Complex::wrap_Object(*Complex::NaN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "ONE", make_descriptor(t_Complex::wrap_Object(*Complex::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "PI", make_descriptor(t_Complex::wrap_Object(*Complex::PI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Complex), "ZERO", make_descriptor(t_Complex::wrap_Object(*Complex::ZERO)));
      }

      static PyObject *t_Complex_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Complex::initializeClass, 1)))
          return NULL;
        return t_Complex::wrap_Object(Complex(((t_Complex *) arg)->object.this$));
      }
      static PyObject *t_Complex_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Complex::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Complex_init_(t_Complex *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            Complex object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = Complex(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            Complex object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = Complex(a0, a1));
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

      static PyObject *t_Complex_abs(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_acos(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_acosh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_add(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Complex_asin(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_asinh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_atan(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_atan2(t_Complex *self, PyObject *arg)
      {
        Complex a0((jobject) NULL);
        Complex result((jobject) NULL);

        if (!parseArg(arg, "k", Complex::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Complex_atanh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_cbrt(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_ceil(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_compareTo(t_Complex *self, PyObject *arg)
      {
        Complex a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Complex::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Complex_conjugate(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.conjugate());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_copySign(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Complex_cos(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_cosh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_divide(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Complex_equals(t_Complex *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Complex), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Complex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args)
      {
        Complex a0((jobject) NULL);
        Complex a1((jobject) NULL);
        jdouble a2;
        jboolean result;

        if (!parseArgs(args, "kkD", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Complex::equalsWithRelativeTolerance(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "equalsWithRelativeTolerance", args);
        return NULL;
      }

      static PyObject *t_Complex_equals_(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "kk", Complex::initializeClass, Complex::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "kkD", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            jint a2;
            jboolean result;

            if (!parseArgs(args, "kkI", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equals_", args);
        return NULL;
      }

      static PyObject *t_Complex_exp(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_expm1(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_floor(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_getArgument(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getArgument());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getField(t_Complex *self)
      {
        ::org::hipparchus::complex::ComplexField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::complex::t_ComplexField::wrap_Object(result);
      }

      static PyObject *t_Complex_getImaginary(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getImaginary());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getImaginaryPart(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getImaginaryPart());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getPi(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_getReal(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_getRealPart(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRealPart());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_hashCode(t_Complex *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Complex), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Complex_hypot(t_Complex *self, PyObject *arg)
      {
        Complex a0((jobject) NULL);
        Complex result((jobject) NULL);

        if (!parseArg(arg, "k", Complex::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Complex_isInfinite(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isMathematicalInteger(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isNaN(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isReal(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isReal());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_isZero(t_Complex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Complex_linearCombination(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Complex > a1((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Complex::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            JArray< Complex > a0((jobject) NULL);
            JArray< Complex > a1((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Complex::initializeClass, Complex::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            Complex a2((jobject) NULL);
            Complex a3((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex a1((jobject) NULL);
            jdouble a2;
            Complex a3((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            Complex a2((jobject) NULL);
            Complex a3((jobject) NULL);
            Complex a4((jobject) NULL);
            Complex a5((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex a1((jobject) NULL);
            jdouble a2;
            Complex a3((jobject) NULL);
            jdouble a4;
            Complex a5((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Complex a0((jobject) NULL);
            Complex a1((jobject) NULL);
            Complex a2((jobject) NULL);
            Complex a3((jobject) NULL);
            Complex a4((jobject) NULL);
            Complex a5((jobject) NULL);
            Complex a6((jobject) NULL);
            Complex a7((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex a1((jobject) NULL);
            jdouble a2;
            Complex a3((jobject) NULL);
            jdouble a4;
            Complex a5((jobject) NULL);
            jdouble a6;
            Complex a7((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, Complex::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Complex_log(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_log10(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_log1p(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_multiply(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jint a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Complex_multiplyMinusI(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyMinusI());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_multiplyPlusI(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyPlusI());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_negate(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_newInstance(t_Complex *self, PyObject *arg)
      {
        jdouble a0;
        Complex result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Complex_norm(t_Complex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.norm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Complex_nthRoot(t_Complex *self, PyObject *arg)
      {
        jint a0;
        ::java::util::List result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nthRoot(a0));
          return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "nthRoot", arg);
        return NULL;
      }

      static PyObject *t_Complex_pow(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jint a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Complex_reciprocal(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_remainder(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Complex_rint(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_rootN(t_Complex *self, PyObject *arg)
      {
        jint a0;
        Complex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Complex_scalb(t_Complex *self, PyObject *arg)
      {
        jint a0;
        Complex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Complex::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Complex_sign(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sin(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sinCos(t_Complex *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_Complex_sinh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sinhCosh(t_Complex *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_Complex_sqrt(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_sqrt1z(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt1z());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_subtract(t_Complex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Complex a0((jobject) NULL);
            Complex result((jobject) NULL);

            if (!parseArgs(args, "k", Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Complex_tan(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_tanh(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_toDegrees(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_toRadians(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_toString(t_Complex *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Complex), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Complex_ulp(t_Complex *self)
      {
        Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Complex::wrap_Object(result);
      }

      static PyObject *t_Complex_valueOf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::valueOf(a0));
              return t_Complex::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            Complex result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::Complex::valueOf(a0, a1));
              return t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "valueOf", args);
        return NULL;
      }

      static PyObject *t_Complex_get__argument(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getArgument());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__field(t_Complex *self, void *data)
      {
        ::org::hipparchus::complex::ComplexField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::complex::t_ComplexField::wrap_Object(value);
      }

      static PyObject *t_Complex_get__imaginary(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getImaginary());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__imaginaryPart(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getImaginaryPart());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__infinite(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Complex_get__mathematicalInteger(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Complex_get__naN(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Complex_get__pi(t_Complex *self, void *data)
      {
        Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Complex::wrap_Object(value);
      }

      static PyObject *t_Complex_get__real(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__realPart(t_Complex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRealPart());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Complex_get__zero(t_Complex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isZero());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PositionBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PositionBuilder::class$ = NULL;
          jmethodID *PositionBuilder::mids$ = NULL;
          bool PositionBuilder::live$ = false;

          jclass PositionBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PositionBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7dabc9ee4afb2ba6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_cfa640d4d3017d56] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/Position;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PositionBuilder::PositionBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, const ::org::orekit::estimation::measurements::ObservableSatellite & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_7dabc9ee4afb2ba6, a0.this$, a1, a2, a3.this$)) {}

          ::org::orekit::estimation::measurements::Position PositionBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::Position(env->callObjectMethod(this$, mids$[mid_build_cfa640d4d3017d56], a0.this$, a1.this$));
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
          static PyObject *t_PositionBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PositionBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PositionBuilder_of_(t_PositionBuilder *self, PyObject *args);
          static int t_PositionBuilder_init_(t_PositionBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PositionBuilder_build(t_PositionBuilder *self, PyObject *args);
          static PyObject *t_PositionBuilder_get__parameters_(t_PositionBuilder *self, void *data);
          static PyGetSetDef t_PositionBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PositionBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PositionBuilder__methods_[] = {
            DECLARE_METHOD(t_PositionBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PositionBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PositionBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PositionBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PositionBuilder)[] = {
            { Py_tp_methods, t_PositionBuilder__methods_ },
            { Py_tp_init, (void *) t_PositionBuilder_init_ },
            { Py_tp_getset, t_PositionBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PositionBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PositionBuilder, t_PositionBuilder, PositionBuilder);
          PyObject *t_PositionBuilder::wrap_Object(const PositionBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PositionBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PositionBuilder *self = (t_PositionBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PositionBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PositionBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PositionBuilder *self = (t_PositionBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PositionBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PositionBuilder), &PY_TYPE_DEF(PositionBuilder), module, "PositionBuilder", 0);
          }

          void t_PositionBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "class_", make_descriptor(PositionBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "wrapfn_", make_descriptor(t_PositionBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PositionBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PositionBuilder::initializeClass, 1)))
              return NULL;
            return t_PositionBuilder::wrap_Object(PositionBuilder(((t_PositionBuilder *) arg)->object.this$));
          }
          static PyObject *t_PositionBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PositionBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PositionBuilder_of_(t_PositionBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PositionBuilder_init_(t_PositionBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            ::org::orekit::estimation::measurements::ObservableSatellite a3((jobject) NULL);
            PositionBuilder object((jobject) NULL);

            if (!parseArgs(args, "kDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PositionBuilder(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PositionBuilder_build(t_PositionBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::Position result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_Position::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PositionBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PositionBuilder_get__parameters_(t_PositionBuilder *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/FiniteDifferencesDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FiniteDifferencesDifferentiator::class$ = NULL;
        jmethodID *FiniteDifferencesDifferentiator::mids$ = NULL;
        bool FiniteDifferencesDifferentiator::live$ = false;

        jclass FiniteDifferencesDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FiniteDifferencesDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_init$_d3d0b69fc0b5db95] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_differentiate_39c5729c9c0cff99] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
            mids$[mid_differentiate_bfe4c2e1bcc56b2f] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateMatrixFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction;");
            mids$[mid_differentiate_b23ddbdee3e84f5e] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction;");
            mids$[mid_getNbPoints_f2f64475e4580546] = env->getMethodID(cls, "getNbPoints", "()I");
            mids$[mid_getStepSize_456d9a2f64d6b28d] = env->getMethodID(cls, "getStepSize", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FiniteDifferencesDifferentiator::FiniteDifferencesDifferentiator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

        FiniteDifferencesDifferentiator::FiniteDifferencesDifferentiator(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d3d0b69fc0b5db95, a0, a1, a2, a3)) {}

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callObjectMethod(this$, mids$[mid_differentiate_39c5729c9c0cff99], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateMatrixFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction(env->callObjectMethod(this$, mids$[mid_differentiate_bfe4c2e1bcc56b2f], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateVectorFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction(env->callObjectMethod(this$, mids$[mid_differentiate_b23ddbdee3e84f5e], a0.this$));
        }

        jint FiniteDifferencesDifferentiator::getNbPoints() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPoints_f2f64475e4580546]);
        }

        jdouble FiniteDifferencesDifferentiator::getStepSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStepSize_456d9a2f64d6b28d]);
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
        static PyObject *t_FiniteDifferencesDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FiniteDifferencesDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FiniteDifferencesDifferentiator_init_(t_FiniteDifferencesDifferentiator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FiniteDifferencesDifferentiator_differentiate(t_FiniteDifferencesDifferentiator *self, PyObject *args);
        static PyObject *t_FiniteDifferencesDifferentiator_getNbPoints(t_FiniteDifferencesDifferentiator *self);
        static PyObject *t_FiniteDifferencesDifferentiator_getStepSize(t_FiniteDifferencesDifferentiator *self);
        static PyObject *t_FiniteDifferencesDifferentiator_get__nbPoints(t_FiniteDifferencesDifferentiator *self, void *data);
        static PyObject *t_FiniteDifferencesDifferentiator_get__stepSize(t_FiniteDifferencesDifferentiator *self, void *data);
        static PyGetSetDef t_FiniteDifferencesDifferentiator__fields_[] = {
          DECLARE_GET_FIELD(t_FiniteDifferencesDifferentiator, nbPoints),
          DECLARE_GET_FIELD(t_FiniteDifferencesDifferentiator, stepSize),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FiniteDifferencesDifferentiator__methods_[] = {
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, getNbPoints, METH_NOARGS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, getStepSize, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FiniteDifferencesDifferentiator)[] = {
          { Py_tp_methods, t_FiniteDifferencesDifferentiator__methods_ },
          { Py_tp_init, (void *) t_FiniteDifferencesDifferentiator_init_ },
          { Py_tp_getset, t_FiniteDifferencesDifferentiator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FiniteDifferencesDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FiniteDifferencesDifferentiator, t_FiniteDifferencesDifferentiator, FiniteDifferencesDifferentiator);

        void t_FiniteDifferencesDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(FiniteDifferencesDifferentiator), &PY_TYPE_DEF(FiniteDifferencesDifferentiator), module, "FiniteDifferencesDifferentiator", 0);
        }

        void t_FiniteDifferencesDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "class_", make_descriptor(FiniteDifferencesDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "wrapfn_", make_descriptor(t_FiniteDifferencesDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FiniteDifferencesDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FiniteDifferencesDifferentiator::initializeClass, 1)))
            return NULL;
          return t_FiniteDifferencesDifferentiator::wrap_Object(FiniteDifferencesDifferentiator(((t_FiniteDifferencesDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_FiniteDifferencesDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FiniteDifferencesDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FiniteDifferencesDifferentiator_init_(t_FiniteDifferencesDifferentiator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              FiniteDifferencesDifferentiator object((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                INT_CALL(object = FiniteDifferencesDifferentiator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              FiniteDifferencesDifferentiator object((jobject) NULL);

              if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = FiniteDifferencesDifferentiator(a0, a1, a2, a3));
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

        static PyObject *t_FiniteDifferencesDifferentiator_differentiate(t_FiniteDifferencesDifferentiator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateMatrixFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateMatrixFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableMatrixFunction::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateVectorFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateVectorFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableVectorFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_FiniteDifferencesDifferentiator_getNbPoints(t_FiniteDifferencesDifferentiator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPoints());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_getStepSize(t_FiniteDifferencesDifferentiator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStepSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_get__nbPoints(t_FiniteDifferencesDifferentiator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPoints());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_get__stepSize(t_FiniteDifferencesDifferentiator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStepSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/BaseMultiStartMultivariateOptimizer.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *BaseMultiStartMultivariateOptimizer::class$ = NULL;
      jmethodID *BaseMultiStartMultivariateOptimizer::mids$ = NULL;
      bool BaseMultiStartMultivariateOptimizer::live$ = false;

      jclass BaseMultiStartMultivariateOptimizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/BaseMultiStartMultivariateOptimizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fcc7d9e4c37aff65] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/BaseMultivariateOptimizer;ILorg/hipparchus/random/RandomVectorGenerator;)V");
          mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getOptima_e81d7907eea7e008] = env->getMethodID(cls, "getOptima", "()[Ljava/lang/Object;");
          mids$[mid_optimize_2543bc354d0aa7ca] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_doOptimize_dfd7647d9110ac9f] = env->getMethodID(cls, "doOptimize", "()Ljava/lang/Object;");
          mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_store_7ca0d9438822cb0b] = env->getMethodID(cls, "store", "(Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BaseMultiStartMultivariateOptimizer::BaseMultiStartMultivariateOptimizer(const ::org::hipparchus::optim::BaseMultivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomVectorGenerator & a2) : ::org::hipparchus::optim::BaseMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_fcc7d9e4c37aff65, a0.this$, a1, a2.this$)) {}

      jint BaseMultiStartMultivariateOptimizer::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
      }

      JArray< ::java::lang::Object > BaseMultiStartMultivariateOptimizer::getOptima() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getOptima_e81d7907eea7e008]));
      }

      ::java::lang::Object BaseMultiStartMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_2543bc354d0aa7ca], a0.this$));
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
      static PyObject *t_BaseMultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_of_(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args);
      static int t_BaseMultiStartMultivariateOptimizer_init_(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_getEvaluations(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_getOptima(t_BaseMultiStartMultivariateOptimizer *self);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_optimize(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__evaluations(t_BaseMultiStartMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__optima(t_BaseMultiStartMultivariateOptimizer *self, void *data);
      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__parameters_(t_BaseMultiStartMultivariateOptimizer *self, void *data);
      static PyGetSetDef t_BaseMultiStartMultivariateOptimizer__fields_[] = {
        DECLARE_GET_FIELD(t_BaseMultiStartMultivariateOptimizer, evaluations),
        DECLARE_GET_FIELD(t_BaseMultiStartMultivariateOptimizer, optima),
        DECLARE_GET_FIELD(t_BaseMultiStartMultivariateOptimizer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseMultiStartMultivariateOptimizer__methods_[] = {
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, of_, METH_VARARGS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, getEvaluations, METH_VARARGS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, getOptima, METH_NOARGS),
        DECLARE_METHOD(t_BaseMultiStartMultivariateOptimizer, optimize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseMultiStartMultivariateOptimizer)[] = {
        { Py_tp_methods, t_BaseMultiStartMultivariateOptimizer__methods_ },
        { Py_tp_init, (void *) t_BaseMultiStartMultivariateOptimizer_init_ },
        { Py_tp_getset, t_BaseMultiStartMultivariateOptimizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseMultiStartMultivariateOptimizer)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::BaseMultivariateOptimizer),
        NULL
      };

      DEFINE_TYPE(BaseMultiStartMultivariateOptimizer, t_BaseMultiStartMultivariateOptimizer, BaseMultiStartMultivariateOptimizer);
      PyObject *t_BaseMultiStartMultivariateOptimizer::wrap_Object(const BaseMultiStartMultivariateOptimizer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultiStartMultivariateOptimizer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultiStartMultivariateOptimizer *self = (t_BaseMultiStartMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BaseMultiStartMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseMultiStartMultivariateOptimizer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseMultiStartMultivariateOptimizer *self = (t_BaseMultiStartMultivariateOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BaseMultiStartMultivariateOptimizer::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseMultiStartMultivariateOptimizer), &PY_TYPE_DEF(BaseMultiStartMultivariateOptimizer), module, "BaseMultiStartMultivariateOptimizer", 0);
      }

      void t_BaseMultiStartMultivariateOptimizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultiStartMultivariateOptimizer), "class_", make_descriptor(BaseMultiStartMultivariateOptimizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultiStartMultivariateOptimizer), "wrapfn_", make_descriptor(t_BaseMultiStartMultivariateOptimizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseMultiStartMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseMultiStartMultivariateOptimizer::initializeClass, 1)))
          return NULL;
        return t_BaseMultiStartMultivariateOptimizer::wrap_Object(BaseMultiStartMultivariateOptimizer(((t_BaseMultiStartMultivariateOptimizer *) arg)->object.this$));
      }
      static PyObject *t_BaseMultiStartMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseMultiStartMultivariateOptimizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_of_(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_BaseMultiStartMultivariateOptimizer_init_(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::optim::BaseMultivariateOptimizer a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::org::hipparchus::random::RandomVectorGenerator a2((jobject) NULL);
        BaseMultiStartMultivariateOptimizer object((jobject) NULL);

        if (!parseArgs(args, "KIk", ::org::hipparchus::optim::BaseMultivariateOptimizer::initializeClass, ::org::hipparchus::random::RandomVectorGenerator::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_BaseMultivariateOptimizer::parameters_, &a1, &a2))
        {
          INT_CALL(object = BaseMultiStartMultivariateOptimizer(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_getEvaluations(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BaseMultiStartMultivariateOptimizer), (PyObject *) self, "getEvaluations", args, 2);
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_getOptima(t_BaseMultiStartMultivariateOptimizer *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getOptima());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_optimize(t_BaseMultiStartMultivariateOptimizer *self, PyObject *args)
      {
        JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.optimize(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        return callSuper(PY_TYPE(BaseMultiStartMultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
      }
      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__parameters_(t_BaseMultiStartMultivariateOptimizer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__evaluations(t_BaseMultiStartMultivariateOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseMultiStartMultivariateOptimizer_get__optima(t_BaseMultiStartMultivariateOptimizer *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getOptima());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventDetectorsProvider::class$ = NULL;
        jmethodID *EventDetectorsProvider::mids$ = NULL;
        bool EventDetectorsProvider::live$ = false;
        jdouble EventDetectorsProvider::DATATION_ACCURACY = (jdouble) 0;

        jclass EventDetectorsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventDetectorsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getEventDetectors_3399c247d1137cbd] = env->getMethodID(cls, "getEventDetectors", "(Ljava/util/List;)Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_16a1169b6b46daf6] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;Ljava/util/List;)Ljava/util/stream/Stream;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DATATION_ACCURACY = env->getStaticDoubleField(cls, "DATATION_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream EventDetectorsProvider::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getEventDetectors(const ::java::util::List & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_3399c247d1137cbd], a0.this$));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
        }

        ::java::util::stream::Stream EventDetectorsProvider::getFieldEventDetectors(const ::org::hipparchus::Field & a0, const ::java::util::List & a1) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_16a1169b6b46daf6], a0.this$, a1.this$));
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
        static PyObject *t_EventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventDetectorsProvider_getEventDetectors(t_EventDetectorsProvider *self, PyObject *args);
        static PyObject *t_EventDetectorsProvider_getFieldEventDetectors(t_EventDetectorsProvider *self, PyObject *args);
        static PyObject *t_EventDetectorsProvider_get__eventDetectors(t_EventDetectorsProvider *self, void *data);
        static PyGetSetDef t_EventDetectorsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EventDetectorsProvider, eventDetectors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventDetectorsProvider__methods_[] = {
          DECLARE_METHOD(t_EventDetectorsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetectorsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventDetectorsProvider, getEventDetectors, METH_VARARGS),
          DECLARE_METHOD(t_EventDetectorsProvider, getFieldEventDetectors, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventDetectorsProvider)[] = {
          { Py_tp_methods, t_EventDetectorsProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventDetectorsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventDetectorsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventDetectorsProvider, t_EventDetectorsProvider, EventDetectorsProvider);

        void t_EventDetectorsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EventDetectorsProvider), &PY_TYPE_DEF(EventDetectorsProvider), module, "EventDetectorsProvider", 0);
        }

        void t_EventDetectorsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "class_", make_descriptor(EventDetectorsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "wrapfn_", make_descriptor(t_EventDetectorsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "boxfn_", make_descriptor(boxObject));
          env->getClass(EventDetectorsProvider::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventDetectorsProvider), "DATATION_ACCURACY", make_descriptor(EventDetectorsProvider::DATATION_ACCURACY));
        }

        static PyObject *t_EventDetectorsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventDetectorsProvider::initializeClass, 1)))
            return NULL;
          return t_EventDetectorsProvider::wrap_Object(EventDetectorsProvider(((t_EventDetectorsProvider *) arg)->object.this$));
        }
        static PyObject *t_EventDetectorsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventDetectorsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventDetectorsProvider_getEventDetectors(t_EventDetectorsProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::stream::Stream result((jobject) NULL);
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }
            break;
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.getEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getEventDetectors", args);
          return NULL;
        }

        static PyObject *t_EventDetectorsProvider_getFieldEventDetectors(t_EventDetectorsProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0, a1));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", args);
          return NULL;
        }

        static PyObject *t_EventDetectorsProvider_get__eventDetectors(t_EventDetectorsProvider *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/OrbitHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitHermiteInterpolator::class$ = NULL;
      jmethodID *OrbitHermiteInterpolator::mids$ = NULL;
      bool OrbitHermiteInterpolator::live$ = false;

      jclass OrbitHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b1992bd1bb70f476] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_2ec8e00deddf59e8] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_2844b958be24763f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_8ee7bc978fec63e6] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getPVAFilter_237181d932324188] = env->getMethodID(cls, "getPVAFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_8f43113475f73463] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b1992bd1bb70f476, a0.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2ec8e00deddf59e8, a0, a1.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2844b958be24763f, a0, a1.this$, a2.this$)) {}

      OrbitHermiteInterpolator::OrbitHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8ee7bc978fec63e6, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter OrbitHermiteInterpolator::getPVAFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVAFilter_237181d932324188]));
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
      static PyObject *t_OrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitHermiteInterpolator_of_(t_OrbitHermiteInterpolator *self, PyObject *args);
      static int t_OrbitHermiteInterpolator_init_(t_OrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrbitHermiteInterpolator_getPVAFilter(t_OrbitHermiteInterpolator *self);
      static PyObject *t_OrbitHermiteInterpolator_get__pVAFilter(t_OrbitHermiteInterpolator *self, void *data);
      static PyObject *t_OrbitHermiteInterpolator_get__parameters_(t_OrbitHermiteInterpolator *self, void *data);
      static PyGetSetDef t_OrbitHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitHermiteInterpolator, pVAFilter),
        DECLARE_GET_FIELD(t_OrbitHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_OrbitHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrbitHermiteInterpolator, getPVAFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitHermiteInterpolator)[] = {
        { Py_tp_methods, t_OrbitHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_OrbitHermiteInterpolator_init_ },
        { Py_tp_getset, t_OrbitHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(OrbitHermiteInterpolator, t_OrbitHermiteInterpolator, OrbitHermiteInterpolator);
      PyObject *t_OrbitHermiteInterpolator::wrap_Object(const OrbitHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitHermiteInterpolator *self = (t_OrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitHermiteInterpolator *self = (t_OrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitHermiteInterpolator), &PY_TYPE_DEF(OrbitHermiteInterpolator), module, "OrbitHermiteInterpolator", 0);
      }

      void t_OrbitHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "class_", make_descriptor(OrbitHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "wrapfn_", make_descriptor(t_OrbitHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_OrbitHermiteInterpolator::wrap_Object(OrbitHermiteInterpolator(((t_OrbitHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_OrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitHermiteInterpolator_of_(t_OrbitHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OrbitHermiteInterpolator_init_(t_OrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            OrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = OrbitHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
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

      static PyObject *t_OrbitHermiteInterpolator_getPVAFilter(t_OrbitHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_OrbitHermiteInterpolator_get__parameters_(t_OrbitHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrbitHermiteInterpolator_get__pVAFilter(t_OrbitHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/KnockeRediffusedForceModel.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/TimeScale.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *KnockeRediffusedForceModel::class$ = NULL;
        jmethodID *KnockeRediffusedForceModel::mids$ = NULL;
        bool KnockeRediffusedForceModel::live$ = false;

        jclass KnockeRediffusedForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/KnockeRediffusedForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_851a958453b23d38] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/forces/radiation/RadiationSensitive;DD)V");
            mids$[mid_init$_533b7ae742ff5e8a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/forces/radiation/RadiationSensitive;DDLorg/orekit/time/TimeScale;)V");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KnockeRediffusedForceModel::KnockeRediffusedForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::forces::radiation::RadiationSensitive & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_851a958453b23d38, a0.this$, a1.this$, a2, a3)) {}

        KnockeRediffusedForceModel::KnockeRediffusedForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::forces::radiation::RadiationSensitive & a1, jdouble a2, jdouble a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_533b7ae742ff5e8a, a0.this$, a1.this$, a2, a3, a4.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D KnockeRediffusedForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D KnockeRediffusedForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        jboolean KnockeRediffusedForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::java::util::List KnockeRediffusedForceModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
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
        static PyObject *t_KnockeRediffusedForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KnockeRediffusedForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KnockeRediffusedForceModel_init_(t_KnockeRediffusedForceModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KnockeRediffusedForceModel_acceleration(t_KnockeRediffusedForceModel *self, PyObject *args);
        static PyObject *t_KnockeRediffusedForceModel_dependsOnPositionOnly(t_KnockeRediffusedForceModel *self);
        static PyObject *t_KnockeRediffusedForceModel_getParametersDrivers(t_KnockeRediffusedForceModel *self);
        static PyObject *t_KnockeRediffusedForceModel_get__parametersDrivers(t_KnockeRediffusedForceModel *self, void *data);
        static PyGetSetDef t_KnockeRediffusedForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_KnockeRediffusedForceModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KnockeRediffusedForceModel__methods_[] = {
          DECLARE_METHOD(t_KnockeRediffusedForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KnockeRediffusedForceModel)[] = {
          { Py_tp_methods, t_KnockeRediffusedForceModel__methods_ },
          { Py_tp_init, (void *) t_KnockeRediffusedForceModel_init_ },
          { Py_tp_getset, t_KnockeRediffusedForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KnockeRediffusedForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KnockeRediffusedForceModel, t_KnockeRediffusedForceModel, KnockeRediffusedForceModel);

        void t_KnockeRediffusedForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(KnockeRediffusedForceModel), &PY_TYPE_DEF(KnockeRediffusedForceModel), module, "KnockeRediffusedForceModel", 0);
        }

        void t_KnockeRediffusedForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KnockeRediffusedForceModel), "class_", make_descriptor(KnockeRediffusedForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KnockeRediffusedForceModel), "wrapfn_", make_descriptor(t_KnockeRediffusedForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KnockeRediffusedForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KnockeRediffusedForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KnockeRediffusedForceModel::initializeClass, 1)))
            return NULL;
          return t_KnockeRediffusedForceModel::wrap_Object(KnockeRediffusedForceModel(((t_KnockeRediffusedForceModel *) arg)->object.this$));
        }
        static PyObject *t_KnockeRediffusedForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KnockeRediffusedForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KnockeRediffusedForceModel_init_(t_KnockeRediffusedForceModel *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              KnockeRediffusedForceModel object((jobject) NULL);

              if (!parseArgs(args, "kkDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = KnockeRediffusedForceModel(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::orekit::time::TimeScale a4((jobject) NULL);
              KnockeRediffusedForceModel object((jobject) NULL);

              if (!parseArgs(args, "kkDDk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = KnockeRediffusedForceModel(a0, a1, a2, a3, a4));
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

        static PyObject *t_KnockeRediffusedForceModel_acceleration(t_KnockeRediffusedForceModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_KnockeRediffusedForceModel_dependsOnPositionOnly(t_KnockeRediffusedForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_KnockeRediffusedForceModel_getParametersDrivers(t_KnockeRediffusedForceModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_KnockeRediffusedForceModel_get__parametersDrivers(t_KnockeRediffusedForceModel *self, void *data)
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
#include "org/hipparchus/optim/MaxEval.h"
#include "org/hipparchus/optim/MaxEval.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *MaxEval::class$ = NULL;
      jmethodID *MaxEval::mids$ = NULL;
      bool MaxEval::live$ = false;

      jclass MaxEval::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/MaxEval");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getMaxEval_f2f64475e4580546] = env->getMethodID(cls, "getMaxEval", "()I");
          mids$[mid_unlimited_c2540a842a12ff14] = env->getStaticMethodID(cls, "unlimited", "()Lorg/hipparchus/optim/MaxEval;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MaxEval::MaxEval(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      jint MaxEval::getMaxEval() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEval_f2f64475e4580546]);
      }

      MaxEval MaxEval::unlimited()
      {
        jclass cls = env->getClass(initializeClass);
        return MaxEval(env->callStaticObjectMethod(cls, mids$[mid_unlimited_c2540a842a12ff14]));
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
      static PyObject *t_MaxEval_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MaxEval_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MaxEval_init_(t_MaxEval *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MaxEval_getMaxEval(t_MaxEval *self);
      static PyObject *t_MaxEval_unlimited(PyTypeObject *type);
      static PyObject *t_MaxEval_get__maxEval(t_MaxEval *self, void *data);
      static PyGetSetDef t_MaxEval__fields_[] = {
        DECLARE_GET_FIELD(t_MaxEval, maxEval),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MaxEval__methods_[] = {
        DECLARE_METHOD(t_MaxEval, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxEval, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MaxEval, getMaxEval, METH_NOARGS),
        DECLARE_METHOD(t_MaxEval, unlimited, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MaxEval)[] = {
        { Py_tp_methods, t_MaxEval__methods_ },
        { Py_tp_init, (void *) t_MaxEval_init_ },
        { Py_tp_getset, t_MaxEval__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MaxEval)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MaxEval, t_MaxEval, MaxEval);

      void t_MaxEval::install(PyObject *module)
      {
        installType(&PY_TYPE(MaxEval), &PY_TYPE_DEF(MaxEval), module, "MaxEval", 0);
      }

      void t_MaxEval::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "class_", make_descriptor(MaxEval::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "wrapfn_", make_descriptor(t_MaxEval::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MaxEval), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MaxEval_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MaxEval::initializeClass, 1)))
          return NULL;
        return t_MaxEval::wrap_Object(MaxEval(((t_MaxEval *) arg)->object.this$));
      }
      static PyObject *t_MaxEval_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MaxEval::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MaxEval_init_(t_MaxEval *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        MaxEval object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = MaxEval(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MaxEval_getMaxEval(t_MaxEval *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEval());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MaxEval_unlimited(PyTypeObject *type)
      {
        MaxEval result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::optim::MaxEval::unlimited());
        return t_MaxEval::wrap_Object(result);
      }

      static PyObject *t_MaxEval_get__maxEval(t_MaxEval *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEval());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ManeuverFieldType::class$ = NULL;
              jmethodID *ManeuverFieldType::mids$ = NULL;
              bool ManeuverFieldType::live$ = false;
              ManeuverFieldType *ManeuverFieldType::ACC_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_INTERP = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_MAG_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_X = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::DELTA_MASS = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_CDA = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_RATIO = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_X = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_ID = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_MASS = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_MAG_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_X = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::MAN_DURA = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_EFFIC = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_INTERP = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_ISP = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_MAG_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_X = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::TIME_ABSOLUTE = NULL;
              ManeuverFieldType *ManeuverFieldType::TIME_RELATIVE = NULL;

              jclass ManeuverFieldType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_checkUnit_dcad81dd7d926924] = env->getMethodID(cls, "checkUnit", "(Lorg/orekit/utils/units/Unit;)V");
                  mids$[mid_getUnit_196b004fd4585106] = env->getMethodID(cls, "getUnit", "()Lorg/orekit/utils/units/Unit;");
                  mids$[mid_isTime_e470b6d9e0d979db] = env->getMethodID(cls, "isTime", "()Z");
                  mids$[mid_outputField_aee2986e9e2d08c6] = env->getMethodID(cls, "outputField", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver;)Ljava/lang/String;");
                  mids$[mid_process_c69ffcd75e03c815] = env->getMethodID(cls, "process", "(Ljava/lang/String;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver;ILjava/lang/String;)V");
                  mids$[mid_valueOf_b1ddf045105c6ed8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;");
                  mids$[mid_values_56f48c168f29dc17] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACC_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_INTERP = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_INTERP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_MAG_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_MAG_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_X = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DELTA_MASS = new ManeuverFieldType(env->getStaticObjectField(cls, "DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_CDA = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_CDA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_RATIO = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_RATIO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_X = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_ID = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_MASS = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_MAG_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_MAG_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_X = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  MAN_DURA = new ManeuverFieldType(env->getStaticObjectField(cls, "MAN_DURA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_EFFIC = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_EFFIC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_INTERP = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_INTERP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_ISP = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_ISP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_MAG_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_MAG_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_X = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  TIME_ABSOLUTE = new ManeuverFieldType(env->getStaticObjectField(cls, "TIME_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  TIME_RELATIVE = new ManeuverFieldType(env->getStaticObjectField(cls, "TIME_RELATIVE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              void ManeuverFieldType::checkUnit(const ::org::orekit::utils::units::Unit & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_checkUnit_dcad81dd7d926924], a0.this$);
              }

              ::org::orekit::utils::units::Unit ManeuverFieldType::getUnit() const
              {
                return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnit_196b004fd4585106]));
              }

              jboolean ManeuverFieldType::isTime() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isTime_e470b6d9e0d979db]);
              }

              ::java::lang::String ManeuverFieldType::outputField(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver & a1) const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_outputField_aee2986e9e2d08c6], a0.this$, a1.this$));
              }

              void ManeuverFieldType::process(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver & a2, jint a3, const ::java::lang::String & a4) const
              {
                env->callVoidMethod(this$, mids$[mid_process_c69ffcd75e03c815], a0.this$, a1.this$, a2.this$, a3, a4.this$);
              }

              ManeuverFieldType ManeuverFieldType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverFieldType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b1ddf045105c6ed8], a0.this$));
              }

              JArray< ManeuverFieldType > ManeuverFieldType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverFieldType >(env->callStaticObjectMethod(cls, mids$[mid_values_56f48c168f29dc17]));
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
              static PyObject *t_ManeuverFieldType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverFieldType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverFieldType_of_(t_ManeuverFieldType *self, PyObject *args);
              static PyObject *t_ManeuverFieldType_checkUnit(t_ManeuverFieldType *self, PyObject *arg);
              static PyObject *t_ManeuverFieldType_getUnit(t_ManeuverFieldType *self);
              static PyObject *t_ManeuverFieldType_isTime(t_ManeuverFieldType *self);
              static PyObject *t_ManeuverFieldType_outputField(t_ManeuverFieldType *self, PyObject *args);
              static PyObject *t_ManeuverFieldType_process(t_ManeuverFieldType *self, PyObject *args);
              static PyObject *t_ManeuverFieldType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverFieldType_values(PyTypeObject *type);
              static PyObject *t_ManeuverFieldType_get__time(t_ManeuverFieldType *self, void *data);
              static PyObject *t_ManeuverFieldType_get__unit(t_ManeuverFieldType *self, void *data);
              static PyObject *t_ManeuverFieldType_get__parameters_(t_ManeuverFieldType *self, void *data);
              static PyGetSetDef t_ManeuverFieldType__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverFieldType, time),
                DECLARE_GET_FIELD(t_ManeuverFieldType, unit),
                DECLARE_GET_FIELD(t_ManeuverFieldType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverFieldType__methods_[] = {
                DECLARE_METHOD(t_ManeuverFieldType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverFieldType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverFieldType, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverFieldType, checkUnit, METH_O),
                DECLARE_METHOD(t_ManeuverFieldType, getUnit, METH_NOARGS),
                DECLARE_METHOD(t_ManeuverFieldType, isTime, METH_NOARGS),
                DECLARE_METHOD(t_ManeuverFieldType, outputField, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverFieldType, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverFieldType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverFieldType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverFieldType)[] = {
                { Py_tp_methods, t_ManeuverFieldType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverFieldType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverFieldType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverFieldType, t_ManeuverFieldType, ManeuverFieldType);
              PyObject *t_ManeuverFieldType::wrap_Object(const ManeuverFieldType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverFieldType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverFieldType *self = (t_ManeuverFieldType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverFieldType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverFieldType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverFieldType *self = (t_ManeuverFieldType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverFieldType::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverFieldType), &PY_TYPE_DEF(ManeuverFieldType), module, "ManeuverFieldType", 0);
              }

              void t_ManeuverFieldType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "class_", make_descriptor(ManeuverFieldType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "wrapfn_", make_descriptor(t_ManeuverFieldType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverFieldType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_INTERP", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_INTERP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_MAG_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_MAG_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DELTA_MASS", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_CDA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_CDA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_RATIO", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_RATIO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_ID", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_MASS", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_MAG_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_MAG_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "MAN_DURA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::MAN_DURA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_EFFIC", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_EFFIC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_INTERP", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_INTERP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_ISP", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_ISP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_MAG_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_MAG_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "TIME_ABSOLUTE", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::TIME_ABSOLUTE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "TIME_RELATIVE", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::TIME_RELATIVE)));
              }

              static PyObject *t_ManeuverFieldType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverFieldType::initializeClass, 1)))
                  return NULL;
                return t_ManeuverFieldType::wrap_Object(ManeuverFieldType(((t_ManeuverFieldType *) arg)->object.this$));
              }
              static PyObject *t_ManeuverFieldType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverFieldType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverFieldType_of_(t_ManeuverFieldType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverFieldType_checkUnit(t_ManeuverFieldType *self, PyObject *arg)
              {
                ::org::orekit::utils::units::Unit a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::utils::units::Unit::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.checkUnit(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "checkUnit", arg);
                return NULL;
              }

              static PyObject *t_ManeuverFieldType_getUnit(t_ManeuverFieldType *self)
              {
                ::org::orekit::utils::units::Unit result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnit());
                return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
              }

              static PyObject *t_ManeuverFieldType_isTime(t_ManeuverFieldType *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isTime());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ManeuverFieldType_outputField(t_ManeuverFieldType *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver a1((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.outputField(a0, a1));
                  return j2p(result);
                }

                PyErr_SetArgsError((PyObject *) self, "outputField", args);
                return NULL;
              }

              static PyObject *t_ManeuverFieldType_process(t_ManeuverFieldType *self, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver a2((jobject) NULL);
                jint a3;
                ::java::lang::String a4((jobject) NULL);

                if (!parseArgs(args, "skkIs", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(self->object.process(a0, a1, a2, a3, a4));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverFieldType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverFieldType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManeuverFieldType::valueOf(a0));
                  return t_ManeuverFieldType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverFieldType_values(PyTypeObject *type)
              {
                JArray< ManeuverFieldType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManeuverFieldType::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverFieldType::wrap_jobject);
              }
              static PyObject *t_ManeuverFieldType_get__parameters_(t_ManeuverFieldType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_ManeuverFieldType_get__time(t_ManeuverFieldType *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isTime());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_ManeuverFieldType_get__unit(t_ManeuverFieldType *self, void *data)
              {
                ::org::orekit::utils::units::Unit value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnit());
                return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07::class$ = NULL;
              jmethodID *SsrIgm07::mids$ = NULL;
              bool SsrIgm07::live$ = false;

              jclass SsrIgm07::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_cea0bef752847a20] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm07Data_d6753b7055940a54] = env->getMethodID(cls, "getSsrIgm07Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07::SsrIgm07(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_cea0bef752847a20, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm07::getSsrIgm07Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm07Data_d6753b7055940a54]));
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
              static PyObject *t_SsrIgm07_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07_of_(t_SsrIgm07 *self, PyObject *args);
              static int t_SsrIgm07_init_(t_SsrIgm07 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm07_getSsrIgm07Data(t_SsrIgm07 *self);
              static PyObject *t_SsrIgm07_get__ssrIgm07Data(t_SsrIgm07 *self, void *data);
              static PyObject *t_SsrIgm07_get__parameters_(t_SsrIgm07 *self, void *data);
              static PyGetSetDef t_SsrIgm07__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm07, ssrIgm07Data),
                DECLARE_GET_FIELD(t_SsrIgm07, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm07__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm07, getSsrIgm07Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07)[] = {
                { Py_tp_methods, t_SsrIgm07__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07_init_ },
                { Py_tp_getset, t_SsrIgm07__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm07, t_SsrIgm07, SsrIgm07);
              PyObject *t_SsrIgm07::wrap_Object(const SsrIgm07& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm07::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm07 *self = (t_SsrIgm07 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm07::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm07::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm07 *self = (t_SsrIgm07 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm07::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07), &PY_TYPE_DEF(SsrIgm07), module, "SsrIgm07", 0);
              }

              void t_SsrIgm07::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "class_", make_descriptor(SsrIgm07::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "wrapfn_", make_descriptor(t_SsrIgm07::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07::wrap_Object(SsrIgm07(((t_SsrIgm07 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm07_of_(t_SsrIgm07 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm07_init_(t_SsrIgm07 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm07 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm07(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm07Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm07Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm07_getSsrIgm07Data(t_SsrIgm07 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm07Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm07_get__parameters_(t_SsrIgm07 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm07_get__ssrIgm07Data(t_SsrIgm07 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm07Data());
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
#include "org/hipparchus/optim/univariate/MultiStartUnivariateOptimizer.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *MultiStartUnivariateOptimizer::class$ = NULL;
        jmethodID *MultiStartUnivariateOptimizer::mids$ = NULL;
        bool MultiStartUnivariateOptimizer::live$ = false;

        jclass MultiStartUnivariateOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/MultiStartUnivariateOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_669d33194e2664ce] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/univariate/UnivariateOptimizer;ILorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getOptima_864c6ef2a38ff7d2] = env->getMethodID(cls, "getOptima", "()[Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_optimize_dfd82b5526071a92] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_doOptimize_d2fe1940144d9faa] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiStartUnivariateOptimizer::MultiStartUnivariateOptimizer(const ::org::hipparchus::optim::univariate::UnivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomGenerator & a2) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_669d33194e2664ce, a0.this$, a1, a2.this$)) {}

        jint MultiStartUnivariateOptimizer::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
        }

        JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair > MultiStartUnivariateOptimizer::getOptima() const
        {
          return JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair >(env->callObjectMethod(this$, mids$[mid_getOptima_864c6ef2a38ff7d2]));
        }

        ::org::hipparchus::optim::univariate::UnivariatePointValuePair MultiStartUnivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_dfd82b5526071a92], a0.this$));
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
        static PyObject *t_MultiStartUnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiStartUnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiStartUnivariateOptimizer_of_(t_MultiStartUnivariateOptimizer *self, PyObject *args);
        static int t_MultiStartUnivariateOptimizer_init_(t_MultiStartUnivariateOptimizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultiStartUnivariateOptimizer_getEvaluations(t_MultiStartUnivariateOptimizer *self, PyObject *args);
        static PyObject *t_MultiStartUnivariateOptimizer_getOptima(t_MultiStartUnivariateOptimizer *self);
        static PyObject *t_MultiStartUnivariateOptimizer_optimize(t_MultiStartUnivariateOptimizer *self, PyObject *args);
        static PyObject *t_MultiStartUnivariateOptimizer_get__evaluations(t_MultiStartUnivariateOptimizer *self, void *data);
        static PyObject *t_MultiStartUnivariateOptimizer_get__optima(t_MultiStartUnivariateOptimizer *self, void *data);
        static PyObject *t_MultiStartUnivariateOptimizer_get__parameters_(t_MultiStartUnivariateOptimizer *self, void *data);
        static PyGetSetDef t_MultiStartUnivariateOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_MultiStartUnivariateOptimizer, evaluations),
          DECLARE_GET_FIELD(t_MultiStartUnivariateOptimizer, optima),
          DECLARE_GET_FIELD(t_MultiStartUnivariateOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultiStartUnivariateOptimizer__methods_[] = {
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, getEvaluations, METH_VARARGS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, getOptima, METH_NOARGS),
          DECLARE_METHOD(t_MultiStartUnivariateOptimizer, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiStartUnivariateOptimizer)[] = {
          { Py_tp_methods, t_MultiStartUnivariateOptimizer__methods_ },
          { Py_tp_init, (void *) t_MultiStartUnivariateOptimizer_init_ },
          { Py_tp_getset, t_MultiStartUnivariateOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiStartUnivariateOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::univariate::UnivariateOptimizer),
          NULL
        };

        DEFINE_TYPE(MultiStartUnivariateOptimizer, t_MultiStartUnivariateOptimizer, MultiStartUnivariateOptimizer);
        PyObject *t_MultiStartUnivariateOptimizer::wrap_Object(const MultiStartUnivariateOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiStartUnivariateOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiStartUnivariateOptimizer *self = (t_MultiStartUnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MultiStartUnivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MultiStartUnivariateOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MultiStartUnivariateOptimizer *self = (t_MultiStartUnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MultiStartUnivariateOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiStartUnivariateOptimizer), &PY_TYPE_DEF(MultiStartUnivariateOptimizer), module, "MultiStartUnivariateOptimizer", 0);
        }

        void t_MultiStartUnivariateOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartUnivariateOptimizer), "class_", make_descriptor(MultiStartUnivariateOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartUnivariateOptimizer), "wrapfn_", make_descriptor(t_MultiStartUnivariateOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiStartUnivariateOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiStartUnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiStartUnivariateOptimizer::initializeClass, 1)))
            return NULL;
          return t_MultiStartUnivariateOptimizer::wrap_Object(MultiStartUnivariateOptimizer(((t_MultiStartUnivariateOptimizer *) arg)->object.this$));
        }
        static PyObject *t_MultiStartUnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiStartUnivariateOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiStartUnivariateOptimizer_of_(t_MultiStartUnivariateOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MultiStartUnivariateOptimizer_init_(t_MultiStartUnivariateOptimizer *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::optim::univariate::UnivariateOptimizer a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          ::org::hipparchus::random::RandomGenerator a2((jobject) NULL);
          MultiStartUnivariateOptimizer object((jobject) NULL);

          if (!parseArgs(args, "KIk", ::org::hipparchus::optim::univariate::UnivariateOptimizer::initializeClass, ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &p0, ::org::hipparchus::optim::univariate::t_UnivariateOptimizer::parameters_, &a1, &a2))
          {
            INT_CALL(object = MultiStartUnivariateOptimizer(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultiStartUnivariateOptimizer_getEvaluations(t_MultiStartUnivariateOptimizer *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEvaluations());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(MultiStartUnivariateOptimizer), (PyObject *) self, "getEvaluations", args, 2);
        }

        static PyObject *t_MultiStartUnivariateOptimizer_getOptima(t_MultiStartUnivariateOptimizer *self)
        {
          JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair > result((jobject) NULL);
          OBJ_CALL(result = self->object.getOptima());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_jobject);
        }

        static PyObject *t_MultiStartUnivariateOptimizer_optimize(t_MultiStartUnivariateOptimizer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(MultiStartUnivariateOptimizer), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_MultiStartUnivariateOptimizer_get__parameters_(t_MultiStartUnivariateOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MultiStartUnivariateOptimizer_get__evaluations(t_MultiStartUnivariateOptimizer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_MultiStartUnivariateOptimizer_get__optima(t_MultiStartUnivariateOptimizer *self, void *data)
        {
          JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair > value((jobject) NULL);
          OBJ_CALL(value = self->object.getOptima());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/BoxAndSolarArraySpacecraft.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/Panel.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *BoxAndSolarArraySpacecraft::class$ = NULL;
      jmethodID *BoxAndSolarArraySpacecraft::mids$ = NULL;
      bool BoxAndSolarArraySpacecraft::live$ = false;

      jclass BoxAndSolarArraySpacecraft::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/BoxAndSolarArraySpacecraft");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_init$_e6429e5de5c3a2c8] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDD)V");
          mids$[mid_buildBox_b9c4adb1e5979ca4] = env->getStaticMethodID(cls, "buildBox", "(DDDDDDD)Ljava/util/List;");
          mids$[mid_buildPanels_2c13eb224defe6e0] = env->getStaticMethodID(cls, "buildPanels", "(DDDLorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDD)Ljava/util/List;");
          mids$[mid_dragAcceleration_72c100be3e679e5e] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_dragAcceleration_3061f9a13979e9fa] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getDragParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");
          mids$[mid_getPanels_a6156df500549a58] = env->getMethodID(cls, "getPanels", "()Ljava/util/List;");
          mids$[mid_getRadiationParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
          mids$[mid_radiationPressureAcceleration_397d87bcad93c626] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_radiationPressureAcceleration_5efc9e86ed57c6dd] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BoxAndSolarArraySpacecraft::BoxAndSolarArraySpacecraft(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

      BoxAndSolarArraySpacecraft::BoxAndSolarArraySpacecraft(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e6429e5de5c3a2c8, a0, a1, a2, a3.this$, a4, a5.this$, a6, a7, a8, a9)) {}

      ::java::util::List BoxAndSolarArraySpacecraft::buildBox(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildBox_b9c4adb1e5979ca4], a0, a1, a2, a3, a4, a5, a6));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::buildPanels(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildPanels_2c13eb224defe6e0], a0, a1, a2, a3.this$, a4, a5.this$, a6, a7, a8, a9));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BoxAndSolarArraySpacecraft::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_72c100be3e679e5e], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BoxAndSolarArraySpacecraft::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_3061f9a13979e9fa], a0.this$, a1, a2.this$, a3.this$));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getDragParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_a6156df500549a58]));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getPanels() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPanels_a6156df500549a58]));
      }

      ::java::util::List BoxAndSolarArraySpacecraft::getRadiationParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_a6156df500549a58]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BoxAndSolarArraySpacecraft::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_397d87bcad93c626], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BoxAndSolarArraySpacecraft::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_5efc9e86ed57c6dd], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_BoxAndSolarArraySpacecraft_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoxAndSolarArraySpacecraft_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BoxAndSolarArraySpacecraft_init_(t_BoxAndSolarArraySpacecraft *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BoxAndSolarArraySpacecraft_buildBox(PyTypeObject *type, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_buildPanels(PyTypeObject *type, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_dragAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_getDragParametersDrivers(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_getPanels(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_getRadiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self);
      static PyObject *t_BoxAndSolarArraySpacecraft_radiationPressureAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__dragParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__panels(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyObject *t_BoxAndSolarArraySpacecraft_get__radiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data);
      static PyGetSetDef t_BoxAndSolarArraySpacecraft__fields_[] = {
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, dragParametersDrivers),
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, panels),
        DECLARE_GET_FIELD(t_BoxAndSolarArraySpacecraft, radiationParametersDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoxAndSolarArraySpacecraft__methods_[] = {
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, buildBox, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, buildPanels, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, dragAcceleration, METH_VARARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getDragParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getPanels, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, getRadiationParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_BoxAndSolarArraySpacecraft, radiationPressureAcceleration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoxAndSolarArraySpacecraft)[] = {
        { Py_tp_methods, t_BoxAndSolarArraySpacecraft__methods_ },
        { Py_tp_init, (void *) t_BoxAndSolarArraySpacecraft_init_ },
        { Py_tp_getset, t_BoxAndSolarArraySpacecraft__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoxAndSolarArraySpacecraft)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BoxAndSolarArraySpacecraft, t_BoxAndSolarArraySpacecraft, BoxAndSolarArraySpacecraft);

      void t_BoxAndSolarArraySpacecraft::install(PyObject *module)
      {
        installType(&PY_TYPE(BoxAndSolarArraySpacecraft), &PY_TYPE_DEF(BoxAndSolarArraySpacecraft), module, "BoxAndSolarArraySpacecraft", 0);
      }

      void t_BoxAndSolarArraySpacecraft::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "class_", make_descriptor(BoxAndSolarArraySpacecraft::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "wrapfn_", make_descriptor(t_BoxAndSolarArraySpacecraft::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoxAndSolarArraySpacecraft), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoxAndSolarArraySpacecraft::initializeClass, 1)))
          return NULL;
        return t_BoxAndSolarArraySpacecraft::wrap_Object(BoxAndSolarArraySpacecraft(((t_BoxAndSolarArraySpacecraft *) arg)->object.this$));
      }
      static PyObject *t_BoxAndSolarArraySpacecraft_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoxAndSolarArraySpacecraft::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BoxAndSolarArraySpacecraft_init_(t_BoxAndSolarArraySpacecraft *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            BoxAndSolarArraySpacecraft object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = BoxAndSolarArraySpacecraft(a0));
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
            ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
            jdouble a4;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            BoxAndSolarArraySpacecraft object((jobject) NULL);

            if (!parseArgs(args, "DDDkDkDDDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
            {
              INT_CALL(object = BoxAndSolarArraySpacecraft(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

      static PyObject *t_BoxAndSolarArraySpacecraft_buildBox(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "DDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          OBJ_CALL(result = ::org::orekit::forces::BoxAndSolarArraySpacecraft::buildBox(a0, a1, a2, a3, a4, a5, a6));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
        }

        PyErr_SetArgsError(type, "buildBox", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_buildPanels(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
        jdouble a4;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "DDDkDkDDDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
        {
          OBJ_CALL(result = ::org::orekit::forces::BoxAndSolarArraySpacecraft::buildPanels(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
        }

        PyErr_SetArgsError(type, "buildPanels", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_dragAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kDk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "dragAcceleration", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getDragParametersDrivers(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getDragParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getPanels(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPanels());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(Panel));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_getRadiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getRadiationParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_radiationPressureAcceleration(t_BoxAndSolarArraySpacecraft *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
        return NULL;
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__dragParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getDragParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__panels(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPanels());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_BoxAndSolarArraySpacecraft_get__radiationParametersDrivers(t_BoxAndSolarArraySpacecraft *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getRadiationParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/JB2008SpaceEnvironmentData.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *JB2008SpaceEnvironmentData::class$ = NULL;
            jmethodID *JB2008SpaceEnvironmentData::mids$ = NULL;
            bool JB2008SpaceEnvironmentData::live$ = false;
            ::java::lang::String *JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_DTC = NULL;
            ::java::lang::String *JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_SOLFSMY = NULL;

            jclass JB2008SpaceEnvironmentData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/JB2008SpaceEnvironmentData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_96073c87872b7a97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_init$_498ee4b75b278ed0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/data/DataSource;)V");
                mids$[mid_init$_0bc27bef3edc7b78] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_f885c2dfdd559b81] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDSTDTC_e912d21057defe63] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getF10_e912d21057defe63] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getF10B_e912d21057defe63] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getS10_e912d21057defe63] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getS10B_e912d21057defe63] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getXM10_e912d21057defe63] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getXM10B_e912d21057defe63] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getY10_e912d21057defe63] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getY10B_e912d21057defe63] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES_DTC = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES_DTC", "Ljava/lang/String;"));
                DEFAULT_SUPPORTED_NAMES_SOLFSMY = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES_SOLFSMY", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96073c87872b7a97, a0.this$, a1.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::data::DataSource & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_498ee4b75b278ed0, a0.this$, a1.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::data::DataSource & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0bc27bef3edc7b78, a0.this$, a1.this$, a2.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f885c2dfdd559b81, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            jdouble JB2008SpaceEnvironmentData::getDSTDTC(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_e912d21057defe63], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getF10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10_e912d21057defe63], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getF10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10B_e912d21057defe63], a0.this$);
            }

            ::org::orekit::time::AbsoluteDate JB2008SpaceEnvironmentData::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
            }

            ::org::orekit::time::AbsoluteDate JB2008SpaceEnvironmentData::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
            }

            jdouble JB2008SpaceEnvironmentData::getS10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10_e912d21057defe63], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getS10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10B_e912d21057defe63], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getXM10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10_e912d21057defe63], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getXM10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10B_e912d21057defe63], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getY10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10_e912d21057defe63], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getY10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10B_e912d21057defe63], a0.this$);
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
            static PyObject *t_JB2008SpaceEnvironmentData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_JB2008SpaceEnvironmentData_init_(t_JB2008SpaceEnvironmentData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_JB2008SpaceEnvironmentData_getDSTDTC(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getF10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getF10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getMaxDate(t_JB2008SpaceEnvironmentData *self);
            static PyObject *t_JB2008SpaceEnvironmentData_getMinDate(t_JB2008SpaceEnvironmentData *self);
            static PyObject *t_JB2008SpaceEnvironmentData_getS10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getS10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getXM10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getXM10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getY10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getY10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_get__maxDate(t_JB2008SpaceEnvironmentData *self, void *data);
            static PyObject *t_JB2008SpaceEnvironmentData_get__minDate(t_JB2008SpaceEnvironmentData *self, void *data);
            static PyGetSetDef t_JB2008SpaceEnvironmentData__fields_[] = {
              DECLARE_GET_FIELD(t_JB2008SpaceEnvironmentData, maxDate),
              DECLARE_GET_FIELD(t_JB2008SpaceEnvironmentData, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_JB2008SpaceEnvironmentData__methods_[] = {
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getDSTDTC, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getF10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getF10B, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getS10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getS10B, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getXM10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getXM10B, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getY10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getY10B, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(JB2008SpaceEnvironmentData)[] = {
              { Py_tp_methods, t_JB2008SpaceEnvironmentData__methods_ },
              { Py_tp_init, (void *) t_JB2008SpaceEnvironmentData_init_ },
              { Py_tp_getset, t_JB2008SpaceEnvironmentData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(JB2008SpaceEnvironmentData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(JB2008SpaceEnvironmentData, t_JB2008SpaceEnvironmentData, JB2008SpaceEnvironmentData);

            void t_JB2008SpaceEnvironmentData::install(PyObject *module)
            {
              installType(&PY_TYPE(JB2008SpaceEnvironmentData), &PY_TYPE_DEF(JB2008SpaceEnvironmentData), module, "JB2008SpaceEnvironmentData", 0);
            }

            void t_JB2008SpaceEnvironmentData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "class_", make_descriptor(JB2008SpaceEnvironmentData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "wrapfn_", make_descriptor(t_JB2008SpaceEnvironmentData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "boxfn_", make_descriptor(boxObject));
              env->getClass(JB2008SpaceEnvironmentData::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "DEFAULT_SUPPORTED_NAMES_DTC", make_descriptor(j2p(*JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_DTC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "DEFAULT_SUPPORTED_NAMES_SOLFSMY", make_descriptor(j2p(*JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_SOLFSMY)));
            }

            static PyObject *t_JB2008SpaceEnvironmentData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, JB2008SpaceEnvironmentData::initializeClass, 1)))
                return NULL;
              return t_JB2008SpaceEnvironmentData::wrap_Object(JB2008SpaceEnvironmentData(((t_JB2008SpaceEnvironmentData *) arg)->object.this$));
            }
            static PyObject *t_JB2008SpaceEnvironmentData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, JB2008SpaceEnvironmentData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_JB2008SpaceEnvironmentData_init_(t_JB2008SpaceEnvironmentData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::String a1((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "ss", &a0, &a1))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::data::DataSource a1((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::data::DataSource::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::data::DataSource a1((jobject) NULL);
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "kkk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::String a1((jobject) NULL);
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "sskk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1, a2, a3));
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

            static PyObject *t_JB2008SpaceEnvironmentData_getDSTDTC(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDSTDTC(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDSTDTC", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getF10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getF10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getF10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getF10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getF10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getF10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getMaxDate(t_JB2008SpaceEnvironmentData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getMinDate(t_JB2008SpaceEnvironmentData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getS10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getS10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getS10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getS10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getS10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getS10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getXM10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getXM10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getXM10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getXM10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getXM10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getXM10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getY10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getY10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getY10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getY10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getY10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getY10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_get__maxDate(t_JB2008SpaceEnvironmentData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_JB2008SpaceEnvironmentData_get__minDate(t_JB2008SpaceEnvironmentData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/BeidouIGSO.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouIGSO::class$ = NULL;
        jmethodID *BeidouIGSO::mids$ = NULL;
        bool BeidouIGSO::live$ = false;

        jclass BeidouIGSO::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouIGSO");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_65fb710ff0be7da1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouIGSO::BeidouIGSO(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::BeidouMeo(env->newObject(initializeClass, &mids$, mid_init$_65fb710ff0be7da1, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
        static PyObject *t_BeidouIGSO_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouIGSO_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouIGSO_init_(t_BeidouIGSO *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouIGSO__methods_[] = {
          DECLARE_METHOD(t_BeidouIGSO, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouIGSO, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouIGSO)[] = {
          { Py_tp_methods, t_BeidouIGSO__methods_ },
          { Py_tp_init, (void *) t_BeidouIGSO_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouIGSO)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::BeidouMeo),
          NULL
        };

        DEFINE_TYPE(BeidouIGSO, t_BeidouIGSO, BeidouIGSO);

        void t_BeidouIGSO::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouIGSO), &PY_TYPE_DEF(BeidouIGSO), module, "BeidouIGSO", 0);
        }

        void t_BeidouIGSO::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "class_", make_descriptor(BeidouIGSO::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "wrapfn_", make_descriptor(t_BeidouIGSO::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouIGSO_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouIGSO::initializeClass, 1)))
            return NULL;
          return t_BeidouIGSO::wrap_Object(BeidouIGSO(((t_BeidouIGSO *) arg)->object.this$));
        }
        static PyObject *t_BeidouIGSO_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouIGSO::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouIGSO_init_(t_BeidouIGSO *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouIGSO object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouIGSO(a0, a1, a2, a3));
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
#include "org/orekit/gnss/metric/parser/IgsSsrMessagesParser.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrMessagesParser::class$ = NULL;
          jmethodID *IgsSsrMessagesParser::mids$ = NULL;
          bool IgsSsrMessagesParser::live$ = false;

          jclass IgsSsrMessagesParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrMessagesParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_getMessageType_4283240abc98cbf5] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_e9602b3a0b12bc96] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrMessagesParser::IgsSsrMessagesParser(const ::java::util::List & a0) : ::org::orekit::gnss::metric::parser::MessagesParser(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}
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
          static PyObject *t_IgsSsrMessagesParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessagesParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IgsSsrMessagesParser_init_(t_IgsSsrMessagesParser *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_IgsSsrMessagesParser__methods_[] = {
            DECLARE_METHOD(t_IgsSsrMessagesParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessagesParser, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrMessagesParser)[] = {
            { Py_tp_methods, t_IgsSsrMessagesParser__methods_ },
            { Py_tp_init, (void *) t_IgsSsrMessagesParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrMessagesParser)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::MessagesParser),
            NULL
          };

          DEFINE_TYPE(IgsSsrMessagesParser, t_IgsSsrMessagesParser, IgsSsrMessagesParser);

          void t_IgsSsrMessagesParser::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrMessagesParser), &PY_TYPE_DEF(IgsSsrMessagesParser), module, "IgsSsrMessagesParser", 0);
          }

          void t_IgsSsrMessagesParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "class_", make_descriptor(IgsSsrMessagesParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "wrapfn_", make_descriptor(t_IgsSsrMessagesParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IgsSsrMessagesParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrMessagesParser::initializeClass, 1)))
              return NULL;
            return t_IgsSsrMessagesParser::wrap_Object(IgsSsrMessagesParser(((t_IgsSsrMessagesParser *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrMessagesParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrMessagesParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IgsSsrMessagesParser_init_(t_IgsSsrMessagesParser *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            IgsSsrMessagesParser object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = IgsSsrMessagesParser(a0));
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
